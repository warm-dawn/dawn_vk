#pragma once
# include "dawn/vk/vk.hpp"
# include "Dawn_base.hpp"

class Shader_hard_code_Triangle_base:public Dawn_base{
public:
    void init();
    void run();
    void rendering();
    void create_cmd();

    dawn::vk::Instance::Sptr instance;
    virtual std::vector<char const*> instance_layers() = 0;
    dawn::vk::Surface::Sptr surface;
    virtual void init_surface() = 0;
    dawn::vk::Queue_family* render_qf;
    dawn::vk::Device::Sptr device;
    dawn::vk::PipelineLayout::Sptr pipelinelayout_56;
    dawn::vk::RenderPass::Sptr renderpass;
    dawn::vk::Shader_module<VK_SHADER_STAGE_VERTEX_BIT>::Sptr shader_module_42;
    dawn::vk::Shader_module<VK_SHADER_STAGE_FRAGMENT_BIT>::Sptr shader_module_46;
    dawn::vk::GraphicsPipeline::Sptr graphicspipeline;
    dawn::vk::Swapchain::Sptr swapchain;
    dawn::vk::ImageViewsFromSwapchain::Sptr imageviewsfromswapchain;
    dawn::vk::FramebuffersFromSwapchain::Sptr framebuffersfromswapchain;
    dawn::vk::CmdPool::Sptr cmdpool;
    dawn::vk::G_CmdBuffer::Sptr cmdbuffers;
    void set_cmdbuffer_cmdbuffers();


    virtual bool choose_physical_dev(dawn::vk::Physical_device const& pd_) = 0;
};
