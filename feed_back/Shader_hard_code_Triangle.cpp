# include "Shader_hard_code_Triangle.hpp"

using namespace dawn;
using namespace dawn::vk;

bool Shader_hard_code_Triangle::choose_physical_dev(dawn::vk::Physical_device const& pd_) {
    return true;
}
std::vector<char const*> Shader_hard_code_Triangle::instance_layers() {
    return {
        # if defined(_DEBUG)
            "VK_LAYER_KHRONOS_validation"
        # endif
    };
}
void Shader_hard_code_Triangle::init() {
    Shader_hard_code_Triangle_base::init();
    fences = device->fence(framebuffersfromswapchain->handles.size(), F_FenceCreate::b_signaled);
    image_ok_semaphores = device->semaphore(framebuffersfromswapchain->handles.size());
    render_finished_semaphores = device->semaphore(framebuffersfromswapchain->handles.size());
    first_render = true;
    curr_frame = 0;
    set_cmdbuffer_cmdbuffers();
}

void Shader_hard_code_Triangle::init_surface() {
    wnd_class = S_wnd_class::create(GetModuleHandle(0), L"my test wd class", WndProc);
    wnd = wnd_class->create_window(
        L"Triangle", 
        100, 100,
        1024, 768,
        F_wnd_style::system_menu | F_wnd_style::thick_frame
    );
    vk::Surface_ci surface_ci{wnd};
    surface = instance->surface(surface_ci);
    wnd->set_prop(L"Dawn_base", (HANDLE)this);
}

void Shader_hard_code_Triangle::rendering() {

    S_SubmitInfo submit_info(
        { VK_NULL_HANDLE },
        { F_PipelineStage::b_color_attachment_output },
        { 0 },
        { VK_NULL_HANDLE }
    );
    S_PresentInfoKHR present_info(
        { VK_NULL_HANDLE },
        { swapchain->handle },
        { 0 }
    );

    uint32_t next_img_index;

    (*fences)[curr_frame].wait();
    next_img_index = swapchain->next_image_Index((*image_ok_semaphores)[curr_frame]);

    //detail_show << "curr frame: " << curr_frame <<" next frame: "<<next_img_index;
    if (first_render == true) {
        curr_frame = next_img_index;
        first_render = false;
    }
    submit_info.pCommandBuffers = &cmdbuffers->handles[next_img_index];

    submit_info.pWaitSemaphores = &image_ok_semaphores->handles[curr_frame];
    submit_info.pSignalSemaphores = &render_finished_semaphores->handles[curr_frame];

    present_info.pWaitSemaphores = &render_finished_semaphores->handles[curr_frame];
    present_info.pImageIndices = &next_img_index;

    (*fences)[curr_frame].reset();
    render_qf->queues[0].submit({ submit_info }, (*fences)[curr_frame]).check();
    render_qf->queues[0].present(present_info).check();

    curr_frame = next_img_index;
}

void Shader_hard_code_Triangle::on_resize() {}

void Shader_hard_code_Triangle::run() {
    MSG message;
    wnd->show();
    while (false == godie) {
        wnd->update();
        if (PeekMessage(&message, NULL, 0, 0, PM_REMOVE)) {
            TranslateMessage(&message);
            DispatchMessage(&message);
        }
        else {
            rendering();
        }
    }
    device->wait_idle();
}

void test_Shader_hard_code_Triangle() {
    Shader_hard_code_Triangle triangle;
    triangle.init();
    triangle.run();
}