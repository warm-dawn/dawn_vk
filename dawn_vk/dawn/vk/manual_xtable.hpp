# ifndef __dawn_VK_MANUAL_XTABLE_HPP__
# define __dawn_VK_MANUAL_XTABLE_HPP__

# include "dawn/platform/platforms.hpp"

# define Xt_vk_api_exportd(X__) \
    X__(vkGetInstanceProcAddr) \

# define Xt_vk_api_instance(X__) \
    X__(vkEnumeratePhysicalDevices)  \
    X__(vkEnumeratePhysicalDeviceGroups)  \
    X__(vkCreateDevice)  \
    X__(vkDestroyInstance)  \
    X__(vkGetDeviceProcAddr)  \
    Xt_vk_api_VK_EXT_debug_utils(X__) \

# define Xt_vk_api_global(X__) \
    X__(vkEnumerateInstanceLayerProperties) \
    X__(vkEnumerateInstanceExtensionProperties) \
    X__(vkCreateInstance) \
    X__(vkEnumerateInstanceVersion) \
    
# define Xt_vk_api_physical_device(X__) \
	X__(vkGetPhysicalDeviceFeatures2) \
	X__(vkGetPhysicalDeviceFormatProperties2) \
	X__(vkGetPhysicalDeviceImageFormatProperties2) \
	X__(vkGetPhysicalDeviceProperties2) \
	X__(vkGetPhysicalDeviceQueueFamilyProperties2) \
	X__(vkGetPhysicalDeviceMemoryProperties2) \
    X__(vkEnumerateDeviceExtensionProperties)  \
    X__(vkEnumerateDeviceLayerProperties)  \
	X__(vkGetPhysicalDeviceExternalBufferProperties) \
	X__(vkGetPhysicalDeviceExternalFenceProperties) \
	X__(vkGetPhysicalDeviceExternalSemaphoreProperties) \

# define Xt_vk_api_physical_device_group(X__) \
    X__(vkGetDeviceGroupPeerMemoryFeatures) \

#define Xt_vk_api_queue(X__) \
	X__(vkGetDeviceQueue) \
	X__(vkQueueSubmit) \
	X__(vkQueueWaitIdle) \
	X__(vkDeviceWaitIdle) \

# define Xt_vk_api_memory(X__) \
	X__(vkAllocateMemory) \
	X__(vkFreeMemory) \
	X__(vkMapMemory) \
	X__(vkUnmapMemory) \
	X__(vkFlushMappedMemoryRanges) \
	X__(vkInvalidateMappedMemoryRanges) \
	X__(vkGetDeviceMemoryCommitment) \

# define Xt_vk_api_memory_management(X__) \
    X__(vkBindBufferMemory) \
    X__(vkBindBufferMemory2) \
    X__(vkBindImageMemory) \
    X__(vkBindImageMemory2) \
    X__(vkGetBufferMemoryRequirements) \
    X__(vkGetBufferMemoryRequirements2) \
    X__(vkGetImageMemoryRequirements) \
    X__(vkGetImageMemoryRequirements2) \

# define Xt_vk_api_sparse_resource_memory_management(X__) \
	X__(vkGetImageSparseMemoryRequirements) \
	X__(vkGetImageSparseMemoryRequirements2) \
	X__(vkGetPhysicalDeviceSparseImageFormatProperties) \
	X__(vkGetPhysicalDeviceSparseImageFormatProperties2) \
	X__(vkQueueBindSparse) \

# define Xt_vk_api_fence(X__) \
	X__(vkCreateFence) \
	X__(vkDestroyFence) \
	X__(vkResetFences) \
	X__(vkGetFenceStatus) \
	X__(vkWaitForFences) \

# define Xt_vk_api_queue_semaphore(X__) \
	X__(vkCreateSemaphore) \
	X__(vkDestroySemaphore) \

# define Xt_vk_api_event(X__) \
	X__(vkCreateEvent) \
	X__(vkDestroyEvent) \
	X__(vkGetEventStatus) \
	X__(vkSetEvent) \
	X__(vkResetEvent) \

# define Xt_vk_api_query(X__) \
	X__(vkCreateQueryPool) \
	X__(vkDestroyQueryPool) \
	X__(vkGetQueryPoolResults) \

