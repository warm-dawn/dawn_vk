# include "Triangle_base.hpp"
using namespace dawn::vk;

void Triangle_base::init(){
    
    {
    auto layers = instance_layers();
    instance = Instance::create({
         {"VK_EXT_debug_utils","VK_KHR_win32_surface","VK_KHR_surface"}
        ,{layers}
        ,"test"
        ,{}
    
        ,VK_MAKE_VERSION(1,1,121)
        ,VK_MAKE_VERSION(0,0,1)
        ,"dawn_vk"
        ,VK_MAKE_VERSION(0,0,1)
    });
    }this->init_surface();
    device = instance->device(dawn::vk::detail::Device_creator{
         [this](Physical_device const& phy_dev)->bool{return this->choose_physical_dev(phy_dev);}
        ,/*QueueFamily_CreateInfos*/{/*QueueFamily::CreateInfo*/{
         /*create_flags*/0
        ,/*surfaces*/{surface.get()}
        ,/*queue count and priorities*/{1.000000,1.000000}
        ,/*queue flags*/0|VK_QUEUE_GRAPHICS_BIT
        ,/*queue count*/2
        ,/*timestampValidBits*/0
        ,/*minImageTransferGranularity*/S_Extent3D{0,0,0}
        }}
        ,/*extensions*/{"VK_KHR_swapchain"}
        ,/*features*/{}
    });
    render_qf = &device->q_familys[0];
    pipelinelayout_56 = device->pipeline_layout({
         {}
        ,{}
        ,{}
    });
    std::array<S_AttachmentDescription, 1> color_attachment;
    {
        // 用于指定颜色缓冲附着的格式
        color_attachment[0].format = VK_FORMAT_B8G8R8A8_UNORM;
        color_attachment[0].samples = F_SampleCount::b_1;
        /*
        loadOp 和 storeOp 成员变量用于指定在渲染之前和渲染之后对附着中的数据进行的操作。
        */
        color_attachment[0].loadOp = E_AttachmentLoadOp::e_clear;
        color_attachment[0].storeOp = E_AttachmentStoreOp::e_store;
        /* 模板缓冲 暂不关心  */
        color_attachment[0].stencilLoadOp = E_AttachmentLoadOp::e_dont_care;
        color_attachment[0].stencilStoreOp = E_AttachmentStoreOp::e_dont_care;

        /* 不关心之前的图像布局方式 */
        color_attachment[0].initialLayout = E_ImageLayout::e_undefined;

        /*
        图像的像素数据在内存中的分布取决于我们要对图像进行的操作
        这里, 图像被用在交换链中进行呈现操作
        */
        color_attachment[0].finalLayout = E_ImageLayout::e_present_src_khr;
    }
    std::array<S_AttachmentReference, 1> color_attachment_reference;
    {
        // 指定要引用的附着在附着描述结构体数组中的索引
        color_attachment_reference[0].attachment = 0;
        // 指定进行子流程时引用的附着使用的布局方式, 推荐设为如下 一般而言，这种的性能表现最佳
        color_attachment_reference[0].layout = E_ImageLayout::e_color_attachment_optimal;
    }
    // 子流程
    S_SubpassDescription subpass_desc(
        0,
        // 这是一个图形渲染的子流程
        E_PipelineBindPoint::e_graphics,
        {/* 被着色器读取的附着 */ },
        /*
        这里设置的颜色附着在数组中的索引会被片段着色器使用，
        对应我们在片段着色器中使用的 layout(location = 0) out vec4 outColor 语句。
        */
        color_attachment_reference,
        {/* 用于多重采样的颜色附着 */ },
        {/* 用于深度和模板数据的附着 */ },
        {/* 没有被这一子流程使用，但需要保留数据的附着 */ }
    );


    std::array<S_SubpassDescription, 1> subpass_desc_array;
    subpass_desc_array[0] = subpass_desc;

    S_SubpassDependency subpass_dependency(
        VK_SUBPASS_EXTERNAL,
        0,
        F_PipelineStage::b_color_attachment_output,
        F_PipelineStage::b_color_attachment_output,
        0,
        F_Access::b_color_attachment_read | F_Access::b_color_attachment_write
    );
    std::array<S_SubpassDependency, 1> subpass_dependency_array;
    subpass_dependency_array[0] = subpass_dependency;
    
    S_RenderPassCreateInfo render_pass_ci(
        0
        , color_attachment /* 一批附着 */
        , subpass_desc_array /* 子流程描述符 */
        , subpass_dependency_array /* 子流程依赖 */
    );

    renderpass = device->render_pass(render_pass_ci);
    {
        Spv_code<VK_SHADER_STAGE_VERTEX_BIT> shader_module_46_spv;
        shader_module_46_spv.load_from_glsl_file("triangle_by_shader.vert");
        shader_module_46 = device->shader_module(
             shader_module_46_spv
            ,{}
        );
    }
    {
        Spv_code<VK_SHADER_STAGE_FRAGMENT_BIT> shader_module_51_spv;
        shader_module_51_spv.load_from_glsl_file("triangle_by_shader.frag");
        shader_module_51 = device->shader_module(
             shader_module_51_spv
            ,{}
        );
    }
    {
        graphicspipeline = device->graphics_pipeline({
             0
            ,/*pStages*/{/*PipelineShaderStage*/{
            /*flags*/{}
           ,/*stage*/0|VK_SHADER_STAGE_VERTEX_BIT
           ,/*module*/shader_module_46->handle
           ,/*pName*/"main"
           ,/*pSpecializationInfo*/nullptr
           },/*PipelineShaderStage*/{
            /*flags*/{}
           ,/*stage*/0|VK_SHADER_STAGE_FRAGMENT_BIT
           ,/*module*/shader_module_51->handle
           ,/*pName*/"main"
           ,/*pSpecializationInfo*/nullptr
           }}
            ,/*pVertexInputState*/{&S_PipelineVertexInputStateCreateInfo{
                /*flags*/{}
               ,/*VertexBindingDescriptions*/{}
               ,/*VertexAttributeDescriptions*/{}
               }}
            ,/*pInputAssemblyState*/{&S_PipelineInputAssemblyStateCreateInfo{
                /*flags*/{}
               ,/*topology*/VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST
               ,/*primitiveRestartEnable*/VK_FALSE
               }}
            ,/*pTessellationState*/{}
            ,/*pViewportState*/{&S_PipelineViewportStateCreateInfo{
                /*flags*/{}
               ,/*pViewports*/{/*Viewport*/{
                   /*x*/0.000000
                  ,/*y*/0.000000
                  ,/*w*/1024.000000
                  ,/*h*/768.000000
                  ,/*min depth*/0.000000
                  ,/*max depth*/1.000000
                  }}
               ,/*pScissors*/{{{0,0},{1024,768}}}
               }}
            ,/*pRasterizationState*/{&S_PipelineRasterizationStateCreateInfo{
                /*flags*/{}
               ,/*depthClampEnable*/VK_FALSE
               ,/*rasterizerDiscardEnable*/VK_FALSE
               ,/*polygonMode*/VK_POLYGON_MODE_FILL
               ,/*cullMode*/0|VK_CULL_MODE_BACK_BIT
               ,/*frontFace*/VK_FRONT_FACE_CLOCKWISE
               ,/*depthBiasEnable*/VK_FALSE
               ,/*depthBiasConstantFactor*/0.000000
               ,/*depthBiasClamp*/0.000000
               ,/*depthBiasSlopeFactor*/0.000000
               ,/*lineWidth*/1.000000
               }}
            ,/*pMultisampleState*/{&S_PipelineMultisampleStateCreateInfo{
                /*flags*/{}
               ,/*rasterizationSamples*/F_SampleCount(0|VK_SAMPLE_COUNT_1_BIT)
               ,/*sampleShadingEnable*/VK_FALSE
               ,/*minSampleShading*/0.000000
               ,/*pSampleMask*/dawn::Aptr_temp<VkSampleMask>{0}
               ,/*alphaToCoverageEnable*/VK_FALSE
               ,/*alphaToOneEnable*/VK_FALSE
               }}
            ,/*pDepthStencilState*/{}
            ,/*pColorBlendState*/{&S_PipelineColorBlendStateCreateInfo
    {
                /*flags*/{}
               ,/*logicOpEnable*/VK_FALSE
               ,/*logicOp*/VK_LOGIC_OP_COPY
               ,/*pAttachments*/{
    {
                /*blendEnable*/VK_FALSE
               ,/*srcColorBlendFactor*/VK_BLEND_FACTOR_ONE
               ,/*dstColorBlendFactor*/VK_BLEND_FACTOR_ZERO
               ,/*colorBlendOp*/VK_BLEND_OP_ADD
               ,/*srcAlphaBlendFactor*/VK_BLEND_FACTOR_ONE
               ,/*dstAlphaBlendFactor*/VK_BLEND_FACTOR_ZERO
               ,/*alphaBlendOp*/VK_BLEND_OP_ADD
               ,/*colorWriteMask*/0|VK_COLOR_COMPONENT_A_BIT|VK_COLOR_COMPONENT_B_BIT|VK_COLOR_COMPONENT_G_BIT|VK_COLOR_COMPONENT_R_BIT
               }}
               ,/*blendConstants*/{{0,0,0,0}}
               }}
            ,/*pDynamicState*/{&S_PipelineDynamicStateCreateInfo
    {
                /*flags*/{}
               ,/*pDynamicStates*/{VK_DYNAMIC_STATE_VIEWPORT}
               }}
            ,/*layout*/{pipelinelayout_56->handle}
            ,/*renderPass*/{renderpass->handle}
            ,/*subpass*/{0}
            ,/*basePipelineHandle*/{}
            ,/*basePipelineIndex*/0
        });
    }
    
    swapchain = device->swapchain(
         /**/surface
        ,{
            /*formats*/{VK_FORMAT_B8G8R8A8_UNORM}
           ,/*present_modes*/{VK_PRESENT_MODE_MAILBOX_KHR,VK_PRESENT_MODE_IMMEDIATE_KHR,VK_PRESENT_MODE_FIFO_KHR}
           ,/*extent*/{0,0,}
           ,/*min_image_count*/0
           ,/*image_usage*/F_ImageUsage(0|VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT|VK_IMAGE_USAGE_TRANSFER_DST_BIT)
           ,/*transform*/F_SurfaceTransformKHR(0)
           ,/*composite_alpha*/F_CompositeAlphaKHR(0|VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR)
           ,/*clipped*/true
           ,/*qf_indexs*/{}
           ,/*image_array_layers*/1
         }
    );
    imageviewsfromswapchain = swapchain->image_views(
         {VK_COMPONENT_SWIZZLE_IDENTITY,VK_COMPONENT_SWIZZLE_IDENTITY,VK_COMPONENT_SWIZZLE_IDENTITY,VK_COMPONENT_SWIZZLE_IDENTITY}
        ,
    /*ImageSubresourceRange*/{
     /*aspect_flags*/0|VK_IMAGE_ASPECT_COLOR_BIT
    ,/*base_mip_level*/0
    ,/*level_count*/1
    ,/*base_array_layer*/0
    ,/*layer_count*/1
    }
    );
    framebuffersfromswapchain = imageviewsfromswapchain->framebuffers(
         renderpass
    );cmdpool = device->cmd_pool(
          *render_qf
         ,0|VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT
    );
    
    cmdbuffers = cmdpool->buffer(
         framebuffersfromswapchain->handles.size()
        ,VK_COMMAND_BUFFER_LEVEL_PRIMARY
    
    );
}
void Triangle_base::run(){
    
}
void Triangle_base::rendering(){
}


