# include "../glslang/SPIRV/GlslangToSpv.h"
# include "dawn/vk/vk.hpp"
# include "dawn/vk/manual_xtable.hpp"

# include <iostream>
# include <fstream>

# include <algorithm>


/*
待办
    选择队列族有没有控制力更强的方式?
    多个同一设备组的物理设备创建逻辑设备
    A logical device can be created that connects to one or more physical devices by adding a VkDeviceGroupDeviceCreateInfo structure to the pNext chain of VkDeviceCreateInfo.
    The VkDeviceGroupDeviceCreateInfo structure is defined as:
*/
namespace dawn { namespace vk{


# define X_def_global_api(name__) static PFN_##name__ name__;
    Xt_vk_api_global(X_def_global_api);

    static VKAPI_ATTR VkBool32 VKAPI_CALL debug_callback(
        VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity
        , VkDebugUtilsMessageTypeFlagsEXT messageType
        , const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData
        , void* pUserData
    ) {
        info_show << "验证层: " << pCallbackData->pMessage;
        return VK_FALSE;
    }
    inL std::string version_str(uint32_t version_) {
        std::string s;
        s += std::to_string(VK_VERSION_MAJOR(version_));
        s += '.';
        s += std::to_string(VK_VERSION_MINOR(version_));
        s += '.';
        s += std::to_string(VK_VERSION_PATCH(version_));
        return std::move(s);
    }
    inL uint32_t get_instance_version() {
        uint32_t version;
        auto ret = vkEnumerateInstanceVersion(&version);
        if (ret < 0) {
            dbg_show << "无法获取实例版本";
            return 0;
        }
        return version;
    }

    class Layer_properties {
    public:
        std::vector<VkLayerProperties> properties;
        std::vector<std::vector<VkExtensionProperties>> extension_properties;
    public:
        Layer_properties()
            :properties(0)
            , extension_properties(0) {}
        void init() {
            uint32_t count;
            EC ret = vkEnumerateInstanceLayerProperties(&count, nullptr);
            ret.check();
            ret.show();
            if_show(count >= 0, "vulkan所支持的层的数量为:" << count);
            properties.resize(count);
            vkEnumerateInstanceLayerProperties(&count, &properties[0]);
            extension_properties.resize(count);
        }
    };
    static Layer_properties layer_properties;
    class Extension_properties {
    public:
        std::vector<VkExtensionProperties> properties;
    public:
        Extension_properties() :properties(0) {}
        void init() {
            auto layer_count = layer_properties.properties.size();
            for (size_t i = 0; i < layer_count; ++i) {
                uint32_t count = 0;
                EC ret = vkEnumerateInstanceExtensionProperties(
                    layer_properties.properties[i].layerName, &count, nullptr
                );
                ret.check();
                dbg_show<<layer_properties.properties[i].layerName << " 扩展层数量:" << count;
                if (count <= 0) continue;

                layer_properties.extension_properties[i].resize(count);
                ret = vkEnumerateInstanceExtensionProperties(
                    layer_properties.properties[i].layerName,
                    &count,
                    &layer_properties.extension_properties[i][0]
                );
                ret.check();
                dbg_show << layer_properties.properties[i].layerName << " 层所有扩展:";
            # if _DEBUG
                for (auto& x : layer_properties.extension_properties[i]) {
                    dbg_show<<"\t" << x.extensionName;
                }
            # endif
            }
            uint32_t count = 0;
            EC ret = vkEnumerateInstanceExtensionProperties(nullptr, &count, nullptr);
            ret.check();
            if_show(count >= 0, "总扩展属性数量:" << count);
            properties.resize(count);
            if (count > 0) {
                ret = vkEnumerateInstanceExtensionProperties(nullptr, &count, &properties[0]);
                ret.check();
                ret.show();
            }
        # ifdef _DEBUG
            dbg_show<<"所有扩展属性:";
            for (auto& itr : properties) {
                dbg_show << "\t名称: " << itr.extensionName << "\t版本:" << version_str(itr.specVersion);
            }
        # endif
        }
    };
    static Extension_properties extension_properties;