# define Xt_vk_api_buffer(X__) \
	X__(vkCreateBuffer) \
	X__(vkDestroyBuffer) \

# define Xt_vk_api_buffer_view(X__) \
	X__(vkCreateBufferView) \
	X__(vkDestroyBufferView) \

# define Xt_vk_api_image(X__) \
	X__(vkCreateImage) \
	X__(vkDestroyImage) \
	X__(vkGetImageSubresourceLayout) \

# define Xt_vk_api_image_view(X__) \
	X__(vkCreateImageView) \
	X__(vkDestroyImageView) \

# define Xt_vk_api_shader(X__) \
	X__(vkCreateShaderModule) \
	X__(vkDestroyShaderModule) \

# define Xt_vk_api_pipeline_cache(X__) \
	X__(vkCreatePipelineCache) \
	X__(vkDestroyPipelineCache) \
	X__(vkGetPipelineCacheData) \
	X__(vkMergePipelineCaches) \

# define Xt_vk_api_pipeline(X__) \
	X__(vkCreateGraphicsPipelines) \
	X__(vkCreateComputePipelines) \
	X__(vkDestroyPipeline) \

# define Xt_vk_api_pipeline_layout(X__) \
	X__(vkCreatePipelineLayout) \
	X__(vkDestroyPipelineLayout) \

# define Xt_vk_api_sampler(X__) \
	X__(vkCreateSampler) \
	X__(vkDestroySampler) \
	X__(vkCreateSamplerYcbcrConversion) \
	X__(vkDestroySamplerYcbcrConversion) \

# define Xt_vk_api_descriptor_set(X__) \
	X__(vkGetDescriptorSetLayoutSupport) \
	X__(vkCreateDescriptorSetLayout) \
	X__(vkDestroyDescriptorSetLayout) \
	X__(vkCreateDescriptorPool) \
	X__(vkDestroyDescriptorPool) \
	X__(vkResetDescriptorPool) \
	X__(vkAllocateDescriptorSets) \
	X__(vkFreeDescriptorSets) \
	X__(vkUpdateDescriptorSets) \
	X__(vkCreateDescriptorUpdateTemplate) \
	X__(vkDestroyDescriptorUpdateTemplate) \
	X__(vkUpdateDescriptorSetWithTemplate) \

# define Xt_vk_api_pass(X__) \
	X__(vkCreateFramebuffer) \
	X__(vkDestroyFramebuffer) \
	X__(vkCreateRenderPass) \
	X__(vkDestroyRenderPass) \
	X__(vkGetRenderAreaGranularity) \

# define Xt_vk_api_command_pool(X__) \
	X__(vkCreateCommandPool) \
	X__(vkDestroyCommandPool) \
	X__(vkResetCommandPool) \
    X__(vkTrimCommandPool) \

# define Xt_vk_api_command_buffer(X__) \
	X__(vkAllocateCommandBuffers) \
	X__(vkFreeCommandBuffers) \
	X__(vkBeginCommandBuffer) \
	X__(vkEndCommandBuffer) \
	X__(vkResetCommandBuffer) \

