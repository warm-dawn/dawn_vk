#pragma once
# include "Buffer_Triangle_base.hpp"

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Buffer_Triangle :public Buffer_Triangle_base {
public:
    struct Vertex {
        glm::vec2 pos;
        glm::vec3 color;
    };
    std::vector<Vertex> vertices;

    std::vector<char const*> instance_layers();
    void init();
    dawn::S_wnd_class::Sptr wnd_class;
    dawn::S_wnd::Sptr wnd;
    void init_surface();

    dawn::vk::G_Fence::Sptr fences;
    dawn::vk::G_Semaphore::Sptr image_ok_semaphores;
    dawn::vk::G_Semaphore::Sptr render_finished_semaphores;
    bool first_render;
    uint32_t curr_frame;

    void rendering();
    void run();
    void on_resize();

    virtual bool choose_physical_dev(dawn::vk::Physical_device const& pd_);
};


void test_Shader_hard_code_Triangle();


