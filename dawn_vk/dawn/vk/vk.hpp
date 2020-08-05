# pragma once
# include "dawn/vk/base.hpp"

# include <iostream>


// 待办 一些内存管理相关的函数可以移到Si类中
// 对一些次生对象 检查一下是否只需保存Device的Sptr
namespace dawn { namespace vk {

    DEF_module_sole Sp<dawn_module> vk_module_handle;
    DEF_module_sole PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr = nullptr;
    DEF_module_sole VkAllocationCallbacks* alloc_cb_ptr = nullptr;


    
    class Basic_Spv_code {
    public:
        std::vector<uint32_t> spv_code;
    protected:
        inL Basic_Spv_code() :spv_code(0) {}
    public:
        void load_from_spv_file(char const* path_);
        void load_from_glsl_file(char const* path_, int stage_);
        void load_from_glsl_code(char const* code_, int stage_);
        void save_spv_to_file(char const* path_);
        inL bool is_ready() { return spv_code.size() != 0; }
        inL void clear() { auto temp = std::move(spv_code); }
    };
    template<F_ShaderStage::Otype stage__> class Spv_code
        : public Basic_Spv_code
        , public std::enable_shared_from_this<Spv_code<stage__>>
    {
    public:
        using Sptr = Sp<Spv_code>;
    public:
        inL void load_from_glsl_file(char const* path_) {
            Basic_Spv_code::load_from_glsl_file(path_, stage__);
        }
        inL void load_from_glsl_code(char const* code_) {
            Basic_Spv_code::load_from_glsl_code(code_, stage__);
        }
    };
    template<F_ShaderStage::Otype stage__> class Shader_module {
    public:
        using Sptr = Sp<Shader_module>;
        using Handle_t = VkShaderModule;
        using Founder_t = Device;
        static constexpr F_ShaderStage::OEtype stage_type = (F_ShaderStage::OEtype)stage__;
    public:
        Handle_t handle;
        Founder_t* founder_ptr;
        Sp<Founder_t> founder_sptr;
        F_ShaderStage::OEtype stage;
    public:
        template<typename Founder_sptr__>
        Shader_module(Founder_sptr__&& founder_, Handle_t handle_)
            : founder_ptr(founder_.get())
            , founder_sptr(std::forward<Founder_sptr__>(founder_sptr))
            , stage(static_cast<F_ShaderStage::OEtype>(stage__))
            , handle(handle_)
        {}
        ~Shader_module() { founder_ptr->api.vkDestroyShaderModule(founder_ptr->handle, handle, alloc_cb_ptr); }
        Is_can_2_a_type(Handle_t, handle);
    };



    namespace detail {
        template<typename Handle_t__, typename PFN__, typename Founder_t__, typename Ci_t__>
        inL Handle_t__
            create_vk_obj(PFN__ const pfn_, Founder_t__& founder_, Ci_t__& ci_) 
        {
            Handle_t__ handle = VK_NULL_HANDLE;
            EC ret = pfn_(founder_.handle, ci_, alloc_cb_ptr, &handle);
            ret.check();
            return handle;
        }

        template<typename Handle_t__, typename PFN__, typename Founder_t__, typename Ci_t__>
        inL void
            create_vk_obj(PFN__ const pfn_, Founder_t__& founder_, Ci_t__& ci_, std::vector<Handle_t__>& handles_, size_t count_)
        {
            handles_.resize(count_);
            EC ret;
            for (auto&& handle : handles_) {
                ret = pfn_(founder_.handle, ci_, alloc_cb_ptr, &handle);
                ret.check();
            }
        }

        template<typename Handle_t__, typename PFN__, typename Founder_t__, typename Ci_t__>
        inL Handle_t__
            alloc_vk_obj(PFN__ const pfn_, Founder_t__& founder_, Ci_t__& ci_)
        {
            Handle_t__ handle = VK_NULL_HANDLE;
            EC ret = pfn_(founder_.handle, ci_, &handle);
            ret.check();
            return handle;
        }

        template<typename Handle_t__, typename PFN__, typename Founder_t__, typename Ci_t__>
        inL void
            alloc_vk_obj(PFN__ const pfn_, Founder_t__& founder_, Ci_t__& ci_, std::vector<Handle_t__>& handles_, uint32_t count_)
        {
            handles_.resize(count_);
            EC ret;
            ret = pfn_(founder_.handle, ci_, handles_.data());
        }

        template<typename Data_t__,typename PFN__, typename Founder_t__, typename Handle_t__>
        inL void
            get_vk_data(
            PFN__ pfn_, 
            Founder_t__ const& founder_, 
            Handle_t__ handle_, 
            std::vector<Data_t__>& data_
        ) {
            uint32_t count = 0;
            EC ret;
            ret = pfn_(founder_, handle_, &count, nullptr);
            ret.check();
            data_.resize(count);
            ret = pfn_(founder_, handle_, &count, data_.data());
            ret.check();
        }
        template<typename Data_t__, typename PFN__, typename Obj_t__>
        inL void 
            get_vk_data(
            PFN__ pfn_,
            Obj_t__ const& founder_,
            Array_general<char> name_,
            std::vector<Data_t__>& data_
        ) {
            uint32_t count = 0;
            EC ret;
            ret = pfn_(founder_.handle, name_.data(), &count, nullptr);
            ret.check();
            data_.resize(count);
            ret = pfn_(founder_.handle, name_.data(), &count, data_.data());
            ret.check();
        }

        uint32_t choose_memory_type_index(VkMemoryPropertyFlags properties_, Aref<Physical_device> phy_dev_);
    }

    void init();

    class Physical_device {
    public:
        friend class Instance;
        struct MemoryType {
            uint32_t                memory_index    ;
            F_MemoryProperty        property_flags  ;
            uint32_t                heap_index      ;
            VkDeviceSize            heap_size       ;
            F_MemoryHeap            heap_flags      ;
        };
        Xt_dawn_vk_obj_names(X_friend_class);
    public:
        VkPhysicalDevice handle;
        Instance* ist_ptr;
    protected:
        S_PhysicalDeviceFeatures2 features;
        S_PhysicalDeviceProperties2 properties;
        S_PhysicalDeviceMemoryProperties2 memory_properties;
        std::vector<MemoryType> memory_types;

        std::vector<S_LayerProperties> layer_properties;
        std::vector<S_QueueFamilyProperties2> qf_ppts;
        detail::Instance_api* api;
        std::vector<QF_info> qf_infos;
    public:
        inL Physical_device() noexcept
            :ist_ptr(nullptr)
            , handle(VK_NULL_HANDLE)
            , layer_properties(0)
            , qf_ppts(0)
            , qf_infos(0)
            , api(nullptr)
        {}
        Is_can_2_a_type(VkPhysicalDevice, handle);
    public:
        inL Instance* get_ist() { return ist_ptr; }
        // 手动进行选择
        Sp<Device> device(
            S_DeviceCreateInfo& create_info_
        );
        // 手动进行选择 待办
        Sp<Device> device(
            Array_general<AHandle<Surface>>surfaces_ = {},
            Array_general<char*>enabled_extensions_ = {},
            S_PhysicalDeviceFeatures2* features = nullptr
        );
    public:
        uint32_t get_memory_type_index(uint32_t type_bits_, F_MemoryProperty ppt_);
        inL S_PhysicalDeviceFeatures2 const& get_features()const { return features; }
        inL S_PhysicalDeviceProperties2 const& get_properties()const { return properties; }
        inL S_PhysicalDeviceMemoryProperties2 const& get_memory_properties()const { return memory_properties; }
        inL std::vector<MemoryType> const& get_memory_types()const { return memory_types; }
        inL std::vector<S_LayerProperties> const& get_layer_properties()const { return layer_properties; }
        inL std::vector<S_QueueFamilyProperties2> const& get_queue_family_properties()const { return qf_ppts; }
        inL std::vector<S_ExtensionProperties> get_extension_properties(Aref<char> extension_name_) const {
            std::vector<S_ExtensionProperties> ppt(0);
            detail::get_vk_data(api->vkEnumerateDeviceExtensionProperties, *this, extension_name_, ppt);
            dbg_show << "物理设备 " << (void*)handle << "的扩展属性数为:" << ppt.size();
            return std::move(ppt);
        }
        inL S_FormatProperties2 get_format_properties(E_Format format_) const {
            S_FormatProperties2 fppt;
            api->vkGetPhysicalDeviceFormatProperties2(handle, format_, fppt);
            return std::move(fppt);
        }
        inL S_ImageFormatProperties2 get_image_format_properties(S_PhysicalDeviceImageFormatInfo2 const& pd_img_format_info_) const{
            S_ImageFormatProperties2 img_fmt_info;
            EC ret = api->vkGetPhysicalDeviceImageFormatProperties2(handle, pd_img_format_info_, img_fmt_info);
            ret.check();
            return std::move(img_fmt_info);
        }
        inL S_ExternalBufferProperties get_external_buffer_properties(S_PhysicalDeviceExternalBufferInfo const& ext_buffer_info_) const {
            S_ExternalBufferProperties ext_buffer_ppt;
            api->vkGetPhysicalDeviceExternalBufferProperties(handle, ext_buffer_info_, ext_buffer_ppt);
            return std::move(ext_buffer_ppt);
        }
        inL S_ExternalFenceProperties get_external_fence_properties(S_PhysicalDeviceExternalFenceInfo const& ext_fence_info_) const {
            S_ExternalFenceProperties ext_fence_ppt;
            api->vkGetPhysicalDeviceExternalFenceProperties(handle, ext_fence_info_, ext_fence_ppt);
            return std::move(ext_fence_ppt);
        }
        inL S_ExternalSemaphoreProperties get_external_semaphore_properties(S_PhysicalDeviceExternalSemaphoreInfo const& ext_smp_info_) const {
            S_ExternalSemaphoreProperties ext_smp_ppt;
            api->vkGetPhysicalDeviceExternalSemaphoreProperties(handle, ext_smp_info_, ext_smp_ppt);
            return std::move(ext_smp_ppt);
        }
    };