# define Xt_vk_api_commands(X__) \
	X__(vkCmdBindPipeline) \
	X__(vkCmdSetViewport) \
	X__(vkCmdSetScissor) \
	X__(vkCmdSetLineWidth) \
	X__(vkCmdSetDepthBias) \
	X__(vkCmdSetBlendConstants) \
	X__(vkCmdSetDepthBounds) \
	X__(vkCmdSetStencilCompareMask) \
	X__(vkCmdSetStencilWriteMask) \
	X__(vkCmdSetStencilReference) \
	X__(vkCmdBindDescriptorSets) \
	X__(vkCmdBindIndexBuffer) \
	X__(vkCmdBindVertexBuffers) \
	X__(vkCmdDraw) \
	X__(vkCmdDrawIndexed) \
	X__(vkCmdDrawIndirect) \
	X__(vkCmdDrawIndexedIndirect) \
	X__(vkCmdDispatch) \
	X__(vkCmdDispatchIndirect) \
	X__(vkCmdCopyBuffer) \
	X__(vkCmdCopyImage) \
	X__(vkCmdBlitImage) \
	X__(vkCmdCopyBufferToImage) \
	X__(vkCmdCopyImageToBuffer) \
	X__(vkCmdUpdateBuffer) \
	X__(vkCmdFillBuffer) \
	X__(vkCmdClearColorImage) \
	X__(vkCmdClearDepthStencilImage) \
	X__(vkCmdClearAttachments) \
	X__(vkCmdResolveImage) \
	X__(vkCmdSetEvent) \
	X__(vkCmdResetEvent) \
	X__(vkCmdWaitEvents) \
	X__(vkCmdPipelineBarrier) \
	X__(vkCmdBeginQuery) \
	X__(vkCmdEndQuery) \
	X__(vkCmdResetQueryPool) \
	X__(vkCmdWriteTimestamp) \
	X__(vkCmdCopyQueryPoolResults) \
	X__(vkCmdPushConstants) \
	X__(vkCmdBeginRenderPass) \
	X__(vkCmdNextSubpass) \
	X__(vkCmdEndRenderPass) \
	X__(vkCmdExecuteCommands) \
	X__(vkCmdSetDeviceMask) \
	X__(vkCmdDispatchBase) \

# if VK_KHR_surface
# define Xt_vk_api_surface(X__) \
    X__(vkDestroySurfaceKHR) \
    X__(vkGetPhysicalDeviceSurfaceSupportKHR) \
    X__(vkGetPhysicalDeviceSurfaceCapabilitiesKHR) \
    X__(vkGetPhysicalDeviceSurfaceFormatsKHR) \
    X__(vkGetPhysicalDeviceSurfacePresentModesKHR) \

# else
# define Xt_vk_api_surface(...)  
# endif

# if VK_KHR_swapchain
# define Xt_vk_api_swapchain(X__) \
    X__(vkGetSwapchainImagesKHR) \
    X__(vkAcquireNextImageKHR) \
    X__(vkQueuePresentKHR) \
    X__(vkGetDeviceGroupPresentCapabilitiesKHR) \
    X__(vkGetDeviceGroupSurfacePresentModesKHR) \
    X__(vkGetPhysicalDevicePresentRectanglesKHR) \
    X__(vkAcquireNextImage2KHR) \
    X__(vkDestroySwapchainKHR) \

# else
# define Xt_vk_api_swapchain(...) 
# endif

# if VK_KHR_display
# define Xt_vk_api_display(X__) \
    X__(vkGetPhysicalDeviceDisplayPropertiesKHR) \
    X__(vkGetPhysicalDeviceDisplayPlanePropertiesKHR) \
    X__(vkGetDisplayPlaneSupportedDisplaysKHR) \
    X__(vkGetDisplayModePropertiesKHR) \
    X__(vkCreateDisplayModeKHR) \
    X__(vkGetDisplayPlaneCapabilitiesKHR) \
    X__(vkCreateDisplayPlaneSurfaceKHR) \

# else
# define Xt_vk_api_display(...) 
# endif

# if VK_KHR_display_swapchain
# define Xt_vk_api_display_swapchain(X__) \
    X__(vkCreateSharedSwapchainsKHR) \

# else
# define Xt_vk_api_display_swapchain(...)
# endif

# ifdef VK_USE_PLATFORM_ANDROID_KHR
# define dawn_vk_use_platform 1
# define Xt_vk_api_platform(X__)    Xt_vk_api_VK_USE_PLATFORM_ANDROID_KHR(X__)
# endif
# ifdef VK_USE_PLATFORM_FUCHSIA
# define dawn_vk_use_platform 1
# define Xt_vk_api_platform(X__)    Xt_vk_api_VK_USE_PLATFORM_FUCHSIA(X__)
# endif
# ifdef VK_USE_PLATFORM_IOS_MVK
# define dawn_vk_use_platform 1
# define Xt_vk_api_platform(X__)    Xt_vk_api_VK_USE_PLATFORM_IOS_MVK(X__)
# endif
# ifdef VK_USE_PLATFORM_MACOS_MVK
# define dawn_vk_use_platform 1
# define Xt_vk_api_platform(X__)    Xt_vk_api_VK_USE_PLATFORM_MACOS_MVK(X__)
# endif
# ifdef VK_USE_PLATFORM_METAL_EXT
# define Xt_vk_api_platform(X__)    Xt_vk_api_VK_USE_PLATFORM_METAL_EXT(X__)
# endif
# ifdef VK_USE_PLATFORM_VI_NN
# define dawn_vk_use_platform 1
# define Xt_vk_api_platform(X__)    Xt_vk_api_VK_USE_PLATFORM_VI_NN(X__)
# endif
# ifdef VK_USE_PLATFORM_WAYLAND_KHR
# define dawn_vk_use_platform 1
# define Xt_vk_api_platform(X__)    Xt_vk_api_VK_USE_PLATFORM_WAYLAND_KHR(X__)
# endif