    void init() {
        vk_module_handle = dawn_module::get_new("vulkan-1.dll");
        vkGetInstanceProcAddr = vk_module_handle->load<PFN_vkGetInstanceProcAddr>("vkGetInstanceProcAddr");
    # define X_get_global_api_address(name__) \
            name__ = (PFN_##name__)vkGetInstanceProcAddr(nullptr,#name__);\
            if (name__ != NULL) dbg_show<<"成功获得函数 "#name__" 地址:"<<(void*)name__;\
            else err_show<<"获取函数 "#name__" 失败!";
        Xt_vk_api_global(X_get_global_api_address);
    # undef X_get_global_api_address
        layer_properties.init();
        extension_properties.init();
    }

    uint32_t Physical_device::get_memory_type_index(uint32_t type_bits_, F_MemoryProperty ppt_) {
        for (uint32_t i = 0; i < memory_properties.memoryProperties.memoryTypeCount && type_bits_; ++i) {
            if ((type_bits_ & 1) == 1) {
                if ((memory_properties.memoryProperties.memoryTypes[i].propertyFlags & ppt_.flag) == ppt_.flag) {
                    return i;
                }
            }
            type_bits_ >>= 1;
        }
        return -1;
    }

    Instance::Sptr Instance::create(Creator c_) {
        S_ApplicationInfo app_info(
            c_.app_name,
            c_.app_version,
            c_.engine_name,
            c_.engine_version,
            c_.api_version
        );
        S_InstanceCreateInfo info(
            0,
            &app_info,
            c_.enabled_layer_names,
            c_.enabled_extension_names
        );
        info.set_next(c_.next);

        auto x = sizeof(VkInstanceCreateInfo) == sizeof(S_InstanceCreateInfo);

        VkInstance ist_handle;
        EC ret = vkCreateInstance(
            info,
            alloc_cb_ptr,
            &ist_handle
        );
        ret.check();
        auto sptr = std::make_shared<Instance>();
        auto& ist = *sptr;
        ist.handle = ist_handle;

    # define X_load_instance_api(name__) \
            ist.api.name__ = (PFN_##name__)vkGetInstanceProcAddr(ist.handle,#name__);\
            if (ist.api.name__ != NULL) dbg_show<<"成功获得函数 "#name__" 地址:"<<(void*)ist.api.name__;\
            else err_show<<"获取函数 "#name__" 失败!";
        Xt_vk_api_all_instance_api(X_load_instance_api);

    # undef X_load_instance_api

        uint32_t count = 0;
        ret = ist.api.vkEnumeratePhysicalDevices(ist.handle, &count, nullptr);
        ret.check();
        dbg_show<<"物理设备数量: " << count;
        if (count <= 0) {
            err_show << "没有合适的设备";
            abort();
        }
        ist.physical_devices.resize(count);

        std::vector<VkPhysicalDevice> phydev_handles_temp;
        phydev_handles_temp.resize(count);
        ret = ist.api.vkEnumeratePhysicalDevices(ist.handle, &count, &phydev_handles_temp[0]);
        ret.check();
        for (size_t i = 0; i < phydev_handles_temp.size(); ++i) {
            auto& pd = ist.physical_devices[i];
            pd.ist_ptr = &ist;
            pd.handle = phydev_handles_temp[i];
            uint32_t count = 0;
            pd.api = &ist.api;
            pd.api->vkGetPhysicalDeviceFeatures2(pd, pd.features);
            pd.api->vkGetPhysicalDeviceProperties2(pd, pd.properties);
            pd.api->vkGetPhysicalDeviceMemoryProperties2(pd, pd.memory_properties);

            auto pd_memory_type_count = pd.memory_properties.memoryProperties.memoryTypeCount;
            pd.memory_types.resize(pd_memory_type_count);
            for (size_t j = 0; j < pd_memory_type_count; ++j) {
                auto& ppt = pd.memory_properties.memoryProperties;
                auto& heap_info = ppt.memoryHeaps[ppt.memoryTypes[j].heapIndex];
                pd.memory_types[j] = {
                    (uint32_t)j,
                    F_MemoryProperty(ppt.memoryTypes[j].propertyFlags),
                    ppt.memoryTypes[j].heapIndex,
                    heap_info.size,
                    F_MemoryHeap(heap_info.flags)
                };
            }
            count = 0;
            ret = pd.api->vkEnumerateDeviceLayerProperties(pd, &count, nullptr);
            ret.check();
            if (count > 0) {
                pd.layer_properties.resize(count);
                pd.api->vkEnumerateDeviceLayerProperties(pd, &count, pd.layer_properties[0]);
            }
            count = 0;
            pd.api->vkGetPhysicalDeviceQueueFamilyProperties2(pd, &count, nullptr);
            if (count > 0) {
                pd.qf_ppts.resize(count);
                pd.api->vkGetPhysicalDeviceQueueFamilyProperties2(pd, &count, pd.qf_ppts[0]);
            }
            auto& qf_ppt = pd.get_queue_family_properties();
            pd.qf_infos.resize(qf_ppt.size());

            for (size_t i = 0; i < qf_ppt.size(); ++i) {
                auto& a_qf = qf_ppt[i];
                pd.qf_infos[i].index = static_cast<uint32_t>(i);
                pd.qf_infos[i].properties = a_qf.queueFamilyProperties;
            }
        # ifdef _DEBUG
            auto& pd_info = pd.get_properties();
            dbg_show<<
                "设备:" << pd_info.properties.deviceName <<
                "\tapi版本:" << version_str(pd_info.properties.apiVersion) <<
                "\t驱动版本:" << version_str(pd_info.properties.driverVersion)
                ;
        # endif
        }
        count = 0;
        ret = ist.api.vkEnumeratePhysicalDeviceGroups(ist.handle, &count, nullptr);
        ret.check();
        dbg_show<<"设备组数量: " << count;
        if (count > 0) {
            std::vector<S_PhysicalDeviceGroupProperties> pd_groups_temp(count);
            ist.api.vkEnumeratePhysicalDeviceGroups(ist.handle, &count, pd_groups_temp[0]);
        # ifdef _DEBUG
            for (auto&& pdg : pd_groups_temp) {
                dbg_show<<"\t设备数量:" << pdg.physicalDeviceCount;
            }
        # endif
            // 待办: 设备组的抽象
        }

        auto ename_ptr = c_.enabled_extension_names.data();
        auto enume_num = c_.enabled_extension_names.size();
        bool enable_debug = false;
        for (decltype(enume_num) i = 0; i < enume_num; i++) {
            if (strcmp(ename_ptr[i], VK_EXT_DEBUG_UTILS_EXTENSION_NAME) == 0) {
                enable_debug = true;
                break;
            }
        }
        if (enable_debug) {
            F_DebugUtilsMessageSeverityEXT fb;
            fb.on_verbose_ext().on_error_ext().on_warning_ext();
            S_DebugUtilsMessengerCreateInfoEXT dbg_msg_ci(
                0
                , fb.flag
                , F_DebugUtilsMessageTypeEXT::all_bits
                , debug_callback
            );
            ret = sptr->api.vkCreateDebugUtilsMessengerEXT(sptr->handle, dbg_msg_ci, alloc_cb_ptr, &sptr->dbg_messager);
            ret.check();
        }
        return std::move(sptr);
    }

# if VK_KHR_surface
    Sp<Surface> Instance::surface(Surface_ci& ci_) {
        auto surface_handle = detail::create_vk_obj<VkSurfaceKHR>(api.vk_api_surface_create, *this, ci_);
        auto ist = shared_from_this();
        return std::move(std::make_shared<Surface>(ist, surface_handle));
    }
# endif

    Si_Device::Si_Device(Aref<Instance> ist_, VkDevice handle_) 
        :api(),Si(&ist_.ref,handle_)
    {
        auto vk_device_api_load = ist_->api.vkGetDeviceProcAddr;
    # define m_load_device_api(name__) \
            api.name__ = (PFN_##name__)vk_device_api_load(handle, #name__);\
            if(api.name__ == nullptr) err_show << "加载 " #name__ " 失败";\
            else dbg_show <<"加载 "#name__" 成功";
        Xt_vk_api_device(m_load_device_api);
    # undef m_load_device_api
    }

    Device::Device(
        Instance::Sptr&& ist_sptr_,
        Handle_t handle_,
        Array_general<Physical_device*> pds_,
        Array_general<User_choose> choose_info_
    )   :B(ist_sptr_, handle_)
    {
        CODE_POS;
        physical_devices.resize(pds_.size());
        for (size_t i = 0; i < pds_.size(); ++i) {
            physical_devices[i] = pds_.data()[i];
        }
        if (choose_info_.size() < 0) {
            wrn_show<<"用户没有给出用户队列信息";
            return;
        }
        q_familys.resize(choose_info_.size());
        for (uint32_t i = 0; i < choose_info_.size(); ++i) {
            auto& curr_choose_info = choose_info_.data()[i];
            q_familys[i].properties = physical_devices[0]->qf_ppts[curr_choose_info.qf_index].queueFamilyProperties;
            q_familys[i].index = curr_choose_info.qf_index;
            q_familys[i].queues.resize(curr_choose_info.q_ppts.size());
            for (uint32_t j = 0; j < q_familys[i].queues.size(); ++j) {
                auto& q = q_familys[i].queues[j];
                q.api = &api;
                q.index = j;
                q.qf_index = q_familys[i].index;
                api.vkGetDeviceQueue(handle, q.qf_index, q.index, &q.handle);
            }
        }
    }

    Device::Device(
        Instance::Sptr&& ist_sptr_,
        Handle_t handle_,
        Array_general<Physical_device*> pds_,
        detail::Device_creator& ci
    ) :B(ist_sptr_, handle_) {
        CODE_POS;
        physical_devices.resize(pds_.size());
        for (size_t i = 0; i < pds_.size(); ++i) {
            physical_devices[i] = pds_.data()[i];
        }
        if (ci.qfs_ci.size() < 0) {
            wrn_show << "用户没有给出用户队列信息";
            return;
        }
        q_familys.resize(ci.qfs_ci.size());
        for (uint32_t i = 0; i < ci.qfs_ci.size(); ++i) {
            auto& curr_choose_info = ci.qfs_ci.data()[i];
            q_familys[i].properties = physical_devices[0]->qf_ppts[curr_choose_info.qf_index].queueFamilyProperties;
            q_familys[i].index = curr_choose_info.qf_index;
            q_familys[i].queues.resize(curr_choose_info.queuePriorities.size());
            for (uint32_t j = 0; j < q_familys[i].queues.size(); ++j) {
                auto& q = q_familys[i].queues[j];
                q.api = &api;
                q.index = j;
                q.qf_index = q_familys[i].index;
                api.vkGetDeviceQueue(handle, q.qf_index, q.index, &q.handle);
            }
        }
    }

    Sp<Device> Instance::device(detail::Creator_devcie dev_creator_) {
        dbg_show<<"挑选设备:";
        for (auto&& pd : physical_devices) {
            if (dev_creator_.choose_pd_callback(pd) == false) {
                wrn_show<<"设备 " << pd.properties.properties.deviceName << " 不合适";
                continue;
            }
            auto qf_infos = pd.qf_infos;
            for (auto& qf_info : qf_infos) {
                qf_info.is_support_your_surface.resize(dev_creator_.surfaces.size());
                for (size_t i = 0; i < dev_creator_.surfaces.size(); ++i) {
                    auto surface_ptr = dev_creator_.surfaces.data()[i];
                    qf_info.is_support_your_surface[i] = surface_ptr->is_pd_support(pd, qf_info.index);
                }
            }
            std::vector<User_choose> user_choose_info(0);
            QF_info_for_choose choose_info{ qf_infos, user_choose_info };
            if (dev_creator_.choose_qf_callback(choose_info) == false) {
                wrn_show<<"用户认为 " << pd.properties.properties.deviceName << " 设备没有合适的队列";
                continue;
            }
            dbg_show<<"选取了合适的设备与队列";
            std::vector<S_DeviceQueueCreateInfo> q_create_infos(user_choose_info.size());
            std::vector<S_DeviceQueueGlobalPriorityCreateInfoEXT> q_gpci_ext(user_choose_info.size());
            for (size_t i = 0; i < user_choose_info.size(); ++i) {
                void* pnext;
                if (user_choose_info[i].q_global_priority.flag == 0) {
                    pnext = nullptr;
                }
                else {
                    pnext = &q_gpci_ext[i];
                    q_gpci_ext[i].globalPriority = user_choose_info[i].q_global_priority;
                }
                q_create_infos[i].flags = user_choose_info[i].create_flags.flag;
                q_create_infos[i].queueFamilyIndex = user_choose_info[i].qf_index;

                auto max_q_count_temp = qf_infos[user_choose_info[i].qf_index].properties.queueCount;
                if (user_choose_info[i].q_ppts.size() > max_q_count_temp) {
                    user_choose_info[i].q_ppts.resize(max_q_count_temp);
                }
                q_create_infos[i].queueCount = static_cast<uint32_t>(user_choose_info[i].q_ppts.size());

                q_create_infos[i].pQueuePriorities = user_choose_info[i].q_ppts.data();
            }
            S_DeviceCreateInfo device_ci(
                0,
                q_create_infos,
                {},
                dev_creator_.enabled_extensions,
                dev_creator_.features
            );
            auto dev_handle = detail::create_vk_obj<VkDevice>(api.vkCreateDevice, pd, device_ci);

            Array_general<Physical_device*> pds{ &pd };
            return std::move(std::make_shared<Device>(std::move(shared_from_this()), dev_handle, pds, user_choose_info));
        }
        std::shared_ptr<Device> sptr;
        return std::move(sptr);
    }
    bool detail::QueueFamily_CreateInfo::is_support(Physical_device& pd, QF_info& info_) {
        if (info_.properties.queueCount < queueCount) {
            return false;
        }
        if (info_.properties.timestampValidBits < timestampValidBits) {
            return false;
        }
        if (info_.properties.minImageTransferGranularity.width < minImageTransferGranularity.width) {
            return false;
        }
        if (info_.properties.minImageTransferGranularity.height < minImageTransferGranularity.height) {
            return false;
        }
        if (info_.properties.minImageTransferGranularity.depth < minImageTransferGranularity.depth) {
            return false;
        }
        if (((!info_.properties.queueFlags) & queueFlags) != 0) {
            return false;
        }
        for (auto surface_ptr : surfaces) {
            if (surface_ptr->is_pd_support(pd, info_.index) == false) {
                wrn_show << info_.index << " QueueFamily 不支持 surface";
                return false;
            };
        }
        return true;
    }
    Sp<Device> Instance::device(detail::Device_creator dev_creator_) {
        dbg_show << "挑选设备:";
        for (auto&& pd : physical_devices) {
            auto dev_name = pd.properties.properties.deviceName;
            if (dev_creator_.choose_pd_callback(pd) == false) {
                wrn_show << "设备 " << dev_name << " 不合适";
                continue;
            }
            dbg_show << dev_name << "检测设备是否合适";
            if (pd.qf_infos.size() < dev_creator_.qfs_ci.size()) {
                wrn_show << "队列族数量不够";
                continue;
            }
            std::vector<std::vector<bool>> support_table(dev_creator_.qfs_ci.size());
            for (size_t i = 0; i < dev_creator_.qfs_ci.size(); ++i){
                support_table[i].resize(0);
                for (auto& qf_info : pd.qf_infos) {
                    support_table[i].push_back(dev_creator_.qfs_ci[i].is_support(pd, qf_info));
                }
            }
            dbg_show << dev_name << "寻找一个可用排列";
            std::vector<size_t> comb(pd.qf_infos.size());
            for (size_t i = 0; i < comb.size(); ++i) {
                comb[i] = i;
            }
            bool is_ok = false;
            do {
                bool is_ok2 = true;
                for (size_t i = 0; i < dev_creator_.qfs_ci.size(); ++i) {
                    auto j = comb[i];
                    if (support_table[i][j] == false) {
                        is_ok2 = false;
                        break;
                    }
                }
                is_ok = is_ok2;
            }while(is_ok == false && std::next_permutation(comb.begin(),comb.end()));
            if (is_ok == false) {
                wrn_show << dev_name << "队列族无法满足选择条件";
                continue;
            }
            dbg_show << "存在满足条件的队列族";
            std::vector<S_DeviceQueueCreateInfo> q_create_infos(dev_creator_.qfs_ci.size());
            for (size_t i = 0; i < dev_creator_.qfs_ci.size(); ++i) {
                dev_creator_.qfs_ci[i].qf_index = comb[i];
                q_create_infos[i].flags = dev_creator_.qfs_ci[i].create_flags;
                q_create_infos[i].queueFamilyIndex = dev_creator_.qfs_ci[i].qf_index;
                q_create_infos[i].queueCount = dev_creator_.qfs_ci[i].queuePriorities.size();
                q_create_infos[i].pQueuePriorities = dev_creator_.qfs_ci[i].queuePriorities.data();
            }
            S_DeviceCreateInfo ci(
                0,
                q_create_infos,
                {},
                dev_creator_.enabled_extensions,
                dev_creator_.features
            );
            auto dev_handle = detail::create_vk_obj<VkDevice>(api.vkCreateDevice, pd, ci);

            Array_general<Physical_device*> pds{ &pd };
            return std::move(std::make_shared<Device>(std::move(shared_from_this()), dev_handle, pds, dev_creator_));
        }
        std::shared_ptr<Device> sptr;
        return std::move(sptr);
    }

# if defined(VK_KHR_SWAPCHAIN_EXTENSION_NAME)
    Sp<Swapchain> Device::swapchain(
        Sp<Surface>& surface_,
        detail::Creator_swapchain c_
    ) {
        auto capabilities = surface_->get_capabilities(physical_devices[0]);
        auto formats = surface_->get_formats(physical_devices[0]);
        auto present_modes = surface_->get_present_modes(physical_devices[0]);
        S_SwapchainCreateInfoKHR ci_;
    # undef max
    # undef min
        if (ci_.imageExtent.width == ~uint32_t(0) || ci_.imageExtent.width == 0) {
            ci_.imageExtent.width = capabilities.currentExtent.width;
        }
        if (ci_.imageExtent.height == ~uint32_t(0) || ci_.imageExtent.height == 0) {
            ci_.imageExtent.height = capabilities.currentExtent.height;
        }
        ci_.imageExtent.width = std::max(capabilities.minImageExtent.width,
            std::min(capabilities.maxImageExtent.width, c_.extent.width));
        ci_.imageExtent.height = std::max(capabilities.minImageExtent.height,
            std::min(capabilities.maxImageExtent.height, c_.extent.height));
        if (E_Format::e_undefined == formats[0].format) {
            /*
            Vulkan 通过返回一个 format 成员变量值为 VK_FORMAT_UNDEFINED的 VkSurfaceFormatKHR
            表明表面没有自己的首选格式，这时，我们直接返回我们设定的格式.
            */
            ci_.imageFormat = c_.formats.data()[0];
            ci_.imageColorSpace = formats[0].colorSpace; // 待办
        }
        else {
            bool format_choosed = false;
            // 按参数的书写次序 对格式进行匹配
            for (size_t i = 0; i < c_.formats.size(); ++i) {
                auto f = c_.formats.data()[i];
                for (auto&& it : formats) {
                    it.format = f; // ?
                    ci_.imageFormat = it.format;
                    ci_.imageColorSpace = it.colorSpace;
                    format_choosed = true;
                    break;
                }
            }
            // 如果书写的格式中全都没有 再使用vk所反馈的第一个格式
            if (format_choosed == false) {
                ci_.imageFormat = formats[0].format;
                ci_.imageColorSpace = formats[0].colorSpace;
            }
        }
        bool present_mode_choosed = false;
        for (size_t i = 0; i < c_.present_modes.size(); ++i) {
            auto pm = c_.present_modes.data()[i];
            for (auto&& it : present_modes) {
                if (pm.flag == it.flag) {
                    ci_.presentMode = it;
                    present_mode_choosed = true;
                    break;
                }
            }
        }
        if (present_mode_choosed == false) {
            ci_.presentMode = E_PresentModeKHR::e_fifo_khr;
        }
        if (c_.min_image_count < 0) {
            ci_.minImageCount = capabilities.maxImageCount;
        }
        else if (c_.min_image_count == 0) {
            ci_.minImageCount = capabilities.minImageCount + 1;
        }
        else {
            ci_.minImageCount = std::min((uint32_t)c_.min_image_count, capabilities.minImageCount);
        }
        ci_.imageArrayLayers = c_.image_array_layers;
        ci_.imageUsage = c_.image_usage.flag;
        ci_.flags = 0;
        ci_.surface = surface_->handle;
        // 待办 呈现队列是否应该在device创建时由用户明确规划?
        ci_.queueFamilyIndexCount = static_cast<uint32_t>(c_.qf_indexs.size());
        ci_.pQueueFamilyIndices = c_.qf_indexs.data();
        ci_.imageSharingMode =
            ci_.queueFamilyIndexCount == 0 ? E_SharingMode::e_exclusive : E_SharingMode::e_concurrent;
        ci_.compositeAlpha = c_.composite_alpha;
        if (c_.transform.flag == ~F_SurfaceTransformKHR::OEtype(0) || c_.transform.flag == 0) {
            ci_.preTransform = capabilities.currentTransform;
        }
        else {
            ci_.preTransform = c_.transform;
        }
        ci_.clipped = c_.clipped ? VK_TRUE : VK_FALSE;
        ci_.oldSwapchain = VK_NULL_HANDLE;
        auto swapchain_handle 
            = detail::create_vk_obj<VkSwapchainKHR>(api.vkCreateSwapchainKHR, *this, ci_);
        auto sfc = surface_;
        return std::move(
            std::make_shared<Swapchain>(shared_from_this(), std::move(sfc), ci_, swapchain_handle)
        );
    }
# endif

    Swapchain::Swapchain(
        Device::Sptr&& dev_sptr,
        Surface::Sptr&& surface_sptr_,
        S_SwapchainCreateInfoKHR& ci_,
        VkSwapchainKHR handle_
    ) :B(dev_sptr, handle_)
    , surface_sptr(std::move(surface_sptr_))
    , ci(ci_)
    { }

    Sp<ImageViewsFromSwapchain> Swapchain::image_views(
        S_ComponentMapping components_,
        S_ImageSubresourceRange subresource_range_
    ) {
        S_ImageViewCreateInfo ci;
        ci.flags = 0;
        ci.components = components_;
        ci.subresourceRange = subresource_range_;
        ci.viewType = E_ImageViewType::e_2d;
        auto result = std::make_shared<ImageViewsFromSwapchain>(shared_from_this(), ci);
        auto ptr = result.get();
        on_construct_chain.add(result, [=]() { ptr->construct(); });
        on_clear_chain.add(result, [=]() { ptr->clear(); });
        return std::move(result);
    }

    void ImageViewsFromSwapchain::construct() {
        ci.format = founder_sptr->ci.imageFormat;
        auto create_func = founder_sptr->founder_ptr->api.vkCreateImageView;
        auto dev_handle = founder_sptr->founder_ptr->handle;

        auto images = founder_sptr->sg_images();
        handles.resize(images.handles.size());
        for (size_t i = 0; i < handles.size(); ++i) {
            ci.image = images.handles[i];
            EC ret = create_func(dev_handle, ci, alloc_cb_ptr, &handles[i]);
            ret.check();
        }
        on_construct_chain();
    }
    void ImageViewsFromSwapchain::clear() {
        on_clear_chain();
        auto destroy_func = founder_sptr->founder_ptr->api.vkDestroyImageView;
        auto dev_handle = founder_sptr->founder_ptr->handle;
        for (auto&& handle : handles) {
            destroy_func(dev_handle, handle, alloc_cb_ptr);
        }
        handles.resize(0);
    }

    void FramebuffersFromSwapchain::construct() {
        auto create_func = founder_ptr->api.vkCreateFramebuffer;
        auto dev_handle = founder_ptr->handle;
        S_FramebufferCreateInfo ci(
            0,
            render_pass_sptr->handle,
            { VK_NULL_HANDLE },
            image_views_sptr->founder_sptr->ci.imageExtent.width,
            image_views_sptr->founder_sptr->ci.imageExtent.height,
            1 // 待办
        );
        handles.resize(image_views_sptr->handles.size());
        for (size_t i = 0; i < handles.size(); ++i) {
            ci.pAttachments = &image_views_sptr->handles[i];
            EC ret = create_func(dev_handle, ci, alloc_cb_ptr, &handles[i]);
            ret.check();
        }
    }

    void FramebuffersFromSwapchain::clear() {
        auto fhandle = founder_ptr->handle;
        auto func = founder_ptr->api.vkDestroyFramebuffer;
        for (size_t i = 0; i < handles.size(); ++i) {
            func(fhandle, handles[i], alloc_cb_ptr);
        }
        handles.resize(0);
    }


    Sp<Event> Device::event() {
        S_EventCreateInfo ci;
        auto handle = detail::create_vk_obj<VkEvent>(api.vkCreateEvent, *this, ci);
        return std::move(std::make_shared<Event>(shared_from_this(),handle));
    }

    Sp<G_Event> Device::event(size_t count_) {
        S_EventCreateInfo ci;
        Sp<G_Event> result = std::make_shared<G_Event>(shared_from_this());
        detail::create_vk_obj<VkEvent>(api.vkCreateEvent, *this, ci, result->handles, count_);
        return std::move(result);
    }

    Sp<Semaphore> Device::semaphore(N_SemaphoreCreateInfo next_) {
        S_SemaphoreCreateInfo ci;
        ci.set_next(next_);
        auto handle = detail::create_vk_obj<VkSemaphore>(api.vkCreateSemaphore, *this, ci);
        return std::move(std::make_shared<Semaphore>(shared_from_this(), handle));
    }

    Sp<G_Semaphore> Device::semaphore(
        size_t count_,
        N_SemaphoreCreateInfo next_
    ) {
        S_SemaphoreCreateInfo ci;
        ci.set_next(next_);
        Sp<G_Semaphore> result = std::make_shared<G_Semaphore>(shared_from_this());
        detail::create_vk_obj<VkSemaphore>(api.vkCreateSemaphore, *this, ci, result->handles, count_);
        return std::move(result);
    }

    Sp<Fence> Device::fence(
        F_FenceCreate flags_,
        N_FenceCreateInfo next_
    ) {
        S_FenceCreateInfo ci(flags_.flag);
        ci.set_next(next_);
        auto handle = detail::create_vk_obj<VkFence>(api.vkCreateFence, *this, ci);
        return std::move(std::make_shared<Fence>(shared_from_this(), handle));
    }

    Sp<G_Fence> Device::fence(
        size_t count_,
        F_FenceCreate flags_,
        N_FenceCreateInfo next_
    ) {
        S_FenceCreateInfo ci(flags_.flag);
        ci.set_next(next_);
        Sp<G_Fence> result = std::make_shared<G_Fence>(shared_from_this());
        detail::create_vk_obj<VkFence>(api.vkCreateFence, *this, ci, result->handles, count_);
        return std::move(result);
    }

    Sp<DeviceMemory> Device::memory(
        uint32_t memory_type_index_,
        VkDeviceSize size_
    ) {
        S_MemoryAllocateInfo ci(size_,memory_type_index_);
        auto handle = detail::create_vk_obj<VkDeviceMemory>(api.vkAllocateMemory, *this, ci);
        return std::move(std::make_shared<DeviceMemory>(shared_from_this(), handle));
    }

    Sp<DeviceMemory> Device::memory(
        F_MemoryProperty memory_property_, 
        F_MemoryHeap heap_property_,
        VkDeviceSize size_
    ) {
        uint32_t memory_type_index = -1;
        auto& ppt = physical_devices[0]->get_memory_types();

        for (auto&& p : ppt) {
            if(
                ((p.property_flags.flag & memory_property_.flag) == memory_property_.flag)
                && ((p.heap_flags.flag & heap_property_.flag) == heap_property_.flag)
            ) {
                memory_type_index = p.memory_index;
                break;
            }
        }
        if (memory_type_index == -1) {
            return nullptr;
        }
        S_MemoryAllocateInfo ci(size_, memory_type_index);
        auto handle = detail::create_vk_obj<VkDeviceMemory>(api.vkAllocateMemory, *this, ci);
        return std::move(std::make_shared<DeviceMemory>(shared_from_this(), handle));
    }

    Sp<Buffer> Device::buffer(
        F_BufferCreate c_flags_,
        F_BufferCreate u_flags_,
        VkDeviceSize size_,
        Array_general<uint32_t> qf_indices_
    ) {
        S_BufferCreateInfo ci(
            c_flags_.flag,
            size_,
            u_flags_.flag,
            qf_indices_.size() == 0 ? E_SharingMode::e_exclusive : E_SharingMode::e_concurrent,
            qf_indices_
        );
        auto handle = detail::create_vk_obj<VkBuffer>(api.vkCreateBuffer, *this, ci);
        return std::move(std::make_shared<Buffer>(shared_from_this(), handle));
    }

    Sp<G_Buffer> Device::buffer(
        size_t count_,
        F_BufferCreate c_flags_,
        F_BufferCreate u_flags_,
        VkDeviceSize size_,
        Array_general<uint32_t> qf_indices_
    ) {
        S_BufferCreateInfo ci(
            c_flags_.flag,
            size_,
            u_flags_.flag,
            qf_indices_.size() == 0 ? E_SharingMode::e_exclusive : E_SharingMode::e_concurrent,
            qf_indices_
        );
        Sp<G_Buffer> result = std::make_shared<G_Buffer>(shared_from_this());
        detail::create_vk_obj<VkBuffer>(api.vkCreateBuffer, *this, ci, result->handles, count_);
        return std::move(result);
    }

    Sp<Image> Device::image(S_ImageCreateInfo ci_) {
        auto handle = detail::create_vk_obj<VkImage>(api.vkCreateImage, *this, ci_);
        return std::move(std::make_shared<Image>(shared_from_this(), handle));
    }

    Sp<Sampler> Device::sampler(S_SamplerCreateInfo ci_) {
        auto handle = detail::create_vk_obj<VkSampler>(api.vkCreateSampler, *this, ci_);
        return std::move(std::make_shared<Sampler>(shared_from_this(), handle));
    }

    Sp<SamplerYcbcrConversion> Device::sampler_ycbcr_conversion(S_SamplerYcbcrConversionCreateInfo ci_) {
        auto handle = detail::create_vk_obj<VkSamplerYcbcrConversion>(api.vkCreateSamplerYcbcrConversion, *this, ci_);
        return std::move(std::make_shared<SamplerYcbcrConversion>(shared_from_this(), handle));
    }

    Sp<QueryPool>       Device::query_pool(S_QueryPoolCreateInfo ci_) {
        auto handle = detail::create_vk_obj<VkQueryPool>(api.vkCreateQueryPool, *this, ci_);
        return std::move(std::make_shared<QueryPool>(shared_from_this(), handle));
    }

    Sp<DescPool>        Device::desc_pool(S_DescriptorPoolCreateInfo ci_) {
        auto handle = detail::create_vk_obj<VkDescriptorPool>(api.vkCreateDescriptorPool, *this, ci_);
        return std::move(std::make_shared<DescPool>(shared_from_this(), handle));
    }
    
    Sp<DescSetLayout>   Device::desc_set_layout(S_DescriptorSetLayoutCreateInfo ci_) {
        auto handle = detail::create_vk_obj<VkDescriptorSetLayout>(api.vkCreateDescriptorSetLayout, *this, ci_);
        return std::move(std::make_shared<DescSetLayout>(shared_from_this(), handle));
    }
    
    Sp<RenderPass>      Device::render_pass(S_RenderPassCreateInfo ci_) {
        auto handle = detail::create_vk_obj<VkRenderPass>(api.vkCreateRenderPass, *this, ci_);
        return std::move(std::make_shared<RenderPass>(shared_from_this(), handle));
    }
    
    Sp<PipelineLayout>  Device::pipeline_layout(S_PipelineLayoutCreateInfo ci_) {
        auto handle = detail::create_vk_obj<VkPipelineLayout>(api.vkCreatePipelineLayout, *this, ci_);
        return std::move(std::make_shared<PipelineLayout>(shared_from_this(), handle));
    }
    
    Sp<PipelineCache>   Device::pipeline_cache(S_PipelineCacheCreateInfo ci_) {
        auto handle = detail::create_vk_obj<VkPipelineCache>(api.vkCreatePipelineCache, *this, ci_);
        return std::move(std::make_shared<PipelineCache>(shared_from_this(), handle));
    }
    
    Sp<GraphicsPipeline>Device::graphics_pipeline(S_GraphicsPipelineCreateInfo ci_) {
        GraphicsPipeline::Handle_t vk_handle;
        EC ret = api.vkCreateGraphicsPipelines(handle, VK_NULL_HANDLE, 1, ci_, alloc_cb_ptr, &vk_handle);
        ret.check();
        return std::move(std::make_shared<GraphicsPipeline>(shared_from_this(), vk_handle));
    }

    Sp<G_GraphicsPipeline> Device::graphics_pipeline(size_t count_, S_GraphicsPipelineCreateInfo ci_) {
        auto result = std::make_shared<G_GraphicsPipeline>(shared_from_this());
        result->handles.resize(count_);
        EC ret = api.vkCreateGraphicsPipelines(handle, VK_NULL_HANDLE, static_cast<uint32_t>(count_), ci_, alloc_cb_ptr, result->handles.data());
        return std::move(result);
    }

    Sp<CmdPool>         Device::cmd_pool(
        Queue_family& qf_,
        F_CommandPoolCreate flags_
    ) {
        S_CommandPoolCreateInfo ci(flags_.flag, qf_.index);
        auto handle = detail::create_vk_obj<VkCommandPool>(api.vkCreateCommandPool, *this, ci);
        return std::move(std::make_shared<CmdPool>(shared_from_this(), handle));
    }

    uint32_t detail::choose_memory_type_index(VkMemoryPropertyFlags properties_, Aref<Physical_device> phy_dev_) {
        auto const& mem_ppt = phy_dev_->get_memory_properties();
        S_MemoryRequirements mem_requirements;
        auto mem_type_flags = mem_requirements.memoryTypeBits;
        auto const& memory_types = mem_ppt.memoryProperties.memoryTypes;
        while (mem_type_flags != 0) {
            auto index = bitop::r_zero(mem_type_flags);
            if ((memory_types[index].propertyFlags & properties_) == properties_) {
                return index;
            }
            mem_type_flags = bitop::r_close(mem_type_flags);
        }
        throw std::runtime_error("未找到合适的内存类型");
    }
    Sp<DeviceMemory> Si_Image::memory(VkMemoryPropertyFlags properties_, uint32_t phy_index_in_dev_) {
        auto mem_index = choose_memory_type_index(properties_, phy_index_in_dev_);
        auto mem_sptr = founder_ptr->memory(mem_index, get_memory_requirements().size);
        bind(mem_sptr, 0);
        return std::move(mem_sptr);
    }
    Sp<DeviceMemory> Si_Buffer::get_Memory(VkMemoryPropertyFlags properties_, uint32_t phy_index_in_dev_ ) {
        auto mem_index = choose_memory_type_index(properties_, phy_index_in_dev_);
        auto mem_sptr = founder_ptr->memory(mem_index, get_memory_requirements().size);
        bind(*mem_sptr);
        return std::move(mem_sptr);
    }

    Sp<ImageView> Image::view(
        E_ImageViewType view_type_,
        E_Format format_,
        S_ComponentMapping components_,
        S_ImageSubresourceRange subresource_range_
    ) {
        S_ImageViewCreateInfo ci(
            0,
            handle,
            view_type_,
            format_,
            components_,
            subresource_range_
        );
        auto handle = detail::create_vk_obj<VkImageView>(founder_ptr->api.vkCreateImageView, *founder_ptr, ci);
        return std::move(std::make_shared<ImageView>(shared_from_this(), handle));
    }

    

    Sp<BufferView> Buffer::view(
        E_Format format_,
        VkDeviceSize offset_,
        VkDeviceSize range_
    ) {
        S_BufferViewCreateInfo ci(0, handle, format_, offset_, range_);
        auto handle = detail::create_vk_obj<VkBufferView>(founder_ptr->api.vkCreateBufferView, *founder_ptr, ci);
        return std::move(std::make_shared<BufferView>(shared_from_this(), handle));
    }

    SG_DescSet DescPool::sg_desc_set(
        Array_general<VkDescriptorSetLayout> set_layouts_
    ) {
        S_DescriptorSetAllocateInfo allocate_info(handle, set_layouts_);
        SG_DescSet result(*this);
        result.handles.resize(set_layouts_.size());
        founder_ptr->api.vkAllocateDescriptorSets(
            founder_ptr->handle, allocate_info, result.handles.data()
        );
        return std::move(result);
    }

    Sp<DescUpdateTemplate> DescSetLayout::desc_update_template(Array_general<S_DescriptorUpdateTemplateEntry> entrys_) {
        S_DescriptorUpdateTemplateCreateInfo ci{
            /*待办*/
        };
        auto handle = detail::create_vk_obj<VkDescriptorUpdateTemplate>(founder_ptr->api.vkCreateDescriptorUpdateTemplate, *founder_ptr, ci);
        return std::move(std::make_shared<DescUpdateTemplate>(founder_ptr->shared_from_this(), handle));
    }

    Sp<Framebuffer> RenderPass::frame_buffer(
        Array_general<VkImageView> attachments_,
        uint32_t width_,
        uint32_t height_,
        uint32_t layers_
    ) {
        S_FramebufferCreateInfo ci(0, handle, attachments_, width_, height_, layers_);
        auto handle = detail::create_vk_obj<VkFramebuffer>(founder_ptr->api.vkCreateFramebuffer, *founder_ptr, ci);
        return std::move(std::make_shared<Framebuffer>(shared_from_this(), handle));
    }

    Sp<DescUpdateTemplate> PipelineLayout::desc_update_template(
        Array_general<S_DescriptorUpdateTemplateEntry> entrys_,
        E_PipelineBindPoint bind_point_,
        uint32_t set_
    ) {
        S_DescriptorUpdateTemplateCreateInfo ci(
            0,
            entrys_,
            VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR,
            VK_NULL_HANDLE,
            bind_point_,
            handle,
            set_
        );
        auto handle = detail::create_vk_obj<VkDescriptorUpdateTemplate>(founder_ptr->api.vkCreateDescriptorUpdateTemplate, *founder_ptr, ci);
        return std::move(std::make_shared<DescUpdateTemplate>(founder_ptr->shared_from_this(), handle));
    }

    Sp<CmdBuffer> CmdPool::buffer(E_CommandBufferLevel level_) {
        S_CommandBufferAllocateInfo ci(handle, level_, 1);
        auto handle = detail::alloc_vk_obj<VkCommandBuffer>(founder_ptr->api.vkAllocateCommandBuffers, *founder_ptr, ci);
        return std::move(std::make_shared<CmdBuffer>(shared_from_this(), handle));
    }

    Sp<G_CmdBuffer> CmdPool::buffer(uint32_t count_, E_CommandBufferLevel level_) {
        S_CommandBufferAllocateInfo ci(handle, level_, count_);
        auto result = std::move(std::make_shared<G_CmdBuffer>(shared_from_this()));
        detail::alloc_vk_obj<VkCommandBuffer>(
            founder_ptr->api.vkAllocateCommandBuffers, *founder_ptr, ci, result->handles, count_
        );
        return result;
    }



    class TBuiltInResource_auto_init :public TBuiltInResource {
    public:
        inL TBuiltInResource_auto_init() {
            maxLights = 32;
            maxClipPlanes = 6;
            maxTextureUnits = 32;
            maxTextureCoords = 32;
            maxVertexAttribs = 64;
            maxVertexUniformComponents = 4096;
            maxVaryingFloats = 64;
            maxVertexTextureImageUnits = 32;
            maxCombinedTextureImageUnits = 80;
            maxTextureImageUnits = 32;
            maxFragmentUniformComponents = 4096;
            maxDrawBuffers = 32;
            maxVertexUniformVectors = 128;
            maxVaryingVectors = 8;
            maxFragmentUniformVectors = 16;
            maxVertexOutputVectors = 16;
            maxFragmentInputVectors = 15;
            minProgramTexelOffset = -8;
            maxProgramTexelOffset = 7;
            maxClipDistances = 8;
            maxComputeWorkGroupCountX = 65535;
            maxComputeWorkGroupCountY = 65535;
            maxComputeWorkGroupCountZ = 65535;
            maxComputeWorkGroupSizeX = 1024;
            maxComputeWorkGroupSizeY = 1024;
            maxComputeWorkGroupSizeZ = 64;
            maxComputeUniformComponents = 1024;
            maxComputeTextureImageUnits = 16;
            maxComputeImageUniforms = 8;
            maxComputeAtomicCounters = 8;
            maxComputeAtomicCounterBuffers = 1;
            maxVaryingComponents = 60;
            maxVertexOutputComponents = 64;
            maxGeometryInputComponents = 64;
            maxGeometryOutputComponents = 128;
            maxFragmentInputComponents = 128;
            maxImageUnits = 8;
            maxCombinedImageUnitsAndFragmentOutputs = 8;
            maxCombinedShaderOutputResources = 8;
            maxImageSamples = 0;
            maxVertexImageUniforms = 0;
            maxTessControlImageUniforms = 0;
            maxTessEvaluationImageUniforms = 0;
            maxGeometryImageUniforms = 0;
            maxFragmentImageUniforms = 8;
            maxCombinedImageUniforms = 8;
            maxGeometryTextureImageUnits = 16;
            maxGeometryOutputVertices = 256;
            maxGeometryTotalOutputComponents = 1024;
            maxGeometryUniformComponents = 1024;
            maxGeometryVaryingComponents = 64;
            maxTessControlInputComponents = 128;
            maxTessControlOutputComponents = 128;
            maxTessControlTextureImageUnits = 16;
            maxTessControlUniformComponents = 1024;
            maxTessControlTotalOutputComponents = 4096;
            maxTessEvaluationInputComponents = 128;
            maxTessEvaluationOutputComponents = 128;
            maxTessEvaluationTextureImageUnits = 16;
            maxTessEvaluationUniformComponents = 1024;
            maxTessPatchComponents = 120;
            maxPatchVertices = 32;
            maxTessGenLevel = 64;
            maxViewports = 16;
            maxVertexAtomicCounters = 0;
            maxTessControlAtomicCounters = 0;
            maxTessEvaluationAtomicCounters = 0;
            maxGeometryAtomicCounters = 0;
            maxFragmentAtomicCounters = 8;
            maxCombinedAtomicCounters = 8;
            maxAtomicCounterBindings = 1;
            maxVertexAtomicCounterBuffers = 0;
            maxTessControlAtomicCounterBuffers = 0;
            maxTessEvaluationAtomicCounterBuffers = 0;
            maxGeometryAtomicCounterBuffers = 0;
            maxFragmentAtomicCounterBuffers = 1;
            maxCombinedAtomicCounterBuffers = 1;
            maxAtomicCounterBufferSize = 16384;
            maxTransformFeedbackBuffers = 4;
            maxTransformFeedbackInterleavedComponents = 64;
            maxCullDistances = 8;
            maxCombinedClipAndCullDistances = 8;
            maxSamples = 4;
            maxMeshOutputVerticesNV = 256;
            maxMeshOutputPrimitivesNV = 512;
            maxMeshWorkGroupSizeX_NV = 32;
            maxMeshWorkGroupSizeY_NV = 1;
            maxMeshWorkGroupSizeZ_NV = 1;
            maxTaskWorkGroupSizeX_NV = 32;
            maxTaskWorkGroupSizeY_NV = 1;
            maxTaskWorkGroupSizeZ_NV = 1;
            maxMeshViewCountNV = 4;
            limits.nonInductiveForLoops = 1;
            limits.whileLoops = 1;
            limits.doWhileLoops = 1;
            limits.generalUniformIndexing = 1;
            limits.generalAttributeMatrixVectorIndexing = 1;
            limits.generalVaryingIndexing = 1;
            limits.generalSamplerIndexing = 1;
            limits.generalVariableIndexing = 1;
            limits.generalConstantMatrixVectorIndexing = 1;
        }
    };
    static TBuiltInResource_auto_init Resources;
    void Basic_Spv_code::load_from_glsl_code(char const* code_, int stage_) {
        static bool is_init = false;
        if (is_init == false) {
            glslang::InitializeProcess();
            is_init = true;
        }
        EShLanguage stage;
        switch (stage_) {
        case VK_SHADER_STAGE_VERTEX_BIT:
            stage = EShLangVertex;
            break;
        case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT:
            stage = EShLangTessControl;
            break;
        case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT:
            stage = EShLangTessEvaluation;
            break;
        case VK_SHADER_STAGE_GEOMETRY_BIT:
            stage = EShLangGeometry;
            break;
        case VK_SHADER_STAGE_FRAGMENT_BIT:
            stage = EShLangFragment;
            break;
        case VK_SHADER_STAGE_COMPUTE_BIT:
            stage = EShLangCompute;
            break;
        default:
            stage = EShLangVertex;
        }
        glslang::TShader shader(stage);
        glslang::TProgram program;
        const char* shaderStrings[1];
        // Enable SPIR-V and Vulkan rules when parsing GLSL
        EShMessages messages = (EShMessages)(EShMsgSpvRules | EShMsgVulkanRules);
        shaderStrings[0] = code_;
        shader.setStrings(shaderStrings, 1);
        if (!shader.parse(&Resources, 100, false, messages)) {
            puts(shader.getInfoLog());
            puts(shader.getInfoDebugLog());
            err_show << "前端编译glsl代码失败";
            throw std::runtime_error("前端编译glsl代码失败");
        }
        program.addShader(&shader);
        if (!program.link(messages)) {
            puts(shader.getInfoLog());
            puts(shader.getInfoDebugLog());
            fflush(stdout);

            throw std::runtime_error("链接glsl代码失败");
        }
        glslang::GlslangToSpv(*program.getIntermediate(stage), spv_code);
    }
    void Basic_Spv_code::load_from_spv_file(char const* path_) {
        std::ifstream ifs(path_, std::ios::in | std::ios::binary);
        if (!ifs.is_open()) {
            std::string msg("文件");
            msg += path_;
            msg += "不存在";
            throw(std::runtime_error(msg));
        }
        ifs.seekg(0, std::ios::end);
        std::streampos file_length = ifs.tellg();
        size_t length = static_cast<size_t>(file_length / sizeof(decltype(spv_code)::value_type));
        ifs.seekg(0, std::ios::beg);
        spv_code.resize(length);
        ifs.read(reinterpret_cast<char*>(spv_code.data()), file_length);
        if (ifs.fail()) {
            err_show<<"读取代码失败";
            clear();
            ifs.close();
            throw std::runtime_error("读取代码失败");
        }
        ifs.close();
    }
    void Basic_Spv_code::load_from_glsl_file(char const* path_, int stage_) {
        std::ifstream ifs(path_, std::ios::in | std::ios::binary);
        ifs.seekg(0, std::ios::end);
        std::streampos length_temp = ifs.tellg();
        size_t length = static_cast<size_t>(length_temp);
        ifs.seekg(0, std::ios::beg);
        std::vector<uint8_t> glsl_code(length + 1);
        ifs.read(reinterpret_cast<char*>(glsl_code.data()), length);
        if (ifs.fail()) {
            err_show<<"读取代码失败:\n" << glsl_code.data();
            ifs.close();
            throw std::runtime_error("读取代码失败");
        }
        glsl_code[length] = '\0';
        ifs.close();
        load_from_glsl_code(reinterpret_cast<char const*>(glsl_code.data()), stage_);
    }
    void Basic_Spv_code::save_spv_to_file(char const* path_) {
        std::ofstream ofs(path_, std::ios::out | std::ios::binary | std::ios::trunc);
        ofs.write(reinterpret_cast<char const*>(spv_code.data()), spv_code.size() * sizeof(decltype(spv_code)::value_type));
        if (ofs.fail()) {
            err_show<<"输出SPV代码失败";
            ofs.close();
            throw std::runtime_error("输出SPV代码失败");
        }
        ofs.close();
    }










# undef X_def_global_api
}   // namespace vk
}   // namespace dawn