    class Instance :public std::enable_shared_from_this<Instance>{
    public:
        using Api = detail::Instance_api;
        using Sptr = Sp<Instance>;
        Xt_dawn_vk_obj_names(X_friend_class);

        struct Creator {
            std::vector<char const*>    enabled_extension_names;
            std::vector<char const*>    enabled_layer_names;
            char const*                 app_name;
            N_InstanceCreateInfo        next;
            uint32_t                    api_version;
            uint32_t                    app_version;
            char const*                 engine_name;
            uint32_t                    engine_version;
            Creator(
                Array_general<char*>    enabled_extension_names_ = {
                VK_KHR_SURFACE_EXTENSION_NAME
                , VK_KHR_WIN32_SURFACE_EXTENSION_NAME
                # if defined(_DEBUG)
                , VK_EXT_DEBUG_UTILS_EXTENSION_NAME
                # endif
                },
                Array_general<char*>    enabled_layer_names_ = {
                # if defined(_DEBUG)
                "VK_LAYER_KHRONOS_validation"
                # endif
                },
                char const*             app_name_ = "dawn::vk",
                N_InstanceCreateInfo    next_ = {},
                uint32_t                api_version_ = VK_API_VERSION_1_0,
                uint32_t                app_version_ = VK_MAKE_VERSION(0, 0, 1),
                char const*             engine_name_ = "dawn::vk::engine",
                uint32_t                engine_version_ = VK_MAKE_VERSION(0, 0, 1))
                : enabled_extension_names(enabled_extension_names_.size())
                , enabled_layer_names(enabled_layer_names_.size())
                , app_name(app_name_)
                , next(next_)
                , api_version(api_version_)
                , app_version(app_version_)
                , engine_name(engine_name_)
                , engine_version(engine_version_)
            {
                memcpy(enabled_extension_names.data(), enabled_extension_names_.data(), enabled_extension_names_.size() * sizeof(char const*));
                memcpy(enabled_layer_names.data(), enabled_layer_names_.data(), enabled_layer_names_.size() * sizeof(char const*));
            }
        };

    public:
        VkInstance handle;
        Api api;
        std::vector<Physical_device> physical_devices;
        VkDebugUtilsMessengerEXT dbg_messager;
    public:
        inL Instance() :handle(VK_NULL_HANDLE), api{},physical_devices(0), dbg_messager(VK_NULL_HANDLE){}
        inL ~Instance() {
            if(dbg_messager != VK_NULL_HANDLE){
                api.vkDestroyDebugUtilsMessengerEXT(handle, dbg_messager, alloc_cb_ptr);
            }
            api.vkDestroyInstance(handle, alloc_cb_ptr);
        }
        Is_can_2_a_type(VkInstance, handle);
    public:
        static Sptr create(Creator c_ = {});
    public:
    # if VK_KHR_surface
        Sp<Surface> surface(Surface_ci& ci_ );
    # endif
        Sp<Device> device(detail::Creator_devcie dev_creator_);
        Sp<Device> device(detail::Device_creator dev_creator_);
    };  // class Instance



# if VK_KHR_surface
    class Si_Surface :public Si<VkSurfaceKHR, Instance> {
    public:
        Instance::Api const& api;
        inL Si_Surface(Aref<Instance> ist_, VkSurfaceKHR handle_) noexcept
            :api(ist_->api), Si(ist_, handle_)
        {}
        inL Si_Surface(Si_Surface const& obj_) noexcept : api(obj_.api), Si(obj_)
        {}
        inL Si_Surface(Si_Surface&& obj_) noexcept : api(obj_.api), Si(std::move(obj_))
        {}
        using Si::operator Handle_t;
        using Si::operator Handle_t const;
    public:
        inL bool is_pd_support(
            Physical_device& pd_,
            uint32_t qf_index_
        ) {
            VkBool32 result;
            EC ret = api.vkGetPhysicalDeviceSurfaceSupportKHR(pd_, qf_index_, handle, &result);
            ret.check();
            return result != VK_FALSE;
        }
        inL std::vector<S_SurfaceFormatKHR> get_formats(Aref<Physical_device> pd_) {
            std::vector<S_SurfaceFormatKHR> formats(0);
            uint32_t count = 0;
            api.vkGetPhysicalDeviceSurfaceFormatsKHR(pd_->handle, handle, &count, nullptr);
            formats.resize(count);
            api.vkGetPhysicalDeviceSurfaceFormatsKHR(pd_->handle, handle, &count, formats[0]);
            return std::move(formats);
        }
        inL std::vector<E_PresentModeKHR> get_present_modes(Aref<Physical_device> pd_) {
            uint32_t count = 0;
            api.vkGetPhysicalDeviceSurfacePresentModesKHR(pd_->handle, handle, &count, nullptr);
            std::vector<E_PresentModeKHR> present_modes(count);
            api.vkGetPhysicalDeviceSurfacePresentModesKHR(pd_->handle, handle, &count, present_modes[0]);
            return std::move(present_modes);
        }
        inL S_SurfaceCapabilitiesKHR get_capabilities(Aref<Physical_device> pd_) {
            S_SurfaceCapabilitiesKHR result;
            api.vkGetPhysicalDeviceSurfaceCapabilitiesKHR(pd_->handle, handle, result);
            return result;
        }
    };
    class Surface :public B<Si_Surface> {
    public:
        using Creator = Surface_ci;
        using Sptr = Sp<Surface>;
    public:
        using B::B;
        inL ~Surface(){ api.vkDestroySurfaceKHR(founder_ptr->handle, handle, alloc_cb_ptr); }
    };
    class SG_Surface :public SG<Si_Surface> {
        Instance::Api const& api;
    public:
        template<typename... Args__>
        inL SG_Surface(Aref<Instance> ist_, Args__&&... args_)
            :api(ist_->api), SG<Si_Surface>(ist_, std::forward<Args__>(args_)...)
        {}
        inL Si_Surface operator[](size_t index_) { return Si_Surface(founder_ptr, handles[index_]); }
    };
    class G_Surface :public G<Surface, SG_Surface> {
    public:
        using Sptr = Sp<G_Surface>;
        using G::G;
        ~G_Surface() {
            auto func = founder_ptr->api.vkDestroySurfaceKHR;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };
# endif


    class Queue {
    public:
        VkQueue handle;
        uint32_t index;
        uint32_t qf_index;
        detail::Device_api* api;
    public:
        inL EC wait_idle() { return api->vkQueueWaitIdle(handle); }
        inL EC submit(
            Array_general<S_SubmitInfo> submit_info_,
            VkFence fence_ = VK_NULL_HANDLE
        ) {
            return api->vkQueueSubmit(handle, submit_info_.size(),submit_info_.data(), fence_);
        }
        // 待办
        EC bind_sparse(
            Array_general<S_BindSparseInfo> bind_info_,
            Aptr<Fence> fence_
        );
        # if defined(VK_KHR_SWAPCHAIN_EXTENSION_NAME)
        // 排队所有渲染命令并将图像转换为正确的布局后，排队图像以进行演示
        inL EC present(Aref<S_PresentInfoKHR> present_info_) {
            return api->vkQueuePresentKHR(handle, present_info_.ref);
        }
        # endif
    };
    class Queue_family {
    public:
        uint32_t index;
        S_QueueFamilyProperties properties;
        std::vector<Queue> queues;
    public:
        inL Queue_family() : index(0), queues(0), properties() {}
    };
    
