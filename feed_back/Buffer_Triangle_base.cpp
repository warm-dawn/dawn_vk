# include "Buffer_Triangle_base.hpp"
using namespace dawn::vk;

void Buffer_Triangle_base::init(){
    
    {
    auto layers = instance_layers();
    instance = Instance::create({
         {"VK_EXT_debug_utils","VK_KHR_surface","VK_KHR_win32_surface"}
        ,{layers}
        ,"test"
        ,{}
        ,VK_MAKE_VERSION(1,1,121)
        ,VK_MAKE_VERSION(0,0,1)
        ,"dawn_vk"
        ,VK_MAKE_VERSION(0,0,1)
    });
    }
    this->init_surface();
    
    device = instance->device(dawn::vk::detail::Device_creator{
         /*choose physical device callback function*/[this](Physical_device const& phy_dev)->bool{return this->choose_physical_dev(phy_dev);}
        ,/*QueueFamily_CreateInfos*/{
    /*QueueFamily::CreateInfo*/{
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
         /*flags*/{}
        ,/*pSetLayouts*/{}
        ,/*pPushConstantRanges*/{}
    });
    renderpass = device->render_pass({
         /*flags*/0
        ,/*attachments*/{ 
    {
         /*flags*/0
        ,/*format*/VK_FORMAT_B8G8R8A8_UNORM
        ,/*samples_count*/0|VK_SAMPLE_COUNT_1_BIT
        ,/*loadOp*/VK_ATTACHMENT_LOAD_OP_CLEAR
        ,/*storeOp*/VK_ATTACHMENT_STORE_OP_STORE
        ,/*stencilLoadOp*/VK_ATTACHMENT_LOAD_OP_DONT_CARE
        ,/*stencilStoreOp*/VK_ATTACHMENT_STORE_OP_DONT_CARE
        ,/*initialLayout*/VK_IMAGE_LAYOUT_UNDEFINED
        ,/*finalLayout*/VK_IMAGE_LAYOUT_PRESENT_SRC_KHR
    } }
        ,/*subpass*/{ 
            /*SubpassDesc*/{
             /*flags*/0
            ,/*pipelineBindPoint*/VK_PIPELINE_BIND_POINT_GRAPHICS
            ,/*pInputAttachments*/{}
            ,/*pColorAttachments*/{
    /*AttachmentRef*/{
                  /*attachment*/0
                 ,/*image_layout*/VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL
             }}
            ,/*pResolveAttachments*/{}
            ,/*pDepthStencilAttachment*/{}
            ,/*pPreserveAttachments*/{}
        } }
        ,/*dependencies*/{ 
        {
             /*src_subpass*/0
            ,/*dst_subpass*/0
            ,/*src_stages*/0|VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT
            ,/*dst_stages*/0|VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT
            ,/*src_access*/0
            ,/*dst_access*/0|VK_ACCESS_COLOR_ATTACHMENT_READ_BIT|VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT
            ,/*dependency_flags*/0
        } }
    });
    {
        Spv_code<VK_SHADER_STAGE_VERTEX_BIT> shader_module_42_spv;
        shader_module_42_spv.load_from_glsl_file("../../resource/shader/triangle_with_buffer.vert");
        shader_module_42 = device->shader_module(
             /*spv*/shader_module_42_spv
            ,/*next*/{}
        );
    }
    {
        Spv_code<VK_SHADER_STAGE_FRAGMENT_BIT> shader_module_46_spv;
        shader_module_46_spv.load_from_glsl_file("../../resource/shader/triangle_with_buffer.frag");
        shader_module_46 = device->shader_module(
             /*spv*/shader_module_46_spv
            ,/*next*/{}
        );
    }
    graphicspipeline = device->graphics_pipeline({
         /*flags*/0
        ,/*pStages*/{
    /*PipelineShaderStage*/{
            /*flags*/{}
           ,/*stage*/0|VK_SHADER_STAGE_VERTEX_BIT
           ,/*module*/shader_module_42->handle
           ,/*pName*/"main"
           ,/*pSpecializationInfo*/nullptr
           },
    /*PipelineShaderStage*/{
            /*flags*/{}
           ,/*stage*/0|VK_SHADER_STAGE_FRAGMENT_BIT
           ,/*module*/shader_module_46->handle
           ,/*pName*/"main"
           ,/*pSpecializationInfo*/nullptr
           }}
        ,/*pVertexInputState*/{&S_PipelineVertexInputStateCreateInfo
    /*PipelineVertexInputStateCreateInfo*/{
                /*flags*/{}
               ,/*VertexBindingDescriptions*/{
    /*VertexInputBindingDesc*/{
                 /*binding*/0
                ,/*stride*/0
                }}
               ,/*VertexAttributeDescriptions*/{
    /*VertexInputAttributeDesc*/{
                 /*location*/0
                ,/*binding*/0
                ,/*format*/VK_FORMAT_R32G32_SFLOAT
                ,/*offset*/0
                },
    
    /*VertexInputAttributeDesc*/{
                 /*location*/1
                ,/*binding*/0
                ,/*format*/VK_FORMAT_R32G32B32_SFLOAT
                ,/*offset*/0
                }}
               }}
        ,/*pInputAssemblyState*/{&S_PipelineInputAssemblyStateCreateInfo
    /*PipelineInputAssemblyStateCreateInfo*/{
                /*flags*/{}
               ,/*topology*/VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST
               ,/*primitiveRestartEnable*/VK_FALSE
               }}
        ,/*pTessellationState*/{}
        ,/*pViewportState*/{&S_PipelineViewportStateCreateInfo
    /*PipelineViewportStateCreateInfo*/{
                /*flags*/{}
               ,/*pViewports*/{
                  /*Viewport*/{
                       /*x*/0.000000
                      ,/*y*/0.000000
                      ,/*w*/1024.000000
                      ,/*h*/768.000000
                      ,/*min depth*/0.000000
                      ,/*max depth*/0.000000
                      }}
               ,/*pScissors*/{{{/*Offset2D*//*x*/0,/*y*/0},/*Extent2D*/{/*w*/1024,/*h*/768}}}
               }}
        ,/*pRasterizationState*/{&S_PipelineRasterizationStateCreateInfo
    /*PipelineRasterizationStateCreateInfo*/{
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
        ,/*pMultisampleState*/{&S_PipelineMultisampleStateCreateInfo
    /*PipelineMultisampleStateCreateInfo*/{
                /*flags*/{}
               ,/*rasterizationSamples*/F_SampleCount(0|VK_SAMPLE_COUNT_1_BIT)
               ,/*sampleShadingEnable*/VK_FALSE
               ,/*minSampleShading*/0.000000
               ,/*pSampleMask*/dawn::Aptr_temp<VkSampleMask>{0|31|29|30|28|27|26|25|24|23|22|21|20|19|18|17|16|15|14|13|12|11|10|9|8|7|6|5|4|3|2|1}
               ,/*alphaToCoverageEnable*/VK_FALSE
               ,/*alphaToOneEnable*/VK_FALSE
               }}
        ,/*pDepthStencilState*/{}
        ,/*pColorBlendState*/{&S_PipelineColorBlendStateCreateInfo
    /*PipelineColorBlendStateCreateInfo*/{
                /*flags*/{}
               ,/*logicOpEnable*/VK_FALSE
               ,/*logicOp*/VK_LOGIC_OP_COPY
               ,/*pAttachments*/{
    /*PipelineColorBlendAttachmentState*/{
                /*blendEnable*/VK_FALSE
               ,/*srcColorBlendFactor*/VK_BLEND_FACTOR_CONSTANT_ALPHA
               ,/*dstColorBlendFactor*/VK_BLEND_FACTOR_CONSTANT_ALPHA
               ,/*colorBlendOp*/VK_BLEND_OP_ADD
               ,/*srcAlphaBlendFactor*/VK_BLEND_FACTOR_CONSTANT_ALPHA
               ,/*dstAlphaBlendFactor*/VK_BLEND_FACTOR_CONSTANT_ALPHA
               ,/*alphaBlendOp*/VK_BLEND_OP_ADD
               ,/*colorWriteMask*/0|VK_COLOR_COMPONENT_A_BIT|VK_COLOR_COMPONENT_B_BIT|VK_COLOR_COMPONENT_G_BIT|VK_COLOR_COMPONENT_R_BIT
               }}
               ,/*blendConstants*/{{0,0,0,0}}
               }}
        ,/*pDynamicState*/{&S_PipelineDynamicStateCreateInfo
    /*PipelineDynamicStateCreateInfo*/{
                /*flags*/{}
               ,/*pDynamicStates*/{VK_DYNAMIC_STATE_VIEWPORT}
               }}
        ,/*layout*/{pipelinelayout_56->handle}
        ,/*renderPass*/{renderpass->handle}
        ,/*subpass*/{0}
        ,/*basePipelineHandle*/{}
        ,/*basePipelineIndex*/0
    });
    /* ================= graphics_pipeline(); over ================*/
    swapchain = device->swapchain(
         /*surface*/surface
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
         /*component_mapping*//*ComponentMapping*/{/*r*/VK_COMPONENT_SWIZZLE_IDENTITY,/*g*/VK_COMPONENT_SWIZZLE_IDENTITY,/*b*/VK_COMPONENT_SWIZZLE_IDENTITY,/*a*/VK_COMPONENT_SWIZZLE_IDENTITY}
        ,/*subresource_range*/
        /*ImageSubresourceRange*/{
         /*aspect_flags*/0|VK_IMAGE_ASPECT_COLOR_BIT
        ,/*base_mip_level*/0
        ,/*level_count*/1
        ,/*base_array_layer*/0
        ,/*layer_count*/1
        }
    );
    framebuffersfromswapchain = imageviewsfromswapchain->framebuffers(
         /*renderpass*/renderpass
    );
    cmdpool = device->cmd_pool(
          /*queue family*/*render_qf
         ,/*flags*/0
    );
    devicememory_120 = device->memory(
         /*memory_type_index*/
         F_MemoryProperty(0|VK_MEMORY_PROPERTY_HOST_COHERENT_BIT|VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT)
        ,F_MemoryHeap(0)
        ,/*size*/vertices_size
    );
    buffer_124 = device->buffer(
         /*create flags*/F_BufferCreate(0)
        ,/*usage flags*/F_BufferCreate(0|VK_BUFFER_USAGE_VERTEX_BUFFER_BIT)
        ,/*size*/vertices_size
        ,/*qf indices*/{}
    );
    cmdbuffers = cmdpool->buffer(
         /*frame buffer*/framebuffersfromswapchain->handles.size()
        ,/*level*/VK_COMMAND_BUFFER_LEVEL_PRIMARY
    
    );
}
void Buffer_Triangle_base::run(){
    
}
void Buffer_Triangle_base::rendering(){
}


void Buffer_Triangle_base::set_cmdbuffer_cmdbuffers(){
    for(size_t i=0;i<cmdbuffers->handles.size(); ++i){
        auto cmd_buffer_ref = (*cmdbuffers)[i];
    cmd_buffer_ref.begin(
         /*usage flags*/0|VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT
        ,/*inheritance_info*/&S_CommandBufferInheritanceInfo
         /*CommandBufferInheritanceInfo*/{
             /*renderpass*/renderpass->handle
            ,/*subpass*/{0}
            ,/*framebuffer*/framebuffersfromswapchain->handles[i]
            ,/*occlusionQueryEnable*/VK_FALSE
            ,/*queryFlags*/0
            ,/*pipelineStatistics*/0});
        cmd_buffer_ref.render_pass_begin(
         /*begin_info*/&S_RenderPassBeginInfo
        /*RenderPassBeginInfo*/{
         /*renderPass*/renderpass->handle
        ,/*framebuffer*/framebuffersfromswapchain->handles[i]
        ,/*renderArea*/{{/*Offset2D*//*x*/0,/*y*/0},/*Extent2D*/{/*w*/1024,/*h*/768}}
        ,/*pClearValues*/{ /*ClearValue*/{ /*r*/0.000000, /*g*/0.000000, /*b*/0.000000, /*a*/0.000000} }
        }
        ,/*contents*/VK_SUBPASS_CONTENTS_INLINE);
        cmd_buffer_ref.bind_pipeline( /*pipeline_name*/graphicspipeline);
        cmd_buffer_ref.set_viewport( /*viewports*/{
                      /*Viewport*/{
                           /*x*/0.000000
                          ,/*y*/0.000000
                          ,/*w*/1024.000000
                          ,/*h*/768.000000
                          ,/*min depth*/0.000000
                          ,/*max depth*/1.000000
                          }},/*first*/0);
        cmd_buffer_ref.draw(
         /*vertex_count*/3
        ,/*first_vertex*/0
        ,/*instance_count*/1
        ,/*first_instance*/0);
        cmd_buffer_ref.render_pass_end( );
    
        cmd_buffer_ref.end();
    }
}