# ifdef VK_USE_PLATFORM_WIN32_KHR
# define dawn_vk_use_platform 1
//# define surface_create_info S_Win32SurfaceCreateInfoKHR
namespace dawn {
	namespace vk {
		struct Surface_ci: public S_Win32SurfaceCreateInfoKHR {
			inL Surface_ci(
				Aref<dawn::S_wnd> window_,
				VkWin32SurfaceCreateFlagsKHR flags_ = 0
			)	: S_Win32SurfaceCreateInfoKHR(flags_, window_->father_sptr->hInstance,window_->handle)
			{ }
		};
	}
}


# define vk_api_surface_create vkCreateWin32SurfaceKHR

# endif

# ifdef VK_USE_PLATFORM_XCB_KHR
# define dawn_vk_use_platform 1
# define Xt_vk_api_platform(X__)    Xt_vk_api_VK_USE_PLATFORM_XCB_KHR(X__)
# endif
# ifdef VK_USE_PLATFORM_XLIB_KHR
# define dawn_vk_use_platform 1
# define Xt_vk_api_platform(X__)    Xt_vk_api_VK_USE_PLATFORM_XLIB_KHR(X__)
# endif
# ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
# define dawn_vk_use_platform 1
# define Xt_vk_api_platform(X__)    Xt_vk_api_VK_USE_PLATFORM_XLIB_XRANDR_EXT(X__)
# endif
# ifdef VK_USE_PLATFORM_GGP
# define dawn_vk_use_platform 1
# define Xt_vk_api_platform(X__)    Xt_vk_api_VK_USE_PLATFORM_GGP(X__)
# endif

# define dawn_VK_USE_PLATFORM 1

# if !(dawn_vk_use_platform)
# undef dawn_VK_USE_PLATFORM
# define dawn_VK_USE_PLATFORM 0
# define Xt_vk_api_platform(...) 
# define Xt_vk_api_surface_platform(...)
# endif

# define Xt_vk_api_all_instance_api(X__) \
    Xt_vk_api_instance(X__) \
    Xt_vk_api_physical_device(X__) \
    Xt_vk_api_physical_device_group(X__) \
    Xt_vk_api_surface(X__) \
    Xt_vk_api_all_platform(X__) \

# define Xt_vk_api_device(X__) \
    X__(vkDestroyDevice) \
    Xt_vk_api_queue(X__) \
    Xt_vk_api_memory(X__) \
    Xt_vk_api_memory_management(X__) \
    Xt_vk_api_sparse_resource_memory_management(X__) \
    Xt_vk_api_fence(X__) \
    Xt_vk_api_queue_semaphore(X__) \
    Xt_vk_api_event(X__) \
    Xt_vk_api_query(X__) \
    Xt_vk_api_buffer(X__) \
    Xt_vk_api_buffer_view(X__) \
    Xt_vk_api_image(X__) \
    Xt_vk_api_image_view(X__) \
    Xt_vk_api_shader(X__) \
    Xt_vk_api_pipeline_cache(X__) \
    Xt_vk_api_pipeline(X__) \
    Xt_vk_api_pipeline_layout(X__) \
    Xt_vk_api_sampler(X__) \
    Xt_vk_api_descriptor_set(X__) \
    Xt_vk_api_pass(X__) \
    Xt_vk_api_command_pool(X__) \
    Xt_vk_api_command_buffer(X__) \
    Xt_vk_api_commands(X__) \
    Xt_vk_api_extensions(X__) \


# endif // # ifndef __dawn_VK_MANUAL_XTABLE_HPP__