    class Si_Device :public Si<VkDevice, Instance> {
    public:
        using Api = detail::Device_api;
    public:
        Api api;
        std::vector<Queue_family> q_familys;
        std::vector<Physical_device*> physical_devices;
    public:
        inL EC wait_idle() { return api.vkDeviceWaitIdle(handle); }
        inL EC flush_mapped_memory_ranges(Array_general<S_MappedMemoryRange> mapped_memory_ranges_) {
            return api.vkFlushMappedMemoryRanges(handle, mapped_memory_ranges_.size(), mapped_memory_ranges_.data());
        }
        inL EC invalidate_mapped_memory_ranges(Array_general<S_MappedMemoryRange> mapped_memory_ranges_) {
            return api.vkInvalidateMappedMemoryRanges(handle, mapped_memory_ranges_.size(), mapped_memory_ranges_.data());
        }
        inL void update_descriptor_sets(
            Array_general<S_WriteDescriptorSet> write_info_
            , Array_general<S_CopyDescriptorSet> copy_info_
        ) {
            api.vkUpdateDescriptorSets(
                handle
                , write_info_.size()
                , write_info_.data()
                , copy_info_.size()
                , copy_info_.data()
            );
        }
    public:
        using Si::Si;
        Si_Device(Aref<Instance> ist_, VkDevice handle_);
        inL Si_Device(Si_Device const& obj_) 
            : q_familys(obj_.q_familys)
            , physical_devices(obj_.physical_devices)
            , api(obj_.api), Si(obj_)
        {}
        inL Si_Device(Si_Device && obj_) noexcept
            : q_familys(std::move(obj_.q_familys))
            , physical_devices(std::move(obj_.physical_devices))
            , api(obj_.api)
            , Si(std::move(obj_))
        {}
        using Si::operator Handle_t;
        using Si::operator Handle_t const;
    };
    class Device : public B<Si_Device>, public std::enable_shared_from_this<Device> {
    public:
        using Creator = detail::Creator_devcie;
        using Sptr = Sp<Device>;
    public:
        template<F_ShaderStage::Otype stage__>
        inL Sp<Shader_module<stage__>> shader_module(
            Spv_code<stage__> code_, 
            N_ShaderModuleCreateInfo next_ = {}
        ) {
            S_ShaderModuleCreateInfo ci(
                0,
                code_.spv_code.size() * sizeof(decltype(code_.spv_code)::value_type),
                code_.spv_code.data()
            );
            ci.set_next(next_);
            auto handle = detail::create_vk_obj<VkShaderModule>(api.vkCreateShaderModule, *this, ci);
            return std::move(std::make_shared<Shader_module<stage__>>(shared_from_this(), handle));
        }
    # if defined(VK_KHR_SWAPCHAIN_EXTENSION_NAME)
        Sp<Swapchain>       swapchain(
            Sp<Surface>& surface_,
            detail::Creator_swapchain c_
        );
    # endif
        Sp<Event>           event();
        Sp<G_Event>         event(size_t count_);
        Sp<Semaphore>       semaphore(N_SemaphoreCreateInfo next_ = {});
        Sp<G_Semaphore>     semaphore(
            size_t count_,
            N_SemaphoreCreateInfo next_ = {}
        );
        Sp<Fence>           fence(
            F_FenceCreate flags_ = {}, 
            N_FenceCreateInfo next_ = {}
        );
        Sp<G_Fence>         fence(
            size_t count_, 
            F_FenceCreate flags_ = {},
            N_FenceCreateInfo next_ = {}
        );
        Sp<DeviceMemory>   memory(
            uint32_t memory_type_index_,
            VkDeviceSize size_
        );
        Sp<DeviceMemory>   memory(
            F_MemoryProperty    memory_property_,
            F_MemoryHeap        heap_property_,
            VkDeviceSize        size_
        );
        Sp<Buffer>          buffer(
            F_BufferCreate c_flags_,
            F_BufferCreate u_flags_,
            VkDeviceSize size_, 
            Array_general<uint32_t> qf_indices_ = {}
        );
        Sp<G_Buffer>        buffer(
            size_t count_,
            F_BufferCreate c_flags_,
            F_BufferCreate u_flags_, 
            VkDeviceSize size_, 
            Array_general<uint32_t> qf_indices_ = {}
        );
        Sp<Image>           image(S_ImageCreateInfo ci_);
        Sp<Sampler>         sampler(S_SamplerCreateInfo ci_);
        Sp<SamplerYcbcrConversion> sampler_ycbcr_conversion(S_SamplerYcbcrConversionCreateInfo ci_);
        Sp<DescPool>        desc_pool(S_DescriptorPoolCreateInfo ci_);
        Sp<DescSetLayout>   desc_set_layout(S_DescriptorSetLayoutCreateInfo ci_);
        Sp<RenderPass>      render_pass(S_RenderPassCreateInfo ci_);
        Sp<PipelineLayout>  pipeline_layout(S_PipelineLayoutCreateInfo ci_);
        Sp<PipelineCache>   pipeline_cache(S_PipelineCacheCreateInfo ci_);
        Sp<GraphicsPipeline> graphics_pipeline(S_GraphicsPipelineCreateInfo ci_);
        Sp<G_GraphicsPipeline> graphics_pipeline(size_t count_, S_GraphicsPipelineCreateInfo ci_);
        Sp<CmdPool>         cmd_pool(
            Queue_family& qf_,
            F_CommandPoolCreate flags_ = 0
        );
        Sp<QueryPool>       query_pool(S_QueryPoolCreateInfo ci_);
    public:
        // using B::B;
        Device(
            Instance::Sptr&& ist_sptr_, 
            Handle_t handle_,
            Array_general<Physical_device*> pds_,
            Array_general<User_choose> choose_info_
        );

        Device(
            Instance::Sptr&& ist_sptr_,
            Handle_t handle_,
            Array_general<Physical_device*> pds_,
            detail::Device_creator& ci
        );
        inL ~Device() {
            CODE_POS; 
            api.vkDestroyDevice(handle, alloc_cb_ptr);
        }
    };



