# ifndef __DAWN_BASE_TEMPLATES_HPP__
# define __DAWN_BASE_TEMPLATES_HPP__

# include "dawn/platform/platforms.hpp"
# include "dawn/vk/types.hpp"
# include "dawn/vk/xtable.hpp"
# include "dawn/vk/manual_xtable.hpp"

# include <functional>
# include <type_traits>
# include <list>
# include <memory>
# include <cassert>

# if 1

# define Xt_dawn_vk_obj_names(X__) \
    X__(Swapchain) \
    X__(Device) \
    X__(Surface) \
    X__(Queue) \
    X__(DescriptorSet) \
    X__(Fence) \
    X__(Semaphore) \
    X__(Event) \
    X__(DeviceMemory) \
    X__(Image) \
    X__(ImageView) \
    X__(ImageViewsFromSwapchain) \
    X__(FramebuffersFromSwapchain) \
    X__(Framebuffer) \
    X__(Sampler) \
    X__(SamplerYcbcrConversion) \
    X__(QueryPool) \
    X__(Buffer) \
    X__(BufferView) \
    X__(DescSetLayout) \
    X__(DescPool) \
    X__(DescSet) \
    X__(DescUpdateTemplate) \
    X__(RenderPass) \
    X__(PipelineLayout) \
    X__(PipelineCache) \
    X__(ComputePipeline) \
    X__(GraphicsPipeline) \
    X__(CmdPool) \
    X__(CmdBuffer) \
    
# endif // if 1

namespace dawn{ namespace vk{
# define X_dawn_vk_class_declare(name__) \
    X_declare_class(Naming_Simple(name__)) \
    X_declare_class(Naming_Basic(name__)) \
    X_declare_class(Naming_SGroup(name__)) \
    X_declare_class(Naming_Group(name__))

    class Physical_device;
    class Instance;
    Xt_dawn_vk_obj_names(X_dawn_vk_class_declare);


struct EC : public E_Result {
public:
    char const* error_str = "Unknow";
public:
    using E_Result::E_Result;
public:
# define X_VkResult_mean_only(name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__) \
        case name__:\
            error_str = #name__": "#comment__;\
            break;
    inL void mean() {
        error_str = "Unknow";
        switch (flag) {
            Xt_VkResult_noalias_members(X_VkResult_mean_only)
        }
    }
# undef X_VkResult_mean_only

# define X_VkResult_mean(name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__) \
        case name__:\
            error_str = #name__ ": " #comment__;\
            if(name__<0) throw (*this); \
            break;
    inL void check() {
        error_str = "Unknow";
        switch (flag) {
            Xt_VkResult_noalias_members(X_VkResult_mean)
        }
    }
# undef X_VkResult_mean

    inL void show() {
        info_show << error_str;
    }
};

template<typename Func__, typename Name__, typename Value__>
inL void get(Func__ func_, Name__ name_, Value__ value_) {

}
template<typename Func__, typename Handle__, typename Name__, typename Value__>
inL void get(Func__ func_, Handle__ handle_, Name__ name_, Value__& value_) {
    EC ret = func_(handle_, name_, value_);
    ret.check();
}


class User_choose {
public:
    uint32_t qf_index;
    std::vector<float> q_ppts;
    F_DeviceQueueCreate create_flags;
    E_QueueGlobalPriorityEXT q_global_priority;
};

class QF_info;
class QF_info_for_choose {
public:
    std::vector<QF_info> const& give_you_queue_family_info;
    std::vector<User_choose>& your_choose_info;
};

class QF_info {
public:
    uint32_t index;
    S_QueueFamilyProperties properties;
    std::vector<bool> is_support_your_surface;
    QF_info()
        : index(0)
        , properties()
        , is_support_your_surface(0)
    {}
};


namespace detail {
# define X_declare_vk_api(name__) PFN_##name__ name__;
    struct Instance_api {
        Xt_vk_api_all_instance_api(X_declare_vk_api);
    };
    struct Device_api {
        Xt_vk_api_device(X_declare_vk_api);
    };
# undef X_declare_vk_api

    struct Creator_devcie {
        std::function<bool(Physical_device const&)> choose_pd_callback;
        std::function<bool(QF_info_for_choose &)> choose_qf_callback;
        std::vector<Surface*> surfaces;
        std::vector<char const*>enabled_extensions;
        S_PhysicalDeviceFeatures* features;

        Creator_devcie(
            std::function<bool(Physical_device const&)> choose_pd_callback_ = nullptr,
            std::function<bool(QF_info_for_choose&)> choose_qf_callback_ = nullptr,
            Array_general<Surface*> surfaces_ = {},
            Array_general<char*> enabled_extensions_ = {},
            S_PhysicalDeviceFeatures* features_ = nullptr
        )   : choose_pd_callback(choose_pd_callback_)
            , choose_qf_callback(choose_qf_callback_)
            , surfaces(surfaces_.size())
            , enabled_extensions(enabled_extensions_.size())
            , features(features_)
        {
            memcpy(surfaces.data(), surfaces_.data(), surfaces_.size()*sizeof(Surface*));
            memcpy(enabled_extensions.data(), enabled_extensions_.data(), enabled_extensions_.size()*sizeof(char const*));
        }
    };