void Triangle_base::set_cmdbuffer_cmdbuffers(){
for(size_t i=0;i<cmdbuffers->handles.size(); ++i){
auto cmd_buffer_ref = (*cmdbuffers)[i];
    cmd_buffer_ref.begin( 0|VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT
        ,&S_CommandBufferInheritanceInfo
        {
             /*renderpass*/renderpass->handle
            ,/*subpass*/{0}
            ,/*framebuffer*/framebuffersfromswapchain->handles[i]
            ,/*occlusionQueryEnable*/VK_FALSE
            ,/*queryFlags*/0
            ,/*pipelineStatistics*/0}
        );
        cmd_buffer_ref.render_pass_begin(
         /*begin_info*/&S_RenderPassBeginInfo
        /*RenderPassBeginInfo*/{
         /*renderPass*/renderpass->handle
        ,/*framebuffer*/framebuffersfromswapchain->handles[i]
        ,/*renderArea*/{{0,0},{1024,768}}
        ,/*pClearValues*/{ {1.000000,1.000000,1.000000,1.000000} }
        }
        ,/*contents*/VK_SUBPASS_CONTENTS_INLINE);
        cmd_buffer_ref.bind_pipeline( graphicspipeline);
        cmd_buffer_ref.set_viewport( {/*Viewport*/{
                       /*x*/0.000000
                      ,/*y*/0.000000
                      ,/*w*/1024.000000
                      ,/*h*/768.000000
                      ,/*min depth*/0.000000
                      ,/*max depth*/1.000000
                      }},0);
        cmd_buffer_ref.draw( /*vertex_count*/3,/*first_vertex*/0,/*instance_count*/1,/*first_instance*/0);
        cmd_buffer_ref.render_pass_end( );
    
cmd_buffer_ref.end();
}
}