    class Si_Fence :public Si<VkFence, Device> {
    public:
        inL EC get_status(){
            return founder_ptr->api.vkGetFenceStatus(founder_ptr->handle, handle);
        }
        inL EC reset() {
            return founder_ptr->api.vkResetFences(founder_ptr->handle, 1, &handle);
        }
        inL EC wait(uint64_t timeout_ = ~uint64_t(0)) {
            return founder_ptr->api.vkWaitForFences(founder_ptr->handle, 1, &handle, VK_TRUE, timeout_);
        }
        using Si::Si;
    };
    class Fence :public B<Si_Fence> {
    public:
        using Sptr = Sp<Fence>;
        using B::B;
        inL ~Fence() {
            CODE_POS; 
            founder_ptr->api.vkDestroyFence(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_Fence :public SG<Si_Fence> {
    public:
        inL EC reset() {
            return founder_ptr->api.vkResetFences(founder_ptr->handle, static_cast<uint32_t>(handles.size()), handles.data());
        }
        inL EC wait_all(uint64_t timeout_ = ~uint64_t(0)) {
            return founder_ptr->api.vkWaitForFences(founder_ptr->handle, static_cast<uint32_t>(handles.size()), handles.data(), VK_TRUE, timeout_);
        }
        inL EC wait_any(uint64_t timeout_ = ~uint64_t(0)) {
            return founder_ptr->api.vkWaitForFences(founder_ptr->handle, static_cast<uint32_t>(handles.size()), handles.data(), VK_FALSE, timeout_);
        }
        using SG::SG;
    };
    class G_Fence :public G<Fence, SG_Fence> {
    public:
        using Sptr = Sp<G_Fence>;
        using G::G;
        inL ~G_Fence() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyFence;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_Semaphore :public Si<VkSemaphore, Device> {
    public:
        using Si::Si;
    };
    class Semaphore :public B<Si_Semaphore> {
    public:
        using Sptr = Sp<Semaphore>;
        using B::B;
        inL ~Semaphore() {
            CODE_POS; 
            founder_ptr->api.vkDestroySemaphore(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_Semaphore :public SG<Si_Semaphore> {
    public:
        using SG::SG;
    };
    class G_Semaphore :public G<Semaphore, SG_Semaphore> {
    public:
        using Sptr = Sp<G_Semaphore>;
        using G::G;
        inL ~G_Semaphore() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroySemaphore;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_Event :public Si<VkEvent, Device> {
    public:
        inL EC set() { return founder_ptr->api.vkSetEvent(founder_ptr->handle, handle); }
        inL EC get_status() { return founder_ptr->api.vkGetEventStatus(founder_ptr->handle, handle); }
        inL void reset() { founder_ptr->api.vkResetEvent(founder_ptr->handle, handle); }
        using Si::Si;
    };
    class Event :public B<Si_Event> {
    public:
        using Sptr = Sp<Event>;
        using B::B;
        inL ~Event() {
            CODE_POS; 
            founder_ptr->api.vkDestroyEvent(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_Event :public SG<Si_Event> {
    public:
        inL std::vector<EC> set() {
            std::vector<EC> result(handles.size());
            auto func = founder_ptr->api.vkSetEvent;
            auto fhandle = founder_ptr->handle;
            for (size_t i = 0; i < handles.size(); ++i) {
                result[i] = func(fhandle, handles[i]);
            }
            return std::move(result);
        }
        inL std::vector<EC> get_status() {
            std::vector<EC> result(handles.size());
            auto func = founder_ptr->api.vkGetEventStatus;
            auto fhandle = founder_ptr->handle;
            for (size_t i = 0; i < handles.size(); ++i) {
                result[i] = func(fhandle, handles[i]);
            }
            return std::move(result);
        }
        inL void reset() {
            auto func = founder_ptr->api.vkResetEvent;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h);
            }
        }
        using SG::SG;
    };
    class G_Event :public G<Event, SG_Event> {
    public:
        using Sptr = Sp<G_Event>;
        using G::G;
        inL ~G_Event() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyEvent;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_DeviceMemory :public Si<VkDeviceMemory, Device> {
    public:
        inL Array_general<uint8_t, VkDeviceSize> map(
            VkDeviceSize size_,
            VkDeviceSize offset_ = 0
        ) {
            Array_general<uint8_t, VkDeviceSize> result;
            result.value_count = size_;
            EC ret = founder_ptr->api.vkMapMemory(founder_ptr->handle, handle, offset_, result.value_count, 0, reinterpret_cast<void**>(&result.first_value_ptr));
            ret.check();
            return result;
        }
        inL void unmap() { founder_ptr->api.vkUnmapMemory(founder_ptr->handle, handle); }
        using Si::Si;
    };
    class DeviceMemory :public B<Si_DeviceMemory> {
    public:
        using Sptr = Sp<DeviceMemory>;
        using B::B;
        inL ~DeviceMemory() {
            CODE_POS; 
            founder_ptr->api.vkFreeMemory(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_DeviceMemory :public SG<Si_DeviceMemory> {
    public:
        using SG::SG;
    };
    class G_DeviceMemory :public G<DeviceMemory, SG_DeviceMemory> {
    public:
        using Sptr = Sp<G_DeviceMemory>;
        using G::G;
        inL ~G_DeviceMemory() {
            CODE_POS;
            auto func = founder_ptr->api.vkFreeMemory;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_Image :public Si<VkImage, Device> {
    public:
        // 待办 绑定操作是否应该保存相应对象的智能指针
        inL EC bind(
            Aref<DeviceMemory> device_memory_,
            VkDeviceSize memory_offset_ = 0
        ) {
            return founder_ptr->api.vkBindImageMemory(founder_ptr->handle, handle, device_memory_->handle, memory_offset_);
        }
        inL S_MemoryRequirements get_memory_requirements() {
            S_MemoryRequirements result;
            founder_ptr->api.vkGetImageMemoryRequirements(founder_ptr->handle, handle, result);
            return result;
        }
        inL S_SubresourceLayout get_subresource_layout(const S_ImageSubresource& subresource_) {
            S_SubresourceLayout result;
            founder_ptr->api.vkGetImageSubresourceLayout(founder_ptr->handle, handle, &subresource_, result);
            return result;
        }
        inL std::vector<S_SparseImageMemoryRequirements> get_sparse_memory_requirements() {
            uint32_t count = 0;
            founder_ptr->api.vkGetImageSparseMemoryRequirements(founder_ptr->handle, handle, &count, nullptr);
            std::vector<S_SparseImageMemoryRequirements> result(count);
            founder_ptr->api.vkGetImageSparseMemoryRequirements(founder_ptr->handle, handle, &count, result.data());
            return std::move(result);
        }
        uint32_t choose_memory_type_index(VkMemoryPropertyFlags properties_, uint32_t phy_index_in_dev_ = 0) {
            return detail::choose_memory_type_index(properties_, founder_ptr->physical_devices[phy_index_in_dev_]);
        }
        Sp<DeviceMemory> memory(VkMemoryPropertyFlags properties_, uint32_t phy_index_in_dev_ = 0);
        using Si::Si;
    };
    class Image :public B<Si_Image>, public std::enable_shared_from_this<Image> {
    public:
        using Creator = S_ImageCreateInfo;
        using Sptr = Sp<Image>;
        Sp<ImageView> view(
            E_ImageViewType view_type_,
            E_Format format_,
            S_ComponentMapping components_,
            S_ImageSubresourceRange subresource_range_
        );
    public:
        inL ~Image() {
            CODE_POS;
            founder_ptr->api.vkDestroyImage(founder_ptr->handle, handle, alloc_cb_ptr);
        }
        using B::B;
    };
    class SG_Image :public SG<Si_Image> {
    public:
        using SG::SG;
    };
    class G_Image :public G<Image, SG_Image> {
    public:
        using Sptr = Sp<G_Image>;
        using G::G;
        inL ~G_Image() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyImage;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };


    // 待办 查看是否
    class Si_ImageView :public Si<VkImageView, Image> {
    public:
        using Si::Si;
    };
    class ImageView :public B<Si_ImageView> {
    public:
        using Sptr = Sp<ImageView>;
        using B::B;
        inL ~ImageView() {
            CODE_POS;
            founder_ptr->founder_ptr->api.vkDestroyImageView(founder_ptr->founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_ImageView :public SG<Si_ImageView> {
    public:
        using SG::SG;
    };
    class G_ImageView :public G<ImageView, SG_ImageView> {
    public:
        using Sptr = Sp<G_ImageView>;
        using G::G;
        inL ~G_ImageView() {
            CODE_POS;
            auto func = founder_ptr->founder_ptr->api.vkDestroyImageView;
            auto fhandle = founder_ptr->founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



# if defined(VK_KHR_SWAPCHAIN_EXTENSION_NAME)
    // 待办 是否有必要进行组操作
    class Si_Swapchain :public Si<VkSwapchainKHR, Device> {
    public:
        using Si::Si;
    public:
        inL uint32_t next_image_Index(
            VkSemaphore semaphore_ = {},
            VkFence fence_ = {},
            uint64_t timeout_ = ~uint64_t(0)
        ) {
            uint32_t index_for_return = -1;
            EC ret = founder_ptr->api.vkAcquireNextImageKHR(
                founder_ptr->handle,
                handle,
                timeout_,
                semaphore_,
                fence_,
                &index_for_return
            );
            ret.check();
            return index_for_return;
        }
    };
    // 待办 改
    class Swapchain : public B<Si_Swapchain>, public std::enable_shared_from_this<Swapchain> {
    public:
        using Sptr = Sp<Swapchain>;
        using Creator = detail::Creator_swapchain;
    public:
        Sp<Surface> surface_sptr;
        S_SwapchainCreateInfoKHR ci;
        Call_chain<void> on_construct_chain;
        Call_chain<void> on_clear_chain;

        inL SG_Image sg_images() {
            SG_Image result(*founder_ptr);
            detail::get_vk_data(founder_ptr->api.vkGetSwapchainImagesKHR, *founder_ptr, handle, result.handles);
            return std::move(result);
        }
        Sp<ImageViewsFromSwapchain> image_views(
            /*
            components 成员变量用于进行图像颜色通道的映射。
            比如，对于单色纹理，我们可以将所有颜色通道映射到红色通道。我们也可以直接将颜色
            通道的值映射为常数 0 或 1
            */
            S_ComponentMapping components_ = {
                E_ComponentSwizzle::e_identity,
                E_ComponentSwizzle::e_identity,
                E_ComponentSwizzle::e_identity,
                E_ComponentSwizzle::e_identity
            },
            /*
            如果读者在编写 VR 一类的应用程序，可能会使用支持多个层次的交换链。
            这时，读者应该为每个图像创建多个图像视图，分别用来访问左眼和右眼两个不同的图层。
            */
            S_ImageSubresourceRange subresource_range_ = { F_ImageAspect::b_color, 0,1,0,1 }
        );
    public:
        using B::B;
        Swapchain(
            Device::Sptr&& dev_sptr,
            Surface::Sptr&& surface_sptr_,
            S_SwapchainCreateInfoKHR& ci_,
            VkSwapchainKHR handle_
        );
        inL ~Swapchain() {
            CODE_POS;
            founder_ptr->api.vkDestroySwapchainKHR(
                founder_ptr->handle, handle, alloc_cb_ptr
            );
        }
    };
# else
    class Swapchain :public std::enable_shared_from_this<Swapchain> {};
# endif // # if defined(VK_KHR_SWAPCHAIN_EXTENSION_NAME)



    class Si_Sampler :public Si<VkSampler, Device> {
    public:
        using Si::Si;
    };
    class Sampler :public B<Si_Sampler> {
    public:
        using Creator = S_SamplerCreateInfo;
        using Sptr = Sp<Sampler>;
        using B::B;
        inL ~Sampler() {
            CODE_POS; 
            founder_ptr->api.vkDestroySampler(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_Sampler :public SG<Si_Sampler> {
    public:
        using SG::SG;
    };
    class G_Sampler :public G<Sampler, SG_Sampler> {
    public:
        using Sptr = Sp<G_Sampler>;
        using G::G;
        inL ~G_Sampler() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroySampler;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_SamplerYcbcrConversion :public Si<VkSamplerYcbcrConversion, Device> {
    public:
        using Si::Si;
    };
    class SamplerYcbcrConversion :public B<Si_SamplerYcbcrConversion> {
    public:
        using Creator = S_SamplerYcbcrConversionCreateInfo;
        using Sptr = Sp<SamplerYcbcrConversion>;
        using B::B;
        inL ~SamplerYcbcrConversion() {
            CODE_POS; 
            founder_ptr->api.vkDestroySamplerYcbcrConversion(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_SamplerYcbcrConversion :public SG<Si_SamplerYcbcrConversion> {
    public:
        using SG::SG;
    };
    class G_SamplerYcbcrConversion :public G<SamplerYcbcrConversion, SG_SamplerYcbcrConversion> {
    public:
        using Sptr = Sp<G_SamplerYcbcrConversion>;
        using G::G;
        inL ~G_SamplerYcbcrConversion() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroySamplerYcbcrConversion;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_Buffer :public Si<VkBuffer, Device> {
    public:
        // 待办 是否bind时需要保存Memory::sptr?
        inL EC bind(
            VkDeviceMemory device_memory_,
            VkDeviceSize offset_ = 0
        ) {
            return founder_ptr->api.vkBindBufferMemory(founder_ptr->handle, handle, device_memory_, offset_);
        }
        inL S_MemoryRequirements const get_memory_requirements() {
            S_MemoryRequirements result;
            founder_ptr->api.vkGetBufferMemoryRequirements(
                founder_ptr->handle, handle, result
            );
            return result;
        }
        uint32_t choose_memory_type_index(VkMemoryPropertyFlags properties_, uint32_t phy_index_in_dev_ = 0) {
            return detail::choose_memory_type_index(properties_, founder_ptr->physical_devices[phy_index_in_dev_]);
        }
        Sp<DeviceMemory> get_Memory(VkMemoryPropertyFlags properties_, uint32_t phy_index_in_dev_ = 0);
        using Si::Si;
    };
    class Buffer :public B<Si_Buffer>, public std::enable_shared_from_this<Buffer> {
    public:
        using Sptr = Sp<Buffer>;
    public:
        Sp<BufferView> view(
            E_Format froamt_,
            VkDeviceSize offset_,
            VkDeviceSize range_
        );
        using B::B;
        inL ~Buffer() {
            CODE_POS; 
            founder_ptr->api.vkDestroyBuffer(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_Buffer :public SG<Si_Buffer> {
    public:
        using SG::SG;
    };
    class G_Buffer :public G<Buffer, SG_Buffer> {
    public:
        using Sptr = Sp<G_Buffer>;
        using G::G;
        //Sp<G_DeviceMemory> memory_group(
        //    VkMemoryPropertyFlags properties_,
        //    uint32_t phy_index_in_dev_ = 0
        //);
        inL ~G_Buffer() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyBuffer;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_BufferView :public Si<VkBufferView, Buffer> {
    public:
        using Si::Si;
    };
    class BufferView :public B<Si_BufferView> {
    public:
        using Sptr = Sp<BufferView>;
        using B::B;
        inL ~BufferView() {
            CODE_POS; 
            founder_ptr->founder_ptr->api.vkDestroyBufferView(founder_ptr->founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_BufferView :public SG<Si_BufferView> {
    public:
        using SG::SG;
    };
    class G_BufferView :public G<BufferView, SG_BufferView> {
    public:
        using Sptr = Sp<G_BufferView>;
        using G::G;
        inL ~G_BufferView() {
            CODE_POS;
            auto func = founder_ptr->founder_ptr->api.vkDestroyBufferView;
            auto fhandle = founder_ptr->founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };

    
    
    class ImageViewsFromSwapchain: public std::enable_shared_from_this<ImageViewsFromSwapchain>{
    public:
        using Sptr = Sp<ImageViewsFromSwapchain>;
    public:
        std::vector<VkImageView> handles;
        S_ImageViewCreateInfo ci;
        Sp<Swapchain> founder_sptr;
        Call_chain<void> on_construct_chain;
        Call_chain<void> on_clear_chain;
    public:
        template<typename Founder_sptr__, typename Ci_t__>
        ImageViewsFromSwapchain(Founder_sptr__&& founder_sptr_, Ci_t__&& ci_)
            : handles(0)
            , founder_sptr(std::forward<Founder_sptr__>(founder_sptr_))
            , ci(ci_)
        {
            CODE_POS;
            construct();
        }
        inL ~ImageViewsFromSwapchain() {
            CODE_POS;
            clear();
        }

        template<typename RenderPass_sptr__>
        inL Sp<FramebuffersFromSwapchain> framebuffers(RenderPass_sptr__&& render_pass_) {
            auto result = std::make_shared<FramebuffersFromSwapchain>(founder_sptr->founder_ptr,shared_from_this(),std::forward<RenderPass_sptr__>(render_pass_));
            auto ptr = result.get();
            on_construct_chain.add(result, [=]() { ptr->construct(); });
            on_clear_chain.add(result, [=]() { ptr->clear(); });
            return std::move(result);
        }
        void construct();
        void clear();
    };

    class FramebuffersFromSwapchain {
    public:
        using Sptr = Sp<FramebuffersFromSwapchain>;
    public:
        std::vector<VkFramebuffer> handles;
        Device* founder_ptr;
        Sp<ImageViewsFromSwapchain> image_views_sptr;
        Sp<RenderPass> render_pass_sptr;
        Call_chain<void> on_construct;
        Call_chain<void> on_clear;
    public:
        template<typename RenderPass_sptr__, typename ImageView_sptr__>
        inL FramebuffersFromSwapchain(
            Device* founder_ptr_,
            ImageView_sptr__&& iv_sptr_, 
            RenderPass_sptr__&& rp_sptr_
        )   : handles(0)
            , founder_ptr(founder_ptr_)
            , image_views_sptr(std::forward<ImageView_sptr__>(iv_sptr_))
            , render_pass_sptr(std::forward<RenderPass_sptr__>(rp_sptr_))
        {
            CODE_POS;
            construct();
        }
        inL ~FramebuffersFromSwapchain() {
            CODE_POS;
            clear();
        }
    public:
        void construct();
        void clear();
    };

    class Si_QueryPool :public Si<VkQueryPool, Device> {
    public:
        inL EC get_results(
            uint32_t first_query_,
            uint32_t query_count_,
            Array_general<void> data_,
            VkDeviceSize stride_,
            F_QueryResult flags_
        ) {
            return founder_ptr->api.vkGetQueryPoolResults(
                founder_ptr->handle,
                handle,
                first_query_,
                query_count_,
                data_.size(),
                data_.data(),
                stride_,
                flags_.flag
            );
        }
        using Si::Si;
    };
    class QueryPool :public B<Si_QueryPool> {
    public:
        using Creator = S_QueryPoolCreateInfo;
        using Sptr = Sp<QueryPool>;
        using B::B;
        inL ~QueryPool() {
            CODE_POS;
            founder_ptr->api.vkDestroyQueryPool(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_QueryPool :public SG<Si_QueryPool> {
    public:
        using SG::SG;
    };
    class G_QueryPool :public G<QueryPool, SG_QueryPool> {
    public:
        using Sptr = Sp<G_QueryPool>;
        using G::G;
        inL ~G_QueryPool() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyQueryPool;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_DescPool :public Si<VkDescriptorPool, Device> {
    public:
        inL EC reset(VkDescriptorPoolResetFlags flags_ = 0) {
            return founder_ptr->api.vkResetDescriptorPool(founder_ptr->handle, handle, flags_);
        }
        using Si::Si;
    };
    class DescPool :public B<Si_DescPool> {
    public:
        using Creator = S_DescriptorPoolCreateInfo;
        using Sptr = Sp<DescPool>;
    public:
        SG_DescSet sg_desc_set(Array_general<VkDescriptorSetLayout> set_layouts_);
        using B::B;
        inL ~DescPool() {
            CODE_POS; 
            founder_ptr->api.vkDestroyDescriptorPool(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_DescPool :public SG<Si_DescPool> {
    public:
        using SG::SG;
        inL std::vector<EC> reset(VkDescriptorPoolResetFlags flags_ = 0) {
            auto func = founder_ptr->api.vkResetDescriptorPool;
            auto fhandle = founder_ptr->handle;
            std::vector<EC> ret(handles.size());
            size_t i = 0;
            for (auto&& h : handles) {
                ret[i] = func(fhandle, h, flags_);
            }
        }
    };
    class G_DescPool :public G<DescPool, SG_DescPool> {
    public:
        using Sptr = Sp<G_DescPool>;
        using G::G;
        inL ~G_DescPool() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyDescriptorPool;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_DescSetLayout :public Si<VkDescriptorSetLayout, Device> {
    public:
        using Si::Si;
    };
    class DescSetLayout :public B<Si_DescSetLayout>{
    public:
        using Creator = S_DescriptorSetLayoutCreateInfo;
        using Sptr = Sp<DescSetLayout>;
        using B::B;
        Sp<DescUpdateTemplate> desc_update_template(Array_general<S_DescriptorUpdateTemplateEntry> entrys_);
        inL ~DescSetLayout() {
            CODE_POS;
            founder_ptr->api.vkDestroyDescriptorSetLayout(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_DescSetLayout :public SG<Si_DescSetLayout> {
    public:
        using SG::SG;
    };
    class G_DescSetLayout :public G<DescSetLayout, SG_DescSetLayout> {
    public:
        using Sptr = Sp<G_DescSetLayout>;
        using G::G;
        inL ~G_DescSetLayout() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyDescriptorSetLayout;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_DescUpdateTemplate :public Si<VkDescriptorUpdateTemplate, Device> {
    public:
        using Si::Si;
    };
    class DescUpdateTemplate :public B<Si_DescUpdateTemplate> {
    public:
        //    X__(Sp<Desc_set_layout>, set_layout_sptr) \
        //    X__(Sp<Pipeline_layout>, pipeline_layout_sptr)
        using Sptr = Sp<DescUpdateTemplate>;
        using B::B;
        inL ~DescUpdateTemplate() {
            CODE_POS; 
            founder_ptr->api.vkDestroyDescriptorUpdateTemplate(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_DescUpdateTemplate :public SG<Si_DescUpdateTemplate> {
    public:
        using SG::SG;
    };
    class G_DescUpdateTemplate :public G<DescUpdateTemplate, SG_DescUpdateTemplate> {
    public:
        using Sptr = Sp<G_DescUpdateTemplate>;
        using G::G;
        inL ~G_DescUpdateTemplate() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyDescriptorUpdateTemplate;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_DescSet :public Si<VkDescriptorSet, DescPool> {
    public:
        inL void update(
            Aref<DescUpdateTemplate> template_,
            void const* data_
        ) {
            founder_ptr->founder_ptr->api.vkUpdateDescriptorSetWithTemplate(
                founder_ptr->founder_ptr->handle,
                handle,
                template_->handle,
                data_
            );
        }
        inL void update(
            Array_general<S_WriteDescriptorSet> writes_,
            Array_general<S_CopyDescriptorSet> cpoies_
        ) {
            founder_ptr->founder_ptr->api.vkUpdateDescriptorSets(
                founder_ptr->founder_ptr->handle,
                writes_.size(),
                writes_.data(),
                cpoies_.size(),
                cpoies_.data()
            );
        }
        using Si::Si;
    };
    class SG_DescSet :public SG<Si_DescSet> {
    public:
        // 待办
        using SG::SG;
    };
    class G_DescSet :public G<DescSet, SG_DescSet> {
    public:
        using Sptr = Sp<G_DescSet>;
        using G::G;
        inL ~G_DescSet() {
            CODE_POS;
            founder_ptr->founder_ptr->api.vkFreeDescriptorSets(founder_ptr->founder_ptr->handle,founder_ptr->handle,static_cast<uint32_t>(handles.size()),handles.data());
        }
    };



    class Si_RenderPass :public Si<VkRenderPass, Device> {
    public:
        S_Extent2D get_area_granularity() {
            S_Extent2D result;
            founder_ptr->api.vkGetRenderAreaGranularity(founder_ptr->handle, handle, &result);
            return result;
        }
        using Si::Si;
    };
    class RenderPass :public B<Si_RenderPass>, public std::enable_shared_from_this<RenderPass> {
    public:
        using Creator = S_RenderPassCreateInfo;
        using Sptr = Sp<RenderPass>;
        Sp<Framebuffer> frame_buffer(
            Array_general<VkImageView> attachments_,
            uint32_t width_,
            uint32_t height_,
            uint32_t layers_
        );
        using B::B;
        inL ~RenderPass() {
            CODE_POS; 
            founder_ptr->api.vkDestroyRenderPass(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_RenderPass :public SG<Si_RenderPass> {
    public:
        using SG::SG;
    };
    class G_RenderPass :public G<RenderPass, SG_RenderPass> {
    public:
        using Sptr = Sp<G_RenderPass>;
        using G::G;
        inL ~G_RenderPass() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyRenderPass;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    // 待办 测试其是否与RenderPass构成运行时依赖关系
    class Si_Framebuffer :public Si<VkFramebuffer, RenderPass> {
    public:
        using Si::Si;
    };
    class Framebuffer :public B<Si_Framebuffer> {
    public:
        using Sptr = Sp<Framebuffer>;
        using B::B;
        inL ~Framebuffer() {
            CODE_POS;
            founder_ptr->founder_ptr->api.vkDestroyFramebuffer(founder_ptr->founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_Framebuffer :public SG<Si_Framebuffer> {
    public:
        using SG::SG;
    };
    class G_Framebuffer :public G<Framebuffer, SG_Framebuffer> {
    public:
        using Sptr = Sp<G_Framebuffer>;
        using G::G;
        inL ~G_Framebuffer() {
            CODE_POS;
            auto func = founder_ptr->founder_ptr->api.vkDestroyFramebuffer;
            auto fhandle = founder_ptr->founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_PipelineLayout :public Si<VkPipelineLayout, Device> {
    public:
        using Si::Si;
    };
    class PipelineLayout :public B<Si_PipelineLayout> {
    public:
        using Creator = S_PipelineLayoutCreateInfo;
        using Sptr = Sp<PipelineLayout>;
        Sp<DescUpdateTemplate> desc_update_template(
            Array_general<S_DescriptorUpdateTemplateEntry> entrys_,
            E_PipelineBindPoint bind_point_,
            uint32_t set_
        );
        using B::B;
        inL ~PipelineLayout() {
            CODE_POS; 
            founder_ptr->api.vkDestroyPipelineLayout(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_PipelineLayout :public SG<Si_PipelineLayout> {
    public:
        using SG::SG;
    };
    class G_PipelineLayout :public G<PipelineLayout, SG_PipelineLayout> {
    public:
        using Sptr = Sp<G_PipelineLayout>;
        using G::G;
        inL ~G_PipelineLayout() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyPipelineLayout;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    // 待办 检查是否正确
    class Si_PipelineCache :public Si<VkPipelineCache, Device> {
    public:
        using Si::Si;
    };
    class PipelineCache :public B<Si_PipelineCache> {
    public:
        using Creator = S_PipelineCacheCreateInfo;
        using Sptr = Sp<PipelineCache>;
        using B::B;
        inL ~PipelineCache() {
            CODE_POS;
            founder_ptr->api.vkDestroyPipelineCache(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_PipelineCache :public SG<Si_PipelineCache> {
    public:
        using SG::SG;
    };
    class G_PipelineCache :public G<PipelineCache, SG_PipelineCache> {
    public:
        using Sptr = Sp<G_PipelineCache>;
        using G::G;
        inL ~G_PipelineCache() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyPipelineCache;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_ComputePipeline :public Si<VkPipeline, Device> {
    public:
        using Si::Si;
    };
    class ComputePipeline :public B<Si_ComputePipeline> {
    public:
        using Sptr = Sp<ComputePipeline>;
        // 待办 使用creator 并检查 是否存在运行时依赖?
        std::shared_ptr<ComputePipeline> compute_pipeline(
            F_PipelineCreate                   flags,
            std::shared_ptr<PipelineCache>     pipeline_cache_,
            std::shared_ptr<Shader_module<F_ShaderStage::b_compute>>      module_,
            const char* rukou_name_,
            F_ShaderStage                      stage_flags,
            std::shared_ptr< PipelineLayout>   pipeline_layout_ = nullptr,
            const S_SpecializationInfo* pSpecializationInfo = nullptr
        );
        using B::B;
        inL ~ComputePipeline() { founder_ptr->api.vkDestroyPipeline(founder_ptr->handle, handle, alloc_cb_ptr); }
    };
    class SG_ComputePipeline :public SG<Si_ComputePipeline> {
    public:
        using SG::SG;
    };
    class G_ComputePipeline :public G<ComputePipeline, SG_ComputePipeline> {
    public:
        using Sptr = Sp<G_ComputePipeline>;
        using G::G;
        inL ~G_ComputePipeline() {
            auto func = founder_ptr->api.vkDestroyPipeline;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_GraphicsPipeline :public Si<VkPipeline, Device> {
    public:
        using Si::Si;
    };
    class GraphicsPipeline :public B<Si_GraphicsPipeline> {
    public:
        using Creator = S_GraphicsPipelineCreateInfo;
        using Sptr = Sp<GraphicsPipeline>;
        using B::B;
        inL ~GraphicsPipeline() {
            CODE_POS;
            founder_ptr->api.vkDestroyPipeline(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_GraphicsPipeline :public SG<Si_GraphicsPipeline> {
    public:
        using SG::SG;
    };
    class G_GraphicsPipeline :public G<GraphicsPipeline, SG_GraphicsPipeline> {
    public:
        using Sptr = Sp<G_GraphicsPipeline>;
        using G::G;
        inL ~G_GraphicsPipeline() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyPipeline;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_CmdPool :public Si<VkCommandPool, Device> {
    public:
        inL EC reset(F_CommandPoolReset flags_) { founder_ptr->api.vkResetCommandPool(founder_ptr->handle, handle, flags_.flag); }
        inL void trim(VkCommandPoolTrimFlags flags_ = 0) { founder_ptr->api.vkTrimCommandPool(founder_ptr->handle, handle, flags_); }
        using Si::Si;
    };
    class CmdPool :public B<Si_CmdPool>, public std::enable_shared_from_this<CmdPool> {
    public:
        using Sptr = Sp<CmdPool>;
        using B::B;
        Sp<CmdBuffer> buffer(E_CommandBufferLevel level_);
        Sp<G_CmdBuffer> buffer(uint32_t count_, E_CommandBufferLevel level_);
        inL ~CmdPool() {
            CODE_POS; 
            founder_ptr->api.vkDestroyCommandPool(founder_ptr->handle, handle, alloc_cb_ptr);
        }
    };
    class SG_CmdPool :public SG<Si_CmdPool> {
    public:
        // 待办 这两个函数可以做到更细致
        inL EC reset(F_CommandPoolReset flags_) {
            auto func = founder_ptr->api.vkResetCommandPool;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, flags_.flag);
            }
        }
        inL void trim(VkCommandPoolTrimFlags flags_ = 0) {
            auto func = founder_ptr->api.vkTrimCommandPool;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, flags_);
            }
        }
        using SG::SG;
    };
    class G_CmdPool :public G<CmdPool, SG_CmdPool> {
    public:
        using Sptr = Sp<G_CmdPool>;
        using G::G;
        inL ~G_CmdPool() {
            CODE_POS;
            auto func = founder_ptr->api.vkDestroyCommandPool;
            auto fhandle = founder_ptr->handle;
            for (auto&& h : handles) {
                func(fhandle, h, alloc_cb_ptr);
            }
        }
    };



    class Si_CmdBuffer :public Si<VkCommandBuffer, CmdPool> {
    public:
        Device::Api* api;
    public:
        inL Si_CmdBuffer(Aref<CmdPool> cmd_pool_ref_, VkCommandBuffer handle_)
            :api(&cmd_pool_ref_->founder_ptr->api)
            , Si(cmd_pool_ref_, handle_)
        {}
        inL Si_CmdBuffer(Si_CmdBuffer const& cmd_buffer_) :api(cmd_buffer_.api), Si(cmd_buffer_) {}
        inL Si_CmdBuffer(Si_CmdBuffer&& cmd_buffer_) noexcept : api(std::move(cmd_buffer_.api)), Si(std::move(cmd_buffer_)) {}
    public:
        inL EC begin(
            F_CommandBufferUsage flags_,
            Aptr<S_CommandBufferInheritanceInfo> inheritance_info_ = nullptr,
            N_CommandBufferBeginInfo next_ = {}
        ) {
            S_CommandBufferBeginInfo info(flags_.flag, inheritance_info_);
            info.set_next(next_);
            return api->vkBeginCommandBuffer(handle, info);
        }
        inL EC reset(F_CommandBufferReset flags_ = 0) {
            return api->vkResetCommandBuffer(handle, flags_.flag);
        }
        inL EC end() {
            return api->vkEndCommandBuffer(handle);
        }
        inL Si_CmdBuffer& execute() {
            api->vkCmdExecuteCommands(handle, 1, &handle);
            return *this;
        }
    public:
        inL Si_CmdBuffer& bind_pipeline(Aref<ComputePipeline> pipeline_) {
            api->vkCmdBindPipeline(handle, VK_PIPELINE_BIND_POINT_COMPUTE, pipeline_.ref.handle);
            return *this;
        }
        inL Si_CmdBuffer& bind_pipeline(Aref<GraphicsPipeline> pipeline_) {
            api->vkCmdBindPipeline(handle, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline_.ref.handle);
            return *this;
        }
        inL Si_CmdBuffer& bind_index_buffer(
            Aref<Buffer> buffer_,
            VkDeviceSize offset_,
            E_IndexType index_type_
        ) {
            api->vkCmdBindIndexBuffer(handle, buffer_->handle, offset_, index_type_);
            return *this;
        }

        inL Si_CmdBuffer& bind_vertex_buffers(
            Aref<Buffer> buffer_,
            Array_general<VkDeviceSize> offsets_,
            uint32_t first_binding_ = 0
        ) {
            api->vkCmdBindVertexBuffers(handle, first_binding_, 1, &buffer_->handle, offsets_.data());
            return *this;
        }
        //inL Si_CmdBuffer& bind_vertex_buffers(
        //    Array_general<VkBuffer> buffers_,
        //    Array_general<VkDeviceSize> offsets_,
        //    uint32_t first_binding_
        //) {
        //    api->vkCmdBindVertexBuffers(handle, first_binding_, buffers_.size(), buffers_.data(), offsets_.data());
        //    return *this;
        //}
        inL Si_CmdBuffer& bind_descriptor_sets(
            E_PipelineBindPoint pipeline_bind_point_,
            Aref<PipelineLayout> layout_,
            uint32_t first_set_,
            Array_general<VkDescriptorSet> descriptor_sets_,
            Array_general<uint32_t> dynamic_offsets_
        ) {
            api->vkCmdBindDescriptorSets(
                handle,
                pipeline_bind_point_,
                layout_->handle,
                first_set_,
                descriptor_sets_.size(),
                descriptor_sets_.data(),
                dynamic_offsets_.size(),
                dynamic_offsets_.data()
            );
            return *this;
        }
    public:
        inL Si_CmdBuffer& set_blend_constants(float const blend_[4]) {
            api->vkCmdSetBlendConstants(handle, blend_);
            return *this;
        }
        inL Si_CmdBuffer& set_depth_bias(
            float constant_factor_,
            float clamp_,
            float slop_factor_
        ) {
            api->vkCmdSetDepthBias(handle, constant_factor_, clamp_, slop_factor_);
            return *this;
        }
        inL Si_CmdBuffer& set_depth_bounds(float min_, float max_) {
            api->vkCmdSetDepthBounds(handle, min_, max_);
            return *this;
        }
        inL Si_CmdBuffer& set_device_mask(uint32_t mask_) {
            api->vkCmdSetDeviceMask(handle, mask_);
            return *this;
        }
        inL Si_CmdBuffer& set_line_width(float width_) {
            api->vkCmdSetLineWidth(handle, width_);
            return *this;
        }
        inL Si_CmdBuffer& set_scissor(
            Array_general<S_Rect2D> scissors_,
            uint32_t first_
        ) {
            api->vkCmdSetScissor(handle, first_, scissors_.size(), scissors_.data());
            return *this;
        }
        inL Si_CmdBuffer& set_stencil_compare_mask(
            F_StencilFace face_mask_,
            uint32_t compare_mask_
        ) {
            api->vkCmdSetStencilCompareMask(handle, face_mask_.flag, compare_mask_);
            return *this;
        }
        inL Si_CmdBuffer& set_stencil_write_mask(
            F_StencilFace face_mask_,
            uint32_t write_mask_
        ) {
            api->vkCmdSetStencilWriteMask(handle, face_mask_.flag, write_mask_);
            return *this;
        }
        inL Si_CmdBuffer& set_stencil_reference(
            F_StencilFace face_mask_,
            uint32_t write_mask_
        ) {
            api->vkCmdSetStencilReference(handle, face_mask_.flag, write_mask_);
            return *this;
        }
        inL Si_CmdBuffer& set_viewport(
            Array_general<S_Viewport> viewports_,
            uint32_t first_
        ) {
            api->vkCmdSetViewport(handle, first_, viewports_.size(), viewports_.data());
            return *this;
        }
    public:
        inL Si_CmdBuffer& event_set(
            Aref<Event> event_,
            F_PipelineStage stage_mask_
        ) {
            api->vkCmdSetEvent(handle, event_.ref, stage_mask_.flag);
            return *this;
        }
        inL Si_CmdBuffer& event_reset(
            Aref<Event> event_,
            F_PipelineStage stage_mask_
        ) {
            api->vkCmdResetEvent(handle, event_.ref, stage_mask_.flag);
            return *this;
        }
        inL Si_CmdBuffer& wait_events(
            Array_general<VkEvent> events_,
            F_PipelineStage src_stage_mask_,
            F_PipelineStage dst_stage_mask_,
            Array_general<S_MemoryBarrier> memory_barriers_,
            Array_general<S_BufferMemoryBarrier> buffer_memory_barries_,
            Array_general<S_ImageMemoryBarrier> image_memory_barries_
        ) {
            api->vkCmdWaitEvents(
                handle, events_.size(), events_.data(),
                src_stage_mask_.flag, dst_stage_mask_.flag,
                memory_barriers_.size(), memory_barriers_.data(),
                buffer_memory_barries_.size(), buffer_memory_barries_.data(),
                image_memory_barries_.size(), image_memory_barries_.data()
            );
            return *this;
        }
    public:
        inL Si_CmdBuffer& query_begin(
            Aref<QueryPool> query_pool_,
            uint32_t query_,
            F_QueryControl flags_
        ) {
            api->vkCmdBeginQuery(handle, query_pool_->handle, query_, flags_.flag);
            return *this;
        }
        inL Si_CmdBuffer& query_reset(
            Aref<QueryPool> query_pool_,
            uint32_t first_query_,
            uint32_t query_count_
        ) {
            api->vkCmdResetQueryPool(handle, query_pool_->handle, first_query_, query_count_);
            return *this;
        }
        inL Si_CmdBuffer& query_end(
            Aref<QueryPool> query_pool_,
            uint32_t query_
        ) {
            api->vkCmdEndQuery(handle, query_pool_->handle, query_);
            return *this;
        }
        inL Si_CmdBuffer& write_timestamp(
            F_PipelineStage pipeline_stage_,
            Aref<QueryPool> query_pool_,
            uint32_t query_
        ) {
            api->vkCmdWriteTimestamp(handle, pipeline_stage_, query_pool_->handle, query_);
            return *this;
        }
        inL Si_CmdBuffer& query_copy_results(
            Aref<QueryPool> query_pool_,
            uint32_t first_query_,
            uint32_t query_count_,
            Aref<Buffer> dst_buffer_,
            VkDeviceSize dst_offset_,
            VkDeviceSize stride_,
            F_QueryResult flags_
        ) {
            api->vkCmdCopyQueryPoolResults(
                handle,
                query_pool_->handle,
                first_query_,
                query_count_,
                dst_buffer_->handle,
                dst_offset_,
                stride_,
                flags_.flag
            );
            return *this;
        }
    public:
        inL Si_CmdBuffer& buffer_update(
            Aref<Buffer> buffer_,
            VkDeviceSize offset_,
            VkDeviceSize size_,
            void const* data_
        ) {
            api->vkCmdUpdateBuffer(handle, buffer_->handle, offset_, size_, data_);
            return *this;
        }
        inL Si_CmdBuffer& buffer_fill(
            Aref<Buffer> buffer_,
            VkDeviceSize offset_,
            VkDeviceSize size_,
            uint32_t data_
        ) {
            api->vkCmdFillBuffer(handle, buffer_->handle, offset_, size_, data_);
            return *this;
        }
        inL Si_CmdBuffer& buffer_copy_to_buffer(
            VkBuffer src_,
            VkBuffer dst_,
            Array_general<S_BufferCopy> buffer_copys_
        ) {
            api->vkCmdCopyBuffer(handle, src_, dst_, buffer_copys_.size(), buffer_copys_.data());
            return *this;
        }
        inL Si_CmdBuffer& buffer_copy_to_image(
            Aref<Buffer> src_,
            Aref<Image> dst_,
            E_ImageLayout image_layout_,
            Array_general<S_BufferImageCopy> regions_
        ) {
            api->vkCmdCopyBufferToImage(handle, src_->handle, dst_->handle, image_layout_, regions_.size(), regions_.data());
            return *this;
        }
    public:
        inL Si_CmdBuffer& image_copy(
            Aref<Image> src_, E_ImageLayout src_layout_,
            Aref<Image> dst_, E_ImageLayout dst_layout_,
            Array_general<S_ImageCopy> regions_
        ) {
            api->vkCmdCopyImage(handle, src_->handle, src_layout_, dst_->handle, dst_layout_, regions_.size(), regions_.data());
            return *this;
        }
        inL Si_CmdBuffer& image_copy_to_buffer(
            Aref<Image> src_, E_ImageLayout src_image_layout_,
            Aref<Buffer> dst_,
            Array_general<S_BufferImageCopy> regions_
        ) {
            api->vkCmdCopyImageToBuffer(
                handle, src_->handle, src_image_layout_,
                dst_->handle, regions_.size(), regions_.data()
            );
            return *this;
        }
        inL Si_CmdBuffer& image_clear_color(
            Aref<Image> image_, E_ImageLayout image_layout_,
            VkClearColorValue const& color_,
            Array_general<S_ImageSubresourceRange> ranges_
        ) {
            api->vkCmdClearColorImage(handle, image_->handle, image_layout_, &color_, ranges_.size(), ranges_.data());
            return *this;
        }
        inL Si_CmdBuffer& image_clear_depth_stencil(
            Aref<Image> image_, E_ImageLayout image_layout_,
            Aref<S_ClearDepthStencilValue> depth_stencil_,
            Array_general<S_ImageSubresourceRange> ranges_
        ) {
            api->vkCmdClearDepthStencilImage(handle, image_->handle, image_layout_, depth_stencil_.ref, ranges_.size(), ranges_.data());
            return *this;
        }
        inL Si_CmdBuffer& image_blit(
            Aref<Image> src_, E_ImageLayout src_layout_,
            Aref<Image> dst_, E_ImageLayout dst_layout_,
            Array_general<S_ImageBlit> regions_,
            E_Filter filter_
        ) {
            api->vkCmdBlitImage(handle, src_->handle, src_layout_, dst_->handle, dst_layout_, regions_.size(), regions_.data(), filter_);
            return *this;
        }
        inL Si_CmdBuffer& image_resolve(
            Aref<Image> src_, E_ImageLayout src_layout_,
            Aref<Image> dst_, E_ImageLayout dst_layout_,
            Array_general<S_ImageResolve> regions_
        ) {
            api->vkCmdResolveImage(handle, src_->handle, src_layout_, dst_->handle, dst_layout_, regions_.size(), regions_.data());
            return *this;
        }
    public:
        inL Si_CmdBuffer& render_pass_begin(
            Aref<S_RenderPassBeginInfo> begin_info_,
            E_SubpassContents contents_
        ) {
            api->vkCmdBeginRenderPass(handle, begin_info_, contents_);
            return *this;
        }
        inL Si_CmdBuffer& next_subpass(E_SubpassContents contents_) {
            api->vkCmdNextSubpass(handle, contents_);
            return *this;
        }
        inL Si_CmdBuffer& render_pass_end() {
            api->vkCmdEndRenderPass(handle);
            return *this;
        }
    public:
        inL Si_CmdBuffer& clear_attachments(
            Array_general<S_ClearAttachment> attachments_,
            Array_general<S_ClearRect> rects_
        ) {
            api->vkCmdClearAttachments(handle, attachments_.size(), attachments_.data(), rects_.size(), rects_.data());
            return *this;
        }
    public:
        inL Si_CmdBuffer& dispatch(
            uint32_t group_count_x_,
            uint32_t group_count_y_,
            uint32_t group_count_z_
        ) {
            api->vkCmdDispatch(handle, group_count_x_, group_count_y_, group_count_z_);
            return *this;
        }
        inL Si_CmdBuffer& dispatch_base(
            uint32_t base_group_x_,
            uint32_t base_group_y_,
            uint32_t base_group_z_,
            uint32_t group_count_x_,
            uint32_t group_count_y_,
            uint32_t group_count_z_
        ) {
            api->vkCmdDispatchBase(handle, base_group_x_, base_group_y_, base_group_z_, group_count_x_, group_count_y_, group_count_z_);
            return *this;
        }
        inL Si_CmdBuffer& dispatch_indirect(
            Aref<Buffer> buffer_,
            VkDeviceSize offset_
        ) {
            api->vkCmdDispatchIndirect(handle, buffer_->handle, offset_);
            return *this;
        }
        inL Si_CmdBuffer& draw(
            uint32_t vertex_count_,
            uint32_t first_vertex_,
            uint32_t instance_count_,
            uint32_t first_instance_
        ) {
            api->vkCmdDraw(handle, vertex_count_, instance_count_, first_vertex_, first_instance_);
            return *this;
        }
        inL Si_CmdBuffer& draw_indexed(
            uint32_t index_count_,
            uint32_t first_index_,
            uint32_t instance_count_,
            uint32_t first_instance_,
            uint32_t vertex_offset_
        ) {
            api->vkCmdDrawIndexed(handle, index_count_, instance_count_, first_index_, vertex_offset_, first_instance_);
            return *this;
        }
        inL Si_CmdBuffer& draw_indexed_indirect(
            Aref<Buffer> buffer_,
            VkDeviceSize offset_,
            uint32_t draw_count_,
            uint32_t stride_
        ) {
            api->vkCmdDrawIndexedIndirect(handle, buffer_->handle, offset_, draw_count_, stride_);
            return *this;
        }
        inL Si_CmdBuffer& draw_indirect(
            Aref<Buffer> buffer_,
            VkDeviceSize offset_,
            uint32_t draw_count_,
            uint32_t stride_
        ) {
            api->vkCmdDrawIndirect(handle, buffer_->handle, offset_, draw_count_, stride_);
            return *this;
        }
    public:
        inL Si_CmdBuffer& pipeline_barrier(
            F_PipelineStage src_stage_mask_,
            F_PipelineStage dst_stage_mask_,
            F_Dependency dependency_flags_,
            Array_general<S_MemoryBarrier> memory_barriers_,
            Array_general<S_BufferMemoryBarrier> buffer_memory_barriers_,
            Array_general<S_ImageMemoryBarrier> image_memory_barriers_
        ) {
            api->vkCmdPipelineBarrier(
                handle,
                src_stage_mask_.flag,
                dst_stage_mask_.flag,
                dependency_flags_.flag,
                memory_barriers_.size(),
                memory_barriers_.data(),
                buffer_memory_barriers_.size(),
                buffer_memory_barriers_.data(),
                image_memory_barriers_.size(),
                image_memory_barriers_.data()
            );
            return *this;
        }
        inL Si_CmdBuffer& push_constants(
            Aref<PipelineLayout> layout_,
            F_ShaderStage stage_flags_,
            uint32_t offset_,
            uint32_t size_,
            void const* values_
        ) {
            api->vkCmdPushConstants(handle, layout_->handle, stage_flags_.flag, offset_, size_, values_);
            return *this;
        }
    };
    class CmdBuffer :public B<Si_CmdBuffer> {
    public:
        using Sptr = Sp<CmdBuffer>;
        using B::B;
        inL ~CmdBuffer() {
            CODE_POS; 
            founder_ptr->founder_ptr->api.vkFreeCommandBuffers(founder_ptr->founder_ptr->handle, founder_ptr->handle, 1, &handle);
        }
    };
    class SG_CmdBuffer :public SG<Si_CmdBuffer> {
    public:
        using SG::SG;
        inL void reset(F_CommandBufferReset flags_ = 0) {
            auto func = founder_ptr->founder_ptr->api.vkResetCommandBuffer;
            for(auto&& handle : handles){
                EC ec = func(handle, flags_.flag);
                ec.check();
            }
        }
    };
    class G_CmdBuffer :public G<CmdBuffer, SG_CmdBuffer> {
    public:
        using Sptr = Sp<G_CmdBuffer>;
        using G::G;
        inL ~G_CmdBuffer() {
            CODE_POS;
            founder_ptr->founder_ptr->api.vkFreeCommandBuffers(
                founder_ptr->founder_ptr->handle,
                founder_ptr->handle, 
                static_cast<uint32_t>(handles.size()), 
                handles.data()
            );
        }
    };



}   // namespace vk
}   // namespace dawn