    struct QueueFamily_CreateInfo :public S_QueueFamilyProperties {
        uint32_t qf_index;
        VkDeviceQueueCreateFlags create_flags;
        std::vector<float> queuePriorities;
        std::vector<Surface*> surfaces;
        template<typename... Args__>
        QueueFamily_CreateInfo(
            VkDeviceQueueCreateFlags create_flags_ = {}
            , Array_general<Surface*> surfaces_ = {}
            , Array_general<float> queue_priorities_ = {}
            ,Args__&&... args_
        )   :S_QueueFamilyProperties(std::forward<Args__>(args_)...)
            ,create_flags(create_flags_)
            ,queuePriorities(queue_priorities_.size())
            ,qf_index(0)
            ,surfaces(surfaces_.size())
        {
            queueCount = queue_priorities_.size();
            if(surfaces.size()>0){
                memcpy(surfaces.data(), surfaces_.data(), surfaces_.size() * sizeof(Surface*));
            }
            if (queuePriorities.size() > 0) {
                memcpy(queuePriorities.data(), queue_priorities_.data(), queue_priorities_.size() * sizeof(float));
            }
        }

        QueueFamily_CreateInfo(QueueFamily_CreateInfo const& cp_)
            :qf_index(cp_.qf_index)
            , create_flags(cp_.create_flags)
            , queuePriorities(cp_.queuePriorities)
            , surfaces(cp_.surfaces)
            , S_QueueFamilyProperties(static_cast<S_QueueFamilyProperties const&>(cp_))
        { }

        bool is_support(Physical_device& pd, QF_info& info_);
    };

    struct Device_creator {
        std::function<bool(Physical_device const&)> choose_pd_callback;
        std::vector<QueueFamily_CreateInfo> qfs_ci;
        std::vector<char const*>enabled_extensions;
        S_PhysicalDeviceFeatures* features;

        Device_creator(
            std::function<bool(Physical_device const&)> choose_pd_callback_ = nullptr,
            Array_general<QueueFamily_CreateInfo> qfs_condition_ = {},
            Array_general<char*> enabled_extensions_ = {},
            S_PhysicalDeviceFeatures* features_ = nullptr
        )   : choose_pd_callback(choose_pd_callback_)
            , qfs_ci(qfs_condition_.size())
            , enabled_extensions(enabled_extensions_.size())
            , features(features_)
        {
            for (size_t i = 0; i < qfs_condition_.size(); ++i) {
                qfs_ci[i] = qfs_condition_[i];
            }
            memcpy(enabled_extensions.data(), enabled_extensions_.data(), enabled_extensions_.size() * sizeof(char const*));
        }
    };

    struct Creator_swapchain {
        std::vector<E_Format> formats;
        std::vector<E_PresentModeKHR> present_modes;
        std::vector<uint32_t> qf_indexs;
        S_Extent2D extent;
        int min_image_count;
        F_ImageUsage image_usage;
        F_SurfaceTransformKHR transform;
        F_CompositeAlphaKHR composite_alpha;
        bool clipped;
        uint32_t image_array_layers;

        Creator_swapchain(
            Array_general<E_Format> formats_ = { E_Format::e_b8g8r8a8_unorm },
            Array_general<E_PresentModeKHR> present_modes_ = {
                E_PresentModeKHR::e_mailbox_khr,
                E_PresentModeKHR::e_immediate_khr,
                E_PresentModeKHR::e_fifo_khr
            },
            S_Extent2D extent_ = { ~uint32_t(0), ~uint32_t(0) }, //位标全置位表示采用surface的capabilities当中的值
            int min_image_count_ = 0, // 负数表示使用最大值 0表示由本函数自动选择
            F_ImageUsage image_usage_ = F_ImageUsage::b_color_attachment | F_ImageUsage::b_transfer_dst,
            F_SurfaceTransformKHR transform_ = ~F_SurfaceTransformKHR::Otype(0), // 意思是默认使用capabilities当中的值
            F_CompositeAlphaKHR composite_alpha_ = F_CompositeAlphaKHR::b_opaque_khr,
            bool clipped_ = true,
            Array_general<uint32_t> qf_indexs_ = {},
            uint32_t image_array_layers_ = 1
        )   :formats(formats_.size())
            ,present_modes(present_modes_.size())
            ,qf_indexs(qf_indexs_.size())
            ,extent(extent_)
            ,min_image_count(min_image_count_)
            ,image_usage(image_usage_)
            ,transform(transform_)
            ,composite_alpha(composite_alpha_)
            ,clipped(clipped_)
            ,image_array_layers(image_array_layers_)
        {
            memcpy(formats.data(), formats_.data(), formats_.size() * sizeof(E_Format));
            memcpy(present_modes.data(), present_modes_.data(), present_modes_.size() * sizeof(E_PresentModeKHR));
            memcpy(qf_indexs.data(), qf_indexs_.data(), qf_indexs_.size() * sizeof(uint32_t));
        }
    };

}



}   // namespace vk
}   // namespace dawn




# endif // __DAWN_BASE_TEMPLATES_HPP__