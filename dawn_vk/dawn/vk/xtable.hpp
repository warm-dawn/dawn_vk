# ifndef __dawn_VK_XTABLE_HPP__
# define __dawn_VK_XTABLE_HPP__

/* enum list: name,    my_name */
# define Xt_enums(X__) \
    X__(VkDiscardRectangleModeEXT,    DiscardRectangleModeEXT) \
    X__(VkValidationFeatureDisableEXT,    ValidationFeatureDisableEXT) \
    X__(VkSharingMode,    SharingMode) \
    X__(VkPerformanceValueTypeINTEL,    PerformanceValueTypeINTEL) \
    X__(VkColorSpaceKHR,    ColorSpaceKHR) \
    X__(VkPhysicalDeviceType,    PhysicalDeviceType) \
    X__(VkImageLayout,    ImageLayout) \
    X__(VkValidationCacheHeaderVersionEXT,    ValidationCacheHeaderVersionEXT) \
    X__(VkCoverageModulationModeNV,    CoverageModulationModeNV) \
    X__(VkMemoryOverallocationBehaviorAMD,    MemoryOverallocationBehaviorAMD) \
    X__(VkBlendOverlapEXT,    BlendOverlapEXT) \
    X__(VkQueryPoolSamplingModeINTEL,    QueryPoolSamplingModeINTEL) \
    X__(VkDebugReportObjectTypeEXT,    DebugReportObjectTypeEXT) \
    X__(VkGeometryTypeNV,    GeometryTypeNV) \
    X__(VkAccelerationStructureTypeNV,    AccelerationStructureTypeNV) \
    X__(VkPerformanceConfigurationTypeINTEL,    PerformanceConfigurationTypeINTEL) \
    X__(VkDriverIdKHR,    DriverIdKHR) \
    X__(VkSamplerYcbcrModelConversion,    SamplerYcbcrModelConversion) \
    X__(VkSubpassContents,    SubpassContents) \
    X__(VkScopeNV,    ScopeNV) \
    X__(VkSamplerMipmapMode,    SamplerMipmapMode) \
    X__(VkPipelineExecutableStatisticFormatKHR,    PipelineExecutableStatisticFormatKHR) \
    X__(VkShaderFloatControlsIndependenceKHR,    ShaderFloatControlsIndependenceKHR) \
    X__(VkTimeDomainEXT,    TimeDomainEXT) \
    X__(VkTessellationDomainOrigin,    TessellationDomainOrigin) \
    X__(VkDescriptorType,    DescriptorType) \
    X__(VkCoverageReductionModeNV,    CoverageReductionModeNV) \
    X__(VkPerformanceParameterTypeINTEL,    PerformanceParameterTypeINTEL) \
    X__(VkImageViewType,    ImageViewType) \
    X__(VkShadingRatePaletteEntryNV,    ShadingRatePaletteEntryNV) \
    X__(VkFilter,    Filter) \
    X__(VkChromaLocation,    ChromaLocation) \
    X__(VkPrimitiveTopology,    PrimitiveTopology) \
    X__(VkDeviceEventTypeEXT,    DeviceEventTypeEXT) \
    X__(VkAccelerationStructureMemoryRequirementsTypeNV,    AccelerationStructureMemoryRequirementsTypeNV) \
    X__(VkPolygonMode,    PolygonMode) \
    X__(VkObjectEntryTypeNVX,    ObjectEntryTypeNVX) \
    X__(VkQueryType,    QueryType) \
    X__(VkObjectType,    ObjectType) \
    X__(VkPipelineBindPoint,    PipelineBindPoint) \
    X__(VkComponentSwizzle,    ComponentSwizzle) \
    X__(VkCommandBufferLevel,    CommandBufferLevel) \
    X__(VkDisplayPowerStateEXT,    DisplayPowerStateEXT) \
    X__(VkFormat,    Format) \
    X__(VkVendorId,    VendorId) \
    X__(VkRasterizationOrderAMD,    RasterizationOrderAMD) \
    X__(VkFullScreenExclusiveEXT,    FullScreenExclusiveEXT) \
    X__(VkSamplerAddressMode,    SamplerAddressMode) \
    X__(VkImageType,    ImageType) \
    X__(VkPipelineCacheHeaderVersion,    PipelineCacheHeaderVersion) \
    X__(VkViewportCoordinateSwizzleNV,    ViewportCoordinateSwizzleNV) \
    X__(VkIndirectCommandsTokenTypeNVX,    IndirectCommandsTokenTypeNVX) \
    X__(VkShaderInfoTypeAMD,    ShaderInfoTypeAMD) \
    X__(VkImageTiling,    ImageTiling) \
    X__(VkStencilOp,    StencilOp) \
    X__(VkValidationCheckEXT,    ValidationCheckEXT) \
    X__(VkResult,    Result) \
    X__(VkIndexType,    IndexType) \
    X__(VkQueueGlobalPriorityEXT,    QueueGlobalPriorityEXT) \
    X__(VkSamplerYcbcrRange,    SamplerYcbcrRange) \
    X__(VkDescriptorUpdateTemplateType,    DescriptorUpdateTemplateType) \
    X__(VkVertexInputRate,    VertexInputRate) \
    X__(VkBlendFactor,    BlendFactor) \
    X__(VkCompareOp,    CompareOp) \
    X__(VkCoarseSampleOrderTypeNV,    CoarseSampleOrderTypeNV) \
    X__(VkInternalAllocationType,    InternalAllocationType) \
    X__(VkSamplerReductionModeEXT,    SamplerReductionModeEXT) \
    X__(VkLineRasterizationModeEXT,    LineRasterizationModeEXT) \
    X__(VkBlendOp,    BlendOp) \
    X__(VkFrontFace,    FrontFace) \
    X__(VkPerformanceOverrideTypeINTEL,    PerformanceOverrideTypeINTEL) \
    X__(VkAttachmentLoadOp,    AttachmentLoadOp) \
    X__(VkCopyAccelerationStructureModeNV,    CopyAccelerationStructureModeNV) \
    X__(VkLogicOp,    LogicOp) \
    X__(VkRayTracingShaderGroupTypeNV,    RayTracingShaderGroupTypeNV) \
    X__(VkDisplayEventTypeEXT,    DisplayEventTypeEXT) \
    X__(VkPresentModeKHR,    PresentModeKHR) \
    X__(VkComponentTypeNV,    ComponentTypeNV) \
    X__(VkDynamicState,    DynamicState) \
    X__(VkValidationFeatureEnableEXT,    ValidationFeatureEnableEXT) \
    X__(VkConservativeRasterizationModeEXT,    ConservativeRasterizationModeEXT) \
    X__(VkAttachmentStoreOp,    AttachmentStoreOp) \
    X__(VkSystemAllocationScope,    SystemAllocationScope) \
    X__(VkPointClippingBehavior,    PointClippingBehavior) \
    X__(VkBorderColor,    BorderColor) \
    X__(VkStructureType,    StructureType) \

/* flagbits list: name,    my_name */
# define Xt_flagbits(X__) \
    X__(VkMemoryHeapFlagBits,    MemoryHeap) \
    X__(VkSwapchainCreateFlagBitsKHR,    SwapchainCreateKHR) \
    X__(VkExternalSemaphoreHandleTypeFlagBits,    ExternalSemaphoreHandleType) \
    X__(VkImageViewCreateFlagBits,    ImageViewCreate) \
    X__(VkDeviceQueueCreateFlagBits,    DeviceQueueCreate) \
    X__(VkFenceCreateFlagBits,    FenceCreate) \
    X__(VkCommandPoolResetFlagBits,    CommandPoolReset) \
    X__(VkExternalSemaphoreFeatureFlagBits,    ExternalSemaphoreFeature) \
    X__(VkQueryControlFlagBits,    QueryControl) \
    X__(VkCommandPoolCreateFlagBits,    CommandPoolCreate) \
    X__(VkDebugReportFlagBitsEXT,    DebugReportEXT) \
    X__(VkDeviceGroupPresentModeFlagBitsKHR,    DeviceGroupPresentModeKHR) \
    X__(VkDisplayPlaneAlphaFlagBitsKHR,    DisplayPlaneAlphaKHR) \
    X__(VkResolveModeFlagBitsKHR,    ResolveModeKHR) \
    X__(VkCommandBufferResetFlagBits,    CommandBufferReset) \
    X__(VkRenderPassCreateFlagBits,    RenderPassCreate) \
    X__(VkQueryResultFlagBits,    QueryResult) \
    X__(VkSwapchainImageUsageFlagBitsANDROID,    SwapchainImageUsageANDROID) \
    X__(VkBuildAccelerationStructureFlagBitsNV,    BuildAccelerationStructureNV) \
    X__(VkShaderModuleCreateFlagBits,    ShaderModuleCreate) \
    X__(VkSamplerCreateFlagBits,    SamplerCreate) \
    X__(VkGeometryFlagBitsNV,    GeometryNV) \
    X__(VkCompositeAlphaFlagBitsKHR,    CompositeAlphaKHR) \
    X__(VkAttachmentDescriptionFlagBits,    AttachmentDescription) \
    X__(VkPeerMemoryFeatureFlagBits,    PeerMemoryFeature) \
    X__(VkExternalMemoryHandleTypeFlagBits,    ExternalMemoryHandleType) \
    X__(VkPipelineCompilerControlFlagBitsAMD,    PipelineCompilerControlAMD) \
    X__(VkSparseImageFormatFlagBits,    SparseImageFormat) \
    X__(VkBufferUsageFlagBits,    BufferUsage) \
    X__(VkSampleCountFlagBits,    SampleCount) \
    X__(VkQueueFlagBits,    Queue) \
    X__(VkDebugUtilsMessageTypeFlagBitsEXT,    DebugUtilsMessageTypeEXT) \
    X__(VkDescriptorPoolCreateFlagBits,    DescriptorPoolCreate) \
    X__(VkImageCreateFlagBits,    ImageCreate) \
    X__(VkIndirectCommandsLayoutUsageFlagBitsNVX,    IndirectCommandsLayoutUsageNVX) \
    X__(VkExternalMemoryFeatureFlagBits,    ExternalMemoryFeature) \
    X__(VkBufferCreateFlagBits,    BufferCreate) \
    X__(VkShaderStageFlagBits,    ShaderStage) \
    X__(VkColorComponentFlagBits,    ColorComponent) \
    X__(VkPipelineCreateFlagBits,    PipelineCreate) \
    X__(VkSubpassDescriptionFlagBits,    SubpassDescription) \
    X__(VkFramebufferCreateFlagBits,    FramebufferCreate) \
    X__(VkSparseMemoryBindFlagBits,    SparseMemoryBind) \
    X__(VkFormatFeatureFlagBits,    FormatFeature) \
    X__(VkQueryPipelineStatisticFlagBits,    QueryPipelineStatistic) \
    X__(VkSurfaceTransformFlagBitsKHR,    SurfaceTransformKHR) \
    X__(VkImageUsageFlagBits,    ImageUsage) \
    X__(VkDebugUtilsMessageSeverityFlagBitsEXT,    DebugUtilsMessageSeverityEXT) \
    X__(VkSurfaceCounterFlagBitsEXT,    SurfaceCounterEXT) \
    X__(VkSubgroupFeatureFlagBits,    SubgroupFeature) \
    X__(VkSemaphoreImportFlagBits,    SemaphoreImport) \
    X__(VkMemoryAllocateFlagBits,    MemoryAllocate) \
    X__(VkCullModeFlagBits,    CullMode) \
    X__(VkStencilFaceFlagBits,    StencilFace) \
    X__(VkAccessFlagBits,    Access) \
    X__(VkExternalFenceFeatureFlagBits,    ExternalFenceFeature) \
    X__(VkDescriptorBindingFlagBitsEXT,    DescriptorBindingEXT) \
    X__(VkExternalMemoryHandleTypeFlagBitsNV,    ExternalMemoryHandleTypeNV) \
    X__(VkExternalMemoryFeatureFlagBitsNV,    ExternalMemoryFeatureNV) \
    X__(VkFenceImportFlagBits,    FenceImport) \
    X__(VkImageAspectFlagBits,    ImageAspect) \
    X__(VkDescriptorSetLayoutCreateFlagBits,    DescriptorSetLayoutCreate) \
    X__(VkExternalFenceHandleTypeFlagBits,    ExternalFenceHandleType) \
    X__(VkPipelineStageFlagBits,    PipelineStage) \
    X__(VkPipelineShaderStageCreateFlagBits,    PipelineShaderStageCreate) \
    X__(VkShaderCorePropertiesFlagBitsAMD,    ShaderCorePropertiesAMD) \
    X__(VkDependencyFlagBits,    Dependency) \
    X__(VkGeometryInstanceFlagBitsNV,    GeometryInstanceNV) \
    X__(VkConditionalRenderingFlagBitsEXT,    ConditionalRenderingEXT) \
    X__(VkMemoryPropertyFlagBits,    MemoryProperty) \
    X__(VkPipelineCreationFeedbackFlagBitsEXT,    PipelineCreationFeedbackEXT) \
    X__(VkCommandBufferUsageFlagBits,    CommandBufferUsage) \
    X__(VkObjectEntryUsageFlagBitsNVX,    ObjectEntryUsageNVX) \

/* name, my_name, returned_only */
# define Xt_structs(X__) \
    X__(VkPipelineDynamicStateCreateInfo,    PipelineDynamicStateCreateInfo,    false) \
    X__(VkDeviceGroupSubmitInfo,    DeviceGroupSubmitInfo,    false) \
    X__(VkWin32KeyedMutexAcquireReleaseInfoKHR,    Win32KeyedMutexAcquireReleaseInfoKHR,    false) \
    X__(VkWin32KeyedMutexAcquireReleaseInfoNV,    Win32KeyedMutexAcquireReleaseInfoNV,    false) \
    X__(VkD3D12FenceSubmitInfoKHR,    D3D12FenceSubmitInfoKHR,    false) \
    X__(VkProtectedSubmitInfo,    ProtectedSubmitInfo,    false) \
    X__(VkSubmitInfo,    SubmitInfo,    false) \
    X__(VkImportSemaphoreFdInfoKHR,    ImportSemaphoreFdInfoKHR,    false) \
    X__(VkPipelineRasterizationStateRasterizationOrderAMD,    PipelineRasterizationStateRasterizationOrderAMD,    false) \
    X__(VkPhysicalDeviceShaderCorePropertiesAMD,    PhysicalDeviceShaderCorePropertiesAMD,    true) \
    X__(VkImageSubresourceRange,    ImageSubresourceRange,    false) \
    X__(VkPipelineCreationFeedbackEXT,    PipelineCreationFeedbackEXT,    true) \
    X__(VkDeviceGroupCommandBufferBeginInfo,    DeviceGroupCommandBufferBeginInfo,    false) \
    X__(VkDeviceGroupBindSparseInfo,    DeviceGroupBindSparseInfo,    false) \
    X__(VkPerformanceConfigurationAcquireInfoINTEL,    PerformanceConfigurationAcquireInfoINTEL,    false) \
    X__(VkSubresourceLayout,    SubresourceLayout,    true) \
    X__(VkImageDrmFormatModifierExplicitCreateInfoEXT,    ImageDrmFormatModifierExplicitCreateInfoEXT,    false) \
    X__(VkMemoryPriorityAllocateInfoEXT,    MemoryPriorityAllocateInfoEXT,    false) \
    X__(VkDrmFormatModifierPropertiesEXT,    DrmFormatModifierPropertiesEXT,    true) \
    X__(VkExtent3D,    Extent3D,    false) \
    X__(VkImageFormatListCreateInfoKHR,    ImageFormatListCreateInfoKHR,    false) \
    X__(VkDedicatedAllocationImageCreateInfoNV,    DedicatedAllocationImageCreateInfoNV,    false) \
    X__(VkImageSwapchainCreateInfoKHR,    ImageSwapchainCreateInfoKHR,    false) \
    X__(VkExternalMemoryImageCreateInfo,    ExternalMemoryImageCreateInfo,    false) \
    X__(VkExternalFormatANDROID,    ExternalFormatANDROID,    false) \
    X__(VkExternalMemoryImageCreateInfoNV,    ExternalMemoryImageCreateInfoNV,    false) \
    X__(VkImageDrmFormatModifierListCreateInfoEXT,    ImageDrmFormatModifierListCreateInfoEXT,    false) \
    X__(VkImageStencilUsageCreateInfoEXT,    ImageStencilUsageCreateInfoEXT,    false) \
    X__(VkImageCreateInfo,    ImageCreateInfo,    false) \
    X__(VkCommandBufferAllocateInfo,    CommandBufferAllocateInfo,    false) \
    X__(VkViewportWScalingNV,    ViewportWScalingNV,    false) \
    X__(VkPipelineViewportWScalingStateCreateInfoNV,    PipelineViewportWScalingStateCreateInfoNV,    false) \
    X__(VkPipelineColorBlendAttachmentState,    PipelineColorBlendAttachmentState,    false) \
    X__(VkPipelineColorBlendAdvancedStateCreateInfoEXT,    PipelineColorBlendAdvancedStateCreateInfoEXT,    false) \
    X__(VkPipelineColorBlendStateCreateInfo,    PipelineColorBlendStateCreateInfo,    false) \
    X__(VkViewportSwizzleNV,    ViewportSwizzleNV,    false) \
    X__(VkImageSparseMemoryRequirementsInfo2,    ImageSparseMemoryRequirementsInfo2,    false) \
    X__(VkDeviceGroupDeviceCreateInfo,    DeviceGroupDeviceCreateInfo,    false) \
    X__(VkValidationFlagsEXT,    ValidationFlagsEXT,    false) \
    X__(VkViewport,    Viewport,    false) \
    X__(VkOffset2D,    Offset2D,    false) \
    X__(VkExtent2D,    Extent2D,    false) \
    X__(VkRect2D,    Rect2D,    false) \
    X__(VkPipelineViewportSwizzleStateCreateInfoNV,    PipelineViewportSwizzleStateCreateInfoNV,    false) \
    X__(VkPipelineViewportExclusiveScissorStateCreateInfoNV,    PipelineViewportExclusiveScissorStateCreateInfoNV,    false) \
    X__(VkShadingRatePaletteNV,    ShadingRatePaletteNV,    false) \
    X__(VkPipelineViewportShadingRateImageStateCreateInfoNV,    PipelineViewportShadingRateImageStateCreateInfoNV,    false) \
    X__(VkCoarseSampleLocationNV,    CoarseSampleLocationNV,    false) \
    X__(VkCoarseSampleOrderCustomNV,    CoarseSampleOrderCustomNV,    false) \
    X__(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV,    PipelineViewportCoarseSampleOrderStateCreateInfoNV,    false) \
    X__(VkPipelineViewportStateCreateInfo,    PipelineViewportStateCreateInfo,    false) \
    X__(VkPipelineDiscardRectangleStateCreateInfoEXT,    PipelineDiscardRectangleStateCreateInfoEXT,    false) \
    X__(VkGeometryTrianglesNV,    GeometryTrianglesNV,    false) \
    X__(VkGeometryAABBNV,    GeometryAABBNV,    false) \
    X__(VkGeometryDataNV,    GeometryDataNV,    false) \
    X__(VkGeometryNV,    GeometryNV,    false) \
    X__(VkAccelerationStructureInfoNV,    AccelerationStructureInfoNV,    false) \
    X__(VkPhysicalDeviceCooperativeMatrixFeaturesNV,    PhysicalDeviceCooperativeMatrixFeaturesNV,    false) \
    X__(VkDedicatedAllocationMemoryAllocateInfoNV,    DedicatedAllocationMemoryAllocateInfoNV,    false) \
    X__(VkPhysicalDevicePCIBusInfoPropertiesEXT,    PhysicalDevicePCIBusInfoPropertiesEXT,    true) \
    X__(VkImportAndroidHardwareBufferInfoANDROID,    ImportAndroidHardwareBufferInfoANDROID,    false) \
    X__(VkPipelineTessellationDomainOriginStateCreateInfo,    PipelineTessellationDomainOriginStateCreateInfo,    false) \
    X__(VkPipelineTessellationStateCreateInfo,    PipelineTessellationStateCreateInfo,    false) \
    X__(VkDisplayPlaneCapabilitiesKHR,    DisplayPlaneCapabilitiesKHR,    true) \
    X__(VkSurfaceCapabilitiesKHR,    SurfaceCapabilitiesKHR,    true) \
    X__(VkPhysicalDeviceRayTracingPropertiesNV,    PhysicalDeviceRayTracingPropertiesNV,    true) \
    X__(VkAttachmentReference2KHR,    AttachmentReference2KHR,    false) \
    X__(VkSubpassDescriptionDepthStencilResolveKHR,    SubpassDescriptionDepthStencilResolveKHR,    false) \
    X__(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT,    PhysicalDeviceBlendOperationAdvancedFeaturesEXT,    false) \
    X__(VkSubpassDescription2KHR,    SubpassDescription2KHR,    false) \
    X__(VkBindBufferMemoryDeviceGroupInfo,    BindBufferMemoryDeviceGroupInfo,    false) \
    X__(VkMemoryHeap,    MemoryHeap,    true) \
    X__(VkVertexInputBindingDescription,    VertexInputBindingDescription,    false) \
    X__(VkImportMemoryWin32HandleInfoKHR,    ImportMemoryWin32HandleInfoKHR,    false) \
    X__(VkPhysicalDeviceSubgroupProperties,    PhysicalDeviceSubgroupProperties,    true) \
    X__(VkPhysicalDeviceExternalFenceInfo,    PhysicalDeviceExternalFenceInfo,    false) \
    X__(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL,    PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL,    false) \
    X__(VkBindImageMemorySwapchainInfoKHR,    BindImageMemorySwapchainInfoKHR,    false) \
    X__(VkBindImagePlaneMemoryInfo,    BindImagePlaneMemoryInfo,    false) \
    X__(VkBindImageMemoryDeviceGroupInfo,    BindImageMemoryDeviceGroupInfo,    false) \
    X__(VkBindImageMemoryInfo,    BindImageMemoryInfo,    false) \
    X__(VkDisplayEventInfoEXT,    DisplayEventInfoEXT,    false) \
    X__(VkCommandBufferInheritanceConditionalRenderingInfoEXT,    CommandBufferInheritanceConditionalRenderingInfoEXT,    false) \
    X__(VkCommandBufferInheritanceInfo,    CommandBufferInheritanceInfo,    false) \
    X__(VkCommandBufferBeginInfo,    CommandBufferBeginInfo,    false) \
    X__(VkSharedPresentSurfaceCapabilitiesKHR,    SharedPresentSurfaceCapabilitiesKHR,    true) \
    X__(VkDispatchIndirectCommand,    DispatchIndirectCommand,    false) \
    X__(VkObjectTablePushConstantEntryNVX,    ObjectTablePushConstantEntryNVX,    false) \
    X__(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT,    PhysicalDeviceSamplerFilterMinmaxPropertiesEXT,    true) \
    X__(VkDeviceGroupPresentInfoKHR,    DeviceGroupPresentInfoKHR,    false) \
    X__(VkPresentTimeGOOGLE,    PresentTimeGOOGLE,    false) \
    X__(VkPresentTimesInfoGOOGLE,    PresentTimesInfoGOOGLE,    false) \
    X__(VkDisplayPresentInfoKHR,    DisplayPresentInfoKHR,    false) \
    X__(VkRectLayerKHR,    RectLayerKHR,    false) \
    X__(VkPresentRegionKHR,    PresentRegionKHR,    false) \
    X__(VkPresentRegionsKHR,    PresentRegionsKHR,    false) \
    X__(VkPresentFrameTokenGGP,    PresentFrameTokenGGP,    false) \
    X__(VkPresentInfoKHR,    PresentInfoKHR,    false) \
    X__(VkConformanceVersionKHR,    ConformanceVersionKHR,    false) \
    X__(VkPhysicalDeviceDriverPropertiesKHR,    PhysicalDeviceDriverPropertiesKHR,    true) \
    X__(VkPhysicalDeviceCooperativeMatrixPropertiesNV,    PhysicalDeviceCooperativeMatrixPropertiesNV,    true) \
    X__(VkSparseImageFormatProperties,    SparseImageFormatProperties,    true) \
    X__(VkExtensionProperties,    ExtensionProperties,    true) \
    X__(VkBufferDeviceAddressCreateInfoEXT,    BufferDeviceAddressCreateInfoEXT,    false) \
    X__(VkOffset3D,    Offset3D,    false) \
    X__(VkAccelerationStructureMemoryRequirementsInfoNV,    AccelerationStructureMemoryRequirementsInfoNV,    false) \
    X__(VkDeviceGeneratedCommandsLimitsNVX,    DeviceGeneratedCommandsLimitsNVX,    false) \
    X__(VkMemoryRequirements,    MemoryRequirements,    true) \
    X__(VkMemoryDedicatedRequirements,    MemoryDedicatedRequirements,    true) \
    X__(VkMemoryRequirements2,    MemoryRequirements2,    true) \
    X__(VkSwapchainCounterCreateInfoEXT,    SwapchainCounterCreateInfoEXT,    false) \
    X__(VkImageViewHandleInfoNVX,    ImageViewHandleInfoNVX,    false) \
    X__(VkMemoryGetFdInfoKHR,    MemoryGetFdInfoKHR,    false) \
    X__(VkSpecializationMapEntry,    SpecializationMapEntry,    false) \
    X__(VkSpecializationInfo,    SpecializationInfo,    false) \
    X__(VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT,    PipelineShaderStageRequiredSubgroupSizeCreateInfoEXT,    true) \
    X__(VkPipelineShaderStageCreateInfo,    PipelineShaderStageCreateInfo,    false) \
    X__(VkRayTracingShaderGroupCreateInfoNV,    RayTracingShaderGroupCreateInfoNV,    false) \
    X__(VkPipelineCreationFeedbackCreateInfoEXT,    PipelineCreationFeedbackCreateInfoEXT,    false) \
    X__(VkRayTracingPipelineCreateInfoNV,    RayTracingPipelineCreateInfoNV,    false) \
    X__(VkDrawIndirectCommand,    DrawIndirectCommand,    false) \
    X__(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT,    PhysicalDeviceBlendOperationAdvancedPropertiesEXT,    true) \
    X__(VkDeviceQueueInfo2,    DeviceQueueInfo2,    false) \
    X__(VkFilterCubicImageViewImageFormatPropertiesEXT,    FilterCubicImageViewImageFormatPropertiesEXT,    true) \
    X__(VkSemaphoreGetWin32HandleInfoKHR,    SemaphoreGetWin32HandleInfoKHR,    false) \
    X__(VkVertexInputBindingDivisorDescriptionEXT,    VertexInputBindingDivisorDescriptionEXT,    false) \
    X__(VkPipelineVertexInputDivisorStateCreateInfoEXT,    PipelineVertexInputDivisorStateCreateInfoEXT,    false) \
    X__(VkPerformanceValueINTEL,    PerformanceValueINTEL,    false) \
    X__(VkComponentMapping,    ComponentMapping,    false) \
    X__(VkDebugUtilsObjectNameInfoEXT,    DebugUtilsObjectNameInfoEXT,    false) \
    X__(VkPhysicalDeviceSampleLocationsPropertiesEXT,    PhysicalDeviceSampleLocationsPropertiesEXT,    true) \
    X__(VkMemoryType,    MemoryType,    true) \
    X__(VkPhysicalDeviceMemoryProperties,    PhysicalDeviceMemoryProperties,    true) \
    X__(VkPhysicalDeviceMemoryBudgetPropertiesEXT,    PhysicalDeviceMemoryBudgetPropertiesEXT,    true) \
    X__(VkPhysicalDeviceMemoryProperties2,    PhysicalDeviceMemoryProperties2,    true) \
    X__(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV,    PhysicalDeviceRepresentativeFragmentTestFeaturesNV,    false) \
    X__(VkImageFormatProperties,    ImageFormatProperties,    true) \
    X__(VkImageSubresourceLayers,    ImageSubresourceLayers,    false) \
    X__(VkBufferImageCopy,    BufferImageCopy,    false) \
    X__(VkLayerProperties,    LayerProperties,    true) \
    X__(VkPhysicalDeviceShaderAtomicInt64FeaturesKHR,    PhysicalDeviceShaderAtomicInt64FeaturesKHR,    false) \
    X__(VkPhysicalDeviceSubgroupSizeControlPropertiesEXT,    PhysicalDeviceSubgroupSizeControlPropertiesEXT,    true) \
    X__(VkDisplayNativeHdrSurfaceCapabilitiesAMD,    DisplayNativeHdrSurfaceCapabilitiesAMD,    true) \
    X__(VkShaderResourceUsageAMD,    ShaderResourceUsageAMD,    true) \
    X__(VkAttachmentDescription,    AttachmentDescription,    false) \
    X__(VkDescriptorPoolSize,    DescriptorPoolSize,    false) \
    X__(VkDescriptorPoolInlineUniformBlockCreateInfoEXT,    DescriptorPoolInlineUniformBlockCreateInfoEXT,    false) \
    X__(VkDescriptorPoolCreateInfo,    DescriptorPoolCreateInfo,    false) \
    X__(VkExternalMemoryBufferCreateInfo,    ExternalMemoryBufferCreateInfo,    false) \
    X__(VkSubpassEndInfoKHR,    SubpassEndInfoKHR,    false) \
    X__(VkPipelineExecutableStatisticKHR,    PipelineExecutableStatisticKHR,    true) \
    X__(VkEventCreateInfo,    EventCreateInfo,    false) \
    X__(VkPhysicalDeviceSubgroupSizeControlFeaturesEXT,    PhysicalDeviceSubgroupSizeControlFeaturesEXT,    false) \
    X__(VkDebugMarkerMarkerInfoEXT,    DebugMarkerMarkerInfoEXT,    false) \
    X__(VkBufferMemoryBarrier,    BufferMemoryBarrier,    false) \
    X__(VkMemoryBarrier,    MemoryBarrier,    false) \
    X__(VkDisplayPlaneInfo2KHR,    DisplayPlaneInfo2KHR,    false) \
    X__(VkImportMemoryFdInfoKHR,    ImportMemoryFdInfoKHR,    false) \
    X__(VkDeviceGroupPresentCapabilitiesKHR,    DeviceGroupPresentCapabilitiesKHR,    true) \
    X__(VkPhysicalDeviceImageViewImageFormatInfoEXT,    PhysicalDeviceImageViewImageFormatInfoEXT,    false) \
    X__(VkDescriptorUpdateTemplateEntry,    DescriptorUpdateTemplateEntry,    false) \
    X__(VkPhysicalDeviceDiscardRectanglePropertiesEXT,    PhysicalDeviceDiscardRectanglePropertiesEXT,    true) \
    X__(VkExternalSemaphoreProperties,    ExternalSemaphoreProperties,    true) \
    X__(VkFramebufferMixedSamplesCombinationNV,    FramebufferMixedSamplesCombinationNV,    true) \
    X__(VkSurfaceFormatKHR,    SurfaceFormatKHR,    true) \
    X__(VkSurfaceFormat2KHR,    SurfaceFormat2KHR,    true) \
    X__(VkSurfaceProtectedCapabilitiesKHR,    SurfaceProtectedCapabilitiesKHR,    false) \
    X__(VkPhysicalDeviceFeatures,    PhysicalDeviceFeatures,    false) \
    X__(VkDisplaySurfaceCreateInfoKHR,    DisplaySurfaceCreateInfoKHR,    false) \
    X__(VkImagePlaneMemoryRequirementsInfo,    ImagePlaneMemoryRequirementsInfo,    false) \
    X__(VkImageMemoryRequirementsInfo2,    ImageMemoryRequirementsInfo2,    false) \
    X__(VkExportMemoryWin32HandleInfoKHR,    ExportMemoryWin32HandleInfoKHR,    false) \
    X__(VkApplicationInfo,    ApplicationInfo,    false) \
    X__(VkDebugUtilsMessengerCreateInfoEXT,    DebugUtilsMessengerCreateInfoEXT,    false) \
    X__(VkDebugReportCallbackCreateInfoEXT,    DebugReportCallbackCreateInfoEXT,    false) \
    X__(VkValidationFeaturesEXT,    ValidationFeaturesEXT,    false) \
    X__(VkInstanceCreateInfo,    InstanceCreateInfo,    false) \
    X__(VkPhysicalDeviceShadingRateImageFeaturesNV,    PhysicalDeviceShadingRateImageFeaturesNV,    false) \
    X__(VkPipelineCoverageModulationStateCreateInfoNV,    PipelineCoverageModulationStateCreateInfoNV,    false) \
    X__(VkAndroidHardwareBufferFormatPropertiesANDROID,    AndroidHardwareBufferFormatPropertiesANDROID,    true) \
    X__(VkAndroidHardwareBufferPropertiesANDROID,    AndroidHardwareBufferPropertiesANDROID,    true) \
    X__(VkObjectTableIndexBufferEntryNVX,    ObjectTableIndexBufferEntryNVX,    false) \
    X__(VkMemoryWin32HandlePropertiesKHR,    MemoryWin32HandlePropertiesKHR,    true) \
    X__(VkAttachmentReference,    AttachmentReference,    false) \
    X__(VkSubpassDescription,    SubpassDescription,    false) \
    X__(VkPhysicalDeviceDescriptorIndexingPropertiesEXT,    PhysicalDeviceDescriptorIndexingPropertiesEXT,    true) \
    X__(VkPhysicalDeviceMeshShaderFeaturesNV,    PhysicalDeviceMeshShaderFeaturesNV,    false) \
    X__(VkInputAttachmentAspectReference,    InputAttachmentAspectReference,    false) \
    X__(VkIOSSurfaceCreateInfoMVK,    IOSSurfaceCreateInfoMVK,    false) \
    X__(VkSwapchainDisplayNativeHdrCreateInfoAMD,    SwapchainDisplayNativeHdrCreateInfoAMD,    false) \
    X__(VkPhysicalDeviceGroupProperties,    PhysicalDeviceGroupProperties,    true) \
    X__(VkMemoryHostPointerPropertiesEXT,    MemoryHostPointerPropertiesEXT,    true) \
    X__(VkVertexInputAttributeDescription,    VertexInputAttributeDescription,    false) \
    X__(VkImportFenceFdInfoKHR,    ImportFenceFdInfoKHR,    false) \
    X__(VkDeviceMemoryOverallocationCreateInfoAMD,    DeviceMemoryOverallocationCreateInfoAMD,    false) \
    X__(VkPerformanceStreamMarkerInfoINTEL,    PerformanceStreamMarkerInfoINTEL,    false) \
    X__(VkPhysicalDeviceCornerSampledImageFeaturesNV,    PhysicalDeviceCornerSampledImageFeaturesNV,    false) \
    X__(VkSamplerYcbcrConversionImageFormatProperties,    SamplerYcbcrConversionImageFormatProperties,    true) \
    X__(VkAndroidHardwareBufferUsageANDROID,    AndroidHardwareBufferUsageANDROID,    true) \
    X__(VkExternalMemoryProperties,    ExternalMemoryProperties,    true) \
    X__(VkExternalImageFormatProperties,    ExternalImageFormatProperties,    true) \
    X__(VkTextureLODGatherFormatPropertiesAMD,    TextureLODGatherFormatPropertiesAMD,    true) \
    X__(VkImageFormatProperties2,    ImageFormatProperties2,    true) \
    X__(VkXlibSurfaceCreateInfoKHR,    XlibSurfaceCreateInfoKHR,    false) \
    X__(VkBufferMemoryRequirementsInfo2,    BufferMemoryRequirementsInfo2,    false) \
    X__(VkAccelerationStructureCreateInfoNV,    AccelerationStructureCreateInfoNV,    false) \
    X__(VkPhysicalDeviceExternalSemaphoreInfo,    PhysicalDeviceExternalSemaphoreInfo,    false) \
    X__(VkImageResolve,    ImageResolve,    false) \
    X__(VkRenderPassInputAttachmentAspectCreateInfo,    RenderPassInputAttachmentAspectCreateInfo,    false) \
    X__(VkFramebufferAttachmentImageInfoKHR,    FramebufferAttachmentImageInfoKHR,    false) \
    X__(VkFramebufferAttachmentsCreateInfoKHR,    FramebufferAttachmentsCreateInfoKHR,    false) \
    X__(VkSurfaceCapabilitiesFullScreenExclusiveEXT,    SurfaceCapabilitiesFullScreenExclusiveEXT,    false) \
    X__(VkSurfaceCapabilities2KHR,    SurfaceCapabilities2KHR,    true) \
    X__(VkMemoryGetWin32HandleInfoKHR,    MemoryGetWin32HandleInfoKHR,    false) \
    X__(VkSampleLocationEXT,    SampleLocationEXT,    false) \
    X__(VkSampleLocationsInfoEXT,    SampleLocationsInfoEXT,    false) \
    X__(VkImageMemoryBarrier,    ImageMemoryBarrier,    false) \
    X__(VkPhysicalDeviceLimits,    PhysicalDeviceLimits,    true) \
    X__(VkExportSemaphoreWin32HandleInfoKHR,    ExportSemaphoreWin32HandleInfoKHR,    false) \
    X__(VkImportSemaphoreWin32HandleInfoKHR,    ImportSemaphoreWin32HandleInfoKHR,    false) \
    X__(VkMultisamplePropertiesEXT,    MultisamplePropertiesEXT,    true) \
    X__(VkPhysicalDeviceExternalImageFormatInfo,    PhysicalDeviceExternalImageFormatInfo,    false) \
    X__(VkSparseMemoryBind,    SparseMemoryBind,    false) \
    X__(VkPhysicalDeviceShadingRateImagePropertiesNV,    PhysicalDeviceShadingRateImagePropertiesNV,    true) \
    X__(VkPipelineRasterizationDepthClipStateCreateInfoEXT,    PipelineRasterizationDepthClipStateCreateInfoEXT,    false) \
    X__(VkDrawMeshTasksIndirectCommandNV,    DrawMeshTasksIndirectCommandNV,    false) \
    X__(VkAttachmentSampleLocationsEXT,    AttachmentSampleLocationsEXT,    false) \
    X__(VkSamplerYcbcrConversionInfo,    SamplerYcbcrConversionInfo,    false) \
    X__(VkDisplayModeParametersKHR,    DisplayModeParametersKHR,    false) \
    X__(VkDisplayModeCreateInfoKHR,    DisplayModeCreateInfoKHR,    false) \
    X__(VkDescriptorUpdateTemplateCreateInfo,    DescriptorUpdateTemplateCreateInfo,    false) \
    X__(VkMappedMemoryRange,    MappedMemoryRange,    false) \
    X__(VkSubpassSampleLocationsEXT,    SubpassSampleLocationsEXT,    false) \
    X__(VkFenceGetWin32HandleInfoKHR,    FenceGetWin32HandleInfoKHR,    false) \
    X__(VkObjectTablePipelineEntryNVX,    ObjectTablePipelineEntryNVX,    false) \
    X__(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV,    PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV,    false) \
    X__(VkPhysicalDevice8BitStorageFeaturesKHR,    PhysicalDevice8BitStorageFeaturesKHR,    false) \
    X__(VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT,    PhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT,    false) \
    X__(VkPhysicalDeviceHostQueryResetFeaturesEXT,    PhysicalDeviceHostQueryResetFeaturesEXT,    false) \
    X__(VkPhysicalDeviceMultiviewFeatures,    PhysicalDeviceMultiviewFeatures,    false) \
    X__(VkPhysicalDeviceProtectedMemoryFeatures,    PhysicalDeviceProtectedMemoryFeatures,    false) \
    X__(VkPhysicalDevice16BitStorageFeatures,    PhysicalDevice16BitStorageFeatures,    false) \
    X__(VkPhysicalDeviceImagelessFramebufferFeaturesKHR,    PhysicalDeviceImagelessFramebufferFeaturesKHR,    false) \
    X__(VkPhysicalDeviceExclusiveScissorFeaturesNV,    PhysicalDeviceExclusiveScissorFeaturesNV,    false) \
    X__(VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR,    PhysicalDeviceUniformBufferStandardLayoutFeaturesKHR,    false) \
    X__(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT,    PhysicalDeviceYcbcrImageArraysFeaturesEXT,    false) \
    X__(VkPhysicalDeviceIndexTypeUint8FeaturesEXT,    PhysicalDeviceIndexTypeUint8FeaturesEXT,    false) \
    X__(VkPhysicalDeviceDepthClipEnableFeaturesEXT,    PhysicalDeviceDepthClipEnableFeaturesEXT,    false) \
    X__(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT,    PhysicalDeviceTexelBufferAlignmentFeaturesEXT,    false) \
    X__(VkPhysicalDeviceDescriptorIndexingFeaturesEXT,    PhysicalDeviceDescriptorIndexingFeaturesEXT,    false) \
    X__(VkPhysicalDeviceScalarBlockLayoutFeaturesEXT,    PhysicalDeviceScalarBlockLayoutFeaturesEXT,    false) \
    X__(VkPhysicalDeviceShaderDrawParametersFeatures,    PhysicalDeviceShaderDrawParametersFeatures,    false) \
    X__(VkPhysicalDeviceVariablePointersFeatures,    PhysicalDeviceVariablePointersFeatures,    false) \
    X__(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV,    PhysicalDeviceShaderSMBuiltinsFeaturesNV,    false) \
    X__(VkPhysicalDeviceConditionalRenderingFeaturesEXT,    PhysicalDeviceConditionalRenderingFeaturesEXT,    false) \
    X__(VkPhysicalDeviceShaderImageFootprintFeaturesNV,    PhysicalDeviceShaderImageFootprintFeaturesNV,    false) \
    X__(VkPhysicalDeviceShaderFloat16Int8FeaturesKHR,    PhysicalDeviceShaderFloat16Int8FeaturesKHR,    false) \
    X__(VkPhysicalDeviceInlineUniformBlockFeaturesEXT,    PhysicalDeviceInlineUniformBlockFeaturesEXT,    false) \
    X__(VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT,    PhysicalDeviceTextureCompressionASTCHDRFeaturesEXT,    false) \
    X__(VkPhysicalDeviceASTCDecodeFeaturesEXT,    PhysicalDeviceASTCDecodeFeaturesEXT,    false) \
    X__(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT,    PhysicalDeviceBufferDeviceAddressFeaturesEXT,    false) \
    X__(VkPhysicalDeviceLineRasterizationFeaturesEXT,    PhysicalDeviceLineRasterizationFeaturesEXT,    false) \
    X__(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR,    PhysicalDevicePipelineExecutablePropertiesFeaturesKHR,    false) \
    X__(VkPhysicalDeviceSamplerYcbcrConversionFeatures,    PhysicalDeviceSamplerYcbcrConversionFeatures,    false) \
    X__(VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV,    PhysicalDeviceFragmentShaderBarycentricFeaturesNV,    false) \
    X__(VkPhysicalDeviceCoverageReductionModeFeaturesNV,    PhysicalDeviceCoverageReductionModeFeaturesNV,    false) \
    X__(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV,    PhysicalDeviceComputeShaderDerivativesFeaturesNV,    false) \
    X__(VkPhysicalDeviceTransformFeedbackFeaturesEXT,    PhysicalDeviceTransformFeedbackFeaturesEXT,    false) \
    X__(VkPhysicalDeviceVulkanMemoryModelFeaturesKHR,    PhysicalDeviceVulkanMemoryModelFeaturesKHR,    false) \
    X__(VkPhysicalDeviceCoherentMemoryFeaturesAMD,    PhysicalDeviceCoherentMemoryFeaturesAMD,    false) \
    X__(VkPhysicalDeviceFragmentDensityMapFeaturesEXT,    PhysicalDeviceFragmentDensityMapFeaturesEXT,    true) \
    X__(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT,    PhysicalDeviceVertexAttributeDivisorFeaturesEXT,    false) \
    X__(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT,    PhysicalDeviceFragmentShaderInterlockFeaturesEXT,    false) \
    X__(VkPhysicalDeviceMemoryPriorityFeaturesEXT,    PhysicalDeviceMemoryPriorityFeaturesEXT,    false) \
    X__(VkPhysicalDeviceFeatures2,    PhysicalDeviceFeatures2,    false) \
    X__(VkCalibratedTimestampInfoEXT,    CalibratedTimestampInfoEXT,    false) \
    X__(VkObjectTableVertexBufferEntryNVX,    ObjectTableVertexBufferEntryNVX,    false) \
    X__(VkAllocationCallbacks,    AllocationCallbacks,    false) \
    X__(VkConditionalRenderingBeginInfoEXT,    ConditionalRenderingBeginInfoEXT,    false) \
    X__(VkValidationCacheCreateInfoEXT,    ValidationCacheCreateInfoEXT,    false) \
    X__(VkDisplayPlanePropertiesKHR,    DisplayPlanePropertiesKHR,    true) \
    X__(VkDisplayPlaneProperties2KHR,    DisplayPlaneProperties2KHR,    true) \
    X__(VkDescriptorBufferInfo,    DescriptorBufferInfo,    false) \
    X__(VkImportMemoryHostPointerInfoEXT,    ImportMemoryHostPointerInfoEXT,    false) \
    X__(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT,    DescriptorSetVariableDescriptorCountAllocateInfoEXT,    false) \
    X__(VkPipelineVertexInputStateCreateInfo,    PipelineVertexInputStateCreateInfo,    false) \
    X__(VkPhysicalDeviceShaderCoreProperties2AMD,    PhysicalDeviceShaderCoreProperties2AMD,    true) \
    X__(VkClearDepthStencilValue,    ClearDepthStencilValue,    false) \
    X__(VkImagePipeSurfaceCreateInfoFUCHSIA,    ImagePipeSurfaceCreateInfoFUCHSIA,    false) \
    X__(VkPhysicalDeviceMultiviewProperties,    PhysicalDeviceMultiviewProperties,    true) \
    X__(VkPhysicalDeviceSparseImageFormatInfo2,    PhysicalDeviceSparseImageFormatInfo2,    false) \
    X__(VkShaderModuleValidationCacheCreateInfoEXT,    ShaderModuleValidationCacheCreateInfoEXT,    false) \
    X__(VkShaderModuleCreateInfo,    ShaderModuleCreateInfo,    false) \
    X__(VkPipelineRasterizationStateStreamCreateInfoEXT,    PipelineRasterizationStateStreamCreateInfoEXT,    false) \
    X__(VkPipelineRasterizationLineStateCreateInfoEXT,    PipelineRasterizationLineStateCreateInfoEXT,    false) \
    X__(VkPipelineRasterizationConservativeStateCreateInfoEXT,    PipelineRasterizationConservativeStateCreateInfoEXT,    false) \
    X__(VkPipelineRasterizationStateCreateInfo,    PipelineRasterizationStateCreateInfo,    false) \
    X__(VkDeviceEventInfoEXT,    DeviceEventInfoEXT,    false) \
    X__(VkExportMemoryWin32HandleInfoNV,    ExportMemoryWin32HandleInfoNV,    false) \
    X__(VkDisplayPropertiesKHR,    DisplayPropertiesKHR,    true) \
    X__(VkDisplayProperties2KHR,    DisplayProperties2KHR,    true) \
    X__(VkMetalSurfaceCreateInfoEXT,    MetalSurfaceCreateInfoEXT,    false) \
    X__(VkDebugUtilsObjectTagInfoEXT,    DebugUtilsObjectTagInfoEXT,    false) \
    X__(VkIndirectCommandsLayoutTokenNVX,    IndirectCommandsLayoutTokenNVX,    false) \
    X__(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT,    DescriptorSetLayoutBindingFlagsCreateInfoEXT,    false) \
    X__(VkPhysicalDeviceLineRasterizationPropertiesEXT,    PhysicalDeviceLineRasterizationPropertiesEXT,    true) \
    X__(VkPhysicalDeviceMeshShaderPropertiesNV,    PhysicalDeviceMeshShaderPropertiesNV,    true) \
    X__(VkPhysicalDeviceSparseProperties,    PhysicalDeviceSparseProperties,    true) \
    X__(VkPhysicalDeviceProperties,    PhysicalDeviceProperties,    true) \
    X__(VkExternalFenceProperties,    ExternalFenceProperties,    true) \
    X__(VkIndirectCommandsLayoutCreateInfoNVX,    IndirectCommandsLayoutCreateInfoNVX,    false) \
    X__(VkBufferViewCreateInfo,    BufferViewCreateInfo,    false) \
    X__(VkSamplerReductionModeCreateInfoEXT,    SamplerReductionModeCreateInfoEXT,    false) \
    X__(VkExternalImageFormatPropertiesNV,    ExternalImageFormatPropertiesNV,    true) \
    X__(VkPhysicalDeviceIDProperties,    PhysicalDeviceIDProperties,    true) \
    X__(VkQueryPoolCreateInfo,    QueryPoolCreateInfo,    false) \
    X__(VkPipelineSampleLocationsStateCreateInfoEXT,    PipelineSampleLocationsStateCreateInfoEXT,    false) \
    X__(VkPipelineCoverageToColorStateCreateInfoNV,    PipelineCoverageToColorStateCreateInfoNV,    false) \
    X__(VkPipelineCoverageReductionStateCreateInfoNV,    PipelineCoverageReductionStateCreateInfoNV,    false) \
    X__(VkPipelineMultisampleStateCreateInfo,    PipelineMultisampleStateCreateInfo,    false) \
    X__(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT,    PhysicalDeviceVertexAttributeDivisorPropertiesEXT,    true) \
    X__(VkPastPresentationTimingGOOGLE,    PastPresentationTimingGOOGLE,    true) \
    X__(VkPushConstantRange,    PushConstantRange,    false) \
    X__(VkPipelineLayoutCreateInfo,    PipelineLayoutCreateInfo,    false) \
    X__(VkSubpassBeginInfoKHR,    SubpassBeginInfoKHR,    false) \
    X__(VkStencilOpState,    StencilOpState,    false) \
    X__(VkPipelineDepthStencilStateCreateInfo,    PipelineDepthStencilStateCreateInfo,    false) \
    X__(VkRenderPassFragmentDensityMapCreateInfoEXT,    RenderPassFragmentDensityMapCreateInfoEXT,    false) \
    X__(VkImageViewUsageCreateInfo,    ImageViewUsageCreateInfo,    false) \
    X__(VkImageViewASTCDecodeModeEXT,    ImageViewASTCDecodeModeEXT,    false) \
    X__(VkImageViewCreateInfo,    ImageViewCreateInfo,    false) \
    X__(VkPhysicalDeviceImageDrmFormatModifierInfoEXT,    PhysicalDeviceImageDrmFormatModifierInfoEXT,    false) \
    X__(VkDebugUtilsLabelEXT,    DebugUtilsLabelEXT,    false) \
    X__(VkWin32SurfaceCreateInfoKHR,    Win32SurfaceCreateInfoKHR,    false) \
    X__(VkInitializePerformanceApiInfoINTEL,    InitializePerformanceApiInfoINTEL,    false) \
    X__(VkPipelineInfoKHR,    PipelineInfoKHR,    false) \
    X__(VkPipelineCacheCreateInfo,    PipelineCacheCreateInfo,    false) \
    X__(VkClearRect,    ClearRect,    false) \
    X__(VkDeviceGroupSwapchainCreateInfoKHR,    DeviceGroupSwapchainCreateInfoKHR,    false) \
    X__(VkAttachmentDescription2KHR,    AttachmentDescription2KHR,    false) \
    X__(VkDescriptorSetLayoutBinding,    DescriptorSetLayoutBinding,    false) \
    X__(VkDisplayPlaneCapabilities2KHR,    DisplayPlaneCapabilities2KHR,    true) \
    X__(VkRenderPassSampleLocationsBeginInfoEXT,    RenderPassSampleLocationsBeginInfoEXT,    false) \
    X__(VkSparseImageOpaqueMemoryBindInfo,    SparseImageOpaqueMemoryBindInfo,    false) \
    X__(VkDisplayModePropertiesKHR,    DisplayModePropertiesKHR,    true) \
    X__(VkPipelineRepresentativeFragmentTestStateCreateInfoNV,    PipelineRepresentativeFragmentTestStateCreateInfoNV,    false) \
    X__(VkSurfaceFullScreenExclusiveWin32InfoEXT,    SurfaceFullScreenExclusiveWin32InfoEXT,    false) \
    X__(VkSurfaceFullScreenExclusiveInfoEXT,    SurfaceFullScreenExclusiveInfoEXT,    false) \
    X__(VkSwapchainCreateInfoKHR,    SwapchainCreateInfoKHR,    false) \
    X__(VkObjectTableCreateInfoNVX,    ObjectTableCreateInfoNVX,    false) \
    X__(VkSubpassDependency,    SubpassDependency,    false) \
    X__(VkRenderPassMultiviewCreateInfo,    RenderPassMultiviewCreateInfo,    false) \
    X__(VkAcquireNextImageInfoKHR,    AcquireNextImageInfoKHR,    false) \
    X__(VkQueryPoolCreateInfoINTEL,    QueryPoolCreateInfoINTEL,    false) \
    X__(VkXYColorEXT,    XYColorEXT,    false) \
    X__(VkHdrMetadataEXT,    HdrMetadataEXT,    false) \
    X__(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT,    DescriptorSetVariableDescriptorCountLayoutSupportEXT,    true) \
    X__(VkDescriptorSetLayoutSupport,    DescriptorSetLayoutSupport,    true) \
    X__(VkPhysicalDeviceInlineUniformBlockPropertiesEXT,    PhysicalDeviceInlineUniformBlockPropertiesEXT,    true) \
    X__(VkDrawIndexedIndirectCommand,    DrawIndexedIndirectCommand,    false) \
    X__(VkFenceGetFdInfoKHR,    FenceGetFdInfoKHR,    false) \
    X__(VkExportFenceWin32HandleInfoKHR,    ExportFenceWin32HandleInfoKHR,    false) \
    X__(VkPipelineExecutableInternalRepresentationKHR,    PipelineExecutableInternalRepresentationKHR,    false) \
    X__(VkRenderPassAttachmentBeginInfoKHR,    RenderPassAttachmentBeginInfoKHR,    false) \
    X__(VkPhysicalDeviceMaintenance3Properties,    PhysicalDeviceMaintenance3Properties,    true) \
    X__(VkSwapchainImageCreateInfoANDROID,    SwapchainImageCreateInfoANDROID,    false) \
    X__(VkClearAttachment,    ClearAttachment,    false) \
    X__(VkImportMemoryWin32HandleInfoNV,    ImportMemoryWin32HandleInfoNV,    false) \
    X__(VkPhysicalDeviceImageFormatInfo2,    PhysicalDeviceImageFormatInfo2,    false) \
    X__(VkImportFenceWin32HandleInfoKHR,    ImportFenceWin32HandleInfoKHR,    false) \
    X__(VkNativeBufferUsage2ANDROID,    NativeBufferUsage2ANDROID,    false) \
    X__(VkNativeBufferANDROID,    NativeBufferANDROID,    false) \
    X__(VkExportFenceCreateInfo,    ExportFenceCreateInfo,    false) \
    X__(VkPhysicalDevicePointClippingProperties,    PhysicalDevicePointClippingProperties,    true) \
    X__(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV,    PhysicalDeviceShaderSMBuiltinsPropertiesNV,    true) \
    X__(VkPhysicalDeviceExternalMemoryHostPropertiesEXT,    PhysicalDeviceExternalMemoryHostPropertiesEXT,    true) \
    X__(VkPhysicalDeviceDepthStencilResolvePropertiesKHR,    PhysicalDeviceDepthStencilResolvePropertiesKHR,    true) \
    X__(VkPhysicalDeviceTransformFeedbackPropertiesEXT,    PhysicalDeviceTransformFeedbackPropertiesEXT,    true) \
    X__(VkPhysicalDeviceProtectedMemoryProperties,    PhysicalDeviceProtectedMemoryProperties,    true) \
    X__(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX,    PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX,    true) \
    X__(VkPhysicalDeviceConservativeRasterizationPropertiesEXT,    PhysicalDeviceConservativeRasterizationPropertiesEXT,    true) \
    X__(VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT,    PhysicalDeviceTexelBufferAlignmentPropertiesEXT,    true) \
    X__(VkPhysicalDevicePushDescriptorPropertiesKHR,    PhysicalDevicePushDescriptorPropertiesKHR,    true) \
    X__(VkPhysicalDeviceFloatControlsPropertiesKHR,    PhysicalDeviceFloatControlsPropertiesKHR,    true) \
    X__(VkPhysicalDeviceFragmentDensityMapPropertiesEXT,    PhysicalDeviceFragmentDensityMapPropertiesEXT,    true) \
    X__(VkPhysicalDeviceProperties2,    PhysicalDeviceProperties2,    true) \
    X__(VkSubpassDependency2KHR,    SubpassDependency2KHR,    false) \
    X__(VkRenderPassCreateInfo2KHR,    RenderPassCreateInfo2KHR,    false) \
    X__(VkPipelineCompilerControlCreateInfoAMD,    PipelineCompilerControlCreateInfoAMD,    false) \
    X__(VkQueueFamilyProperties,    QueueFamilyProperties,    true) \
    X__(VkQueueFamilyCheckpointPropertiesNV,    QueueFamilyCheckpointPropertiesNV,    true) \
    X__(VkQueueFamilyProperties2,    QueueFamilyProperties2,    true) \
    X__(VkSamplerYcbcrConversionCreateInfo,    SamplerYcbcrConversionCreateInfo,    false) \
    X__(VkSparseImageMemoryRequirements,    SparseImageMemoryRequirements,    true) \
    X__(VkWriteDescriptorSetInlineUniformBlockEXT,    WriteDescriptorSetInlineUniformBlockEXT,    false) \
    X__(VkExportMemoryAllocateInfo,    ExportMemoryAllocateInfo,    false) \
    X__(VkPipelineInputAssemblyStateCreateInfo,    PipelineInputAssemblyStateCreateInfo,    false) \
    X__(VkGraphicsPipelineCreateInfo,    GraphicsPipelineCreateInfo,    false) \
    X__(VkSemaphoreGetFdInfoKHR,    SemaphoreGetFdInfoKHR,    false) \
    X__(VkExportMemoryAllocateInfoNV,    ExportMemoryAllocateInfoNV,    false) \
    X__(VkExternalBufferProperties,    ExternalBufferProperties,    true) \
    X__(VkObjectTableDescriptorSetEntryNVX,    ObjectTableDescriptorSetEntryNVX,    false) \
    X__(VkPhysicalDeviceExternalBufferInfo,    PhysicalDeviceExternalBufferInfo,    false) \
    X__(VkSamplerCreateInfo,    SamplerCreateInfo,    false) \
    X__(VkImageCopy,    ImageCopy,    false) \
    X__(VkDebugMarkerObjectNameInfoEXT,    DebugMarkerObjectNameInfoEXT,    false) \
    X__(VkObjectTableEntryNVX,    ObjectTableEntryNVX,    false) \
    X__(VkDedicatedAllocationBufferCreateInfoNV,    DedicatedAllocationBufferCreateInfoNV,    false) \
    X__(VkBufferCreateInfo,    BufferCreateInfo,    false) \
    X__(VkMemoryFdPropertiesKHR,    MemoryFdPropertiesKHR,    true) \
    X__(VkDeviceGroupRenderPassBeginInfo,    DeviceGroupRenderPassBeginInfo,    false) \
    X__(VkDeviceGeneratedCommandsFeaturesNVX,    DeviceGeneratedCommandsFeaturesNVX,    false) \
    X__(VkBufferDeviceAddressInfoEXT,    BufferDeviceAddressInfoEXT,    false) \
    X__(VkImageSubresource,    ImageSubresource,    false) \
    X__(VkSparseImageMemoryBind,    SparseImageMemoryBind,    false) \
    X__(VkSparseImageMemoryBindInfo,    SparseImageMemoryBindInfo,    false) \
    X__(VkFenceCreateInfo,    FenceCreateInfo,    false) \
    X__(VkMemoryAllocateFlagsInfo,    MemoryAllocateFlagsInfo,    false) \
    X__(VkPipelineExecutableInfoKHR,    PipelineExecutableInfoKHR,    false) \
    X__(VkCopyDescriptorSet,    CopyDescriptorSet,    false) \
    X__(VkMemoryDedicatedAllocateInfo,    MemoryDedicatedAllocateInfo,    false) \
    X__(VkRenderPassBeginInfo,    RenderPassBeginInfo,    false) \
    X__(VkViSurfaceCreateInfoNN,    ViSurfaceCreateInfoNN,    false) \
    X__(VkXcbSurfaceCreateInfoKHR,    XcbSurfaceCreateInfoKHR,    false) \
    X__(VkFramebufferCreateInfo,    FramebufferCreateInfo,    false) \
    X__(VkDescriptorSetLayoutCreateInfo,    DescriptorSetLayoutCreateInfo,    false) \
    X__(VkSparseImageFormatProperties2,    SparseImageFormatProperties2,    true) \
    X__(VkDeviceQueueGlobalPriorityCreateInfoEXT,    DeviceQueueGlobalPriorityCreateInfoEXT,    false) \
    X__(VkComputePipelineCreateInfo,    ComputePipelineCreateInfo,    false) \
    X__(VkMemoryGetAndroidHardwareBufferInfoANDROID,    MemoryGetAndroidHardwareBufferInfoANDROID,    false) \
    X__(VkPhysicalDeviceSurfaceInfo2KHR,    PhysicalDeviceSurfaceInfo2KHR,    false) \
    X__(VkCmdReserveSpaceForCommandsInfoNVX,    CmdReserveSpaceForCommandsInfoNVX,    false) \
    X__(VkDisplayModeProperties2KHR,    DisplayModeProperties2KHR,    true) \
    X__(VkDescriptorImageInfo,    DescriptorImageInfo,    false) \
    X__(VkSparseBufferMemoryBindInfo,    SparseBufferMemoryBindInfo,    false) \
    X__(VkRenderPassCreateInfo,    RenderPassCreateInfo,    false) \
    X__(VkExportSemaphoreCreateInfo,    ExportSemaphoreCreateInfo,    false) \
    X__(VkSemaphoreCreateInfo,    SemaphoreCreateInfo,    false) \
    X__(VkPerformanceOverrideInfoINTEL,    PerformanceOverrideInfoINTEL,    false) \
    X__(VkCheckpointDataNV,    CheckpointDataNV,    true) \
    X__(VkAndroidSurfaceCreateInfoKHR,    AndroidSurfaceCreateInfoKHR,    false) \
    X__(VkDrmFormatModifierPropertiesListEXT,    DrmFormatModifierPropertiesListEXT,    true) \
    X__(VkDisplayPowerInfoEXT,    DisplayPowerInfoEXT,    false) \
    X__(VkShaderStatisticsInfoAMD,    ShaderStatisticsInfoAMD,    true) \
    X__(VkStreamDescriptorSurfaceCreateInfoGGP,    StreamDescriptorSurfaceCreateInfoGGP,    false) \
    X__(VkBufferCopy,    BufferCopy,    false) \
    X__(VkSurfaceCapabilities2EXT,    SurfaceCapabilities2EXT,    true) \
    X__(VkCommandPoolCreateInfo,    CommandPoolCreateInfo,    false) \
    X__(VkDeviceQueueCreateInfo,    DeviceQueueCreateInfo,    false) \
    X__(VkDeviceCreateInfo,    DeviceCreateInfo,    false) \
    X__(VkPhysicalDevicePresentationPropertiesANDROID,    PhysicalDevicePresentationPropertiesANDROID,    false) \
    X__(VkCooperativeMatrixPropertiesNV,    CooperativeMatrixPropertiesNV,    false) \
    X__(VkImageDrmFormatModifierPropertiesEXT,    ImageDrmFormatModifierPropertiesEXT,    true) \
    X__(VkDescriptorSetAllocateInfo,    DescriptorSetAllocateInfo,    false) \
    X__(VkFormatProperties,    FormatProperties,    true) \
    X__(VkFormatProperties2,    FormatProperties2,    true) \
    X__(VkIndirectCommandsTokenNVX,    IndirectCommandsTokenNVX,    false) \
    X__(VkCmdProcessCommandsInfoNVX,    CmdProcessCommandsInfoNVX,    false) \
    X__(VkMemoryAllocateInfo,    MemoryAllocateInfo,    false) \
    X__(VkBindAccelerationStructureMemoryInfoNV,    BindAccelerationStructureMemoryInfoNV,    false) \
    X__(VkBindSparseInfo,    BindSparseInfo,    false) \
    X__(VkBindBufferMemoryInfo,    BindBufferMemoryInfo,    false) \
    X__(VkWriteDescriptorSetAccelerationStructureNV,    WriteDescriptorSetAccelerationStructureNV,    false) \
    X__(VkDebugUtilsMessengerCallbackDataEXT,    DebugUtilsMessengerCallbackDataEXT,    false) \
    X__(VkSparseImageMemoryRequirements2,    SparseImageMemoryRequirements2,    true) \
    X__(VkHeadlessSurfaceCreateInfoEXT,    HeadlessSurfaceCreateInfoEXT,    false) \
    X__(VkDebugMarkerObjectTagInfoEXT,    DebugMarkerObjectTagInfoEXT,    false) \
    X__(VkWaylandSurfaceCreateInfoKHR,    WaylandSurfaceCreateInfoKHR,    false) \
    X__(VkImageBlit,    ImageBlit,    false) \
    X__(VkMacOSSurfaceCreateInfoMVK,    MacOSSurfaceCreateInfoMVK,    false) \
    X__(VkPerformanceMarkerInfoINTEL,    PerformanceMarkerInfoINTEL,    false) \
    X__(VkPipelineExecutablePropertiesKHR,    PipelineExecutablePropertiesKHR,    true) \
    X__(VkRefreshCycleDurationGOOGLE,    RefreshCycleDurationGOOGLE,    true) \
    X__(VkWriteDescriptorSet,    WriteDescriptorSet,    false) \

/* Memory management API commands */
# define Xt_Memory_management_API_commands(X__) \
    X__(vkBindBufferMemory)\
    X__(vkBindImageMemory)\
    X__(vkGetBufferMemoryRequirements)\
    X__(vkGetImageMemoryRequirements)\

/* Sampler commands */
# define Xt_Sampler_commands(X__) \
    X__(vkCreateSampler)\
    X__(vkDestroySampler)\

/* Device initialization */
# define Xt_Device_initialization(X__) \
    X__(vkCreateInstance)\
    X__(vkDestroyInstance)\
    X__(vkEnumeratePhysicalDevices)\
    X__(vkGetPhysicalDeviceFeatures)\
    X__(vkGetPhysicalDeviceFormatProperties)\
    X__(vkGetPhysicalDeviceImageFormatProperties)\
    X__(vkGetPhysicalDeviceProperties)\
    X__(vkGetPhysicalDeviceQueueFamilyProperties)\
    X__(vkGetPhysicalDeviceMemoryProperties)\
    X__(vkGetInstanceProcAddr)\
    X__(vkGetDeviceProcAddr)\

/* Layer discovery commands */
# define Xt_Layer_discovery_commands(X__) \
    X__(vkEnumerateInstanceLayerProperties)\
    X__(vkEnumerateDeviceLayerProperties)\

/* Memory commands */
# define Xt_Memory_commands(X__) \
    X__(vkAllocateMemory)\
    X__(vkFreeMemory)\
    X__(vkMapMemory)\
    X__(vkUnmapMemory)\
    X__(vkFlushMappedMemoryRanges)\
    X__(vkInvalidateMappedMemoryRanges)\
    X__(vkGetDeviceMemoryCommitment)\

/* Query commands */
# define Xt_Query_commands(X__) \
    X__(vkCreateQueryPool)\
    X__(vkDestroyQueryPool)\
    X__(vkGetQueryPoolResults)\

/* Command buffer building commands */
# define Xt_Command_buffer_building_commands(X__) \
    X__(vkCmdBindPipeline)\
    X__(vkCmdSetViewport)\
    X__(vkCmdSetScissor)\
    X__(vkCmdSetLineWidth)\
    X__(vkCmdSetDepthBias)\
    X__(vkCmdSetBlendConstants)\
    X__(vkCmdSetDepthBounds)\
    X__(vkCmdSetStencilCompareMask)\
    X__(vkCmdSetStencilWriteMask)\
    X__(vkCmdSetStencilReference)\
    X__(vkCmdBindDescriptorSets)\
    X__(vkCmdBindIndexBuffer)\
    X__(vkCmdBindVertexBuffers)\
    X__(vkCmdDraw)\
    X__(vkCmdDrawIndexed)\
    X__(vkCmdDrawIndirect)\
    X__(vkCmdDrawIndexedIndirect)\
    X__(vkCmdDispatch)\
    X__(vkCmdDispatchIndirect)\
    X__(vkCmdCopyBuffer)\
    X__(vkCmdCopyImage)\
    X__(vkCmdBlitImage)\
    X__(vkCmdCopyBufferToImage)\
    X__(vkCmdCopyImageToBuffer)\
    X__(vkCmdUpdateBuffer)\
    X__(vkCmdFillBuffer)\
    X__(vkCmdClearColorImage)\
    X__(vkCmdClearDepthStencilImage)\
    X__(vkCmdClearAttachments)\
    X__(vkCmdResolveImage)\
    X__(vkCmdSetEvent)\
    X__(vkCmdResetEvent)\
    X__(vkCmdWaitEvents)\
    X__(vkCmdPipelineBarrier)\
    X__(vkCmdBeginQuery)\
    X__(vkCmdEndQuery)\
    X__(vkCmdResetQueryPool)\
    X__(vkCmdWriteTimestamp)\
    X__(vkCmdCopyQueryPoolResults)\
    X__(vkCmdPushConstants)\
    X__(vkCmdBeginRenderPass)\
    X__(vkCmdNextSubpass)\
    X__(vkCmdEndRenderPass)\
    X__(vkCmdExecuteCommands)\

/* Buffer commands */
# define Xt_Buffer_commands(X__) \
    X__(vkCreateBuffer)\
    X__(vkDestroyBuffer)\

/* Command buffer commands */
# define Xt_Command_buffer_commands(X__) \
    X__(vkAllocateCommandBuffers)\
    X__(vkFreeCommandBuffers)\
    X__(vkBeginCommandBuffer)\
    X__(vkEndCommandBuffer)\
    X__(vkResetCommandBuffer)\

/* vk_1_1_commands */
# define Xt_vk_1_1_commands(X__) \
    X__(vkEnumerateInstanceVersion)\
    X__(vkBindBufferMemory2)\
    X__(vkBindImageMemory2)\
    X__(vkGetDeviceGroupPeerMemoryFeatures)\
    X__(vkCmdSetDeviceMask)\
    X__(vkCmdDispatchBase)\
    X__(vkEnumeratePhysicalDeviceGroups)\
    X__(vkGetImageMemoryRequirements2)\
    X__(vkGetBufferMemoryRequirements2)\
    X__(vkGetImageSparseMemoryRequirements2)\
    X__(vkGetPhysicalDeviceFeatures2)\
    X__(vkGetPhysicalDeviceProperties2)\
    X__(vkGetPhysicalDeviceFormatProperties2)\
    X__(vkGetPhysicalDeviceImageFormatProperties2)\
    X__(vkGetPhysicalDeviceQueueFamilyProperties2)\
    X__(vkGetPhysicalDeviceMemoryProperties2)\
    X__(vkGetPhysicalDeviceSparseImageFormatProperties2)\
    X__(vkTrimCommandPool)\
    X__(vkGetDeviceQueue2)\
    X__(vkCreateSamplerYcbcrConversion)\
    X__(vkDestroySamplerYcbcrConversion)\
    X__(vkCreateDescriptorUpdateTemplate)\
    X__(vkDestroyDescriptorUpdateTemplate)\
    X__(vkUpdateDescriptorSetWithTemplate)\
    X__(vkGetPhysicalDeviceExternalBufferProperties)\
    X__(vkGetPhysicalDeviceExternalFenceProperties)\
    X__(vkGetPhysicalDeviceExternalSemaphoreProperties)\
    X__(vkGetDescriptorSetLayoutSupport)\

/* Event commands */
# define Xt_Event_commands(X__) \
    X__(vkCreateEvent)\
    X__(vkDestroyEvent)\
    X__(vkGetEventStatus)\
    X__(vkSetEvent)\
    X__(vkResetEvent)\

/* Buffer view commands */
# define Xt_Buffer_view_commands(X__) \
    X__(vkCreateBufferView)\
    X__(vkDestroyBufferView)\

/* Extension discovery commands */
# define Xt_Extension_discovery_commands(X__) \
    X__(vkEnumerateInstanceExtensionProperties)\
    X__(vkEnumerateDeviceExtensionProperties)\

/* Descriptor set commands */
# define Xt_Descriptor_set_commands(X__) \
    X__(vkCreateDescriptorSetLayout)\
    X__(vkDestroyDescriptorSetLayout)\
    X__(vkCreateDescriptorPool)\
    X__(vkDestroyDescriptorPool)\
    X__(vkResetDescriptorPool)\
    X__(vkAllocateDescriptorSets)\
    X__(vkFreeDescriptorSets)\
    X__(vkUpdateDescriptorSets)\

/* Sparse resource memory management API commands */
# define Xt_Sparse_resource_memory_management_API_commands(X__) \
    X__(vkGetImageSparseMemoryRequirements)\
    X__(vkGetPhysicalDeviceSparseImageFormatProperties)\
    X__(vkQueueBindSparse)\

/* Pipeline layout commands */
# define Xt_Pipeline_layout_commands(X__) \
    X__(vkCreatePipelineLayout)\
    X__(vkDestroyPipelineLayout)\

/* Pass commands */
# define Xt_Pass_commands(X__) \
    X__(vkCreateFramebuffer)\
    X__(vkDestroyFramebuffer)\
    X__(vkCreateRenderPass)\
    X__(vkDestroyRenderPass)\
    X__(vkGetRenderAreaGranularity)\

/* Fence commands */
# define Xt_Fence_commands(X__) \
    X__(vkCreateFence)\
    X__(vkDestroyFence)\
    X__(vkResetFences)\
    X__(vkGetFenceStatus)\
    X__(vkWaitForFences)\

/* Shader commands */
# define Xt_Shader_commands(X__) \
    X__(vkCreateShaderModule)\
    X__(vkDestroyShaderModule)\

/* Queue semaphore commands */
# define Xt_Queue_semaphore_commands(X__) \
    X__(vkCreateSemaphore)\
    X__(vkDestroySemaphore)\

/* Pipeline commands */
# define Xt_Pipeline_commands(X__) \
    X__(vkCreateGraphicsPipelines)\
    X__(vkCreateComputePipelines)\
    X__(vkDestroyPipeline)\

/* Command pool commands */
# define Xt_Command_pool_commands(X__) \
    X__(vkCreateCommandPool)\
    X__(vkDestroyCommandPool)\
    X__(vkResetCommandPool)\

/* Device commands */
# define Xt_Device_commands(X__) \
    X__(vkCreateDevice)\
    X__(vkDestroyDevice)\

/* Image view commands */
# define Xt_Image_view_commands(X__) \
    X__(vkCreateImageView)\
    X__(vkDestroyImageView)\

/* Image commands */
# define Xt_Image_commands(X__) \
    X__(vkCreateImage)\
    X__(vkDestroyImage)\
    X__(vkGetImageSubresourceLayout)\

/* Pipeline Cache commands */
# define Xt_Pipeline_Cache_commands(X__) \
    X__(vkCreatePipelineCache)\
    X__(vkDestroyPipelineCache)\
    X__(vkGetPipelineCacheData)\
    X__(vkMergePipelineCaches)\

/* queue commands */
# define Xt_queue_commands(X__) \
    X__(vkGetDeviceQueue)\
    X__(vkQueueSubmit)\
    X__(vkQueueWaitIdle)\
    X__(vkDeviceWaitIdle)\

/* command list: all command kinds */
# define Xt_commands(X__) \
    Xt_Memory_management_API_commands(X__) \
    Xt_Sampler_commands(X__) \
    Xt_Device_initialization(X__) \
    Xt_Layer_discovery_commands(X__) \
    Xt_Memory_commands(X__) \
    Xt_Query_commands(X__) \
    Xt_Command_buffer_building_commands(X__) \
    Xt_Buffer_commands(X__) \
    Xt_Command_buffer_commands(X__) \
    Xt_vk_1_1_commands(X__) \
    Xt_Event_commands(X__) \
    Xt_Buffer_view_commands(X__) \
    Xt_Extension_discovery_commands(X__) \
    Xt_Descriptor_set_commands(X__) \
    Xt_Sparse_resource_memory_management_API_commands(X__) \
    Xt_Pipeline_layout_commands(X__) \
    Xt_Pass_commands(X__) \
    Xt_Fence_commands(X__) \
    Xt_Shader_commands(X__) \
    Xt_Queue_semaphore_commands(X__) \
    Xt_Pipeline_commands(X__) \
    Xt_Command_pool_commands(X__) \
    Xt_Device_commands(X__) \
    Xt_Image_view_commands(X__) \
    Xt_Image_commands(X__) \
    Xt_Pipeline_Cache_commands(X__) \
    Xt_queue_commands(X__) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDiscardRectangleModeEXT_members(X__) \
X__(VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT,    inclusive_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT,    exclusive_ext,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkValidationFeatureDisableEXT_members(X__) \
X__(VK_VALIDATION_FEATURE_DISABLE_ALL_EXT,    all_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT,    shaders_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT,    thread_safety_ext,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT,    api_parameters_ext,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT,    object_lifetimes_ext,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT,    core_checks_ext,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT,    unique_handles_ext,    6,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSharingMode_members(X__) \
X__(VK_SHARING_MODE_EXCLUSIVE,    exclusive,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHARING_MODE_CONCURRENT,    concurrent,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPerformanceValueTypeINTEL_members(X__) \
X__(VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL,    uint32_intel,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL,    uint64_intel,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL,    float_intel,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL,    bool_intel,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL,    string_intel,    4,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkColorSpaceKHR_members(X__) \
X__(VK_COLOR_SPACE_SRGB_NONLINEAR_KHR,    srgb_nonlinear_khr,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COLORSPACE_SRGB_NONLINEAR_KHR,    colorspace_srgb_nonlinear_khr,    ,    ,    Backwards-compatible alias containing a typo,    ,    ,    ,    ,    VK_COLOR_SPACE_SRGB_NONLINEAR_KHR) \
X__(VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT,    display_p3_nonlinear_ext,    ,    1,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT,    extended_srgb_linear_ext,    ,    2,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT,    display_p3_linear_ext,    ,    3,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT,    dci_p3_nonlinear_ext,    ,    4,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_BT709_LINEAR_EXT,    bt709_linear_ext,    ,    5,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_BT709_NONLINEAR_EXT,    bt709_nonlinear_ext,    ,    6,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_BT2020_LINEAR_EXT,    bt2020_linear_ext,    ,    7,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_HDR10_ST2084_EXT,    hdr10_st2084_ext,    ,    8,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_DOLBYVISION_EXT,    dolbyvision_ext,    ,    9,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_HDR10_HLG_EXT,    hdr10_hlg_ext,    ,    10,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT,    adobergb_linear_ext,    ,    11,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT,    adobergb_nonlinear_ext,    ,    12,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_PASS_THROUGH_EXT,    pass_through_ext,    ,    13,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT,    extended_srgb_nonlinear_ext,    ,    14,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_DCI_P3_LINEAR_EXT,    dci_p3_linear_ext,    ,    ,    Deprecated name for backwards compatibility,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT) \
X__(VK_COLOR_SPACE_DISPLAY_NATIVE_AMD,    display_native_amd,    ,    0,    ,    VK_AMD_display_native_hdr,    214,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPhysicalDeviceType_members(X__) \
X__(VK_PHYSICAL_DEVICE_TYPE_OTHER,    other,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU,    integrated_gpu,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU,    discrete_gpu,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU,    virtual_gpu,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PHYSICAL_DEVICE_TYPE_CPU,    cpu,    4,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkImageLayout_members(X__) \
X__(VK_IMAGE_LAYOUT_UNDEFINED,    undefined,    0,    ,    Implicit layout an image is when its contents are undefined due to various reasons (e.g. right after creation),    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_GENERAL,    general,    1,    ,    General layout when image can be used for any kind of access,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,    color_attachment_optimal,    2,    ,    Optimal layout when image is only used for color attachment read/write,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL,    depth_stencil_attachment_optimal,    3,    ,    Optimal layout when image is only used for depth/stencil attachment read/write,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL,    depth_stencil_read_only_optimal,    4,    ,    Optimal layout when image is used for read only depth/stencil attachment and shader access,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,    shader_read_only_optimal,    5,    ,    Optimal layout when image is used for read only shader access,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,    transfer_src_optimal,    6,    ,    Optimal layout when image is used only as source of transfer operations,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,    transfer_dst_optimal,    7,    ,    Optimal layout when image is used only as destination of transfer operations,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_PREINITIALIZED,    preinitialized,    8,    ,    Initial layout used when the data is populated by the CPU,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL,    depth_read_only_stencil_attachment_optimal,    ,    0,    ,    ,    118,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL,    depth_attachment_stencil_read_only_optimal,    ,    1,    ,    ,    118,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,    present_src_khr,    ,    2,    ,    VK_KHR_swapchain,    2,    vulkan,    ,    ) \
X__(VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR,    shared_present_khr,    ,    0,    ,    VK_KHR_shared_presentable_image,    112,    vulkan,    ,    ) \
X__(VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR,    depth_read_only_stencil_attachment_optimal_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    ,    VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL) \
X__(VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR,    depth_attachment_stencil_read_only_optimal_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    ,    VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL) \
X__(VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV,    shading_rate_optimal_nv,    ,    3,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT,    fragment_density_map_optimal_ext,    ,    0,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkValidationCacheHeaderVersionEXT_members(X__) \
X__(VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT,    one_ext,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCoverageModulationModeNV_members(X__) \
X__(VK_COVERAGE_MODULATION_MODE_NONE_NV,    none_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COVERAGE_MODULATION_MODE_RGB_NV,    rgb_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COVERAGE_MODULATION_MODE_ALPHA_NV,    alpha_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COVERAGE_MODULATION_MODE_RGBA_NV,    rgba_nv,    3,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkMemoryOverallocationBehaviorAMD_members(X__) \
X__(VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD,    default_amd,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD,    allowed_amd,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD,    disallowed_amd,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkBlendOverlapEXT_members(X__) \
X__(VK_BLEND_OVERLAP_UNCORRELATED_EXT,    uncorrelated_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OVERLAP_DISJOINT_EXT,    disjoint_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OVERLAP_CONJOINT_EXT,    conjoint_ext,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkQueryPoolSamplingModeINTEL_members(X__) \
X__(VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL,    manual_intel,    0,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDebugReportObjectTypeEXT_members(X__) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT,    unknown_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT,    instance_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT,    physical_device_ext,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT,    device_ext,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT,    queue_ext,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT,    semaphore_ext,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT,    command_buffer_ext,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT,    fence_ext,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT,    device_memory_ext,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT,    buffer_ext,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT,    image_ext,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT,    event_ext,    11,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT,    query_pool_ext,    12,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT,    buffer_view_ext,    13,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT,    image_view_ext,    14,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT,    shader_module_ext,    15,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT,    pipeline_cache_ext,    16,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT,    pipeline_layout_ext,    17,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT,    render_pass_ext,    18,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT,    pipeline_ext,    19,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT,    descriptor_set_layout_ext,    20,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT,    sampler_ext,    21,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT,    descriptor_pool_ext,    22,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT,    descriptor_set_ext,    23,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT,    framebuffer_ext,    24,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT,    command_pool_ext,    25,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT,    surface_khr_ext,    26,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT,    swapchain_khr_ext,    27,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT,    debug_report_callback_ext_ext,    28,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT,    debug_report_ext,    ,    ,    Backwards-compatible alias containing a typo,    ,    ,    ,    ,    VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT,    display_khr_ext,    29,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT,    display_mode_khr_ext,    30,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT,    object_table_nvx_ext,    31,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT,    indirect_commands_layout_nvx_ext,    32,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT,    validation_cache_ext_ext,    33,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT,    validation_cache_ext,    ,    ,    Backwards-compatible alias containing a typo,    ,    ,    ,    ,    VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT,    sampler_ycbcr_conversion_ext,    ,    0,    ,    VK_EXT_debug_report,    157,    vulkan,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT,    descriptor_update_template_ext,    ,    0,    ,    VK_EXT_debug_report,    86,    vulkan,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT,    descriptor_update_template_khr_ext,    ,    ,    ,    VK_KHR_descriptor_update_template,    86,    vulkan,    ,    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT,    sampler_ycbcr_conversion_khr_ext,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT,    acceleration_structure_nv_ext,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkGeometryTypeNV_members(X__) \
X__(VK_GEOMETRY_TYPE_TRIANGLES_NV,    triangles_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_GEOMETRY_TYPE_AABBS_NV,    aabbs_nv,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkAccelerationStructureTypeNV_members(X__) \
X__(VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV,    top_level_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV,    bottom_level_nv,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPerformanceConfigurationTypeINTEL_members(X__) \
X__(VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL,    command_queue_metrics_discovery_activated_intel,    0,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDriverIdKHR_members(X__) \
X__(VK_DRIVER_ID_AMD_PROPRIETARY_KHR,    amd_proprietary_khr,    1,    ,    Advanced Micro Devices  Inc.,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR,    amd_open_source_khr,    2,    ,    Advanced Micro Devices  Inc.,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_MESA_RADV_KHR,    mesa_radv_khr,    3,    ,    Mesa open source project,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR,    nvidia_proprietary_khr,    4,    ,    NVIDIA Corporation,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR,    intel_proprietary_windows_khr,    5,    ,    Intel Corporation,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR,    intel_open_source_mesa_khr,    6,    ,    Intel Corporation,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR,    imagination_proprietary_khr,    7,    ,    Imagination Technologies,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR,    qualcomm_proprietary_khr,    8,    ,    Qualcomm Technologies  Inc.,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_ARM_PROPRIETARY_KHR,    arm_proprietary_khr,    9,    ,    Arm Limited,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR,    google_swiftshader_khr,    10,    ,    Google LLC,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_GGP_PROPRIETARY_KHR,    ggp_proprietary_khr,    11,    ,    Google LLC,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR,    broadcom_proprietary_khr,    12,    ,    Broadcom Inc.,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSamplerYcbcrModelConversion_members(X__) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY,    rgb_identity,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY,    ycbcr_identity,    1,    ,    just range expansion,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709,    ycbcr_709,    2,    ,    aka HD YUV,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601,    ycbcr_601,    3,    ,    aka SD YUV,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020,    ycbcr_2020,    4,    ,    aka UHD YUV,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY_KHR,    rgb_identity_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY_KHR,    ycbcr_identity_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709_KHR,    ycbcr_709_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601_KHR,    ycbcr_601_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020_KHR,    ycbcr_2020_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSubpassContents_members(X__) \
X__(VK_SUBPASS_CONTENTS_INLINE,    inline,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS,    secondary_command_buffers,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkScopeNV_members(X__) \
X__(VK_SCOPE_DEVICE_NV,    device_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SCOPE_WORKGROUP_NV,    workgroup_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SCOPE_SUBGROUP_NV,    subgroup_nv,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SCOPE_QUEUE_FAMILY_NV,    queue_family_nv,    5,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSamplerMipmapMode_members(X__) \
X__(VK_SAMPLER_MIPMAP_MODE_NEAREST,    nearest,    0,    ,    Choose nearest mip level,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_MIPMAP_MODE_LINEAR,    linear,    1,    ,    Linear filter between mip levels,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPipelineExecutableStatisticFormatKHR_members(X__) \
X__(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR,    bool32_khr,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR,    int64_khr,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR,    uint64_khr,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR,    float64_khr,    3,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkShaderFloatControlsIndependenceKHR_members(X__) \
X__(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR,    32_bit_only_khr,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR,    all_khr,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR,    none_khr,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkTimeDomainEXT_members(X__) \
X__(VK_TIME_DOMAIN_DEVICE_EXT,    device_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT,    clock_monotonic_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT,    clock_monotonic_raw_ext,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT,    query_performance_counter_ext,    3,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkTessellationDomainOrigin_members(X__) \
X__(VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT,    upper_left,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT,    lower_left,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT_KHR,    upper_left_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    ,    VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT) \
X__(VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT_KHR,    lower_left_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    ,    VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDescriptorType_members(X__) \
X__(VK_DESCRIPTOR_TYPE_SAMPLER,    sampler,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER,    combined_image_sampler,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE,    sampled_image,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_STORAGE_IMAGE,    storage_image,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER,    uniform_texel_buffer,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER,    storage_texel_buffer,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER,    uniform_buffer,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_STORAGE_BUFFER,    storage_buffer,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC,    uniform_buffer_dynamic,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC,    storage_buffer_dynamic,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT,    input_attachment,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT,    inline_uniform_block_ext,    ,    0,    ,    VK_EXT_inline_uniform_block,    139,    vulkan,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV,    acceleration_structure_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCoverageReductionModeNV_members(X__) \
X__(VK_COVERAGE_REDUCTION_MODE_MERGE_NV,    merge_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV,    truncate_nv,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPerformanceParameterTypeINTEL_members(X__) \
X__(VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL,    hw_counters_supported_intel,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL,    stream_marker_valid_bits_intel,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkImageViewType_members(X__) \
X__(VK_IMAGE_VIEW_TYPE_1D,    1d,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_2D,    2d,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_3D,    3d,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_CUBE,    cube,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_1D_ARRAY,    1d_array,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_2D_ARRAY,    2d_array,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_CUBE_ARRAY,    cube_array,    6,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkShadingRatePaletteEntryNV_members(X__) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV,    no_invocations_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV,    16_invocations_per_pixel_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV,    8_invocations_per_pixel_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV,    4_invocations_per_pixel_nv,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV,    2_invocations_per_pixel_nv,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV,    1_invocation_per_pixel_nv,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV,    1_invocation_per_2x1_pixels_nv,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV,    1_invocation_per_1x2_pixels_nv,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV,    1_invocation_per_2x2_pixels_nv,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV,    1_invocation_per_4x2_pixels_nv,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV,    1_invocation_per_2x4_pixels_nv,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV,    1_invocation_per_4x4_pixels_nv,    11,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkFilter_members(X__) \
X__(VK_FILTER_NEAREST,    nearest,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FILTER_LINEAR,    linear,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FILTER_CUBIC_IMG,    cubic_img,    ,    0,    ,    VK_IMG_filter_cubic,    16,    vulkan,    ,    ) \
X__(VK_FILTER_CUBIC_EXT,    cubic_ext,    ,    ,    ,    VK_EXT_filter_cubic,    171,    vulkan,    ,    VK_FILTER_CUBIC_IMG) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkChromaLocation_members(X__) \
X__(VK_CHROMA_LOCATION_COSITED_EVEN,    cosited_even,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_CHROMA_LOCATION_MIDPOINT,    midpoint,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_CHROMA_LOCATION_COSITED_EVEN_KHR,    cosited_even_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_CHROMA_LOCATION_COSITED_EVEN) \
X__(VK_CHROMA_LOCATION_MIDPOINT_KHR,    midpoint_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_CHROMA_LOCATION_MIDPOINT) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPrimitiveTopology_members(X__) \
X__(VK_PRIMITIVE_TOPOLOGY_POINT_LIST,    point_list,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_LINE_LIST,    line_list,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_LINE_STRIP,    line_strip,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST,    triangle_list,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP,    triangle_strip,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN,    triangle_fan,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY,    line_list_with_adjacency,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY,    line_strip_with_adjacency,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY,    triangle_list_with_adjacency,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY,    triangle_strip_with_adjacency,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_PATCH_LIST,    patch_list,    10,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDeviceEventTypeEXT_members(X__) \
X__(VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT,    display_hotplug_ext,    0,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkAccelerationStructureMemoryRequirementsTypeNV_members(X__) \
X__(VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV,    object_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV,    build_scratch_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV,    update_scratch_nv,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPolygonMode_members(X__) \
X__(VK_POLYGON_MODE_FILL,    fill,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_POLYGON_MODE_LINE,    line,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_POLYGON_MODE_POINT,    point,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_POLYGON_MODE_FILL_RECTANGLE_NV,    fill_rectangle_nv,    ,    0,    ,    VK_NV_fill_rectangle,    154,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkObjectEntryTypeNVX_members(X__) \
X__(VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX,    descriptor_set_nvx,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX,    pipeline_nvx,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX,    index_buffer_nvx,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX,    vertex_buffer_nvx,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX,    push_constant_nvx,    4,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkQueryType_members(X__) \
X__(VK_QUERY_TYPE_OCCLUSION,    occlusion,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_QUERY_TYPE_PIPELINE_STATISTICS,    pipeline_statistics,    1,    ,    Optional,    ,    ,    ,    ,    ) \
X__(VK_QUERY_TYPE_TIMESTAMP,    timestamp,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT,    transform_feedback_stream_ext,    ,    4,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ,    ) \
X__(VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV,    acceleration_structure_compacted_size_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkObjectType_members(X__) \
X__(VK_OBJECT_TYPE_UNKNOWN,    unknown,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_INSTANCE,    instance,    1,    ,    VkInstance,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_PHYSICAL_DEVICE,    physical_device,    2,    ,    VkPhysicalDevice,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DEVICE,    device,    3,    ,    VkDevice,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_QUEUE,    queue,    4,    ,    VkQueue,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_SEMAPHORE,    semaphore,    5,    ,    VkSemaphore,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_COMMAND_BUFFER,    command_buffer,    6,    ,    VkCommandBuffer,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_FENCE,    fence,    7,    ,    VkFence,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DEVICE_MEMORY,    device_memory,    8,    ,    VkDeviceMemory,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_BUFFER,    buffer,    9,    ,    VkBuffer,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_IMAGE,    image,    10,    ,    VkImage,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_EVENT,    event,    11,    ,    VkEvent,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_QUERY_POOL,    query_pool,    12,    ,    VkQueryPool,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_BUFFER_VIEW,    buffer_view,    13,    ,    VkBufferView,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_IMAGE_VIEW,    image_view,    14,    ,    VkImageView,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_SHADER_MODULE,    shader_module,    15,    ,    VkShaderModule,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_PIPELINE_CACHE,    pipeline_cache,    16,    ,    VkPipelineCache,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_PIPELINE_LAYOUT,    pipeline_layout,    17,    ,    VkPipelineLayout,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_RENDER_PASS,    render_pass,    18,    ,    VkRenderPass,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_PIPELINE,    pipeline,    19,    ,    VkPipeline,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT,    descriptor_set_layout,    20,    ,    VkDescriptorSetLayout,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_SAMPLER,    sampler,    21,    ,    VkSampler,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DESCRIPTOR_POOL,    descriptor_pool,    22,    ,    VkDescriptorPool,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DESCRIPTOR_SET,    descriptor_set,    23,    ,    VkDescriptorSet,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_FRAMEBUFFER,    framebuffer,    24,    ,    VkFramebuffer,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_COMMAND_POOL,    command_pool,    25,    ,    VkCommandPool,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION,    sampler_ycbcr_conversion,    ,    0,    ,    ,    157,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE,    descriptor_update_template,    ,    0,    ,    ,    86,    ,    ,    ) \
X__(VK_OBJECT_TYPE_SURFACE_KHR,    surface_khr,    ,    0,    VkSurfaceKHR,    VK_KHR_surface,    1,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_SWAPCHAIN_KHR,    swapchain_khr,    ,    0,    VkSwapchainKHR,    VK_KHR_swapchain,    2,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_DISPLAY_KHR,    display_khr,    ,    0,    VkDisplayKHR,    VK_KHR_display,    3,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_DISPLAY_MODE_KHR,    display_mode_khr,    ,    1,    VkDisplayModeKHR,    VK_KHR_display,    3,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT,    debug_report_callback_ext,    ,    0,    VkDebugReportCallbackEXT,    VK_EXT_debug_report,    12,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR,    descriptor_update_template_khr,    ,    ,    ,    VK_KHR_descriptor_update_template,    86,    vulkan,    ,    VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE) \
X__(VK_OBJECT_TYPE_OBJECT_TABLE_NVX,    object_table_nvx,    ,    0,    VkobjectTableNVX,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX,    indirect_commands_layout_nvx,    ,    1,    VkIndirectCommandsLayoutNVX,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT,    debug_utils_messenger_ext,    ,    0,    VkDebugUtilsMessengerEXT,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR,    sampler_ycbcr_conversion_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION) \
X__(VK_OBJECT_TYPE_VALIDATION_CACHE_EXT,    validation_cache_ext,    ,    0,    VkValidationCacheEXT,    VK_EXT_validation_cache,    161,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV,    acceleration_structure_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL,    performance_configuration_intel,    ,    0,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPipelineBindPoint_members(X__) \
X__(VK_PIPELINE_BIND_POINT_GRAPHICS,    graphics,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_BIND_POINT_COMPUTE,    compute,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_BIND_POINT_RAY_TRACING_NV,    ray_tracing_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkComponentSwizzle_members(X__) \
X__(VK_COMPONENT_SWIZZLE_IDENTITY,    identity,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_ZERO,    zero,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_ONE,    one,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_R,    r,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_G,    g,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_B,    b,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_A,    a,    6,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCommandBufferLevel_members(X__) \
X__(VK_COMMAND_BUFFER_LEVEL_PRIMARY,    primary,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMMAND_BUFFER_LEVEL_SECONDARY,    secondary,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDisplayPowerStateEXT_members(X__) \
X__(VK_DISPLAY_POWER_STATE_OFF_EXT,    off_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DISPLAY_POWER_STATE_SUSPEND_EXT,    suspend_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DISPLAY_POWER_STATE_ON_EXT,    on_ext,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkFormat_members(X__) \
X__(VK_FORMAT_UNDEFINED,    undefined,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R4G4_UNORM_PACK8,    r4g4_unorm_pack8,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R4G4B4A4_UNORM_PACK16,    r4g4b4a4_unorm_pack16,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B4G4R4A4_UNORM_PACK16,    b4g4r4a4_unorm_pack16,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R5G6B5_UNORM_PACK16,    r5g6b5_unorm_pack16,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B5G6R5_UNORM_PACK16,    b5g6r5_unorm_pack16,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R5G5B5A1_UNORM_PACK16,    r5g5b5a1_unorm_pack16,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B5G5R5A1_UNORM_PACK16,    b5g5r5a1_unorm_pack16,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A1R5G5B5_UNORM_PACK16,    a1r5g5b5_unorm_pack16,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_UNORM,    r8_unorm,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_SNORM,    r8_snorm,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_USCALED,    r8_uscaled,    11,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_SSCALED,    r8_sscaled,    12,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_UINT,    r8_uint,    13,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_SINT,    r8_sint,    14,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_SRGB,    r8_srgb,    15,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_UNORM,    r8g8_unorm,    16,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_SNORM,    r8g8_snorm,    17,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_USCALED,    r8g8_uscaled,    18,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_SSCALED,    r8g8_sscaled,    19,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_UINT,    r8g8_uint,    20,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_SINT,    r8g8_sint,    21,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_SRGB,    r8g8_srgb,    22,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_UNORM,    r8g8b8_unorm,    23,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_SNORM,    r8g8b8_snorm,    24,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_USCALED,    r8g8b8_uscaled,    25,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_SSCALED,    r8g8b8_sscaled,    26,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_UINT,    r8g8b8_uint,    27,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_SINT,    r8g8b8_sint,    28,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_SRGB,    r8g8b8_srgb,    29,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_UNORM,    b8g8r8_unorm,    30,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_SNORM,    b8g8r8_snorm,    31,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_USCALED,    b8g8r8_uscaled,    32,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_SSCALED,    b8g8r8_sscaled,    33,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_UINT,    b8g8r8_uint,    34,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_SINT,    b8g8r8_sint,    35,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_SRGB,    b8g8r8_srgb,    36,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_UNORM,    r8g8b8a8_unorm,    37,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_SNORM,    r8g8b8a8_snorm,    38,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_USCALED,    r8g8b8a8_uscaled,    39,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_SSCALED,    r8g8b8a8_sscaled,    40,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_UINT,    r8g8b8a8_uint,    41,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_SINT,    r8g8b8a8_sint,    42,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_SRGB,    r8g8b8a8_srgb,    43,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_UNORM,    b8g8r8a8_unorm,    44,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_SNORM,    b8g8r8a8_snorm,    45,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_USCALED,    b8g8r8a8_uscaled,    46,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_SSCALED,    b8g8r8a8_sscaled,    47,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_UINT,    b8g8r8a8_uint,    48,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_SINT,    b8g8r8a8_sint,    49,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_SRGB,    b8g8r8a8_srgb,    50,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_UNORM_PACK32,    a8b8g8r8_unorm_pack32,    51,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_SNORM_PACK32,    a8b8g8r8_snorm_pack32,    52,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_USCALED_PACK32,    a8b8g8r8_uscaled_pack32,    53,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_SSCALED_PACK32,    a8b8g8r8_sscaled_pack32,    54,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_UINT_PACK32,    a8b8g8r8_uint_pack32,    55,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_SINT_PACK32,    a8b8g8r8_sint_pack32,    56,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_SRGB_PACK32,    a8b8g8r8_srgb_pack32,    57,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_UNORM_PACK32,    a2r10g10b10_unorm_pack32,    58,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_SNORM_PACK32,    a2r10g10b10_snorm_pack32,    59,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_USCALED_PACK32,    a2r10g10b10_uscaled_pack32,    60,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_SSCALED_PACK32,    a2r10g10b10_sscaled_pack32,    61,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_UINT_PACK32,    a2r10g10b10_uint_pack32,    62,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_SINT_PACK32,    a2r10g10b10_sint_pack32,    63,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_UNORM_PACK32,    a2b10g10r10_unorm_pack32,    64,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_SNORM_PACK32,    a2b10g10r10_snorm_pack32,    65,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_USCALED_PACK32,    a2b10g10r10_uscaled_pack32,    66,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_SSCALED_PACK32,    a2b10g10r10_sscaled_pack32,    67,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_UINT_PACK32,    a2b10g10r10_uint_pack32,    68,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_SINT_PACK32,    a2b10g10r10_sint_pack32,    69,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_UNORM,    r16_unorm,    70,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_SNORM,    r16_snorm,    71,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_USCALED,    r16_uscaled,    72,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_SSCALED,    r16_sscaled,    73,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_UINT,    r16_uint,    74,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_SINT,    r16_sint,    75,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_SFLOAT,    r16_sfloat,    76,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_UNORM,    r16g16_unorm,    77,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_SNORM,    r16g16_snorm,    78,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_USCALED,    r16g16_uscaled,    79,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_SSCALED,    r16g16_sscaled,    80,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_UINT,    r16g16_uint,    81,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_SINT,    r16g16_sint,    82,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_SFLOAT,    r16g16_sfloat,    83,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_UNORM,    r16g16b16_unorm,    84,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_SNORM,    r16g16b16_snorm,    85,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_USCALED,    r16g16b16_uscaled,    86,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_SSCALED,    r16g16b16_sscaled,    87,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_UINT,    r16g16b16_uint,    88,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_SINT,    r16g16b16_sint,    89,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_SFLOAT,    r16g16b16_sfloat,    90,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_UNORM,    r16g16b16a16_unorm,    91,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_SNORM,    r16g16b16a16_snorm,    92,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_USCALED,    r16g16b16a16_uscaled,    93,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_SSCALED,    r16g16b16a16_sscaled,    94,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_UINT,    r16g16b16a16_uint,    95,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_SINT,    r16g16b16a16_sint,    96,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_SFLOAT,    r16g16b16a16_sfloat,    97,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32_UINT,    r32_uint,    98,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32_SINT,    r32_sint,    99,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32_SFLOAT,    r32_sfloat,    100,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32_UINT,    r32g32_uint,    101,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32_SINT,    r32g32_sint,    102,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32_SFLOAT,    r32g32_sfloat,    103,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32_UINT,    r32g32b32_uint,    104,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32_SINT,    r32g32b32_sint,    105,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32_SFLOAT,    r32g32b32_sfloat,    106,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32A32_UINT,    r32g32b32a32_uint,    107,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32A32_SINT,    r32g32b32a32_sint,    108,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32A32_SFLOAT,    r32g32b32a32_sfloat,    109,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64_UINT,    r64_uint,    110,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64_SINT,    r64_sint,    111,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64_SFLOAT,    r64_sfloat,    112,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64_UINT,    r64g64_uint,    113,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64_SINT,    r64g64_sint,    114,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64_SFLOAT,    r64g64_sfloat,    115,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64_UINT,    r64g64b64_uint,    116,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64_SINT,    r64g64b64_sint,    117,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64_SFLOAT,    r64g64b64_sfloat,    118,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64A64_UINT,    r64g64b64a64_uint,    119,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64A64_SINT,    r64g64b64a64_sint,    120,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64A64_SFLOAT,    r64g64b64a64_sfloat,    121,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B10G11R11_UFLOAT_PACK32,    b10g11r11_ufloat_pack32,    122,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_E5B9G9R9_UFLOAT_PACK32,    e5b9g9r9_ufloat_pack32,    123,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_D16_UNORM,    d16_unorm,    124,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_X8_D24_UNORM_PACK32,    x8_d24_unorm_pack32,    125,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_D32_SFLOAT,    d32_sfloat,    126,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_S8_UINT,    s8_uint,    127,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_D16_UNORM_S8_UINT,    d16_unorm_s8_uint,    128,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_D24_UNORM_S8_UINT,    d24_unorm_s8_uint,    129,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_D32_SFLOAT_S8_UINT,    d32_sfloat_s8_uint,    130,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC1_RGB_UNORM_BLOCK,    bc1_rgb_unorm_block,    131,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC1_RGB_SRGB_BLOCK,    bc1_rgb_srgb_block,    132,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC1_RGBA_UNORM_BLOCK,    bc1_rgba_unorm_block,    133,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC1_RGBA_SRGB_BLOCK,    bc1_rgba_srgb_block,    134,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC2_UNORM_BLOCK,    bc2_unorm_block,    135,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC2_SRGB_BLOCK,    bc2_srgb_block,    136,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC3_UNORM_BLOCK,    bc3_unorm_block,    137,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC3_SRGB_BLOCK,    bc3_srgb_block,    138,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC4_UNORM_BLOCK,    bc4_unorm_block,    139,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC4_SNORM_BLOCK,    bc4_snorm_block,    140,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC5_UNORM_BLOCK,    bc5_unorm_block,    141,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC5_SNORM_BLOCK,    bc5_snorm_block,    142,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC6H_UFLOAT_BLOCK,    bc6h_ufloat_block,    143,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC6H_SFLOAT_BLOCK,    bc6h_sfloat_block,    144,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC7_UNORM_BLOCK,    bc7_unorm_block,    145,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC7_SRGB_BLOCK,    bc7_srgb_block,    146,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK,    etc2_r8g8b8_unorm_block,    147,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK,    etc2_r8g8b8_srgb_block,    148,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK,    etc2_r8g8b8a1_unorm_block,    149,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK,    etc2_r8g8b8a1_srgb_block,    150,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK,    etc2_r8g8b8a8_unorm_block,    151,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK,    etc2_r8g8b8a8_srgb_block,    152,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_EAC_R11_UNORM_BLOCK,    eac_r11_unorm_block,    153,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_EAC_R11_SNORM_BLOCK,    eac_r11_snorm_block,    154,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_EAC_R11G11_UNORM_BLOCK,    eac_r11g11_unorm_block,    155,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_EAC_R11G11_SNORM_BLOCK,    eac_r11g11_snorm_block,    156,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_4x4_UNORM_BLOCK,    astc_4x4_unorm_block,    157,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_4x4_SRGB_BLOCK,    astc_4x4_srgb_block,    158,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_5x4_UNORM_BLOCK,    astc_5x4_unorm_block,    159,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_5x4_SRGB_BLOCK,    astc_5x4_srgb_block,    160,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_5x5_UNORM_BLOCK,    astc_5x5_unorm_block,    161,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_5x5_SRGB_BLOCK,    astc_5x5_srgb_block,    162,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_6x5_UNORM_BLOCK,    astc_6x5_unorm_block,    163,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_6x5_SRGB_BLOCK,    astc_6x5_srgb_block,    164,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_6x6_UNORM_BLOCK,    astc_6x6_unorm_block,    165,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_6x6_SRGB_BLOCK,    astc_6x6_srgb_block,    166,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x5_UNORM_BLOCK,    astc_8x5_unorm_block,    167,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x5_SRGB_BLOCK,    astc_8x5_srgb_block,    168,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x6_UNORM_BLOCK,    astc_8x6_unorm_block,    169,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x6_SRGB_BLOCK,    astc_8x6_srgb_block,    170,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x8_UNORM_BLOCK,    astc_8x8_unorm_block,    171,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x8_SRGB_BLOCK,    astc_8x8_srgb_block,    172,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x5_UNORM_BLOCK,    astc_10x5_unorm_block,    173,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x5_SRGB_BLOCK,    astc_10x5_srgb_block,    174,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x6_UNORM_BLOCK,    astc_10x6_unorm_block,    175,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x6_SRGB_BLOCK,    astc_10x6_srgb_block,    176,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x8_UNORM_BLOCK,    astc_10x8_unorm_block,    177,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x8_SRGB_BLOCK,    astc_10x8_srgb_block,    178,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x10_UNORM_BLOCK,    astc_10x10_unorm_block,    179,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x10_SRGB_BLOCK,    astc_10x10_srgb_block,    180,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_12x10_UNORM_BLOCK,    astc_12x10_unorm_block,    181,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_12x10_SRGB_BLOCK,    astc_12x10_srgb_block,    182,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_12x12_UNORM_BLOCK,    astc_12x12_unorm_block,    183,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_12x12_SRGB_BLOCK,    astc_12x12_srgb_block,    184,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_G8B8G8R8_422_UNORM,    g8b8g8r8_422_unorm,    ,    0,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8G8_422_UNORM,    b8g8r8g8_422_unorm,    ,    1,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM,    g8_b8_r8_3plane_420_unorm,    ,    2,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G8_B8R8_2PLANE_420_UNORM,    g8_b8r8_2plane_420_unorm,    ,    3,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM,    g8_b8_r8_3plane_422_unorm,    ,    4,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G8_B8R8_2PLANE_422_UNORM,    g8_b8r8_2plane_422_unorm,    ,    5,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM,    g8_b8_r8_3plane_444_unorm,    ,    6,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R10X6_UNORM_PACK16,    r10x6_unorm_pack16,    ,    7,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R10X6G10X6_UNORM_2PACK16,    r10x6g10x6_unorm_2pack16,    ,    8,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16,    r10x6g10x6b10x6a10x6_unorm_4pack16,    ,    9,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16,    g10x6b10x6g10x6r10x6_422_unorm_4pack16,    ,    10,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16,    b10x6g10x6r10x6g10x6_422_unorm_4pack16,    ,    11,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16,    g10x6_b10x6_r10x6_3plane_420_unorm_3pack16,    ,    12,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16,    g10x6_b10x6r10x6_2plane_420_unorm_3pack16,    ,    13,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16,    g10x6_b10x6_r10x6_3plane_422_unorm_3pack16,    ,    14,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16,    g10x6_b10x6r10x6_2plane_422_unorm_3pack16,    ,    15,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16,    g10x6_b10x6_r10x6_3plane_444_unorm_3pack16,    ,    16,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R12X4_UNORM_PACK16,    r12x4_unorm_pack16,    ,    17,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R12X4G12X4_UNORM_2PACK16,    r12x4g12x4_unorm_2pack16,    ,    18,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16,    r12x4g12x4b12x4a12x4_unorm_4pack16,    ,    19,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16,    g12x4b12x4g12x4r12x4_422_unorm_4pack16,    ,    20,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16,    b12x4g12x4r12x4g12x4_422_unorm_4pack16,    ,    21,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16,    g12x4_b12x4_r12x4_3plane_420_unorm_3pack16,    ,    22,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16,    g12x4_b12x4r12x4_2plane_420_unorm_3pack16,    ,    23,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16,    g12x4_b12x4_r12x4_3plane_422_unorm_3pack16,    ,    24,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16,    g12x4_b12x4r12x4_2plane_422_unorm_3pack16,    ,    25,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16,    g12x4_b12x4_r12x4_3plane_444_unorm_3pack16,    ,    26,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16B16G16R16_422_UNORM,    g16b16g16r16_422_unorm,    ,    27,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_B16G16R16G16_422_UNORM,    b16g16r16g16_422_unorm,    ,    28,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM,    g16_b16_r16_3plane_420_unorm,    ,    29,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16_B16R16_2PLANE_420_UNORM,    g16_b16r16_2plane_420_unorm,    ,    30,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM,    g16_b16_r16_3plane_422_unorm,    ,    31,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16_B16R16_2PLANE_422_UNORM,    g16_b16r16_2plane_422_unorm,    ,    32,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM,    g16_b16_r16_3plane_444_unorm,    ,    33,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG,    pvrtc1_2bpp_unorm_block_img,    ,    0,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG,    pvrtc1_4bpp_unorm_block_img,    ,    1,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG,    pvrtc2_2bpp_unorm_block_img,    ,    2,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG,    pvrtc2_4bpp_unorm_block_img,    ,    3,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG,    pvrtc1_2bpp_srgb_block_img,    ,    4,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG,    pvrtc1_4bpp_srgb_block_img,    ,    5,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG,    pvrtc2_2bpp_srgb_block_img,    ,    6,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG,    pvrtc2_4bpp_srgb_block_img,    ,    7,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT,    astc_4x4_sfloat_block_ext,    ,    0,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT,    astc_5x4_sfloat_block_ext,    ,    1,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT,    astc_5x5_sfloat_block_ext,    ,    2,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT,    astc_6x5_sfloat_block_ext,    ,    3,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT,    astc_6x6_sfloat_block_ext,    ,    4,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT,    astc_8x5_sfloat_block_ext,    ,    5,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT,    astc_8x6_sfloat_block_ext,    ,    6,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT,    astc_8x8_sfloat_block_ext,    ,    7,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT,    astc_10x5_sfloat_block_ext,    ,    8,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT,    astc_10x6_sfloat_block_ext,    ,    9,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT,    astc_10x8_sfloat_block_ext,    ,    10,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT,    astc_10x10_sfloat_block_ext,    ,    11,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT,    astc_12x10_sfloat_block_ext,    ,    12,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT,    astc_12x12_sfloat_block_ext,    ,    13,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_G8B8G8R8_422_UNORM_KHR,    g8b8g8r8_422_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G8B8G8R8_422_UNORM) \
X__(VK_FORMAT_B8G8R8G8_422_UNORM_KHR,    b8g8r8g8_422_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_B8G8R8G8_422_UNORM) \
X__(VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM_KHR,    g8_b8_r8_3plane_420_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM) \
X__(VK_FORMAT_G8_B8R8_2PLANE_420_UNORM_KHR,    g8_b8r8_2plane_420_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G8_B8R8_2PLANE_420_UNORM) \
X__(VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM_KHR,    g8_b8_r8_3plane_422_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM) \
X__(VK_FORMAT_G8_B8R8_2PLANE_422_UNORM_KHR,    g8_b8r8_2plane_422_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G8_B8R8_2PLANE_422_UNORM) \
X__(VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM_KHR,    g8_b8_r8_3plane_444_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM) \
X__(VK_FORMAT_R10X6_UNORM_PACK16_KHR,    r10x6_unorm_pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_R10X6_UNORM_PACK16) \
X__(VK_FORMAT_R10X6G10X6_UNORM_2PACK16_KHR,    r10x6g10x6_unorm_2pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_R10X6G10X6_UNORM_2PACK16) \
X__(VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16_KHR,    r10x6g10x6b10x6a10x6_unorm_4pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16) \
X__(VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16_KHR,    g10x6b10x6g10x6r10x6_422_unorm_4pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16) \
X__(VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16_KHR,    b10x6g10x6r10x6g10x6_422_unorm_4pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16) \
X__(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16_KHR,    g10x6_b10x6_r10x6_3plane_420_unorm_3pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16) \
X__(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16_KHR,    g10x6_b10x6r10x6_2plane_420_unorm_3pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16) \
X__(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16_KHR,    g10x6_b10x6_r10x6_3plane_422_unorm_3pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16) \
X__(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16_KHR,    g10x6_b10x6r10x6_2plane_422_unorm_3pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16) \
X__(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16_KHR,    g10x6_b10x6_r10x6_3plane_444_unorm_3pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16) \
X__(VK_FORMAT_R12X4_UNORM_PACK16_KHR,    r12x4_unorm_pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_R12X4_UNORM_PACK16) \
X__(VK_FORMAT_R12X4G12X4_UNORM_2PACK16_KHR,    r12x4g12x4_unorm_2pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_R12X4G12X4_UNORM_2PACK16) \
X__(VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16_KHR,    r12x4g12x4b12x4a12x4_unorm_4pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16) \
X__(VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16_KHR,    g12x4b12x4g12x4r12x4_422_unorm_4pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16) \
X__(VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16_KHR,    b12x4g12x4r12x4g12x4_422_unorm_4pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16) \
X__(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16_KHR,    g12x4_b12x4_r12x4_3plane_420_unorm_3pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16) \
X__(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16_KHR,    g12x4_b12x4r12x4_2plane_420_unorm_3pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16) \
X__(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16_KHR,    g12x4_b12x4_r12x4_3plane_422_unorm_3pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16) \
X__(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16_KHR,    g12x4_b12x4r12x4_2plane_422_unorm_3pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16) \
X__(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16_KHR,    g12x4_b12x4_r12x4_3plane_444_unorm_3pack16_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16) \
X__(VK_FORMAT_G16B16G16R16_422_UNORM_KHR,    g16b16g16r16_422_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G16B16G16R16_422_UNORM) \
X__(VK_FORMAT_B16G16R16G16_422_UNORM_KHR,    b16g16r16g16_422_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_B16G16R16G16_422_UNORM) \
X__(VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM_KHR,    g16_b16_r16_3plane_420_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM) \
X__(VK_FORMAT_G16_B16R16_2PLANE_420_UNORM_KHR,    g16_b16r16_2plane_420_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G16_B16R16_2PLANE_420_UNORM) \
X__(VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM_KHR,    g16_b16_r16_3plane_422_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM) \
X__(VK_FORMAT_G16_B16R16_2PLANE_422_UNORM_KHR,    g16_b16r16_2plane_422_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G16_B16R16_2PLANE_422_UNORM) \
X__(VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM_KHR,    g16_b16_r16_3plane_444_unorm_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkVendorId_members(X__) \
X__(VK_VENDOR_ID_VIV,    viv,    0x10001,    ,    Vivante vendor ID,    ,    ,    ,    ,    ) \
X__(VK_VENDOR_ID_VSI,    vsi,    0x10002,    ,    VeriSilicon vendor ID,    ,    ,    ,    ,    ) \
X__(VK_VENDOR_ID_KAZAN,    kazan,    0x10003,    ,    Kazan Software Renderer,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkRasterizationOrderAMD_members(X__) \
X__(VK_RASTERIZATION_ORDER_STRICT_AMD,    strict_amd,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_RASTERIZATION_ORDER_RELAXED_AMD,    relaxed_amd,    1,    ,    ,    ,    ,    ,    ,    ) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkFullScreenExclusiveEXT_members(X__) \
X__(VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT,    default_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT,    allowed_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT,    disallowed_ext,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT,    application_controlled_ext,    3,    ,    ,    ,    ,    ,    ,    ) \

# endif

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSamplerAddressMode_members(X__) \
X__(VK_SAMPLER_ADDRESS_MODE_REPEAT,    repeat,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT,    mirrored_repeat,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE,    clamp_to_edge,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER,    clamp_to_border,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE,    mirror_clamp_to_edge,    4,    ,    Note that this defines what was previously a core enum  and so uses the `value` attribute rather than `offset`  and does not have a suffix. This is a special case  and should not be repeated,    VK_KHR_sampler_mirror_clamp_to_edge,    15,    vulkan,    ,    ) \
X__(VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE_KHR,    mirror_clamp_to_edge_khr,    ,    ,    Alias introduced for consistency with extension suffixing rules,    VK_KHR_sampler_mirror_clamp_to_edge,    15,    vulkan,    ,    VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkImageType_members(X__) \
X__(VK_IMAGE_TYPE_1D,    1d,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_TYPE_2D,    2d,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_TYPE_3D,    3d,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPipelineCacheHeaderVersion_members(X__) \
X__(VK_PIPELINE_CACHE_HEADER_VERSION_ONE,    one,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkViewportCoordinateSwizzleNV_members(X__) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV,    positive_x_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV,    negative_x_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV,    positive_y_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV,    negative_y_nv,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV,    positive_z_nv,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV,    negative_z_nv,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV,    positive_w_nv,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV,    negative_w_nv,    7,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkIndirectCommandsTokenTypeNVX_members(X__) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX,    pipeline_nvx,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX,    descriptor_set_nvx,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX,    index_buffer_nvx,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX,    vertex_buffer_nvx,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX,    push_constant_nvx,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX,    draw_indexed_nvx,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX,    draw_nvx,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX,    dispatch_nvx,    7,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkShaderInfoTypeAMD_members(X__) \
X__(VK_SHADER_INFO_TYPE_STATISTICS_AMD,    statistics_amd,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_INFO_TYPE_BINARY_AMD,    binary_amd,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD,    disassembly_amd,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkImageTiling_members(X__) \
X__(VK_IMAGE_TILING_OPTIMAL,    optimal,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_TILING_LINEAR,    linear,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT,    drm_format_modifier_ext,    ,    0,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkStencilOp_members(X__) \
X__(VK_STENCIL_OP_KEEP,    keep,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_ZERO,    zero,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_REPLACE,    replace,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_INCREMENT_AND_CLAMP,    increment_and_clamp,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_DECREMENT_AND_CLAMP,    decrement_and_clamp,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_INVERT,    invert,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_INCREMENT_AND_WRAP,    increment_and_wrap,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_DECREMENT_AND_WRAP,    decrement_and_wrap,    7,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkValidationCheckEXT_members(X__) \
X__(VK_VALIDATION_CHECK_ALL_EXT,    all_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_CHECK_SHADERS_EXT,    shaders_ext,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkResult_members(X__) \
X__(VK_SUCCESS,    success,    0,    ,    Command completed successfully,    ,    ,    ,    ,    ) \
X__(VK_NOT_READY,    not_ready,    1,    ,    A fence or query has not yet completed,    ,    ,    ,    ,    ) \
X__(VK_TIMEOUT,    timeout,    2,    ,    A wait operation has not completed in the specified time,    ,    ,    ,    ,    ) \
X__(VK_EVENT_SET,    event_set,    3,    ,    An event is signaled,    ,    ,    ,    ,    ) \
X__(VK_EVENT_RESET,    event_reset,    4,    ,    An event is unsignaled,    ,    ,    ,    ,    ) \
X__(VK_INCOMPLETE,    incomplete,    5,    ,    A return array was too small for the result,    ,    ,    ,    ,    ) \
X__(VK_ERROR_OUT_OF_HOST_MEMORY,    error_out_of_host_memory,    -1,    ,    A host memory allocation has failed,    ,    ,    ,    ,    ) \
X__(VK_ERROR_OUT_OF_DEVICE_MEMORY,    error_out_of_device_memory,    -2,    ,    A device memory allocation has failed,    ,    ,    ,    ,    ) \
X__(VK_ERROR_INITIALIZATION_FAILED,    error_initialization_failed,    -3,    ,    Initialization of a object has failed,    ,    ,    ,    ,    ) \
X__(VK_ERROR_DEVICE_LOST,    error_device_lost,    -4,    ,    The logical device has been lost. See <<devsandqueues-lost-device>>,    ,    ,    ,    ,    ) \
X__(VK_ERROR_MEMORY_MAP_FAILED,    error_memory_map_failed,    -5,    ,    Mapping of a memory object has failed,    ,    ,    ,    ,    ) \
X__(VK_ERROR_LAYER_NOT_PRESENT,    error_layer_not_present,    -6,    ,    Layer specified does not exist,    ,    ,    ,    ,    ) \
X__(VK_ERROR_EXTENSION_NOT_PRESENT,    error_extension_not_present,    -7,    ,    Extension specified does not exist,    ,    ,    ,    ,    ) \
X__(VK_ERROR_FEATURE_NOT_PRESENT,    error_feature_not_present,    -8,    ,    Requested feature is not available on this device,    ,    ,    ,    ,    ) \
X__(VK_ERROR_INCOMPATIBLE_DRIVER,    error_incompatible_driver,    -9,    ,    Unable to find a Vulkan driver,    ,    ,    ,    ,    ) \
X__(VK_ERROR_TOO_MANY_OBJECTS,    error_too_many_objects,    -10,    ,    Too many objects of the type have already been created,    ,    ,    ,    ,    ) \
X__(VK_ERROR_FORMAT_NOT_SUPPORTED,    error_format_not_supported,    -11,    ,    Requested format is not supported on this device,    ,    ,    ,    ,    ) \
X__(VK_ERROR_FRAGMENTED_POOL,    error_fragmented_pool,    -12,    ,    A requested pool allocation has failed due to fragmentation of the pool`s memory,    ,    ,    ,    ,    ) \
X__(VK_ERROR_OUT_OF_POOL_MEMORY,    error_out_of_pool_memory,    ,    0,    ,    ,    70,    ,    -,    ) \
X__(VK_ERROR_INVALID_EXTERNAL_HANDLE,    error_invalid_external_handle,    ,    3,    ,    ,    73,    ,    -,    ) \
X__(VK_ERROR_SURFACE_LOST_KHR,    error_surface_lost_khr,    ,    0,    ,    VK_KHR_surface,    1,    vulkan,    -,    ) \
X__(VK_ERROR_NATIVE_WINDOW_IN_USE_KHR,    error_native_window_in_use_khr,    ,    1,    ,    VK_KHR_surface,    1,    vulkan,    -,    ) \
X__(VK_SUBOPTIMAL_KHR,    suboptimal_khr,    ,    3,    ,    VK_KHR_swapchain,    2,    vulkan,    ,    ) \
X__(VK_ERROR_OUT_OF_DATE_KHR,    error_out_of_date_khr,    ,    4,    ,    VK_KHR_swapchain,    2,    vulkan,    -,    ) \
X__(VK_ERROR_INCOMPATIBLE_DISPLAY_KHR,    error_incompatible_display_khr,    ,    1,    ,    VK_KHR_display_swapchain,    4,    vulkan,    -,    ) \
X__(VK_ERROR_VALIDATION_FAILED_EXT,    error_validation_failed_ext,    ,    1,    ,    VK_EXT_debug_report,    12,    vulkan,    -,    ) \
X__(VK_ERROR_INVALID_SHADER_NV,    error_invalid_shader_nv,    ,    0,    ,    VK_NV_glsl_shader,    13,    vulkan,    -,    ) \
X__(VK_ERROR_OUT_OF_POOL_MEMORY_KHR,    error_out_of_pool_memory_khr,    ,    ,    ,    VK_KHR_maintenance1,    70,    vulkan,    ,    VK_ERROR_OUT_OF_POOL_MEMORY) \
X__(VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR,    error_invalid_external_handle_khr,    ,    ,    ,    VK_KHR_external_memory,    73,    vulkan,    ,    VK_ERROR_INVALID_EXTERNAL_HANDLE) \
X__(VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT,    error_invalid_drm_format_modifier_plane_layout_ext,    ,    0,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    -,    ) \
X__(VK_ERROR_FRAGMENTATION_EXT,    error_fragmentation_ext,    ,    0,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    -,    ) \
X__(VK_ERROR_NOT_PERMITTED_EXT,    error_not_permitted_ext,    ,    1,    ,    VK_EXT_global_priority,    175,    vulkan,    -,    ) \
X__(VK_ERROR_INVALID_DEVICE_ADDRESS_EXT,    error_invalid_device_address_ext,    ,    0,    ,    VK_EXT_buffer_device_address,    245,    vulkan,    -,    ) \
X__(VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT,    error_full_screen_exclusive_mode_lost_ext,    ,    0,    ,    VK_EXT_full_screen_exclusive,    256,    vulkan,    -,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkIndexType_members(X__) \
X__(VK_INDEX_TYPE_UINT16,    uint16,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDEX_TYPE_UINT32,    uint32,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDEX_TYPE_NONE_NV,    none_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkQueueGlobalPriorityEXT_members(X__) \
X__(VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT,    low_ext,    128,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT,    medium_ext,    256,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT,    high_ext,    512,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT,    realtime_ext,    1024,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSamplerYcbcrRange_members(X__) \
X__(VK_SAMPLER_YCBCR_RANGE_ITU_FULL,    itu_full,    0,    ,    Luma 0..1 maps to 0..255  chroma -0.5..0.5 to 1..255 (clamped),    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_RANGE_ITU_NARROW,    itu_narrow,    1,    ,    Luma 0..1 maps to 16..235  chroma -0.5..0.5 to 16..240,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_RANGE_ITU_FULL_KHR,    itu_full_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_SAMPLER_YCBCR_RANGE_ITU_FULL) \
X__(VK_SAMPLER_YCBCR_RANGE_ITU_NARROW_KHR,    itu_narrow_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_SAMPLER_YCBCR_RANGE_ITU_NARROW) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDescriptorUpdateTemplateType_members(X__) \
X__(VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET,    descriptor_set,    0,    ,    Create descriptor update template for descriptor set updates,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR,    push_descriptors_khr,    1,    ,    Create descriptor update template for pushed descriptor updates,    VK_KHR_push_descriptor,    81,    vulkan,    ,    ) \
X__(VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR,    descriptor_set_khr,    ,    ,    ,    VK_KHR_descriptor_update_template,    86,    vulkan,    ,    VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkVertexInputRate_members(X__) \
X__(VK_VERTEX_INPUT_RATE_VERTEX,    vertex,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VERTEX_INPUT_RATE_INSTANCE,    instance,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkBlendFactor_members(X__) \
X__(VK_BLEND_FACTOR_ZERO,    zero,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE,    one,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_SRC_COLOR,    src_color,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR,    one_minus_src_color,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_DST_COLOR,    dst_color,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR,    one_minus_dst_color,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_SRC_ALPHA,    src_alpha,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA,    one_minus_src_alpha,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_DST_ALPHA,    dst_alpha,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA,    one_minus_dst_alpha,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_CONSTANT_COLOR,    constant_color,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR,    one_minus_constant_color,    11,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_CONSTANT_ALPHA,    constant_alpha,    12,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA,    one_minus_constant_alpha,    13,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_SRC_ALPHA_SATURATE,    src_alpha_saturate,    14,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_SRC1_COLOR,    src1_color,    15,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR,    one_minus_src1_color,    16,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_SRC1_ALPHA,    src1_alpha,    17,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA,    one_minus_src1_alpha,    18,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCompareOp_members(X__) \
X__(VK_COMPARE_OP_NEVER,    never,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_LESS,    less,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_EQUAL,    equal,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_LESS_OR_EQUAL,    less_or_equal,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_GREATER,    greater,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_NOT_EQUAL,    not_equal,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_GREATER_OR_EQUAL,    greater_or_equal,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_ALWAYS,    always,    7,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCoarseSampleOrderTypeNV_members(X__) \
X__(VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV,    default_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV,    custom_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV,    pixel_major_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV,    sample_major_nv,    3,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkInternalAllocationType_members(X__) \
X__(VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE,    executable,    0,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSamplerReductionModeEXT_members(X__) \
X__(VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT,    weighted_average_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_REDUCTION_MODE_MIN_EXT,    min_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_REDUCTION_MODE_MAX_EXT,    max_ext,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkLineRasterizationModeEXT_members(X__) \
X__(VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT,    default_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT,    rectangular_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT,    bresenham_ext,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT,    rectangular_smooth_ext,    3,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkBlendOp_members(X__) \
X__(VK_BLEND_OP_ADD,    add,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OP_SUBTRACT,    subtract,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OP_REVERSE_SUBTRACT,    reverse_subtract,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OP_MIN,    min,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OP_MAX,    max,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OP_ZERO_EXT,    zero_ext,    ,    0,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SRC_EXT,    src_ext,    ,    1,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DST_EXT,    dst_ext,    ,    2,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SRC_OVER_EXT,    src_over_ext,    ,    3,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DST_OVER_EXT,    dst_over_ext,    ,    4,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SRC_IN_EXT,    src_in_ext,    ,    5,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DST_IN_EXT,    dst_in_ext,    ,    6,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SRC_OUT_EXT,    src_out_ext,    ,    7,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DST_OUT_EXT,    dst_out_ext,    ,    8,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SRC_ATOP_EXT,    src_atop_ext,    ,    9,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DST_ATOP_EXT,    dst_atop_ext,    ,    10,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_XOR_EXT,    xor_ext,    ,    11,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_MULTIPLY_EXT,    multiply_ext,    ,    12,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SCREEN_EXT,    screen_ext,    ,    13,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_OVERLAY_EXT,    overlay_ext,    ,    14,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DARKEN_EXT,    darken_ext,    ,    15,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_LIGHTEN_EXT,    lighten_ext,    ,    16,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_COLORDODGE_EXT,    colordodge_ext,    ,    17,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_COLORBURN_EXT,    colorburn_ext,    ,    18,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HARDLIGHT_EXT,    hardlight_ext,    ,    19,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SOFTLIGHT_EXT,    softlight_ext,    ,    20,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DIFFERENCE_EXT,    difference_ext,    ,    21,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_EXCLUSION_EXT,    exclusion_ext,    ,    22,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_INVERT_EXT,    invert_ext,    ,    23,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_INVERT_RGB_EXT,    invert_rgb_ext,    ,    24,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_LINEARDODGE_EXT,    lineardodge_ext,    ,    25,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_LINEARBURN_EXT,    linearburn_ext,    ,    26,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_VIVIDLIGHT_EXT,    vividlight_ext,    ,    27,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_LINEARLIGHT_EXT,    linearlight_ext,    ,    28,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_PINLIGHT_EXT,    pinlight_ext,    ,    29,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HARDMIX_EXT,    hardmix_ext,    ,    30,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HSL_HUE_EXT,    hsl_hue_ext,    ,    31,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HSL_SATURATION_EXT,    hsl_saturation_ext,    ,    32,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HSL_COLOR_EXT,    hsl_color_ext,    ,    33,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HSL_LUMINOSITY_EXT,    hsl_luminosity_ext,    ,    34,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_PLUS_EXT,    plus_ext,    ,    35,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_PLUS_CLAMPED_EXT,    plus_clamped_ext,    ,    36,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT,    plus_clamped_alpha_ext,    ,    37,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_PLUS_DARKER_EXT,    plus_darker_ext,    ,    38,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_MINUS_EXT,    minus_ext,    ,    39,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_MINUS_CLAMPED_EXT,    minus_clamped_ext,    ,    40,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_CONTRAST_EXT,    contrast_ext,    ,    41,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_INVERT_OVG_EXT,    invert_ovg_ext,    ,    42,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_RED_EXT,    red_ext,    ,    43,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_GREEN_EXT,    green_ext,    ,    44,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_BLUE_EXT,    blue_ext,    ,    45,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkFrontFace_members(X__) \
X__(VK_FRONT_FACE_COUNTER_CLOCKWISE,    counter_clockwise,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FRONT_FACE_CLOCKWISE,    clockwise,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPerformanceOverrideTypeINTEL_members(X__) \
X__(VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL,    null_hardware_intel,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL,    flush_gpu_caches_intel,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkAttachmentLoadOp_members(X__) \
X__(VK_ATTACHMENT_LOAD_OP_LOAD,    load,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ATTACHMENT_LOAD_OP_CLEAR,    clear,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ATTACHMENT_LOAD_OP_DONT_CARE,    dont_care,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCopyAccelerationStructureModeNV_members(X__) \
X__(VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV,    clone_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV,    compact_nv,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkLogicOp_members(X__) \
X__(VK_LOGIC_OP_CLEAR,    clear,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_AND,    and,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_AND_REVERSE,    and_reverse,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_COPY,    copy,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_AND_INVERTED,    and_inverted,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_NO_OP,    no_op,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_XOR,    xor,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_OR,    or,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_NOR,    nor,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_EQUIVALENT,    equivalent,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_INVERT,    invert,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_OR_REVERSE,    or_reverse,    11,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_COPY_INVERTED,    copy_inverted,    12,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_OR_INVERTED,    or_inverted,    13,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_NAND,    nand,    14,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_SET,    set,    15,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkRayTracingShaderGroupTypeNV_members(X__) \
X__(VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV,    general_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV,    triangles_hit_group_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV,    procedural_hit_group_nv,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDisplayEventTypeEXT_members(X__) \
X__(VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT,    first_pixel_out_ext,    0,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPresentModeKHR_members(X__) \
X__(VK_PRESENT_MODE_IMMEDIATE_KHR,    immediate_khr,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRESENT_MODE_MAILBOX_KHR,    mailbox_khr,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRESENT_MODE_FIFO_KHR,    fifo_khr,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRESENT_MODE_FIFO_RELAXED_KHR,    fifo_relaxed_khr,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR,    shared_demand_refresh_khr,    ,    0,    ,    VK_KHR_shared_presentable_image,    112,    vulkan,    ,    ) \
X__(VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR,    shared_continuous_refresh_khr,    ,    1,    ,    VK_KHR_shared_presentable_image,    112,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkComponentTypeNV_members(X__) \
X__(VK_COMPONENT_TYPE_FLOAT16_NV,    float16_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_FLOAT32_NV,    float32_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_FLOAT64_NV,    float64_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_SINT8_NV,    sint8_nv,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_SINT16_NV,    sint16_nv,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_SINT32_NV,    sint32_nv,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_SINT64_NV,    sint64_nv,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_UINT8_NV,    uint8_nv,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_UINT16_NV,    uint16_nv,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_UINT32_NV,    uint32_nv,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_UINT64_NV,    uint64_nv,    10,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDynamicState_members(X__) \
X__(VK_DYNAMIC_STATE_VIEWPORT,    viewport,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_SCISSOR,    scissor,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_LINE_WIDTH,    line_width,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_DEPTH_BIAS,    depth_bias,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_BLEND_CONSTANTS,    blend_constants,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_DEPTH_BOUNDS,    depth_bounds,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK,    stencil_compare_mask,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_STENCIL_WRITE_MASK,    stencil_write_mask,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_STENCIL_REFERENCE,    stencil_reference,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV,    viewport_w_scaling_nv,    ,    0,    ,    VK_NV_clip_space_w_scaling,    88,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT,    discard_rectangle_ext,    ,    0,    ,    VK_EXT_discard_rectangles,    100,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT,    sample_locations_ext,    ,    0,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV,    viewport_shading_rate_palette_nv,    ,    4,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV,    viewport_coarse_sample_order_nv,    ,    6,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV,    exclusive_scissor_nv,    ,    1,    ,    VK_NV_scissor_exclusive,    206,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_LINE_STIPPLE_EXT,    line_stipple_ext,    ,    0,    ,    VK_EXT_line_rasterization,    260,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkValidationFeatureEnableEXT_members(X__) \
X__(VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT,    gpu_assisted_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT,    gpu_assisted_reserve_binding_slot_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT,    best_practices_ext,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkConservativeRasterizationModeEXT_members(X__) \
X__(VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT,    disabled_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT,    overestimate_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT,    underestimate_ext,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkAttachmentStoreOp_members(X__) \
X__(VK_ATTACHMENT_STORE_OP_STORE,    store,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ATTACHMENT_STORE_OP_DONT_CARE,    dont_care,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSystemAllocationScope_members(X__) \
X__(VK_SYSTEM_ALLOCATION_SCOPE_COMMAND,    command,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SYSTEM_ALLOCATION_SCOPE_OBJECT,    object,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SYSTEM_ALLOCATION_SCOPE_CACHE,    cache,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SYSTEM_ALLOCATION_SCOPE_DEVICE,    device,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE,    instance,    4,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPointClippingBehavior_members(X__) \
X__(VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES,    all_clip_planes,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY,    user_clip_planes_only,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES_KHR,    all_clip_planes_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    ,    VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES) \
X__(VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY_KHR,    user_clip_planes_only_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    ,    VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkBorderColor_members(X__) \
X__(VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK,    float_transparent_black,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BORDER_COLOR_INT_TRANSPARENT_BLACK,    int_transparent_black,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK,    float_opaque_black,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BORDER_COLOR_INT_OPAQUE_BLACK,    int_opaque_black,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE,    float_opaque_white,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BORDER_COLOR_INT_OPAQUE_WHITE,    int_opaque_white,    5,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkStructureType_members(X__) \
X__(VK_STRUCTURE_TYPE_APPLICATION_INFO,    application_info,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,    instance_create_info,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,    device_queue_create_info,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,    device_create_info,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBMIT_INFO,    submit_info,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO,    memory_allocate_info,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE,    mapped_memory_range,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_SPARSE_INFO,    bind_sparse_info,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,    fence_create_info,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO,    semaphore_create_info,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EVENT_CREATE_INFO,    event_create_info,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO,    query_pool_create_info,    11,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO,    buffer_create_info,    12,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO,    buffer_view_create_info,    13,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO,    image_create_info,    14,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO,    image_view_create_info,    15,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO,    shader_module_create_info,    16,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO,    pipeline_cache_create_info,    17,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO,    pipeline_shader_stage_create_info,    18,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO,    pipeline_vertex_input_state_create_info,    19,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO,    pipeline_input_assembly_state_create_info,    20,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO,    pipeline_tessellation_state_create_info,    21,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO,    pipeline_viewport_state_create_info,    22,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO,    pipeline_rasterization_state_create_info,    23,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO,    pipeline_multisample_state_create_info,    24,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO,    pipeline_depth_stencil_state_create_info,    25,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO,    pipeline_color_blend_state_create_info,    26,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO,    pipeline_dynamic_state_create_info,    27,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO,    graphics_pipeline_create_info,    28,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO,    compute_pipeline_create_info,    29,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO,    pipeline_layout_create_info,    30,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO,    sampler_create_info,    31,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO,    descriptor_set_layout_create_info,    32,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO,    descriptor_pool_create_info,    33,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO,    descriptor_set_allocate_info,    34,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET,    write_descriptor_set,    35,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET,    copy_descriptor_set,    36,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO,    framebuffer_create_info,    37,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO,    render_pass_create_info,    38,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,    command_pool_create_info,    39,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,    command_buffer_allocate_info,    40,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO,    command_buffer_inheritance_info,    41,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO,    command_buffer_begin_info,    42,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO,    render_pass_begin_info,    43,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER,    buffer_memory_barrier,    44,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,    image_memory_barrier,    45,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_BARRIER,    memory_barrier,    46,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO,    loader_instance_create_info,    47,    ,    Reserved for internal use by the loader  layers  and ICDs,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO,    loader_device_create_info,    48,    ,    Reserved for internal use by the loader  layers  and ICDs,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES,    physical_device_subgroup_properties,    ,    0,    ,    ,    95,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO,    bind_buffer_memory_info,    ,    0,    ,    ,    158,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO,    bind_image_memory_info,    ,    1,    ,    ,    158,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES,    physical_device_16bit_storage_features,    ,    0,    ,    ,    84,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS,    memory_dedicated_requirements,    ,    0,    ,    ,    128,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO,    memory_dedicated_allocate_info,    ,    1,    ,    ,    128,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO,    memory_allocate_flags_info,    ,    0,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO,    device_group_render_pass_begin_info,    ,    3,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO,    device_group_command_buffer_begin_info,    ,    4,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO,    device_group_submit_info,    ,    5,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO,    device_group_bind_sparse_info,    ,    6,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO,    bind_buffer_memory_device_group_info,    ,    13,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO,    bind_image_memory_device_group_info,    ,    14,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES,    physical_device_group_properties,    ,    0,    ,    ,    71,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO,    device_group_device_create_info,    ,    1,    ,    ,    71,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2,    buffer_memory_requirements_info_2,    ,    0,    ,    ,    147,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2,    image_memory_requirements_info_2,    ,    1,    ,    ,    147,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2,    image_sparse_memory_requirements_info_2,    ,    2,    ,    ,    147,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2,    memory_requirements_2,    ,    3,    ,    ,    147,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2,    sparse_image_memory_requirements_2,    ,    4,    ,    ,    147,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2,    physical_device_features_2,    ,    0,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2,    physical_device_properties_2,    ,    1,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2,    format_properties_2,    ,    2,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2,    image_format_properties_2,    ,    3,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2,    physical_device_image_format_info_2,    ,    4,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2,    queue_family_properties_2,    ,    5,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2,    physical_device_memory_properties_2,    ,    6,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2,    sparse_image_format_properties_2,    ,    7,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2,    physical_device_sparse_image_format_info_2,    ,    8,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES,    physical_device_point_clipping_properties,    ,    0,    ,    ,    118,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO,    render_pass_input_attachment_aspect_create_info,    ,    1,    ,    ,    118,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO,    image_view_usage_create_info,    ,    2,    ,    ,    118,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO,    pipeline_tessellation_domain_origin_state_create_info,    ,    3,    ,    ,    118,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO,    render_pass_multiview_create_info,    ,    0,    ,    ,    54,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES,    physical_device_multiview_features,    ,    1,    ,    ,    54,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES,    physical_device_multiview_properties,    ,    2,    ,    ,    54,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES,    physical_device_variable_pointers_features,    ,    0,    ,    ,    121,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES,    physical_device_variable_pointer_features,    ,    ,    ,    ,    ,    ,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES) \
X__(VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO,    protected_submit_info,    ,    0,    ,    ,    146,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES,    physical_device_protected_memory_features,    ,    1,    ,    ,    146,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES,    physical_device_protected_memory_properties,    ,    2,    ,    ,    146,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2,    device_queue_info_2,    ,    3,    ,    ,    146,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO,    sampler_ycbcr_conversion_create_info,    ,    0,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO,    sampler_ycbcr_conversion_info,    ,    1,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO,    bind_image_plane_memory_info,    ,    2,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO,    image_plane_memory_requirements_info,    ,    3,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES,    physical_device_sampler_ycbcr_conversion_features,    ,    4,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES,    sampler_ycbcr_conversion_image_format_properties,    ,    5,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO,    descriptor_update_template_create_info,    ,    0,    ,    ,    86,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO,    physical_device_external_image_format_info,    ,    0,    ,    ,    72,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES,    external_image_format_properties,    ,    1,    ,    ,    72,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO,    physical_device_external_buffer_info,    ,    2,    ,    ,    72,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES,    external_buffer_properties,    ,    3,    ,    ,    72,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES,    physical_device_id_properties,    ,    4,    ,    ,    72,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO,    external_memory_buffer_create_info,    ,    0,    ,    ,    73,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO,    external_memory_image_create_info,    ,    1,    ,    ,    73,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO,    export_memory_allocate_info,    ,    2,    ,    ,    73,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO,    physical_device_external_fence_info,    ,    0,    ,    ,    113,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES,    external_fence_properties,    ,    1,    ,    ,    113,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO,    export_fence_create_info,    ,    0,    ,    ,    114,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO,    export_semaphore_create_info,    ,    0,    ,    ,    78,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO,    physical_device_external_semaphore_info,    ,    0,    ,    ,    77,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES,    external_semaphore_properties,    ,    1,    ,    ,    77,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES,    physical_device_maintenance_3_properties,    ,    0,    ,    ,    169,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT,    descriptor_set_layout_support,    ,    1,    ,    ,    169,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES,    physical_device_shader_draw_parameters_features,    ,    0,    ,    ,    64,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES,    physical_device_shader_draw_parameter_features,    ,    ,    ,    ,    ,    ,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES) \
X__(VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR,    swapchain_create_info_khr,    ,    0,    ,    VK_KHR_swapchain,    2,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PRESENT_INFO_KHR,    present_info_khr,    ,    1,    ,    VK_KHR_swapchain,    2,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR,    device_group_present_capabilities_khr,    ,    7,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR,    image_swapchain_create_info_khr,    ,    8,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR,    bind_image_memory_swapchain_info_khr,    ,    9,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR,    acquire_next_image_info_khr,    ,    10,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR,    device_group_present_info_khr,    ,    11,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR,    device_group_swapchain_create_info_khr,    ,    12,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR,    display_mode_create_info_khr,    ,    0,    ,    VK_KHR_display,    3,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR,    display_surface_create_info_khr,    ,    1,    ,    VK_KHR_display,    3,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR,    display_present_info_khr,    ,    0,    ,    VK_KHR_display_swapchain,    4,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR,    xlib_surface_create_info_khr,    ,    0,    ,    VK_KHR_xlib_surface,    5,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR,    xcb_surface_create_info_khr,    ,    0,    ,    VK_KHR_xcb_surface,    6,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR,    wayland_surface_create_info_khr,    ,    0,    ,    VK_KHR_wayland_surface,    7,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR,    android_surface_create_info_khr,    ,    0,    ,    VK_KHR_android_surface,    9,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR,    win32_surface_create_info_khr,    ,    0,    ,    VK_KHR_win32_surface,    10,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT,    debug_report_callback_create_info_ext,    ,    0,    ,    VK_EXT_debug_report,    12,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_REPORT_CREATE_INFO_EXT,    debug_report_create_info_ext,    ,    ,    Backwards-compatible alias containing a typo,    VK_EXT_debug_report,    12,    vulkan,    ,    VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD,    pipeline_rasterization_state_rasterization_order_amd,    ,    0,    ,    VK_AMD_rasterization_order,    19,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT,    debug_marker_object_name_info_ext,    ,    0,    ,    VK_EXT_debug_marker,    23,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT,    debug_marker_object_tag_info_ext,    ,    1,    ,    VK_EXT_debug_marker,    23,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT,    debug_marker_marker_info_ext,    ,    2,    ,    VK_EXT_debug_marker,    23,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV,    dedicated_allocation_image_create_info_nv,    ,    0,    ,    VK_NV_dedicated_allocation,    27,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV,    dedicated_allocation_buffer_create_info_nv,    ,    1,    ,    VK_NV_dedicated_allocation,    27,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV,    dedicated_allocation_memory_allocate_info_nv,    ,    2,    ,    VK_NV_dedicated_allocation,    27,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT,    physical_device_transform_feedback_features_ext,    ,    0,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT,    physical_device_transform_feedback_properties_ext,    ,    1,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT,    pipeline_rasterization_state_stream_create_info_ext,    ,    2,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX,    image_view_handle_info_nvx,    ,    0,    ,    VK_NVX_image_view_handle,    31,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD,    texture_lod_gather_format_properties_amd,    ,    0,    ,    VK_AMD_texture_gather_bias_lod,    42,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP,    stream_descriptor_surface_create_info_ggp,    ,    0,    ,    VK_GGP_stream_descriptor_surface,    50,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV,    physical_device_corner_sampled_image_features_nv,    ,    0,    ,    VK_NV_corner_sampled_image,    51,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR,    render_pass_multiview_create_info_khr,    ,    ,    ,    VK_KHR_multiview,    54,    vulkan,    ,    VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR,    physical_device_multiview_features_khr,    ,    ,    ,    VK_KHR_multiview,    54,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR,    physical_device_multiview_properties_khr,    ,    ,    ,    VK_KHR_multiview,    54,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV,    external_memory_image_create_info_nv,    ,    0,    ,    VK_NV_external_memory,    57,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV,    export_memory_allocate_info_nv,    ,    1,    ,    VK_NV_external_memory,    57,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV,    import_memory_win32_handle_info_nv,    ,    0,    ,    VK_NV_external_memory_win32,    58,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV,    export_memory_win32_handle_info_nv,    ,    1,    ,    VK_NV_external_memory_win32,    58,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV,    win32_keyed_mutex_acquire_release_info_nv,    ,    0,    ,    VK_NV_win32_keyed_mutex,    59,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR,    physical_device_features_2_khr,    ,    ,    ,    VK_KHR_get_physical_device_properties2,    60,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR,    physical_device_properties_2_khr,    ,    ,    ,    VK_KHR_get_physical_device_properties2,    60,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2) \
X__(VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR,    format_properties_2_khr,    ,    ,    ,    VK_KHR_get_physical_device_properties2,    60,    vulkan,    ,    VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2) \
X__(VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR,    image_format_properties_2_khr,    ,    ,    ,    VK_KHR_get_physical_device_properties2,    60,    vulkan,    ,    VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR,    physical_device_image_format_info_2_khr,    ,    ,    ,    VK_KHR_get_physical_device_properties2,    60,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2) \
X__(VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR,    queue_family_properties_2_khr,    ,    ,    ,    VK_KHR_get_physical_device_properties2,    60,    vulkan,    ,    VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR,    physical_device_memory_properties_2_khr,    ,    ,    ,    VK_KHR_get_physical_device_properties2,    60,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2) \
X__(VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR,    sparse_image_format_properties_2_khr,    ,    ,    ,    VK_KHR_get_physical_device_properties2,    60,    vulkan,    ,    VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR,    physical_device_sparse_image_format_info_2_khr,    ,    ,    ,    VK_KHR_get_physical_device_properties2,    60,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2) \
X__(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHR,    memory_allocate_flags_info_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    ,    VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHR,    device_group_render_pass_begin_info_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    ,    VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHR,    device_group_command_buffer_begin_info_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    ,    VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHR,    device_group_submit_info_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    ,    VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHR,    device_group_bind_sparse_info_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    ,    VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO) \
X__(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO_KHR,    bind_buffer_memory_device_group_info_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    ,    VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO) \
X__(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO_KHR,    bind_image_memory_device_group_info_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    ,    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO) \
X__(VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT,    validation_flags_ext,    ,    0,    ,    VK_EXT_validation_flags,    62,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN,    vi_surface_create_info_nn,    ,    0,    ,    VK_NN_vi_surface,    63,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT,    physical_device_texture_compression_astc_hdr_features_ext,    ,    0,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT,    image_view_astc_decode_mode_ext,    ,    0,    ,    VK_EXT_astc_decode_mode,    68,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT,    physical_device_astc_decode_features_ext,    ,    1,    ,    VK_EXT_astc_decode_mode,    68,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHR,    physical_device_group_properties_khr,    ,    ,    ,    VK_KHR_device_group_creation,    71,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHR,    device_group_device_create_info_khr,    ,    ,    ,    VK_KHR_device_group_creation,    71,    vulkan,    ,    VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHR,    physical_device_external_image_format_info_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHR,    external_image_format_properties_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    ,    VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR,    physical_device_external_buffer_info_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHR,    external_buffer_properties_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    ,    VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES_KHR,    physical_device_id_properties_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHR,    external_memory_buffer_create_info_khr,    ,    ,    ,    VK_KHR_external_memory,    73,    vulkan,    ,    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR,    external_memory_image_create_info_khr,    ,    ,    ,    VK_KHR_external_memory,    73,    vulkan,    ,    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO) \
X__(VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHR,    export_memory_allocate_info_khr,    ,    ,    ,    VK_KHR_external_memory,    73,    vulkan,    ,    VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO) \
X__(VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR,    import_memory_win32_handle_info_khr,    ,    0,    ,    VK_KHR_external_memory_win32,    74,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR,    export_memory_win32_handle_info_khr,    ,    1,    ,    VK_KHR_external_memory_win32,    74,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR,    memory_win32_handle_properties_khr,    ,    2,    ,    VK_KHR_external_memory_win32,    74,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR,    memory_get_win32_handle_info_khr,    ,    3,    ,    VK_KHR_external_memory_win32,    74,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR,    import_memory_fd_info_khr,    ,    0,    ,    VK_KHR_external_memory_fd,    75,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR,    memory_fd_properties_khr,    ,    1,    ,    VK_KHR_external_memory_fd,    75,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR,    memory_get_fd_info_khr,    ,    2,    ,    VK_KHR_external_memory_fd,    75,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR,    win32_keyed_mutex_acquire_release_info_khr,    ,    0,    ,    VK_KHR_win32_keyed_mutex,    76,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR,    physical_device_external_semaphore_info_khr,    ,    ,    ,    VK_KHR_external_semaphore_capabilities,    77,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR,    external_semaphore_properties_khr,    ,    ,    ,    VK_KHR_external_semaphore_capabilities,    77,    vulkan,    ,    VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES) \
X__(VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR,    export_semaphore_create_info_khr,    ,    ,    ,    VK_KHR_external_semaphore,    78,    vulkan,    ,    VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO) \
X__(VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR,    import_semaphore_win32_handle_info_khr,    ,    0,    ,    VK_KHR_external_semaphore_win32,    79,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR,    export_semaphore_win32_handle_info_khr,    ,    1,    ,    VK_KHR_external_semaphore_win32,    79,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR,    d3d12_fence_submit_info_khr,    ,    2,    ,    VK_KHR_external_semaphore_win32,    79,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR,    semaphore_get_win32_handle_info_khr,    ,    3,    ,    VK_KHR_external_semaphore_win32,    79,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR,    import_semaphore_fd_info_khr,    ,    0,    ,    VK_KHR_external_semaphore_fd,    80,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR,    semaphore_get_fd_info_khr,    ,    1,    ,    VK_KHR_external_semaphore_fd,    80,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR,    physical_device_push_descriptor_properties_khr,    ,    0,    ,    VK_KHR_push_descriptor,    81,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT,    command_buffer_inheritance_conditional_rendering_info_ext,    ,    0,    ,    VK_EXT_conditional_rendering,    82,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT,    physical_device_conditional_rendering_features_ext,    ,    1,    ,    VK_EXT_conditional_rendering,    82,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT,    conditional_rendering_begin_info_ext,    ,    2,    ,    VK_EXT_conditional_rendering,    82,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR,    physical_device_shader_float16_int8_features_khr,    ,    0,    ,    VK_KHR_shader_float16_int8,    83,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT16_INT8_FEATURES_KHR,    physical_device_float16_int8_features_khr,    ,    ,    ,    VK_KHR_shader_float16_int8,    83,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES_KHR,    physical_device_16bit_storage_features_khr,    ,    ,    ,    VK_KHR_16bit_storage,    84,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES) \
X__(VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR,    present_regions_khr,    ,    0,    ,    VK_KHR_incremental_present,    85,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR,    descriptor_update_template_create_info_khr,    ,    ,    ,    VK_KHR_descriptor_update_template,    86,    vulkan,    ,    VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO) \
X__(VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX,    object_table_create_info_nvx,    ,    0,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX,    indirect_commands_layout_create_info_nvx,    ,    1,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX,    cmd_process_commands_info_nvx,    ,    2,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX,    cmd_reserve_space_for_commands_info_nvx,    ,    3,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX,    device_generated_commands_limits_nvx,    ,    4,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX,    device_generated_commands_features_nvx,    ,    5,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV,    pipeline_viewport_w_scaling_state_create_info_nv,    ,    0,    ,    VK_NV_clip_space_w_scaling,    88,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT,    surface_capabilities_2_ext,    ,    0,    ,    VK_EXT_display_surface_counter,    91,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT,    surface_capabilities2_ext,    ,    ,    Backwards-compatible alias containing a typo,    VK_EXT_display_surface_counter,    91,    vulkan,    ,    VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT) \
X__(VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT,    display_power_info_ext,    ,    0,    ,    VK_EXT_display_control,    92,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT,    device_event_info_ext,    ,    1,    ,    VK_EXT_display_control,    92,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT,    display_event_info_ext,    ,    2,    ,    VK_EXT_display_control,    92,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT,    swapchain_counter_create_info_ext,    ,    3,    ,    VK_EXT_display_control,    92,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE,    present_times_info_google,    ,    0,    ,    VK_GOOGLE_display_timing,    93,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX,    physical_device_multiview_per_view_attributes_properties_nvx,    ,    0,    ,    VK_NVX_multiview_per_view_attributes,    98,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV,    pipeline_viewport_swizzle_state_create_info_nv,    ,    0,    ,    VK_NV_viewport_swizzle,    99,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT,    physical_device_discard_rectangle_properties_ext,    ,    0,    ,    VK_EXT_discard_rectangles,    100,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT,    pipeline_discard_rectangle_state_create_info_ext,    ,    1,    ,    VK_EXT_discard_rectangles,    100,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT,    physical_device_conservative_rasterization_properties_ext,    ,    0,    ,    VK_EXT_conservative_rasterization,    102,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT,    pipeline_rasterization_conservative_state_create_info_ext,    ,    1,    ,    VK_EXT_conservative_rasterization,    102,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT,    physical_device_depth_clip_enable_features_ext,    ,    0,    ,    VK_EXT_depth_clip_enable,    103,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT,    pipeline_rasterization_depth_clip_state_create_info_ext,    ,    1,    ,    VK_EXT_depth_clip_enable,    103,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_HDR_METADATA_EXT,    hdr_metadata_ext,    ,    0,    ,    VK_EXT_hdr_metadata,    106,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR,    physical_device_imageless_framebuffer_features_khr,    ,    0,    ,    VK_KHR_imageless_framebuffer,    109,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR,    framebuffer_attachments_create_info_khr,    ,    1,    ,    VK_KHR_imageless_framebuffer,    109,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR,    framebuffer_attachment_image_info_khr,    ,    2,    ,    VK_KHR_imageless_framebuffer,    109,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR,    render_pass_attachment_begin_info_khr,    ,    3,    ,    VK_KHR_imageless_framebuffer,    109,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR,    attachment_description_2_khr,    ,    0,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR,    attachment_reference_2_khr,    ,    1,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR,    subpass_description_2_khr,    ,    2,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR,    subpass_dependency_2_khr,    ,    3,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR,    render_pass_create_info_2_khr,    ,    4,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR,    subpass_begin_info_khr,    ,    5,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR,    subpass_end_info_khr,    ,    6,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR,    shared_present_surface_capabilities_khr,    ,    0,    ,    VK_KHR_shared_presentable_image,    112,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR,    physical_device_external_fence_info_khr,    ,    ,    ,    VK_KHR_external_fence_capabilities,    113,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES_KHR,    external_fence_properties_khr,    ,    ,    ,    VK_KHR_external_fence_capabilities,    113,    vulkan,    ,    VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES) \
X__(VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO_KHR,    export_fence_create_info_khr,    ,    ,    ,    VK_KHR_external_fence,    114,    vulkan,    ,    VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO) \
X__(VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR,    import_fence_win32_handle_info_khr,    ,    0,    ,    VK_KHR_external_fence_win32,    115,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR,    export_fence_win32_handle_info_khr,    ,    1,    ,    VK_KHR_external_fence_win32,    115,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR,    fence_get_win32_handle_info_khr,    ,    2,    ,    VK_KHR_external_fence_win32,    115,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR,    import_fence_fd_info_khr,    ,    0,    ,    VK_KHR_external_fence_fd,    116,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR,    fence_get_fd_info_khr,    ,    1,    ,    VK_KHR_external_fence_fd,    116,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES_KHR,    physical_device_point_clipping_properties_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO_KHR,    render_pass_input_attachment_aspect_create_info_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    ,    VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO) \
X__(VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO_KHR,    image_view_usage_create_info_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    ,    VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO) \
X__(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO_KHR,    pipeline_tessellation_domain_origin_state_create_info_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    ,    VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR,    physical_device_surface_info_2_khr,    ,    0,    ,    VK_KHR_get_surface_capabilities2,    120,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR,    surface_capabilities_2_khr,    ,    1,    ,    VK_KHR_get_surface_capabilities2,    120,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR,    surface_format_2_khr,    ,    2,    ,    VK_KHR_get_surface_capabilities2,    120,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES_KHR,    physical_device_variable_pointer_features_khr,    ,    ,    ,    VK_KHR_variable_pointers,    121,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES_KHR,    physical_device_variable_pointers_features_khr,    ,    ,    ,    VK_KHR_variable_pointers,    121,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES) \
X__(VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR,    display_properties_2_khr,    ,    0,    ,    VK_KHR_get_display_properties2,    122,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR,    display_plane_properties_2_khr,    ,    1,    ,    VK_KHR_get_display_properties2,    122,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR,    display_mode_properties_2_khr,    ,    2,    ,    VK_KHR_get_display_properties2,    122,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR,    display_plane_info_2_khr,    ,    3,    ,    VK_KHR_get_display_properties2,    122,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR,    display_plane_capabilities_2_khr,    ,    4,    ,    VK_KHR_get_display_properties2,    122,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK,    ios_surface_create_info_mvk,    ,    0,    ,    VK_MVK_ios_surface,    123,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK,    macos_surface_create_info_mvk,    ,    0,    ,    VK_MVK_macos_surface,    124,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR,    memory_dedicated_requirements_khr,    ,    ,    ,    VK_KHR_dedicated_allocation,    128,    vulkan,    ,    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS) \
X__(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR,    memory_dedicated_allocate_info_khr,    ,    ,    ,    VK_KHR_dedicated_allocation,    128,    vulkan,    ,    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO) \
X__(VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT,    debug_utils_object_name_info_ext,    ,    0,    ,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT,    debug_utils_object_tag_info_ext,    ,    1,    ,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT,    debug_utils_label_ext,    ,    2,    ,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT,    debug_utils_messenger_callback_data_ext,    ,    3,    ,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT,    debug_utils_messenger_create_info_ext,    ,    4,    ,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID,    android_hardware_buffer_usage_android,    ,    0,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID,    android_hardware_buffer_properties_android,    ,    1,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID,    android_hardware_buffer_format_properties_android,    ,    2,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID,    import_android_hardware_buffer_info_android,    ,    3,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID,    memory_get_android_hardware_buffer_info_android,    ,    4,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID,    external_format_android,    ,    5,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT,    physical_device_sampler_filter_minmax_properties_ext,    ,    0,    ,    VK_EXT_sampler_filter_minmax,    131,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT,    sampler_reduction_mode_create_info_ext,    ,    1,    ,    VK_EXT_sampler_filter_minmax,    131,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT,    physical_device_inline_uniform_block_features_ext,    ,    0,    ,    VK_EXT_inline_uniform_block,    139,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT,    physical_device_inline_uniform_block_properties_ext,    ,    1,    ,    VK_EXT_inline_uniform_block,    139,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT,    write_descriptor_set_inline_uniform_block_ext,    ,    2,    ,    VK_EXT_inline_uniform_block,    139,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT,    descriptor_pool_inline_uniform_block_create_info_ext,    ,    3,    ,    VK_EXT_inline_uniform_block,    139,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT,    sample_locations_info_ext,    ,    0,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT,    render_pass_sample_locations_begin_info_ext,    ,    1,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT,    pipeline_sample_locations_state_create_info_ext,    ,    2,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT,    physical_device_sample_locations_properties_ext,    ,    3,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT,    multisample_properties_ext,    ,    4,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR,    buffer_memory_requirements_info_2_khr,    ,    ,    ,    VK_KHR_get_memory_requirements2,    147,    vulkan,    ,    VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2) \
X__(VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR,    image_memory_requirements_info_2_khr,    ,    ,    ,    VK_KHR_get_memory_requirements2,    147,    vulkan,    ,    VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2) \
X__(VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR,    image_sparse_memory_requirements_info_2_khr,    ,    ,    ,    VK_KHR_get_memory_requirements2,    147,    vulkan,    ,    VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2) \
X__(VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR,    memory_requirements_2_khr,    ,    ,    ,    VK_KHR_get_memory_requirements2,    147,    vulkan,    ,    VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2) \
X__(VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR,    sparse_image_memory_requirements_2_khr,    ,    ,    ,    VK_KHR_get_memory_requirements2,    147,    vulkan,    ,    VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2) \
X__(VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR,    image_format_list_create_info_khr,    ,    0,    ,    VK_KHR_image_format_list,    148,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT,    physical_device_blend_operation_advanced_features_ext,    ,    0,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT,    physical_device_blend_operation_advanced_properties_ext,    ,    1,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT,    pipeline_color_blend_advanced_state_create_info_ext,    ,    2,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV,    pipeline_coverage_to_color_state_create_info_nv,    ,    0,    ,    VK_NV_fragment_coverage_to_color,    150,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV,    pipeline_coverage_modulation_state_create_info_nv,    ,    0,    ,    VK_NV_framebuffer_mixed_samples,    153,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV,    physical_device_shader_sm_builtins_features_nv,    ,    0,    ,    VK_NV_shader_sm_builtins,    155,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV,    physical_device_shader_sm_builtins_properties_nv,    ,    1,    ,    VK_NV_shader_sm_builtins,    155,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO_KHR,    sampler_ycbcr_conversion_create_info_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO) \
X__(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO_KHR,    sampler_ycbcr_conversion_info_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO) \
X__(VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO_KHR,    bind_image_plane_memory_info_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO) \
X__(VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO_KHR,    image_plane_memory_requirements_info_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES_KHR,    physical_device_sampler_ycbcr_conversion_features_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES) \
X__(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES_KHR,    sampler_ycbcr_conversion_image_format_properties_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    ,    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES) \
X__(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHR,    bind_buffer_memory_info_khr,    ,    ,    ,    VK_KHR_bind_memory2,    158,    vulkan,    ,    VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO) \
X__(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHR,    bind_image_memory_info_khr,    ,    ,    ,    VK_KHR_bind_memory2,    158,    vulkan,    ,    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO) \
X__(VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT,    drm_format_modifier_properties_list_ext,    ,    0,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT,    drm_format_modifier_properties_ext,    ,    1,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT,    physical_device_image_drm_format_modifier_info_ext,    ,    2,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT,    image_drm_format_modifier_list_create_info_ext,    ,    3,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT,    image_drm_format_modifier_explicit_create_info_ext,    ,    4,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT,    image_drm_format_modifier_properties_ext,    ,    5,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT,    validation_cache_create_info_ext,    ,    0,    ,    VK_EXT_validation_cache,    161,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT,    shader_module_validation_cache_create_info_ext,    ,    1,    ,    VK_EXT_validation_cache,    161,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT,    descriptor_set_layout_binding_flags_create_info_ext,    ,    0,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT,    physical_device_descriptor_indexing_features_ext,    ,    1,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT,    physical_device_descriptor_indexing_properties_ext,    ,    2,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT,    descriptor_set_variable_descriptor_count_allocate_info_ext,    ,    3,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT,    descriptor_set_variable_descriptor_count_layout_support_ext,    ,    4,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV,    pipeline_viewport_shading_rate_image_state_create_info_nv,    ,    0,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV,    physical_device_shading_rate_image_features_nv,    ,    1,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV,    physical_device_shading_rate_image_properties_nv,    ,    2,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV,    pipeline_viewport_coarse_sample_order_state_create_info_nv,    ,    5,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV,    ray_tracing_pipeline_create_info_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV,    acceleration_structure_create_info_nv,    ,    1,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_GEOMETRY_NV,    geometry_nv,    ,    3,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV,    geometry_triangles_nv,    ,    4,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV,    geometry_aabb_nv,    ,    5,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV,    bind_acceleration_structure_memory_info_nv,    ,    6,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV,    write_descriptor_set_acceleration_structure_nv,    ,    7,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV,    acceleration_structure_memory_requirements_info_nv,    ,    8,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV,    physical_device_ray_tracing_properties_nv,    ,    9,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV,    ray_tracing_shader_group_create_info_nv,    ,    11,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV,    acceleration_structure_info_nv,    ,    12,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV,    physical_device_representative_fragment_test_features_nv,    ,    0,    ,    VK_NV_representative_fragment_test,    167,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV,    pipeline_representative_fragment_test_state_create_info_nv,    ,    1,    ,    VK_NV_representative_fragment_test,    167,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES_KHR,    physical_device_maintenance_3_properties_khr,    ,    ,    ,    VK_KHR_maintenance3,    169,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT_KHR,    descriptor_set_layout_support_khr,    ,    ,    ,    VK_KHR_maintenance3,    169,    vulkan,    ,    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT,    physical_device_image_view_image_format_info_ext,    ,    0,    ,    VK_EXT_filter_cubic,    171,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT,    filter_cubic_image_view_image_format_properties_ext,    ,    1,    ,    VK_EXT_filter_cubic,    171,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT,    device_queue_global_priority_create_info_ext,    ,    0,    ,    VK_EXT_global_priority,    175,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR,    physical_device_8bit_storage_features_khr,    ,    0,    ,    VK_KHR_8bit_storage,    178,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT,    import_memory_host_pointer_info_ext,    ,    0,    ,    VK_EXT_external_memory_host,    179,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT,    memory_host_pointer_properties_ext,    ,    1,    ,    VK_EXT_external_memory_host,    179,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT,    physical_device_external_memory_host_properties_ext,    ,    2,    ,    VK_EXT_external_memory_host,    179,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR,    physical_device_shader_atomic_int64_features_khr,    ,    0,    ,    VK_KHR_shader_atomic_int64,    181,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD,    pipeline_compiler_control_create_info_amd,    ,    0,    ,    VK_AMD_pipeline_compiler_control,    184,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT,    calibrated_timestamp_info_ext,    ,    0,    ,    VK_EXT_calibrated_timestamps,    185,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD,    physical_device_shader_core_properties_amd,    ,    0,    ,    VK_AMD_shader_core_properties,    186,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD,    device_memory_overallocation_create_info_amd,    ,    0,    ,    VK_AMD_memory_overallocation_behavior,    190,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT,    physical_device_vertex_attribute_divisor_properties_ext,    ,    0,    ,    VK_EXT_vertex_attribute_divisor,    191,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT,    pipeline_vertex_input_divisor_state_create_info_ext,    ,    1,    ,    VK_EXT_vertex_attribute_divisor,    191,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT,    physical_device_vertex_attribute_divisor_features_ext,    ,    2,    ,    VK_EXT_vertex_attribute_divisor,    191,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP,    present_frame_token_ggp,    ,    0,    ,    VK_GGP_frame_token,    192,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT,    pipeline_creation_feedback_create_info_ext,    ,    0,    ,    VK_EXT_pipeline_creation_feedback,    193,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR,    physical_device_driver_properties_khr,    ,    0,    ,    VK_KHR_driver_properties,    197,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR,    physical_device_float_controls_properties_khr,    ,    0,    ,    VK_KHR_shader_float_controls,    198,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR,    physical_device_depth_stencil_resolve_properties_khr,    ,    0,    ,    VK_KHR_depth_stencil_resolve,    200,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR,    subpass_description_depth_stencil_resolve_khr,    ,    1,    ,    VK_KHR_depth_stencil_resolve,    200,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV,    physical_device_compute_shader_derivatives_features_nv,    ,    0,    ,    VK_NV_compute_shader_derivatives,    202,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV,    physical_device_mesh_shader_features_nv,    ,    0,    ,    VK_NV_mesh_shader,    203,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV,    physical_device_mesh_shader_properties_nv,    ,    1,    ,    VK_NV_mesh_shader,    203,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV,    physical_device_fragment_shader_barycentric_features_nv,    ,    0,    ,    VK_NV_fragment_shader_barycentric,    204,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV,    physical_device_shader_image_footprint_features_nv,    ,    0,    ,    VK_NV_shader_image_footprint,    205,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV,    pipeline_viewport_exclusive_scissor_state_create_info_nv,    ,    0,    ,    VK_NV_scissor_exclusive,    206,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV,    physical_device_exclusive_scissor_features_nv,    ,    2,    ,    VK_NV_scissor_exclusive,    206,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV,    checkpoint_data_nv,    ,    0,    ,    VK_NV_device_diagnostic_checkpoints,    207,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV,    queue_family_checkpoint_properties_nv,    ,    1,    ,    VK_NV_device_diagnostic_checkpoints,    207,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL,    physical_device_shader_integer_functions_2_features_intel,    ,    0,    ,    VK_INTEL_shader_integer_functions2,    210,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL,    query_pool_create_info_intel,    ,    0,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL,    initialize_performance_api_info_intel,    ,    1,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL,    performance_marker_info_intel,    ,    2,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL,    performance_stream_marker_info_intel,    ,    3,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL,    performance_override_info_intel,    ,    4,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL,    performance_configuration_acquire_info_intel,    ,    5,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR,    physical_device_vulkan_memory_model_features_khr,    ,    0,    ,    VK_KHR_vulkan_memory_model,    212,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT,    physical_device_pci_bus_info_properties_ext,    ,    0,    ,    VK_EXT_pci_bus_info,    213,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD,    display_native_hdr_surface_capabilities_amd,    ,    0,    ,    VK_AMD_display_native_hdr,    214,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD,    swapchain_display_native_hdr_create_info_amd,    ,    1,    ,    VK_AMD_display_native_hdr,    214,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA,    imagepipe_surface_create_info_fuchsia,    ,    0,    ,    VK_FUCHSIA_imagepipe_surface,    215,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT,    metal_surface_create_info_ext,    ,    0,    ,    VK_EXT_metal_surface,    218,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT,    physical_device_fragment_density_map_features_ext,    ,    0,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT,    physical_device_fragment_density_map_properties_ext,    ,    1,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT,    render_pass_fragment_density_map_create_info_ext,    ,    2,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT,    physical_device_scalar_block_layout_features_ext,    ,    0,    ,    VK_EXT_scalar_block_layout,    222,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT,    physical_device_subgroup_size_control_properties_ext,    ,    0,    ,    VK_EXT_subgroup_size_control,    226,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT,    pipeline_shader_stage_required_subgroup_size_create_info_ext,    ,    1,    ,    VK_EXT_subgroup_size_control,    226,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT,    physical_device_subgroup_size_control_features_ext,    ,    2,    ,    VK_EXT_subgroup_size_control,    226,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD,    physical_device_shader_core_properties_2_amd,    ,    0,    ,    VK_AMD_shader_core_properties2,    228,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD,    physical_device_coherent_memory_features_amd,    ,    0,    ,    VK_AMD_device_coherent_memory,    230,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT,    physical_device_memory_budget_properties_ext,    ,    0,    ,    VK_EXT_memory_budget,    238,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT,    physical_device_memory_priority_features_ext,    ,    0,    ,    VK_EXT_memory_priority,    239,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT,    memory_priority_allocate_info_ext,    ,    1,    ,    VK_EXT_memory_priority,    239,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR,    surface_protected_capabilities_khr,    ,    0,    ,    VK_KHR_surface_protected_capabilities,    240,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV,    physical_device_dedicated_allocation_image_aliasing_features_nv,    ,    0,    ,    VK_NV_dedicated_allocation_image_aliasing,    241,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT,    physical_device_buffer_device_address_features_ext,    ,    0,    ,    VK_EXT_buffer_device_address,    245,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_ADDRESS_FEATURES_EXT,    physical_device_buffer_address_features_ext,    ,    ,    ,    VK_EXT_buffer_device_address,    245,    vulkan,    ,    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT) \
X__(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT,    buffer_device_address_info_ext,    ,    1,    ,    VK_EXT_buffer_device_address,    245,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT,    buffer_device_address_create_info_ext,    ,    2,    ,    VK_EXT_buffer_device_address,    245,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT,    image_stencil_usage_create_info_ext,    ,    0,    ,    VK_EXT_separate_stencil_usage,    247,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT,    validation_features_ext,    ,    0,    ,    VK_EXT_validation_features,    248,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV,    physical_device_cooperative_matrix_features_nv,    ,    0,    ,    VK_NV_cooperative_matrix,    250,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV,    cooperative_matrix_properties_nv,    ,    1,    ,    VK_NV_cooperative_matrix,    250,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV,    physical_device_cooperative_matrix_properties_nv,    ,    2,    ,    VK_NV_cooperative_matrix,    250,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV,    physical_device_coverage_reduction_mode_features_nv,    ,    0,    ,    VK_NV_coverage_reduction_mode,    251,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV,    pipeline_coverage_reduction_state_create_info_nv,    ,    1,    ,    VK_NV_coverage_reduction_mode,    251,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV,    framebuffer_mixed_samples_combination_nv,    ,    2,    ,    VK_NV_coverage_reduction_mode,    251,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT,    physical_device_fragment_shader_interlock_features_ext,    ,    0,    ,    VK_EXT_fragment_shader_interlock,    252,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT,    physical_device_ycbcr_image_arrays_features_ext,    ,    0,    ,    VK_EXT_ycbcr_image_arrays,    253,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR,    physical_device_uniform_buffer_standard_layout_features_khr,    ,    0,    ,    VK_KHR_uniform_buffer_standard_layout,    254,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT,    surface_full_screen_exclusive_info_ext,    ,    0,    ,    VK_EXT_full_screen_exclusive,    256,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT,    surface_capabilities_full_screen_exclusive_ext,    ,    2,    ,    VK_EXT_full_screen_exclusive,    256,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT,    surface_full_screen_exclusive_win32_info_ext,    ,    1,    ,    VK_EXT_full_screen_exclusive,    256,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT,    headless_surface_create_info_ext,    ,    0,    ,    VK_EXT_headless_surface,    257,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT,    physical_device_line_rasterization_features_ext,    ,    0,    ,    VK_EXT_line_rasterization,    260,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT,    pipeline_rasterization_line_state_create_info_ext,    ,    1,    ,    VK_EXT_line_rasterization,    260,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT,    physical_device_line_rasterization_properties_ext,    ,    2,    ,    VK_EXT_line_rasterization,    260,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT,    physical_device_host_query_reset_features_ext,    ,    0,    ,    VK_EXT_host_query_reset,    262,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT,    physical_device_index_type_uint8_features_ext,    ,    0,    ,    VK_EXT_index_type_uint8,    266,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR,    physical_device_pipeline_executable_properties_features_khr,    ,    0,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR,    pipeline_info_khr,    ,    1,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR,    pipeline_executable_properties_khr,    ,    2,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR,    pipeline_executable_info_khr,    ,    3,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR,    pipeline_executable_statistic_khr,    ,    4,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR,    pipeline_executable_internal_representation_khr,    ,    5,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT,    physical_device_shader_demote_to_helper_invocation_features_ext,    ,    0,    ,    VK_EXT_shader_demote_to_helper_invocation,    277,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT,    physical_device_texel_buffer_alignment_features_ext,    ,    0,    ,    VK_EXT_texel_buffer_alignment,    282,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT,    physical_device_texel_buffer_alignment_properties_ext,    ,    1,    ,    VK_EXT_texel_buffer_alignment,    282,    vulkan,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkMemoryHeapFlagBits_members(X__) \
X__(VK_MEMORY_HEAP_DEVICE_LOCAL_BIT,    device_local,    ,    ,    If set  heap represents device memory,    ,    ,    ,    ) \
X__(VK_MEMORY_HEAP_MULTI_INSTANCE_BIT,    multi_instance,    ,    ,    If set  heap allocations allocate multiple instances by default,    ,    ,    ,    ) \
X__(VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR,    multi_instance_khr,    ,    ,    ,    VK_KHR_device_group_creation,    71,    vulkan,    VK_MEMORY_HEAP_MULTI_INSTANCE_BIT) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkSwapchainCreateFlagBitsKHR_members(X__) \
X__(VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR,    split_instance_bind_regions_khr,    ,    ,    Allow images with VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT,    VK_KHR_swapchain,    2,    vulkan,    ) \
X__(VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR,    protected_khr,    ,    ,    Swapchain is protected,    VK_KHR_swapchain,    2,    vulkan,    ) \
X__(VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR,    mutable_format_khr,    ,    ,    ,    VK_KHR_swapchain_mutable_format,    201,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkExternalSemaphoreHandleTypeFlagBits_members(X__) \
X__(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT,    opaque_fd,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT,    opaque_win32,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,    opaque_win32_kmt,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT,    d3d12_fence,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT,    sync_fd,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR,    opaque_fd_khr,    ,    ,    ,    VK_KHR_external_semaphore_capabilities,    77,    vulkan,    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT) \
X__(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR,    opaque_win32_khr,    ,    ,    ,    VK_KHR_external_semaphore_capabilities,    77,    vulkan,    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT) \
X__(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR,    opaque_win32_kmt_khr,    ,    ,    ,    VK_KHR_external_semaphore_capabilities,    77,    vulkan,    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT) \
X__(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR,    d3d12_fence_khr,    ,    ,    ,    VK_KHR_external_semaphore_capabilities,    77,    vulkan,    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT) \
X__(VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR,    sync_fd_khr,    ,    ,    ,    VK_KHR_external_semaphore_capabilities,    77,    vulkan,    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkImageViewCreateFlagBits_members(X__) \
X__(VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT,    fragment_density_map_dynamic_ext,    ,    ,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkDeviceQueueCreateFlagBits_members(X__) \
X__(VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT,    protected,    ,    ,    Queue is a protected-capable device queue,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkFenceCreateFlagBits_members(X__) \
X__(VK_FENCE_CREATE_SIGNALED_BIT,    signaled,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkCommandPoolResetFlagBits_members(X__) \
X__(VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT,    release_resources,    ,    ,    Release resources owned by the pool,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkExternalSemaphoreFeatureFlagBits_members(X__) \
X__(VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT,    exportable,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT,    importable,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR,    exportable_khr,    ,    ,    ,    VK_KHR_external_semaphore_capabilities,    77,    vulkan,    VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT) \
X__(VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR,    importable_khr,    ,    ,    ,    VK_KHR_external_semaphore_capabilities,    77,    vulkan,    VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkQueryControlFlagBits_members(X__) \
X__(VK_QUERY_CONTROL_PRECISE_BIT,    precise,    ,    ,    Require precise results to be collected by the query,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkCommandPoolCreateFlagBits_members(X__) \
X__(VK_COMMAND_POOL_CREATE_TRANSIENT_BIT,    transient,    ,    ,    Command buffers have a short lifetime,    ,    ,    ,    ) \
X__(VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT,    reset_command_buffer,    ,    ,    Command buffers may release their memory individually,    ,    ,    ,    ) \
X__(VK_COMMAND_POOL_CREATE_PROTECTED_BIT,    protected,    ,    ,    Command buffers allocated from pool are protected command buffers,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkDebugReportFlagBitsEXT_members(X__) \
X__(VK_DEBUG_REPORT_INFORMATION_BIT_EXT,    information_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_WARNING_BIT_EXT,    warning_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT,    performance_warning_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_ERROR_BIT_EXT,    error_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_DEBUG_BIT_EXT,    debug_ext,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkDeviceGroupPresentModeFlagBitsKHR_members(X__) \
X__(VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR,    local_khr,    ,    ,    Present from local memory,    ,    ,    ,    ) \
X__(VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR,    remote_khr,    ,    ,    Present from remote memory,    ,    ,    ,    ) \
X__(VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR,    sum_khr,    ,    ,    Present sum of local and/or remote memory,    ,    ,    ,    ) \
X__(VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR,    local_multi_device_khr,    ,    ,    Each physical device presents from local memory,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkDisplayPlaneAlphaFlagBitsKHR_members(X__) \
X__(VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR,    opaque_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR,    global_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR,    per_pixel_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR,    per_pixel_premultiplied_khr,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkResolveModeFlagBitsKHR_members(X__) \
X__(VK_RESOLVE_MODE_NONE_KHR,    none_khr,    0,    ,    ,    ,    ,    ,    ) \
X__(VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR,    sample_zero_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_RESOLVE_MODE_AVERAGE_BIT_KHR,    average_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_RESOLVE_MODE_MIN_BIT_KHR,    min_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_RESOLVE_MODE_MAX_BIT_KHR,    max_khr,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkCommandBufferResetFlagBits_members(X__) \
X__(VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT,    release_resources,    ,    ,    Release resources owned by the buffer,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkRenderPassCreateFlagBits_members(X__) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkQueryResultFlagBits_members(X__) \
X__(VK_QUERY_RESULT_64_BIT,    64,    ,    ,    Results of the queries are written to the destination buffer as 64-bit values,    ,    ,    ,    ) \
X__(VK_QUERY_RESULT_WAIT_BIT,    wait,    ,    ,    Results of the queries are waited on before proceeding with the result copy,    ,    ,    ,    ) \
X__(VK_QUERY_RESULT_WITH_AVAILABILITY_BIT,    with_availability,    ,    ,    Besides the results of the query  the availability of the results is also written,    ,    ,    ,    ) \
X__(VK_QUERY_RESULT_PARTIAL_BIT,    partial,    ,    ,    Copy the partial results of the query even if the final results are not available,    ,    ,    ,    ) \

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkSwapchainImageUsageFlagBitsANDROID_members(X__) \
X__(VK_SWAPCHAIN_IMAGE_USAGE_SHARED_BIT_ANDROID,    shared_android,    ,    ,    ,    ,    ,    ,    ) \

# endif

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkBuildAccelerationStructureFlagBitsNV_members(X__) \
X__(VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV,    allow_update_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV,    allow_compaction_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV,    prefer_fast_trace_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV,    prefer_fast_build_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV,    low_memory_nv,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkShaderModuleCreateFlagBits_members(X__) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkSamplerCreateFlagBits_members(X__) \
X__(VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT,    subsampled_ext,    ,    ,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ) \
X__(VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT,    subsampled_coarse_reconstruction_ext,    ,    ,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkGeometryFlagBitsNV_members(X__) \
X__(VK_GEOMETRY_OPAQUE_BIT_NV,    opaque_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV,    no_duplicate_any_hit_invocation_nv,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkCompositeAlphaFlagBitsKHR_members(X__) \
X__(VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR,    opaque_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR,    pre_multiplied_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR,    post_multiplied_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR,    inherit_khr,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkAttachmentDescriptionFlagBits_members(X__) \
X__(VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT,    may_alias,    ,    ,    The attachment may alias physical memory of another attachment in the same render pass,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkPeerMemoryFeatureFlagBits_members(X__) \
X__(VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT,    copy_src,    ,    ,    Can read with vkCmdCopy commands,    ,    ,    ,    ) \
X__(VK_PEER_MEMORY_FEATURE_COPY_DST_BIT,    copy_dst,    ,    ,    Can write with vkCmdCopy commands,    ,    ,    ,    ) \
X__(VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT,    generic_src,    ,    ,    Can read with any access type/command,    ,    ,    ,    ) \
X__(VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT,    generic_dst,    ,    ,    Can write with and access type/command,    ,    ,    ,    ) \
X__(VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR,    copy_src_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT) \
X__(VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR,    copy_dst_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    VK_PEER_MEMORY_FEATURE_COPY_DST_BIT) \
X__(VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR,    generic_src_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT) \
X__(VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR,    generic_dst_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkExternalMemoryHandleTypeFlagBits_members(X__) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT,    opaque_fd,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT,    opaque_win32,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,    opaque_win32_kmt,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT,    d3d11_texture,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT,    d3d11_texture_kmt,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT,    d3d12_heap,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT,    d3d12_resource,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR,    opaque_fd_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR,    opaque_win32_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR,    opaque_win32_kmt_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR,    d3d11_texture_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR,    d3d11_texture_kmt_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR,    d3d12_heap_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR,    d3d12_resource_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT,    dma_buf_ext,    ,    ,    ,    VK_EXT_external_memory_dma_buf,    126,    vulkan,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID,    android_hardware_buffer_android,    ,    ,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT,    host_allocation_ext,    ,    ,    ,    VK_EXT_external_memory_host,    179,    vulkan,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT,    host_mapped_foreign_memory_ext,    ,    ,    ,    VK_EXT_external_memory_host,    179,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkPipelineCompilerControlFlagBitsAMD_members(X__) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkSparseImageFormatFlagBits_members(X__) \
X__(VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT,    single_miptail,    ,    ,    Image uses a single mip tail region for all array layers,    ,    ,    ,    ) \
X__(VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT,    aligned_mip_size,    ,    ,    Image requires mip level dimensions to be an integer multiple of the sparse image block dimensions for non-tail mip levels.,    ,    ,    ,    ) \
X__(VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT,    nonstandard_block_size,    ,    ,    Image uses a non-standard sparse image block dimensions,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkBufferUsageFlagBits_members(X__) \
X__(VK_BUFFER_USAGE_TRANSFER_SRC_BIT,    transfer_src,    ,    ,    Can be used as a source of transfer operations,    ,    ,    ,    ) \
X__(VK_BUFFER_USAGE_TRANSFER_DST_BIT,    transfer_dst,    ,    ,    Can be used as a destination of transfer operations,    ,    ,    ,    ) \
X__(VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT,    uniform_texel_buffer,    ,    ,    Can be used as TBO,    ,    ,    ,    ) \
X__(VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT,    storage_texel_buffer,    ,    ,    Can be used as IBO,    ,    ,    ,    ) \
X__(VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT,    uniform_buffer,    ,    ,    Can be used as UBO,    ,    ,    ,    ) \
X__(VK_BUFFER_USAGE_STORAGE_BUFFER_BIT,    storage_buffer,    ,    ,    Can be used as SSBO,    ,    ,    ,    ) \
X__(VK_BUFFER_USAGE_INDEX_BUFFER_BIT,    index_buffer,    ,    ,    Can be used as source of fixed-function index fetch (index buffer),    ,    ,    ,    ) \
X__(VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,    vertex_buffer,    ,    ,    Can be used as source of fixed-function vertex fetch (VBO),    ,    ,    ,    ) \
X__(VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT,    indirect_buffer,    ,    ,    Can be the source of indirect parameters (e.g. indirect buffer  parameter buffer),    ,    ,    ,    ) \
X__(VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT,    transform_feedback_buffer_ext,    ,    ,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ) \
X__(VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT,    transform_feedback_counter_buffer_ext,    ,    ,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ) \
X__(VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT,    conditional_rendering_ext,    ,    ,    Specifies the buffer can be used as predicate in conditional rendering,    VK_EXT_conditional_rendering,    82,    vulkan,    ) \
X__(VK_BUFFER_USAGE_RAY_TRACING_BIT_NV,    ray_tracing_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT,    shader_device_address_ext,    ,    ,    ,    VK_EXT_buffer_device_address,    245,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkSampleCountFlagBits_members(X__) \
X__(VK_SAMPLE_COUNT_1_BIT,    1,    ,    ,    Sample count 1 supported,    ,    ,    ,    ) \
X__(VK_SAMPLE_COUNT_2_BIT,    2,    ,    ,    Sample count 2 supported,    ,    ,    ,    ) \
X__(VK_SAMPLE_COUNT_4_BIT,    4,    ,    ,    Sample count 4 supported,    ,    ,    ,    ) \
X__(VK_SAMPLE_COUNT_8_BIT,    8,    ,    ,    Sample count 8 supported,    ,    ,    ,    ) \
X__(VK_SAMPLE_COUNT_16_BIT,    16,    ,    ,    Sample count 16 supported,    ,    ,    ,    ) \
X__(VK_SAMPLE_COUNT_32_BIT,    32,    ,    ,    Sample count 32 supported,    ,    ,    ,    ) \
X__(VK_SAMPLE_COUNT_64_BIT,    64,    ,    ,    Sample count 64 supported,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkQueueFlagBits_members(X__) \
X__(VK_QUEUE_GRAPHICS_BIT,    graphics,    ,    ,    Queue supports graphics operations,    ,    ,    ,    ) \
X__(VK_QUEUE_COMPUTE_BIT,    compute,    ,    ,    Queue supports compute operations,    ,    ,    ,    ) \
X__(VK_QUEUE_TRANSFER_BIT,    transfer,    ,    ,    Queue supports transfer operations,    ,    ,    ,    ) \
X__(VK_QUEUE_SPARSE_BINDING_BIT,    sparse_binding,    ,    ,    Queue supports sparse resource memory management operations,    ,    ,    ,    ) \
X__(VK_QUEUE_PROTECTED_BIT,    protected,    ,    ,    Queues may support protected operations,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkDebugUtilsMessageTypeFlagBitsEXT_members(X__) \
X__(VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT,    general_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT,    validation_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT,    performance_ext,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkDescriptorPoolCreateFlagBits_members(X__) \
X__(VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT,    free_descriptor_set,    ,    ,    Descriptor sets may be freed individually,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT,    update_after_bind_ext,    ,    ,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkImageCreateFlagBits_members(X__) \
X__(VK_IMAGE_CREATE_SPARSE_BINDING_BIT,    sparse_binding,    ,    ,    Image should support sparse backing,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT,    sparse_residency,    ,    ,    Image should support sparse backing with partial residency,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_SPARSE_ALIASED_BIT,    sparse_aliased,    ,    ,    Image should support constent data access to physical memory ranges mapped into multiple locations of sparse images,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT,    mutable_format,    ,    ,    Allows image views to have different format than the base image,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT,    cube_compatible,    ,    ,    Allows creating image views with cube type from the created image,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_ALIAS_BIT,    alias,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT,    split_instance_bind_regions,    ,    ,    Allows using VkBindImageMemoryDeviceGroupInfo::pSplitInstanceBindRegions when binding memory to the image,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT,    2d_array_compatible,    ,    ,    The 3D image can be viewed as a 2D or 2D array image,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT,    block_texel_view_compatible,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_EXTENDED_USAGE_BIT,    extended_usage,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_PROTECTED_BIT,    protected,    ,    ,    Image requires protected memory,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_DISJOINT_BIT,    disjoint,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV,    corner_sampled_nv,    ,    ,    ,    VK_NV_corner_sampled_image,    51,    vulkan,    ) \
X__(VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR,    split_instance_bind_regions_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT) \
X__(VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR,    2d_array_compatible_khr,    ,    ,    ,    VK_KHR_maintenance1,    70,    vulkan,    VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT) \
X__(VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR,    block_texel_view_compatible_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT) \
X__(VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR,    extended_usage_khr,    ,    ,    ,    VK_KHR_maintenance2,    118,    vulkan,    VK_IMAGE_CREATE_EXTENDED_USAGE_BIT) \
X__(VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT,    sample_locations_compatible_depth_ext,    ,    ,    ,    VK_EXT_sample_locations,    144,    vulkan,    ) \
X__(VK_IMAGE_CREATE_DISJOINT_BIT_KHR,    disjoint_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    VK_IMAGE_CREATE_DISJOINT_BIT) \
X__(VK_IMAGE_CREATE_ALIAS_BIT_KHR,    alias_khr,    ,    ,    ,    VK_KHR_bind_memory2,    158,    vulkan,    VK_IMAGE_CREATE_ALIAS_BIT) \
X__(VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT,    subsampled_ext,    ,    ,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkIndirectCommandsLayoutUsageFlagBitsNVX_members(X__) \
X__(VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX,    unordered_sequences_nvx,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX,    sparse_sequences_nvx,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX,    empty_executions_nvx,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX,    indexed_sequences_nvx,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkExternalMemoryFeatureFlagBits_members(X__) \
X__(VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT,    dedicated_only,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT,    exportable,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT,    importable,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR,    dedicated_only_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT) \
X__(VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR,    exportable_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT) \
X__(VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR,    importable_khr,    ,    ,    ,    VK_KHR_external_memory_capabilities,    72,    vulkan,    VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkBufferCreateFlagBits_members(X__) \
X__(VK_BUFFER_CREATE_SPARSE_BINDING_BIT,    sparse_binding,    ,    ,    Buffer should support sparse backing,    ,    ,    ,    ) \
X__(VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT,    sparse_residency,    ,    ,    Buffer should support sparse backing with partial residency,    ,    ,    ,    ) \
X__(VK_BUFFER_CREATE_SPARSE_ALIASED_BIT,    sparse_aliased,    ,    ,    Buffer should support constent data access to physical memory ranges mapped into multiple locations of sparse buffers,    ,    ,    ,    ) \
X__(VK_BUFFER_CREATE_PROTECTED_BIT,    protected,    ,    ,    Buffer requires protected memory,    ,    ,    ,    ) \
X__(VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT,    device_address_capture_replay_ext,    ,    ,    ,    VK_EXT_buffer_device_address,    245,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkShaderStageFlagBits_members(X__) \
X__(VK_SHADER_STAGE_VERTEX_BIT,    vertex,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT,    tessellation_control,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT,    tessellation_evaluation,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_STAGE_GEOMETRY_BIT,    geometry,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_STAGE_FRAGMENT_BIT,    fragment,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_STAGE_COMPUTE_BIT,    compute,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_STAGE_ALL_GRAPHICS,    all_graphics,    0x0000001F,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_STAGE_ALL,    all,    0x7FFFFFFF,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_STAGE_RAYGEN_BIT_NV,    raygen_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_SHADER_STAGE_ANY_HIT_BIT_NV,    any_hit_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV,    closest_hit_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_SHADER_STAGE_MISS_BIT_NV,    miss_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_SHADER_STAGE_INTERSECTION_BIT_NV,    intersection_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_SHADER_STAGE_CALLABLE_BIT_NV,    callable_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_SHADER_STAGE_TASK_BIT_NV,    task_nv,    ,    ,    ,    VK_NV_mesh_shader,    203,    vulkan,    ) \
X__(VK_SHADER_STAGE_MESH_BIT_NV,    mesh_nv,    ,    ,    ,    VK_NV_mesh_shader,    203,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkColorComponentFlagBits_members(X__) \
X__(VK_COLOR_COMPONENT_R_BIT,    r,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COLOR_COMPONENT_G_BIT,    g,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COLOR_COMPONENT_B_BIT,    b,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COLOR_COMPONENT_A_BIT,    a,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkPipelineCreateFlagBits_members(X__) \
X__(VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT,    disable_optimization,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT,    allow_derivatives,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_CREATE_DERIVATIVE_BIT,    derivative,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT,    view_index_from_device_index,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_CREATE_DISPATCH_BASE,    dispatch_base,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR,    view_index_from_device_index_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT) \
X__(VK_PIPELINE_CREATE_DISPATCH_BASE_KHR,    dispatch_base_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    VK_PIPELINE_CREATE_DISPATCH_BASE) \
X__(VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV,    defer_compile_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR,    capture_statistics_khr,    ,    ,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ) \
X__(VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR,    capture_internal_representations_khr,    ,    ,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkSubpassDescriptionFlagBits_members(X__) \
X__(VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX,    per_view_attributes_nvx,    ,    ,    ,    VK_NVX_multiview_per_view_attributes,    98,    vulkan,    ) \
X__(VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX,    per_view_position_x_only_nvx,    ,    ,    ,    VK_NVX_multiview_per_view_attributes,    98,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkFramebufferCreateFlagBits_members(X__) \
X__(VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR,    imageless_khr,    ,    ,    ,    VK_KHR_imageless_framebuffer,    109,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkSparseMemoryBindFlagBits_members(X__) \
X__(VK_SPARSE_MEMORY_BIND_METADATA_BIT,    metadata,    ,    ,    Operation binds resource metadata to memory,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkFormatFeatureFlagBits_members(X__) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT,    sampled_image,    ,    ,    Format can be used for sampled images (SAMPLED_IMAGE and COMBINED_IMAGE_SAMPLER descriptor types),    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT,    storage_image,    ,    ,    Format can be used for storage images (STORAGE_IMAGE descriptor type),    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT,    storage_image_atomic,    ,    ,    Format supports atomic operations in case it is used for storage images,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT,    uniform_texel_buffer,    ,    ,    Format can be used for uniform texel buffers (TBOs),    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT,    storage_texel_buffer,    ,    ,    Format can be used for storage texel buffers (IBOs),    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT,    storage_texel_buffer_atomic,    ,    ,    Format supports atomic operations in case it is used for storage texel buffers,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT,    vertex_buffer,    ,    ,    Format can be used for vertex buffers (VBOs),    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT,    color_attachment,    ,    ,    Format can be used for color attachment images,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT,    color_attachment_blend,    ,    ,    Format supports blending in case it is used for color attachment images,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT,    depth_stencil_attachment,    ,    ,    Format can be used for depth/stencil attachment images,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_BLIT_SRC_BIT,    blit_src,    ,    ,    Format can be used as the source image of blits with vkCmdBlitImage,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_BLIT_DST_BIT,    blit_dst,    ,    ,    Format can be used as the destination image of blits with vkCmdBlitImage,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT,    sampled_image_filter_linear,    ,    ,    Format can be filtered with VK_FILTER_LINEAR when being sampled,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_TRANSFER_SRC_BIT,    transfer_src,    ,    ,    Format can be used as the source image of image transfer commands,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_TRANSFER_DST_BIT,    transfer_dst,    ,    ,    Format can be used as the destination image of image transfer commands,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT,    midpoint_chroma_samples,    ,    ,    Format can have midpoint rather than cosited chroma samples,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT,    sampled_image_ycbcr_conversion_linear_filter,    ,    ,    Format can be used with linear filtering whilst color conversion is enabled,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT,    sampled_image_ycbcr_conversion_separate_reconstruction_filter,    ,    ,    Format can have different chroma  min and mag filters,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT,    sampled_image_ycbcr_conversion_chroma_reconstruction_explicit,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT,    sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_DISJOINT_BIT,    disjoint,    ,    ,    Format supports disjoint planes,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT,    cosited_chroma_samples,    ,    ,    Format can have cosited rather than midpoint chroma samples,    ,    ,    ,    ) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG,    sampled_image_filter_cubic_img,    ,    ,    Format can be filtered with VK_FILTER_CUBIC_IMG when being sampled,    VK_IMG_filter_cubic,    16,    vulkan,    ) \
X__(VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR,    transfer_src_khr,    ,    ,    ,    VK_KHR_maintenance1,    70,    vulkan,    VK_FORMAT_FEATURE_TRANSFER_SRC_BIT) \
X__(VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR,    transfer_dst_khr,    ,    ,    ,    VK_KHR_maintenance1,    70,    vulkan,    VK_FORMAT_FEATURE_TRANSFER_DST_BIT) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT,    sampled_image_filter_minmax_ext,    ,    ,    Format can be used with min/max reduction filtering,    VK_EXT_sampler_filter_minmax,    131,    vulkan,    ) \
X__(VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR,    midpoint_chroma_samples_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR,    sampled_image_ycbcr_conversion_linear_filter_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR,    sampled_image_ycbcr_conversion_separate_reconstruction_filter_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR,    sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR,    sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT) \
X__(VK_FORMAT_FEATURE_DISJOINT_BIT_KHR,    disjoint_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    VK_FORMAT_FEATURE_DISJOINT_BIT) \
X__(VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR,    cosited_chroma_samples_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT) \
X__(VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT,    sampled_image_filter_cubic_ext,    ,    ,    ,    VK_EXT_filter_cubic,    171,    vulkan,    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG) \
X__(VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT,    fragment_density_map_ext,    ,    ,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkQueryPipelineStatisticFlagBits_members(X__) \
X__(VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT,    input_assembly_vertices,    ,    ,    Optional,    ,    ,    ,    ) \
X__(VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT,    input_assembly_primitives,    ,    ,    Optional,    ,    ,    ,    ) \
X__(VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT,    vertex_shader_invocations,    ,    ,    Optional,    ,    ,    ,    ) \
X__(VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT,    geometry_shader_invocations,    ,    ,    Optional,    ,    ,    ,    ) \
X__(VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT,    geometry_shader_primitives,    ,    ,    Optional,    ,    ,    ,    ) \
X__(VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT,    clipping_invocations,    ,    ,    Optional,    ,    ,    ,    ) \
X__(VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT,    clipping_primitives,    ,    ,    Optional,    ,    ,    ,    ) \
X__(VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT,    fragment_shader_invocations,    ,    ,    Optional,    ,    ,    ,    ) \
X__(VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT,    tessellation_control_shader_patches,    ,    ,    Optional,    ,    ,    ,    ) \
X__(VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT,    tessellation_evaluation_shader_invocations,    ,    ,    Optional,    ,    ,    ,    ) \
X__(VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT,    compute_shader_invocations,    ,    ,    Optional,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkSurfaceTransformFlagBitsKHR_members(X__) \
X__(VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR,    identity_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR,    rotate_90_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR,    rotate_180_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR,    rotate_270_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR,    horizontal_mirror_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR,    horizontal_mirror_rotate_90_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR,    horizontal_mirror_rotate_180_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR,    horizontal_mirror_rotate_270_khr,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR,    inherit_khr,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkImageUsageFlagBits_members(X__) \
X__(VK_IMAGE_USAGE_TRANSFER_SRC_BIT,    transfer_src,    ,    ,    Can be used as a source of transfer operations,    ,    ,    ,    ) \
X__(VK_IMAGE_USAGE_TRANSFER_DST_BIT,    transfer_dst,    ,    ,    Can be used as a destination of transfer operations,    ,    ,    ,    ) \
X__(VK_IMAGE_USAGE_SAMPLED_BIT,    sampled,    ,    ,    Can be sampled from (SAMPLED_IMAGE and COMBINED_IMAGE_SAMPLER descriptor types),    ,    ,    ,    ) \
X__(VK_IMAGE_USAGE_STORAGE_BIT,    storage,    ,    ,    Can be used as storage image (STORAGE_IMAGE descriptor type),    ,    ,    ,    ) \
X__(VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT,    color_attachment,    ,    ,    Can be used as framebuffer color attachment,    ,    ,    ,    ) \
X__(VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT,    depth_stencil_attachment,    ,    ,    Can be used as framebuffer depth/stencil attachment,    ,    ,    ,    ) \
X__(VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT,    transient_attachment,    ,    ,    Image data not needed outside of rendering,    ,    ,    ,    ) \
X__(VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT,    input_attachment,    ,    ,    Can be used as framebuffer input attachment,    ,    ,    ,    ) \
X__(VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV,    shading_rate_image_nv,    ,    ,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ) \
X__(VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT,    fragment_density_map_ext,    ,    ,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkDebugUtilsMessageSeverityFlagBitsEXT_members(X__) \
X__(VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT,    verbose_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT,    info_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT,    warning_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT,    error_ext,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkSurfaceCounterFlagBitsEXT_members(X__) \
X__(VK_SURFACE_COUNTER_VBLANK_EXT,    vblank_ext,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkSubgroupFeatureFlagBits_members(X__) \
X__(VK_SUBGROUP_FEATURE_BASIC_BIT,    basic,    ,    ,    Basic subgroup operations,    ,    ,    ,    ) \
X__(VK_SUBGROUP_FEATURE_VOTE_BIT,    vote,    ,    ,    Vote subgroup operations,    ,    ,    ,    ) \
X__(VK_SUBGROUP_FEATURE_ARITHMETIC_BIT,    arithmetic,    ,    ,    Arithmetic subgroup operations,    ,    ,    ,    ) \
X__(VK_SUBGROUP_FEATURE_BALLOT_BIT,    ballot,    ,    ,    Ballot subgroup operations,    ,    ,    ,    ) \
X__(VK_SUBGROUP_FEATURE_SHUFFLE_BIT,    shuffle,    ,    ,    Shuffle subgroup operations,    ,    ,    ,    ) \
X__(VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT,    shuffle_relative,    ,    ,    Shuffle relative subgroup operations,    ,    ,    ,    ) \
X__(VK_SUBGROUP_FEATURE_CLUSTERED_BIT,    clustered,    ,    ,    Clustered subgroup operations,    ,    ,    ,    ) \
X__(VK_SUBGROUP_FEATURE_QUAD_BIT,    quad,    ,    ,    Quad subgroup operations,    ,    ,    ,    ) \
X__(VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV,    partitioned_nv,    ,    ,    ,    VK_NV_shader_subgroup_partitioned,    199,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkSemaphoreImportFlagBits_members(X__) \
X__(VK_SEMAPHORE_IMPORT_TEMPORARY_BIT,    temporary,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR,    temporary_khr,    ,    ,    ,    VK_KHR_external_semaphore,    78,    vulkan,    VK_SEMAPHORE_IMPORT_TEMPORARY_BIT) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkMemoryAllocateFlagBits_members(X__) \
X__(VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT,    device_mask,    ,    ,    Force allocation on specific devices,    ,    ,    ,    ) \
X__(VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR,    device_mask_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkCullModeFlagBits_members(X__) \
X__(VK_CULL_MODE_NONE,    none,    0,    ,    ,    ,    ,    ,    ) \
X__(VK_CULL_MODE_FRONT_BIT,    front,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_CULL_MODE_BACK_BIT,    back,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_CULL_MODE_FRONT_AND_BACK,    front_and_back,    0x00000003,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkStencilFaceFlagBits_members(X__) \
X__(VK_STENCIL_FACE_FRONT_BIT,    front,    ,    ,    Front face,    ,    ,    ,    ) \
X__(VK_STENCIL_FACE_BACK_BIT,    back,    ,    ,    Back face,    ,    ,    ,    ) \
X__(VK_STENCIL_FACE_FRONT_AND_BACK,    front_and_back,    0x00000003,    ,    Front and back faces,    ,    ,    ,    ) \
X__(VK_STENCIL_FRONT_AND_BACK,    k_stencil_front_and_back,    ,    ,    Alias for backwards compatibility,    ,    ,    ,    VK_STENCIL_FACE_FRONT_AND_BACK) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkAccessFlagBits_members(X__) \
X__(VK_ACCESS_INDIRECT_COMMAND_READ_BIT,    indirect_command_read,    ,    ,    Controls coherency of indirect command reads,    ,    ,    ,    ) \
X__(VK_ACCESS_INDEX_READ_BIT,    index_read,    ,    ,    Controls coherency of index reads,    ,    ,    ,    ) \
X__(VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT,    vertex_attribute_read,    ,    ,    Controls coherency of vertex attribute reads,    ,    ,    ,    ) \
X__(VK_ACCESS_UNIFORM_READ_BIT,    uniform_read,    ,    ,    Controls coherency of uniform buffer reads,    ,    ,    ,    ) \
X__(VK_ACCESS_INPUT_ATTACHMENT_READ_BIT,    input_attachment_read,    ,    ,    Controls coherency of input attachment reads,    ,    ,    ,    ) \
X__(VK_ACCESS_SHADER_READ_BIT,    shader_read,    ,    ,    Controls coherency of shader reads,    ,    ,    ,    ) \
X__(VK_ACCESS_SHADER_WRITE_BIT,    shader_write,    ,    ,    Controls coherency of shader writes,    ,    ,    ,    ) \
X__(VK_ACCESS_COLOR_ATTACHMENT_READ_BIT,    color_attachment_read,    ,    ,    Controls coherency of color attachment reads,    ,    ,    ,    ) \
X__(VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT,    color_attachment_write,    ,    ,    Controls coherency of color attachment writes,    ,    ,    ,    ) \
X__(VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT,    depth_stencil_attachment_read,    ,    ,    Controls coherency of depth/stencil attachment reads,    ,    ,    ,    ) \
X__(VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT,    depth_stencil_attachment_write,    ,    ,    Controls coherency of depth/stencil attachment writes,    ,    ,    ,    ) \
X__(VK_ACCESS_TRANSFER_READ_BIT,    transfer_read,    ,    ,    Controls coherency of transfer reads,    ,    ,    ,    ) \
X__(VK_ACCESS_TRANSFER_WRITE_BIT,    transfer_write,    ,    ,    Controls coherency of transfer writes,    ,    ,    ,    ) \
X__(VK_ACCESS_HOST_READ_BIT,    host_read,    ,    ,    Controls coherency of host reads,    ,    ,    ,    ) \
X__(VK_ACCESS_HOST_WRITE_BIT,    host_write,    ,    ,    Controls coherency of host writes,    ,    ,    ,    ) \
X__(VK_ACCESS_MEMORY_READ_BIT,    memory_read,    ,    ,    Controls coherency of memory reads,    ,    ,    ,    ) \
X__(VK_ACCESS_MEMORY_WRITE_BIT,    memory_write,    ,    ,    Controls coherency of memory writes,    ,    ,    ,    ) \
X__(VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT,    transform_feedback_write_ext,    ,    ,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ) \
X__(VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT,    transform_feedback_counter_read_ext,    ,    ,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ) \
X__(VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT,    transform_feedback_counter_write_ext,    ,    ,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ) \
X__(VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT,    conditional_rendering_read_ext,    ,    ,    read access flag for reading conditional rendering predicate,    VK_EXT_conditional_rendering,    82,    vulkan,    ) \
X__(VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX,    command_process_read_nvx,    ,    ,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ) \
X__(VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX,    command_process_write_nvx,    ,    ,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ) \
X__(VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT,    color_attachment_read_noncoherent_ext,    ,    ,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ) \
X__(VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV,    shading_rate_image_read_nv,    ,    ,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ) \
X__(VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV,    acceleration_structure_read_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV,    acceleration_structure_write_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT,    fragment_density_map_read_ext,    ,    ,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkExternalFenceFeatureFlagBits_members(X__) \
X__(VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT,    exportable,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT,    importable,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR,    exportable_khr,    ,    ,    ,    VK_KHR_external_fence_capabilities,    113,    vulkan,    VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT) \
X__(VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR,    importable_khr,    ,    ,    ,    VK_KHR_external_fence_capabilities,    113,    vulkan,    VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkDescriptorBindingFlagBitsEXT_members(X__) \
X__(VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT,    update_after_bind_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT,    update_unused_while_pending_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT,    partially_bound_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT,    variable_descriptor_count_ext,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkExternalMemoryHandleTypeFlagBitsNV_members(X__) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV,    opaque_win32_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV,    opaque_win32_kmt_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV,    d3d11_image_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV,    d3d11_image_kmt_nv,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkExternalMemoryFeatureFlagBitsNV_members(X__) \
X__(VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV,    dedicated_only_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV,    exportable_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV,    importable_nv,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkFenceImportFlagBits_members(X__) \
X__(VK_FENCE_IMPORT_TEMPORARY_BIT,    temporary,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FENCE_IMPORT_TEMPORARY_BIT_KHR,    temporary_khr,    ,    ,    ,    VK_KHR_external_fence,    114,    vulkan,    VK_FENCE_IMPORT_TEMPORARY_BIT) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkImageAspectFlagBits_members(X__) \
X__(VK_IMAGE_ASPECT_COLOR_BIT,    color,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_ASPECT_DEPTH_BIT,    depth,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_ASPECT_STENCIL_BIT,    stencil,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_ASPECT_METADATA_BIT,    metadata,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_ASPECT_PLANE_0_BIT,    plane_0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_ASPECT_PLANE_1_BIT,    plane_1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_ASPECT_PLANE_2_BIT,    plane_2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_ASPECT_PLANE_0_BIT_KHR,    plane_0_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    VK_IMAGE_ASPECT_PLANE_0_BIT) \
X__(VK_IMAGE_ASPECT_PLANE_1_BIT_KHR,    plane_1_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    VK_IMAGE_ASPECT_PLANE_1_BIT) \
X__(VK_IMAGE_ASPECT_PLANE_2_BIT_KHR,    plane_2_khr,    ,    ,    ,    VK_KHR_sampler_ycbcr_conversion,    157,    vulkan,    VK_IMAGE_ASPECT_PLANE_2_BIT) \
X__(VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT,    memory_plane_0_ext,    ,    ,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ) \
X__(VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT,    memory_plane_1_ext,    ,    ,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ) \
X__(VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT,    memory_plane_2_ext,    ,    ,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ) \
X__(VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT,    memory_plane_3_ext,    ,    ,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkDescriptorSetLayoutCreateFlagBits_members(X__) \
X__(VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR,    push_descriptor_khr,    ,    ,    Descriptors are pushed via flink:vkCmdPushDescriptorSetKHR,    VK_KHR_push_descriptor,    81,    vulkan,    ) \
X__(VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT,    update_after_bind_pool_ext,    ,    ,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkExternalFenceHandleTypeFlagBits_members(X__) \
X__(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT,    opaque_fd,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT,    opaque_win32,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,    opaque_win32_kmt,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT,    sync_fd,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR,    opaque_fd_khr,    ,    ,    ,    VK_KHR_external_fence_capabilities,    113,    vulkan,    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT) \
X__(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR,    opaque_win32_khr,    ,    ,    ,    VK_KHR_external_fence_capabilities,    113,    vulkan,    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT) \
X__(VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR,    opaque_win32_kmt_khr,    ,    ,    ,    VK_KHR_external_fence_capabilities,    113,    vulkan,    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT) \
X__(VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR,    sync_fd_khr,    ,    ,    ,    VK_KHR_external_fence_capabilities,    113,    vulkan,    VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkPipelineStageFlagBits_members(X__) \
X__(VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,    top_of_pipe,    ,    ,    Before subsequent commands are processed,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT,    draw_indirect,    ,    ,    Draw/DispatchIndirect command fetch,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_VERTEX_INPUT_BIT,    vertex_input,    ,    ,    Vertex/index fetch,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_VERTEX_SHADER_BIT,    vertex_shader,    ,    ,    Vertex shading,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT,    tessellation_control_shader,    ,    ,    Tessellation control shading,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT,    tessellation_evaluation_shader,    ,    ,    Tessellation evaluation shading,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT,    geometry_shader,    ,    ,    Geometry shading,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,    fragment_shader,    ,    ,    Fragment shading,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT,    early_fragment_tests,    ,    ,    Early fragment (depth and stencil) tests,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT,    late_fragment_tests,    ,    ,    Late fragment (depth and stencil) tests,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,    color_attachment_output,    ,    ,    Color attachment writes,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,    compute_shader,    ,    ,    Compute shading,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_TRANSFER_BIT,    transfer,    ,    ,    Transfer/copy operations,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,    bottom_of_pipe,    ,    ,    After previous commands have completed,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_HOST_BIT,    host,    ,    ,    Indicates host (CPU) is a source/sink of the dependency,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT,    all_graphics,    ,    ,    All stages of the graphics pipeline,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,    all_commands,    ,    ,    All stages supported on the queue,    ,    ,    ,    ) \
X__(VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT,    transform_feedback_ext,    ,    ,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ) \
X__(VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT,    conditional_rendering_ext,    ,    ,    A pipeline stage for conditional rendering predicate fetch,    VK_EXT_conditional_rendering,    82,    vulkan,    ) \
X__(VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX,    command_process_nvx,    ,    ,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ) \
X__(VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV,    shading_rate_image_nv,    ,    ,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ) \
X__(VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV,    ray_tracing_shader_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV,    acceleration_structure_build_nv,    ,    ,    ,    VK_NV_ray_tracing,    166,    vulkan,    ) \
X__(VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV,    task_shader_nv,    ,    ,    ,    VK_NV_mesh_shader,    203,    vulkan,    ) \
X__(VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV,    mesh_shader_nv,    ,    ,    ,    VK_NV_mesh_shader,    203,    vulkan,    ) \
X__(VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT,    fragment_density_process_ext,    ,    ,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkPipelineShaderStageCreateFlagBits_members(X__) \
X__(VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT,    allow_varying_subgroup_size_ext,    ,    ,    ,    VK_EXT_subgroup_size_control,    226,    vulkan,    ) \
X__(VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT,    require_full_subgroups_ext,    ,    ,    ,    VK_EXT_subgroup_size_control,    226,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkShaderCorePropertiesFlagBitsAMD_members(X__) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkDependencyFlagBits_members(X__) \
X__(VK_DEPENDENCY_BY_REGION_BIT,    by_region,    ,    ,    Dependency is per pixel region ,    ,    ,    ,    ) \
X__(VK_DEPENDENCY_DEVICE_GROUP_BIT,    device_group,    ,    ,    Dependency is across devices,    ,    ,    ,    ) \
X__(VK_DEPENDENCY_VIEW_LOCAL_BIT,    view_local,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR,    view_local_khr,    ,    ,    ,    VK_KHR_multiview,    54,    vulkan,    VK_DEPENDENCY_VIEW_LOCAL_BIT) \
X__(VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR,    device_group_khr,    ,    ,    ,    VK_KHR_device_group,    61,    vulkan,    VK_DEPENDENCY_DEVICE_GROUP_BIT) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkGeometryInstanceFlagBitsNV_members(X__) \
X__(VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV,    triangle_cull_disable_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV,    triangle_front_counterclockwise_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV,    force_opaque_nv,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV,    force_no_opaque_nv,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkConditionalRenderingFlagBitsEXT_members(X__) \
X__(VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT,    inverted_ext,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkMemoryPropertyFlagBits_members(X__) \
X__(VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,    device_local,    ,    ,    If otherwise stated  then allocate memory on device,    ,    ,    ,    ) \
X__(VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT,    host_visible,    ,    ,    Memory is mappable by host,    ,    ,    ,    ) \
X__(VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,    host_coherent,    ,    ,    Memory will have i/o coherency. If not set  application may need to use vkFlushMappedMemoryRanges and vkInvalidateMappedMemoryRanges to flush/invalidate host cache,    ,    ,    ,    ) \
X__(VK_MEMORY_PROPERTY_HOST_CACHED_BIT,    host_cached,    ,    ,    Memory will be cached by the host,    ,    ,    ,    ) \
X__(VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT,    lazily_allocated,    ,    ,    Memory may be allocated by the driver when it is required,    ,    ,    ,    ) \
X__(VK_MEMORY_PROPERTY_PROTECTED_BIT,    protected,    ,    ,    Memory is protected,    ,    ,    ,    ) \
X__(VK_MEMORY_PROPERTY_DEVICE_COHERENT_BIT_AMD,    device_coherent_amd,    ,    ,    ,    VK_AMD_device_coherent_memory,    230,    vulkan,    ) \
X__(VK_MEMORY_PROPERTY_DEVICE_UNCACHED_BIT_AMD,    device_uncached_amd,    ,    ,    ,    VK_AMD_device_coherent_memory,    230,    vulkan,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkPipelineCreationFeedbackFlagBitsEXT_members(X__) \
X__(VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT,    valid_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT,    application_pipeline_cache_hit_ext,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT,    base_pipeline_acceleration_ext,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkCommandBufferUsageFlagBits_members(X__) \
X__(VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT,    one_time_submit,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT,    render_pass_continue,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT,    simultaneous_use,    ,    ,    Command buffer may be submitted/executed more than once simultaneously,    ,    ,    ,    ) \

/*name__, my_name__, value__, bitops__, comment__, extname__, extnumber__, supported__, alias__*/
# define Xt_VkObjectEntryUsageFlagBitsNVX_members(X__) \
X__(VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX,    graphics_nvx,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX,    compute_nvx,    ,    ,    ,    ,    ,    ,    ) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineDynamicStateCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineDynamicStateCreateFlags,    0,    ,    ,    false) \
X__(dynamicStateCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDynamicStates,    dynamicStateCount,    VkDynamicState,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceGroupSubmitInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(waitSemaphoreCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pWaitSemaphoreDeviceIndices,    waitSemaphoreCount,    uint32_t,    1,    ,    ,    false) \
X__(commandBufferCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pCommandBufferDeviceMasks,    commandBufferCount,    uint32_t,    1,    ,    ,    false) \
X__(signalSemaphoreCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pSignalSemaphoreDeviceIndices,    signalSemaphoreCount,    uint32_t,    1,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkWin32KeyedMutexAcquireReleaseInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(acquireCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pAcquireSyncs,    acquireCount,    VkDeviceMemory,    1,    ,    ,    false) \
X__(pAcquireKeys,    acquireCount,    uint64_t,    1,    ,    ,    false) \
X__(pAcquireTimeouts,    acquireCount,    uint32_t,    1,    ,    ,    false) \
X__(releaseCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pReleaseSyncs,    releaseCount,    VkDeviceMemory,    1,    ,    ,    false) \
X__(pReleaseKeys,    releaseCount,    uint64_t,    1,    ,    ,    false) \

# endif

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkWin32KeyedMutexAcquireReleaseInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(acquireCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pAcquireSyncs,    acquireCount,    VkDeviceMemory,    1,    ,    ,    false) \
X__(pAcquireKeys,    acquireCount,    uint64_t,    1,    ,    ,    false) \
X__(pAcquireTimeoutMilliseconds,    acquireCount,    uint32_t,    1,    ,    ,    false) \
X__(releaseCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pReleaseSyncs,    releaseCount,    VkDeviceMemory,    1,    ,    ,    false) \
X__(pReleaseKeys,    releaseCount,    uint64_t,    1,    ,    ,    false) \

# endif

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkD3D12FenceSubmitInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(waitSemaphoreValuesCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pWaitSemaphoreValues,    waitSemaphoreValuesCount,    uint64_t,    1,    ,    ,    false) \
X__(signalSemaphoreValuesCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pSignalSemaphoreValues,    signalSemaphoreValuesCount,    uint64_t,    1,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkProtectedSubmitInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(protectedSubmit,    ,    VkBool32,    0,    ,    Submit protected command buffers,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSubmitInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(waitSemaphoreCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pWaitSemaphores,    waitSemaphoreCount,    VkSemaphore,    1,    ,    ,    false) \
X__(pWaitDstStageMask,    waitSemaphoreCount,    VkPipelineStageFlags,    1,    ,    ,    false) \
X__(commandBufferCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pCommandBuffers,    commandBufferCount,    VkCommandBuffer,    1,    ,    ,    false) \
X__(signalSemaphoreCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pSignalSemaphores,    signalSemaphoreCount,    VkSemaphore,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImportSemaphoreFdInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(semaphore,    ,    VkSemaphore,    0,    ,    ,    false) \
X__(flags,    ,    VkSemaphoreImportFlags,    0,    ,    ,    false) \
X__(handleType,    ,    VkExternalSemaphoreHandleTypeFlagBits,    0,    ,    ,    false) \
X__(fd,    ,    int,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineRasterizationStateRasterizationOrderAMD_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(rasterizationOrder,    ,    VkRasterizationOrderAMD,    0,    ,    Rasterization order to use for the pipeline,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShaderCorePropertiesAMD_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    Pointer to next structure,    false) \
X__(shaderEngineCount,    ,    uint32_t,    0,    ,    number of shader engines,    false) \
X__(shaderArraysPerEngineCount,    ,    uint32_t,    0,    ,    number of shader arrays,    false) \
X__(computeUnitsPerShaderArray,    ,    uint32_t,    0,    ,    number of physical CUs per shader array,    false) \
X__(simdPerComputeUnit,    ,    uint32_t,    0,    ,    number of SIMDs per compute unit,    false) \
X__(wavefrontsPerSimd,    ,    uint32_t,    0,    ,    number of wavefront slots in each SIMD,    false) \
X__(wavefrontSize,    ,    uint32_t,    0,    ,    maximum number of threads per wavefront,    false) \
X__(sgprsPerSimd,    ,    uint32_t,    0,    ,    number of physical SGPRs per SIMD,    false) \
X__(minSgprAllocation,    ,    uint32_t,    0,    ,    minimum number of SGPRs that can be allocated by a wave,    false) \
X__(maxSgprAllocation,    ,    uint32_t,    0,    ,    number of available SGPRs,    false) \
X__(sgprAllocationGranularity,    ,    uint32_t,    0,    ,    SGPRs are allocated in groups of this size,    false) \
X__(vgprsPerSimd,    ,    uint32_t,    0,    ,    number of physical VGPRs per SIMD,    false) \
X__(minVgprAllocation,    ,    uint32_t,    0,    ,    minimum number of VGPRs that can be allocated by a wave,    false) \
X__(maxVgprAllocation,    ,    uint32_t,    0,    ,    number of available VGPRs,    false) \
X__(vgprAllocationGranularity,    ,    uint32_t,    0,    ,    VGPRs are allocated in groups of this size,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageSubresourceRange_members(X__) \
X__(aspectMask,    ,    VkImageAspectFlags,    0,    ,    ,    false) \
X__(baseMipLevel,    ,    uint32_t,    0,    ,    ,    false) \
X__(levelCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(baseArrayLayer,    ,    uint32_t,    0,    ,    ,    false) \
X__(layerCount,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineCreationFeedbackEXT_members(X__) \
X__(flags,    ,    VkPipelineCreationFeedbackFlagsEXT,    0,    ,    ,    false) \
X__(duration,    ,    uint64_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceGroupCommandBufferBeginInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(deviceMask,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceGroupBindSparseInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(resourceDeviceIndex,    ,    uint32_t,    0,    ,    ,    false) \
X__(memoryDeviceIndex,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPerformanceConfigurationAcquireInfoINTEL_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(type,    ,    VkPerformanceConfigurationTypeINTEL,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSubresourceLayout_members(X__) \
X__(offset,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(size,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(rowPitch,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(arrayPitch,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(depthPitch,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageDrmFormatModifierExplicitCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(drmFormatModifier,    ,    uint64_t,    0,    ,    ,    false) \
X__(drmFormatModifierPlaneCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pPlaneLayouts,    drmFormatModifierPlaneCount,    VkSubresourceLayout,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryPriorityAllocateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(priority,    ,    float,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDrmFormatModifierPropertiesEXT_members(X__) \
X__(drmFormatModifier,    ,    uint64_t,    0,    ,    ,    false) \
X__(drmFormatModifierPlaneCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(drmFormatModifierTilingFeatures,    ,    VkFormatFeatureFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExtent3D_members(X__) \
X__(width,    ,    uint32_t,    0,    ,    ,    false) \
X__(height,    ,    uint32_t,    0,    ,    ,    false) \
X__(depth,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageFormatListCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(viewFormatCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pViewFormats,    viewFormatCount,    VkFormat,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDedicatedAllocationImageCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(dedicatedAllocation,    ,    VkBool32,    0,    ,    Whether this image uses a dedicated allocation,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageSwapchainCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(swapchain,    ,    VkSwapchainKHR,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExternalMemoryImageCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleTypes,    ,    VkExternalMemoryHandleTypeFlags,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExternalFormatANDROID_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(externalFormat,    ,    uint64_t,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExternalMemoryImageCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleTypes,    ,    VkExternalMemoryHandleTypeFlagsNV,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageDrmFormatModifierListCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(drmFormatModifierCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDrmFormatModifiers,    drmFormatModifierCount,    uint64_t,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageStencilUsageCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(stencilUsage,    ,    VkImageUsageFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkImageCreateFlags,    0,    ,    Image creation flags,    false) \
X__(imageType,    ,    VkImageType,    0,    ,    ,    false) \
X__(format,    ,    VkFormat,    0,    ,    ,    false) \
X__(extent,    ,    VkExtent3D,    0,    ,    ,    false) \
X__(mipLevels,    ,    uint32_t,    0,    ,    ,    false) \
X__(arrayLayers,    ,    uint32_t,    0,    ,    ,    false) \
X__(samples,    ,    VkSampleCountFlagBits,    0,    ,    ,    false) \
X__(tiling,    ,    VkImageTiling,    0,    ,    ,    false) \
X__(usage,    ,    VkImageUsageFlags,    0,    ,    Image usage flags,    false) \
X__(sharingMode,    ,    VkSharingMode,    0,    ,    Cross-queue-family sharing mode,    false) \
X__(queueFamilyIndexCount,    ,    uint32_t,    0,    ,    Number of queue families to share across,    false) \
X__(pQueueFamilyIndices,    queueFamilyIndexCount,    uint32_t,    1,    ,    Array of queue family indices to share across,    true) \
X__(initialLayout,    ,    VkImageLayout,    0,    ,    Initial image layout for all subresources,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCommandBufferAllocateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(commandPool,    ,    VkCommandPool,    0,    ,    ,    false) \
X__(level,    ,    VkCommandBufferLevel,    0,    ,    ,    false) \
X__(commandBufferCount,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkViewportWScalingNV_members(X__) \
X__(xcoeff,    ,    float,    0,    ,    ,    false) \
X__(ycoeff,    ,    float,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineViewportWScalingStateCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(viewportWScalingEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(viewportCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pViewportWScalings,    viewportCount,    VkViewportWScalingNV,    1,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineColorBlendAttachmentState_members(X__) \
X__(blendEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(srcColorBlendFactor,    ,    VkBlendFactor,    0,    ,    ,    false) \
X__(dstColorBlendFactor,    ,    VkBlendFactor,    0,    ,    ,    false) \
X__(colorBlendOp,    ,    VkBlendOp,    0,    ,    ,    false) \
X__(srcAlphaBlendFactor,    ,    VkBlendFactor,    0,    ,    ,    false) \
X__(dstAlphaBlendFactor,    ,    VkBlendFactor,    0,    ,    ,    false) \
X__(alphaBlendOp,    ,    VkBlendOp,    0,    ,    ,    false) \
X__(colorWriteMask,    ,    VkColorComponentFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineColorBlendAdvancedStateCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(srcPremultiplied,    ,    VkBool32,    0,    ,    ,    false) \
X__(dstPremultiplied,    ,    VkBool32,    0,    ,    ,    false) \
X__(blendOverlap,    ,    VkBlendOverlapEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineColorBlendStateCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineColorBlendStateCreateFlags,    0,    ,    ,    false) \
X__(logicOpEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(logicOp,    ,    VkLogicOp,    0,    ,    ,    true) \
X__(attachmentCount,    ,    uint32_t,    0,    ,    Hashtag of pAttachments,    false) \
X__(pAttachments,    attachmentCount,    VkPipelineColorBlendAttachmentState,    1,    ,    ,    false) \
X__(blendConstants,    ,    float,    0,    4,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkViewportSwizzleNV_members(X__) \
X__(x,    ,    VkViewportCoordinateSwizzleNV,    0,    ,    ,    false) \
X__(y,    ,    VkViewportCoordinateSwizzleNV,    0,    ,    ,    false) \
X__(z,    ,    VkViewportCoordinateSwizzleNV,    0,    ,    ,    false) \
X__(w,    ,    VkViewportCoordinateSwizzleNV,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageSparseMemoryRequirementsInfo2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(image,    ,    VkImage,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceGroupDeviceCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(physicalDeviceCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pPhysicalDevices,    physicalDeviceCount,    VkPhysicalDevice,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkValidationFlagsEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    Must be VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(disabledValidationCheckCount,    ,    uint32_t,    0,    ,    Number of validation checks to disable,    false) \
X__(pDisabledValidationChecks,    disabledValidationCheckCount,    VkValidationCheckEXT,    1,    ,    Validation checks to disable,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkViewport_members(X__) \
X__(x,    ,    float,    0,    ,    ,    true) \
X__(y,    ,    float,    0,    ,    ,    true) \
X__(width,    ,    float,    0,    ,    ,    true) \
X__(height,    ,    float,    0,    ,    ,    true) \
X__(minDepth,    ,    float,    0,    ,    ,    false) \
X__(maxDepth,    ,    float,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkOffset2D_members(X__) \
X__(x,    ,    int32_t,    0,    ,    ,    false) \
X__(y,    ,    int32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExtent2D_members(X__) \
X__(width,    ,    uint32_t,    0,    ,    ,    false) \
X__(height,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRect2D_members(X__) \
X__(offset,    ,    VkOffset2D,    0,    ,    ,    false) \
X__(extent,    ,    VkExtent2D,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineViewportSwizzleStateCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineViewportSwizzleStateCreateFlagsNV,    0,    ,    ,    false) \
X__(viewportCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pViewportSwizzles,    viewportCount,    VkViewportSwizzleNV,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineViewportExclusiveScissorStateCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(exclusiveScissorCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pExclusiveScissors,    exclusiveScissorCount,    VkRect2D,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkShadingRatePaletteNV_members(X__) \
X__(shadingRatePaletteEntryCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pShadingRatePaletteEntries,    shadingRatePaletteEntryCount,    VkShadingRatePaletteEntryNV,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineViewportShadingRateImageStateCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(shadingRateImageEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(viewportCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pShadingRatePalettes,    viewportCount,    VkShadingRatePaletteNV,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCoarseSampleLocationNV_members(X__) \
X__(pixelX,    ,    uint32_t,    0,    ,    ,    false) \
X__(pixelY,    ,    uint32_t,    0,    ,    ,    false) \
X__(sample,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCoarseSampleOrderCustomNV_members(X__) \
X__(shadingRate,    ,    VkShadingRatePaletteEntryNV,    0,    ,    ,    false) \
X__(sampleCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(sampleLocationCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pSampleLocations,    sampleLocationCount,    VkCoarseSampleLocationNV,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(sampleOrderType,    ,    VkCoarseSampleOrderTypeNV,    0,    ,    ,    false) \
X__(customSampleOrderCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pCustomSampleOrders,    customSampleOrderCount,    VkCoarseSampleOrderCustomNV,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineViewportStateCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineViewportStateCreateFlags,    0,    ,    ,    false) \
X__(viewportCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pViewports,    viewportCount,    VkViewport,    1,    ,    ,    true) \
X__(scissorCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pScissors,    scissorCount,    VkRect2D,    1,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineDiscardRectangleStateCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineDiscardRectangleStateCreateFlagsEXT,    0,    ,    ,    false) \
X__(discardRectangleMode,    ,    VkDiscardRectangleModeEXT,    0,    ,    ,    false) \
X__(discardRectangleCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDiscardRectangles,    discardRectangleCount,    VkRect2D,    1,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkGeometryTrianglesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(vertexData,    ,    VkBuffer,    0,    ,    ,    false) \
X__(vertexOffset,    ,    VkDeviceSize,    0,    ,    ,    false) \
X__(vertexCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(vertexStride,    ,    VkDeviceSize,    0,    ,    ,    false) \
X__(vertexFormat,    ,    VkFormat,    0,    ,    ,    false) \
X__(indexData,    ,    VkBuffer,    0,    ,    ,    false) \
X__(indexOffset,    ,    VkDeviceSize,    0,    ,    ,    false) \
X__(indexCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(indexType,    ,    VkIndexType,    0,    ,    ,    false) \
X__(transformData,    ,    VkBuffer,    0,    ,    Optional reference to array of floats representing a 3x4 row major affine transformation matrix.,    false) \
X__(transformOffset,    ,    VkDeviceSize,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkGeometryAABBNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(aabbData,    ,    VkBuffer,    0,    ,    ,    false) \
X__(numAABBs,    ,    uint32_t,    0,    ,    ,    false) \
X__(stride,    ,    uint32_t,    0,    ,    Stride in bytes between AABBs,    false) \
X__(offset,    ,    VkDeviceSize,    0,    ,    Offset in bytes of the first AABB in aabbData,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkGeometryDataNV_members(X__) \
X__(triangles,    ,    VkGeometryTrianglesNV,    0,    ,    ,    false) \
X__(aabbs,    ,    VkGeometryAABBNV,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkGeometryNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(geometryType,    ,    VkGeometryTypeNV,    0,    ,    ,    false) \
X__(geometry,    ,    VkGeometryDataNV,    0,    ,    ,    false) \
X__(flags,    ,    VkGeometryFlagsNV,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAccelerationStructureInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(type,    ,    VkAccelerationStructureTypeNV,    0,    ,    ,    false) \
X__(flags,    ,    VkBuildAccelerationStructureFlagsNV,    0,    ,    ,    false) \
X__(instanceCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(geometryCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pGeometries,    geometryCount,    VkGeometryNV,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceCooperativeMatrixFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(cooperativeMatrix,    ,    VkBool32,    0,    ,    ,    false) \
X__(cooperativeMatrixRobustBufferAccess,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDedicatedAllocationMemoryAllocateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(image,    ,    VkImage,    0,    ,    Image that this allocation will be bound to,    false) \
X__(buffer,    ,    VkBuffer,    0,    ,    Buffer that this allocation will be bound to,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDevicePCIBusInfoPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pciDomain,    ,    uint32_t,    0,    ,    ,    false) \
X__(pciBus,    ,    uint32_t,    0,    ,    ,    false) \
X__(pciDevice,    ,    uint32_t,    0,    ,    ,    false) \
X__(pciFunction,    ,    uint32_t,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImportAndroidHardwareBufferInfoANDROID_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(buffer,    ,    AHardwareBuffer,    1,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineTessellationDomainOriginStateCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(domainOrigin,    ,    VkTessellationDomainOrigin,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineTessellationStateCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineTessellationStateCreateFlags,    0,    ,    ,    false) \
X__(patchControlPoints,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayPlaneCapabilitiesKHR_members(X__) \
X__(supportedAlpha,    ,    VkDisplayPlaneAlphaFlagsKHR,    0,    ,    Types of alpha blending supported  if any.,    false) \
X__(minSrcPosition,    ,    VkOffset2D,    0,    ,    Does the plane have any position and extent restrictions?,    false) \
X__(maxSrcPosition,    ,    VkOffset2D,    0,    ,    ,    false) \
X__(minSrcExtent,    ,    VkExtent2D,    0,    ,    ,    false) \
X__(maxSrcExtent,    ,    VkExtent2D,    0,    ,    ,    false) \
X__(minDstPosition,    ,    VkOffset2D,    0,    ,    ,    false) \
X__(maxDstPosition,    ,    VkOffset2D,    0,    ,    ,    false) \
X__(minDstExtent,    ,    VkExtent2D,    0,    ,    ,    false) \
X__(maxDstExtent,    ,    VkExtent2D,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSurfaceCapabilitiesKHR_members(X__) \
X__(minImageCount,    ,    uint32_t,    0,    ,    Supported minimum number of images for the surface,    false) \
X__(maxImageCount,    ,    uint32_t,    0,    ,    Supported maximum number of images for the surface  0 for unlimited,    false) \
X__(currentExtent,    ,    VkExtent2D,    0,    ,    Current image width and height for the surface  (0  0) if undefined,    false) \
X__(minImageExtent,    ,    VkExtent2D,    0,    ,    Supported minimum image width and height for the surface,    false) \
X__(maxImageExtent,    ,    VkExtent2D,    0,    ,    Supported maximum image width and height for the surface,    false) \
X__(maxImageArrayLayers,    ,    uint32_t,    0,    ,    Supported maximum number of image layers for the surface,    false) \
X__(supportedTransforms,    ,    VkSurfaceTransformFlagsKHR,    0,    ,    1 or more bits representing the transforms supported,    false) \
X__(currentTransform,    ,    VkSurfaceTransformFlagBitsKHR,    0,    ,    The surface`s current transform relative to the device`s natural orientation,    false) \
X__(supportedCompositeAlpha,    ,    VkCompositeAlphaFlagsKHR,    0,    ,    1 or more bits representing the alpha compositing modes supported,    false) \
X__(supportedUsageFlags,    ,    VkImageUsageFlags,    0,    ,    Supported image usage flags for the surface,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceRayTracingPropertiesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(shaderGroupHandleSize,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxRecursionDepth,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxShaderGroupStride,    ,    uint32_t,    0,    ,    ,    false) \
X__(shaderGroupBaseAlignment,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxGeometryCount,    ,    uint64_t,    0,    ,    ,    false) \
X__(maxInstanceCount,    ,    uint64_t,    0,    ,    ,    false) \
X__(maxTriangleCount,    ,    uint64_t,    0,    ,    ,    false) \
X__(maxDescriptorSetAccelerationStructures,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAttachmentReference2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(attachment,    ,    uint32_t,    0,    ,    ,    false) \
X__(layout,    ,    VkImageLayout,    0,    ,    ,    false) \
X__(aspectMask,    ,    VkImageAspectFlags,    0,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSubpassDescriptionDepthStencilResolveKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(depthResolveMode,    ,    VkResolveModeFlagBitsKHR,    0,    ,    depth resolve mode,    false) \
X__(stencilResolveMode,    ,    VkResolveModeFlagBitsKHR,    0,    ,    stencil resolve mode,    false) \
X__(pDepthStencilResolveAttachment,    ,    VkAttachmentReference2KHR,    1,    ,    depth/stencil resolve attachment,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(advancedBlendCoherentOperations,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSubpassDescription2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(flags,    ,    VkSubpassDescriptionFlags,    0,    ,    ,    false) \
X__(pipelineBindPoint,    ,    VkPipelineBindPoint,    0,    ,    ,    false) \
X__(viewMask,    ,    uint32_t,    0,    ,    ,    false) \
X__(inputAttachmentCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pInputAttachments,    inputAttachmentCount,    VkAttachmentReference2KHR,    1,    ,    ,    false) \
X__(colorAttachmentCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pColorAttachments,    colorAttachmentCount,    VkAttachmentReference2KHR,    1,    ,    ,    false) \
X__(pResolveAttachments,    colorAttachmentCount,    VkAttachmentReference2KHR,    1,    ,    ,    false) \
X__(pDepthStencilAttachment,    ,    VkAttachmentReference2KHR,    1,    ,    ,    false) \
X__(preserveAttachmentCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pPreserveAttachments,    preserveAttachmentCount,    uint32_t,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBindBufferMemoryDeviceGroupInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(deviceIndexCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDeviceIndices,    deviceIndexCount,    uint32_t,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryHeap_members(X__) \
X__(size,    ,    VkDeviceSize,    0,    ,    Available memory in the heap,    false) \
X__(flags,    ,    VkMemoryHeapFlags,    0,    ,    Flags for the heap,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkVertexInputBindingDescription_members(X__) \
X__(binding,    ,    uint32_t,    0,    ,    Vertex buffer binding id,    false) \
X__(stride,    ,    uint32_t,    0,    ,    Distance between vertices in bytes (0 = no advancement),    false) \
X__(inputRate,    ,    VkVertexInputRate,    0,    ,    The rate at which the vertex data is consumed,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImportMemoryWin32HandleInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleType,    ,    VkExternalMemoryHandleTypeFlagBits,    0,    ,    ,    false) \
X__(handle,    ,    HANDLE,    0,    ,    ,    false) \
X__(name,    ,    LPCWSTR,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceSubgroupProperties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(subgroupSize,    ,    uint32_t,    0,    ,    The size of a subgroup for this queue.,    true) \
X__(supportedStages,    ,    VkShaderStageFlags,    0,    ,    Bitfield of what shader stages support subgroup operations,    true) \
X__(supportedOperations,    ,    VkSubgroupFeatureFlags,    0,    ,    Bitfield of what subgroup operations are supported.,    true) \
X__(quadOperationsInAllStages,    ,    VkBool32,    0,    ,    Flag to specify whether quad operations are available in all stages.,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceExternalFenceInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleType,    ,    VkExternalFenceHandleTypeFlagBits,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(shaderIntegerFunctions2,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBindImageMemorySwapchainInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(swapchain,    ,    VkSwapchainKHR,    0,    ,    ,    false) \
X__(imageIndex,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBindImagePlaneMemoryInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(planeAspect,    ,    VkImageAspectFlagBits,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBindImageMemoryDeviceGroupInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(deviceIndexCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDeviceIndices,    deviceIndexCount,    uint32_t,    1,    ,    ,    false) \
X__(splitInstanceBindRegionCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pSplitInstanceBindRegions,    splitInstanceBindRegionCount,    VkRect2D,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBindImageMemoryInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(image,    ,    VkImage,    0,    ,    ,    false) \
X__(memory,    ,    VkDeviceMemory,    0,    ,    ,    true) \
X__(memoryOffset,    ,    VkDeviceSize,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayEventInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(displayEvent,    ,    VkDisplayEventTypeEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCommandBufferInheritanceConditionalRenderingInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(conditionalRenderingEnable,    ,    VkBool32,    0,    ,    Whether this secondary command buffer may be executed during an active conditional rendering,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCommandBufferInheritanceInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(renderPass,    ,    VkRenderPass,    0,    ,    Render pass for secondary command buffers,    true) \
X__(subpass,    ,    uint32_t,    0,    ,    ,    false) \
X__(framebuffer,    ,    VkFramebuffer,    0,    ,    Framebuffer for secondary command buffers,    true) \
X__(occlusionQueryEnable,    ,    VkBool32,    0,    ,    Whether this secondary command buffer may be executed during an occlusion query,    false) \
X__(queryFlags,    ,    VkQueryControlFlags,    0,    ,    Query flags used by this secondary command buffer  if executed during an occlusion query,    true) \
X__(pipelineStatistics,    ,    VkQueryPipelineStatisticFlags,    0,    ,    Pipeline statistics that may be counted for this secondary command buffer,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCommandBufferBeginInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkCommandBufferUsageFlags,    0,    ,    Command buffer usage flags,    false) \
X__(pInheritanceInfo,    ,    VkCommandBufferInheritanceInfo,    1,    ,    Pointer to inheritance info for secondary command buffers,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSharedPresentSurfaceCapabilitiesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(sharedPresentSupportedUsageFlags,    ,    VkImageUsageFlags,    0,    ,    Supported image usage flags if swapchain created using a shared present mode,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDispatchIndirectCommand_members(X__) \
X__(x,    ,    uint32_t,    0,    ,    ,    true) \
X__(y,    ,    uint32_t,    0,    ,    ,    true) \
X__(z,    ,    uint32_t,    0,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkObjectTablePushConstantEntryNVX_members(X__) \
X__(type,    ,    VkObjectEntryTypeNVX,    0,    ,    ,    false) \
X__(flags,    ,    VkObjectEntryUsageFlagsNVX,    0,    ,    ,    false) \
X__(pipelineLayout,    ,    VkPipelineLayout,    0,    ,    ,    false) \
X__(stageFlags,    ,    VkShaderStageFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(filterMinmaxSingleComponentFormats,    ,    VkBool32,    0,    ,    ,    false) \
X__(filterMinmaxImageComponentMapping,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceGroupPresentInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(swapchainCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDeviceMasks,    swapchainCount,    uint32_t,    1,    ,    ,    false) \
X__(mode,    ,    VkDeviceGroupPresentModeFlagBitsKHR,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPresentTimeGOOGLE_members(X__) \
X__(presentID,    ,    uint32_t,    0,    ,    Application-provided identifier,    false) \
X__(desiredPresentTime,    ,    uint64_t,    0,    ,    Earliest time an image should be presented,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPresentTimesInfoGOOGLE_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(swapchainCount,    ,    uint32_t,    0,    ,    Copy of VkPresentInfoKHR::swapchainCount,    false) \
X__(pTimes,    swapchainCount,    VkPresentTimeGOOGLE,    1,    ,    The earliest times to present images,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayPresentInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(srcRect,    ,    VkRect2D,    0,    ,    Rectangle within the presentable image to read pixel data from when presenting to the display.,    false) \
X__(dstRect,    ,    VkRect2D,    0,    ,    Rectangle within the current display mode`s visible region to display srcRectangle in.,    false) \
X__(persistent,    ,    VkBool32,    0,    ,    For smart displays  use buffered mode.  If the display properties member ``persistentMode`` is VK_FALSE  this member must always be VK_FALSE.,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRectLayerKHR_members(X__) \
X__(offset,    ,    VkOffset2D,    0,    ,    upper-left corner of a rectangle that has not changed  in pixels of a presentation images,    false) \
X__(extent,    ,    VkExtent2D,    0,    ,    Dimensions of a rectangle that has not changed  in pixels of a presentation images,    true) \
X__(layer,    ,    uint32_t,    0,    ,    Layer of a swapchain`s image(s)  for stereoscopic-3D images,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPresentRegionKHR_members(X__) \
X__(rectangleCount,    ,    uint32_t,    0,    ,    Number of rectangles in pRectangles,    false) \
X__(pRectangles,    rectangleCount,    VkRectLayerKHR,    1,    ,    Array of rectangles that have changed in a swapchain`s image(s),    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPresentRegionsKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(swapchainCount,    ,    uint32_t,    0,    ,    Copy of VkPresentInfoKHR::swapchainCount,    false) \
X__(pRegions,    swapchainCount,    VkPresentRegionKHR,    1,    ,    The regions that have changed,    false) \

# if defined(VK_USE_PLATFORM_GGP)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPresentFrameTokenGGP_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(frameToken,    ,    GgpFrameToken,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPresentInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(waitSemaphoreCount,    ,    uint32_t,    0,    ,    Number of semaphores to wait for before presenting,    false) \
X__(pWaitSemaphores,    waitSemaphoreCount,    VkSemaphore,    1,    ,    Semaphores to wait for before presenting,    false) \
X__(swapchainCount,    ,    uint32_t,    0,    ,    Number of swapchains to present in this call,    false) \
X__(pSwapchains,    swapchainCount,    VkSwapchainKHR,    1,    ,    Swapchains to present an image from,    false) \
X__(pImageIndices,    swapchainCount,    uint32_t,    1,    ,    Indices of which presentable images to present,    false) \
X__(pResults,    swapchainCount,    VkResult,    1,    ,    Optional (i.e. if non-NULL) VkResult for each swapchain,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkConformanceVersionKHR_members(X__) \
X__(major,    ,    uint8_t,    0,    ,    ,    false) \
X__(minor,    ,    uint8_t,    0,    ,    ,    false) \
X__(subminor,    ,    uint8_t,    0,    ,    ,    false) \
X__(patch,    ,    uint8_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceDriverPropertiesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(driverID,    ,    VkDriverIdKHR,    0,    ,    ,    false) \
X__(driverName,    ,    char,    0,    VK_MAX_DRIVER_NAME_SIZE_KHR,    ,    false) \
X__(driverInfo,    ,    char,    0,    VK_MAX_DRIVER_INFO_SIZE_KHR,    ,    false) \
X__(conformanceVersion,    ,    VkConformanceVersionKHR,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceCooperativeMatrixPropertiesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(cooperativeMatrixSupportedStages,    ,    VkShaderStageFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSparseImageFormatProperties_members(X__) \
X__(aspectMask,    ,    VkImageAspectFlags,    0,    ,    ,    false) \
X__(imageGranularity,    ,    VkExtent3D,    0,    ,    ,    false) \
X__(flags,    ,    VkSparseImageFormatFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExtensionProperties_members(X__) \
X__(extensionName,    ,    char,    0,    VK_MAX_EXTENSION_NAME_SIZE,    extension name,    false) \
X__(specVersion,    ,    uint32_t,    0,    ,    version of the extension specification implemented,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBufferDeviceAddressCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(deviceAddress,    ,    VkDeviceAddress,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkOffset3D_members(X__) \
X__(x,    ,    int32_t,    0,    ,    ,    false) \
X__(y,    ,    int32_t,    0,    ,    ,    false) \
X__(z,    ,    int32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAccelerationStructureMemoryRequirementsInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(type,    ,    VkAccelerationStructureMemoryRequirementsTypeNV,    0,    ,    ,    false) \
X__(accelerationStructure,    ,    VkAccelerationStructureNV,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceGeneratedCommandsLimitsNVX_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxIndirectCommandsLayoutTokenCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxObjectEntryCounts,    ,    uint32_t,    0,    ,    ,    false) \
X__(minSequenceCountBufferOffsetAlignment,    ,    uint32_t,    0,    ,    ,    false) \
X__(minSequenceIndexBufferOffsetAlignment,    ,    uint32_t,    0,    ,    ,    false) \
X__(minCommandsTokenBufferOffsetAlignment,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryRequirements_members(X__) \
X__(size,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(alignment,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(memoryTypeBits,    ,    uint32_t,    0,    ,    Bitmask of the allowed memory type indices into memoryTypes[] for this object,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryDedicatedRequirements_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(prefersDedicatedAllocation,    ,    VkBool32,    0,    ,    ,    false) \
X__(requiresDedicatedAllocation,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryRequirements2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(memoryRequirements,    ,    VkMemoryRequirements,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSwapchainCounterCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(surfaceCounters,    ,    VkSurfaceCounterFlagsEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageViewHandleInfoNVX_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(imageView,    ,    VkImageView,    0,    ,    ,    false) \
X__(descriptorType,    ,    VkDescriptorType,    0,    ,    ,    false) \
X__(sampler,    ,    VkSampler,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryGetFdInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(memory,    ,    VkDeviceMemory,    0,    ,    ,    false) \
X__(handleType,    ,    VkExternalMemoryHandleTypeFlagBits,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSpecializationMapEntry_members(X__) \
X__(constantID,    ,    uint32_t,    0,    ,    The SpecConstant ID specified in the BIL,    false) \
X__(offset,    ,    uint32_t,    0,    ,    Offset of the value in the data block,    false) \
X__(size,    ,    size_t,    0,    ,    Size in bytes of the SpecConstant,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSpecializationInfo_members(X__) \
X__(mapEntryCount,    ,    uint32_t,    0,    ,    Number of entries in the map,    false) \
X__(pMapEntries,    mapEntryCount,    VkSpecializationMapEntry,    1,    ,    Array of map entries,    false) \
X__(dataSize,    ,    size_t,    0,    ,    Size in bytes of pData,    false) \
X__(pData,    dataSize,    void,    1,    ,    Pointer to SpecConstant data,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(requiredSubgroupSize,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineShaderStageCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineShaderStageCreateFlags,    0,    ,    ,    false) \
X__(stage,    ,    VkShaderStageFlagBits,    0,    ,    Shader stage,    false) \
X__(module,    ,    VkShaderModule,    0,    ,    Module containing entry point,    false) \
X__(pName,    null-terminated,    char,    1,    ,    Null-terminated entry point name,    false) \
X__(pSpecializationInfo,    ,    VkSpecializationInfo,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRayTracingShaderGroupCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(type,    ,    VkRayTracingShaderGroupTypeNV,    0,    ,    ,    false) \
X__(generalShader,    ,    uint32_t,    0,    ,    ,    false) \
X__(closestHitShader,    ,    uint32_t,    0,    ,    ,    false) \
X__(anyHitShader,    ,    uint32_t,    0,    ,    ,    false) \
X__(intersectionShader,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineCreationFeedbackCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pPipelineCreationFeedback,    ,    VkPipelineCreationFeedbackEXT,    1,    ,    Output pipeline creation feedback.,    false) \
X__(pipelineStageCreationFeedbackCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pPipelineStageCreationFeedbacks,    pipelineStageCreationFeedbackCount,    VkPipelineCreationFeedbackEXT,    1,    ,    One entry for each shader stage specified in the parent Vk*PipelineCreateInfo struct,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRayTracingPipelineCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineCreateFlags,    0,    ,    Pipeline creation flags,    false) \
X__(stageCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pStages,    stageCount,    VkPipelineShaderStageCreateInfo,    1,    ,    One entry for each active shader stage,    false) \
X__(groupCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pGroups,    groupCount,    VkRayTracingShaderGroupCreateInfoNV,    1,    ,    ,    false) \
X__(maxRecursionDepth,    ,    uint32_t,    0,    ,    ,    false) \
X__(layout,    ,    VkPipelineLayout,    0,    ,    Interface layout of the pipeline,    false) \
X__(basePipelineHandle,    ,    VkPipeline,    0,    ,    If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is nonzero  it specifies the handle of the base pipeline this is a derivative of,    true) \
X__(basePipelineIndex,    ,    int32_t,    0,    ,    If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is not -1  it specifies an index into pCreateInfos of the base pipeline this is a derivative of,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDrawIndirectCommand_members(X__) \
X__(vertexCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(instanceCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(firstVertex,    ,    uint32_t,    0,    ,    ,    false) \
X__(firstInstance,    ,    uint32_t,    0,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(advancedBlendMaxColorAttachments,    ,    uint32_t,    0,    ,    ,    false) \
X__(advancedBlendIndependentBlend,    ,    VkBool32,    0,    ,    ,    false) \
X__(advancedBlendNonPremultipliedSrcColor,    ,    VkBool32,    0,    ,    ,    false) \
X__(advancedBlendNonPremultipliedDstColor,    ,    VkBool32,    0,    ,    ,    false) \
X__(advancedBlendCorrelatedOverlap,    ,    VkBool32,    0,    ,    ,    false) \
X__(advancedBlendAllOperations,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceQueueInfo2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkDeviceQueueCreateFlags,    0,    ,    ,    false) \
X__(queueFamilyIndex,    ,    uint32_t,    0,    ,    ,    false) \
X__(queueIndex,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkFilterCubicImageViewImageFormatPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(filterCubic,    ,    VkBool32,    0,    ,    ,    false) \
X__(filterCubicMinmax,    ,    VkBool32,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSemaphoreGetWin32HandleInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(semaphore,    ,    VkSemaphore,    0,    ,    ,    false) \
X__(handleType,    ,    VkExternalSemaphoreHandleTypeFlagBits,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkVertexInputBindingDivisorDescriptionEXT_members(X__) \
X__(binding,    ,    uint32_t,    0,    ,    ,    false) \
X__(divisor,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineVertexInputDivisorStateCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(vertexBindingDivisorCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pVertexBindingDivisors,    vertexBindingDivisorCount,    VkVertexInputBindingDivisorDescriptionEXT,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPerformanceValueINTEL_members(X__) \
X__(type,    ,    VkPerformanceValueTypeINTEL,    0,    ,    ,    false) \
X__(data,    ,    VkPerformanceValueDataINTEL,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkComponentMapping_members(X__) \
X__(r,    ,    VkComponentSwizzle,    0,    ,    ,    false) \
X__(g,    ,    VkComponentSwizzle,    0,    ,    ,    false) \
X__(b,    ,    VkComponentSwizzle,    0,    ,    ,    false) \
X__(a,    ,    VkComponentSwizzle,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDebugUtilsObjectNameInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(objectType,    ,    VkObjectType,    0,    ,    ,    false) \
X__(objectHandle,    ,    uint64_t,    0,    ,    ,    false) \
X__(pObjectName,    null-terminated,    char,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceSampleLocationsPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(sampleLocationSampleCounts,    ,    VkSampleCountFlags,    0,    ,    ,    false) \
X__(maxSampleLocationGridSize,    ,    VkExtent2D,    0,    ,    ,    false) \
X__(sampleLocationCoordinateRange,    ,    float,    0,    2,    ,    false) \
X__(sampleLocationSubPixelBits,    ,    uint32_t,    0,    ,    ,    false) \
X__(variableSampleLocations,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryType_members(X__) \
X__(propertyFlags,    ,    VkMemoryPropertyFlags,    0,    ,    Memory properties of this memory type,    false) \
X__(heapIndex,    ,    uint32_t,    0,    ,    Index of the memory heap allocations of this memory type are taken from,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceMemoryProperties_members(X__) \
X__(memoryTypeCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(memoryTypes,    ,    VkMemoryType,    0,    VK_MAX_MEMORY_TYPES,    ,    false) \
X__(memoryHeapCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(memoryHeaps,    ,    VkMemoryHeap,    0,    VK_MAX_MEMORY_HEAPS,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceMemoryBudgetPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(heapBudget,    ,    VkDeviceSize,    0,    VK_MAX_MEMORY_HEAPS,    ,    false) \
X__(heapUsage,    ,    VkDeviceSize,    0,    VK_MAX_MEMORY_HEAPS,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceMemoryProperties2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(memoryProperties,    ,    VkPhysicalDeviceMemoryProperties,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(representativeFragmentTest,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageFormatProperties_members(X__) \
X__(maxExtent,    ,    VkExtent3D,    0,    ,    max image dimensions for this resource type,    false) \
X__(maxMipLevels,    ,    uint32_t,    0,    ,    max number of mipmap levels for this resource type,    false) \
X__(maxArrayLayers,    ,    uint32_t,    0,    ,    max array size for this resource type,    false) \
X__(sampleCounts,    ,    VkSampleCountFlags,    0,    ,    supported sample counts for this resource type,    false) \
X__(maxResourceSize,    ,    VkDeviceSize,    0,    ,    max size (in bytes) of this resource type,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageSubresourceLayers_members(X__) \
X__(aspectMask,    ,    VkImageAspectFlags,    0,    ,    ,    false) \
X__(mipLevel,    ,    uint32_t,    0,    ,    ,    false) \
X__(baseArrayLayer,    ,    uint32_t,    0,    ,    ,    false) \
X__(layerCount,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBufferImageCopy_members(X__) \
X__(bufferOffset,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(bufferRowLength,    ,    uint32_t,    0,    ,    Specified in texels,    false) \
X__(bufferImageHeight,    ,    uint32_t,    0,    ,    ,    false) \
X__(imageSubresource,    ,    VkImageSubresourceLayers,    0,    ,    ,    false) \
X__(imageOffset,    ,    VkOffset3D,    0,    ,    Specified in pixels for both compressed and uncompressed images,    false) \
X__(imageExtent,    ,    VkExtent3D,    0,    ,    Specified in pixels for both compressed and uncompressed images,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkLayerProperties_members(X__) \
X__(layerName,    ,    char,    0,    VK_MAX_EXTENSION_NAME_SIZE,    layer name,    false) \
X__(specVersion,    ,    uint32_t,    0,    ,    version of the layer specification implemented,    false) \
X__(implementationVersion,    ,    uint32_t,    0,    ,    build or release version of the layer`s library,    false) \
X__(description,    ,    char,    0,    VK_MAX_DESCRIPTION_SIZE,    Free-form description of the layer,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(shaderBufferInt64Atomics,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderSharedInt64Atomics,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(minSubgroupSize,    ,    uint32_t,    0,    ,    The minimum subgroup size supported by this device,    true) \
X__(maxSubgroupSize,    ,    uint32_t,    0,    ,    The maximum subgroup size supported by this device,    true) \
X__(maxComputeWorkgroupSubgroups,    ,    uint32_t,    0,    ,    The maximum number of subgroups supported in a workgroup,    true) \
X__(requiredSubgroupSizeStages,    ,    VkShaderStageFlags,    0,    ,    The shader stages that support specifying a subgroup size,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayNativeHdrSurfaceCapabilitiesAMD_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(localDimmingSupport,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkShaderResourceUsageAMD_members(X__) \
X__(numUsedVgprs,    ,    uint32_t,    0,    ,    ,    false) \
X__(numUsedSgprs,    ,    uint32_t,    0,    ,    ,    false) \
X__(ldsSizePerLocalWorkGroup,    ,    uint32_t,    0,    ,    ,    false) \
X__(ldsUsageSizeInBytes,    ,    size_t,    0,    ,    ,    false) \
X__(scratchMemUsageInBytes,    ,    size_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAttachmentDescription_members(X__) \
X__(flags,    ,    VkAttachmentDescriptionFlags,    0,    ,    ,    false) \
X__(format,    ,    VkFormat,    0,    ,    ,    false) \
X__(samples,    ,    VkSampleCountFlagBits,    0,    ,    ,    false) \
X__(loadOp,    ,    VkAttachmentLoadOp,    0,    ,    Load operation for color or depth data,    false) \
X__(storeOp,    ,    VkAttachmentStoreOp,    0,    ,    Store operation for color or depth data,    false) \
X__(stencilLoadOp,    ,    VkAttachmentLoadOp,    0,    ,    Load operation for stencil data,    false) \
X__(stencilStoreOp,    ,    VkAttachmentStoreOp,    0,    ,    Store operation for stencil data,    false) \
X__(initialLayout,    ,    VkImageLayout,    0,    ,    ,    false) \
X__(finalLayout,    ,    VkImageLayout,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorPoolSize_members(X__) \
X__(type,    ,    VkDescriptorType,    0,    ,    ,    false) \
X__(descriptorCount,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorPoolInlineUniformBlockCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxInlineUniformBlockBindings,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorPoolCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkDescriptorPoolCreateFlags,    0,    ,    ,    false) \
X__(maxSets,    ,    uint32_t,    0,    ,    ,    false) \
X__(poolSizeCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pPoolSizes,    poolSizeCount,    VkDescriptorPoolSize,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExternalMemoryBufferCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleTypes,    ,    VkExternalMemoryHandleTypeFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSubpassEndInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineExecutableStatisticKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(name,    ,    char,    0,    VK_MAX_DESCRIPTION_SIZE,    ,    false) \
X__(description,    ,    char,    0,    VK_MAX_DESCRIPTION_SIZE,    ,    false) \
X__(format,    ,    VkPipelineExecutableStatisticFormatKHR,    0,    ,    ,    false) \
X__(value,    ,    VkPipelineExecutableStatisticValueKHR,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkEventCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkEventCreateFlags,    0,    ,    Event creation flags,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(subgroupSizeControl,    ,    VkBool32,    0,    ,    ,    false) \
X__(computeFullSubgroups,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDebugMarkerMarkerInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pMarkerName,    null-terminated,    char,    1,    ,    Name of the debug marker,    false) \
X__(color,    ,    float,    0,    4,    Optional color for debug marker,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBufferMemoryBarrier_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(srcAccessMask,    ,    VkAccessFlags,    0,    ,    Memory accesses from the source of the dependency to synchronize,    false) \
X__(dstAccessMask,    ,    VkAccessFlags,    0,    ,    Memory accesses from the destination of the dependency to synchronize,    false) \
X__(srcQueueFamilyIndex,    ,    uint32_t,    0,    ,    Queue family to transition ownership from,    false) \
X__(dstQueueFamilyIndex,    ,    uint32_t,    0,    ,    Queue family to transition ownership to,    false) \
X__(buffer,    ,    VkBuffer,    0,    ,    Buffer to sync,    false) \
X__(offset,    ,    VkDeviceSize,    0,    ,    Offset within the buffer to sync,    false) \
X__(size,    ,    VkDeviceSize,    0,    ,    Amount of bytes to sync,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryBarrier_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(srcAccessMask,    ,    VkAccessFlags,    0,    ,    Memory accesses from the source of the dependency to synchronize,    false) \
X__(dstAccessMask,    ,    VkAccessFlags,    0,    ,    Memory accesses from the destination of the dependency to synchronize,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayPlaneInfo2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(mode,    ,    VkDisplayModeKHR,    0,    ,    ,    false) \
X__(planeIndex,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImportMemoryFdInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleType,    ,    VkExternalMemoryHandleTypeFlagBits,    0,    ,    ,    false) \
X__(fd,    ,    int,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceGroupPresentCapabilitiesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(presentMask,    ,    uint32_t,    0,    VK_MAX_DEVICE_GROUP_SIZE,    ,    false) \
X__(modes,    ,    VkDeviceGroupPresentModeFlagsKHR,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceImageViewImageFormatInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(imageViewType,    ,    VkImageViewType,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorUpdateTemplateEntry_members(X__) \
X__(dstBinding,    ,    uint32_t,    0,    ,    Binding within the destination descriptor set to write,    false) \
X__(dstArrayElement,    ,    uint32_t,    0,    ,    Array element within the destination binding to write,    false) \
X__(descriptorCount,    ,    uint32_t,    0,    ,    Number of descriptors to write,    false) \
X__(descriptorType,    ,    VkDescriptorType,    0,    ,    Descriptor type to write,    false) \
X__(offset,    ,    size_t,    0,    ,    Offset into pData where the descriptors to update are stored,    false) \
X__(stride,    ,    size_t,    0,    ,    Stride between two descriptors in pData when writing more than one descriptor,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceDiscardRectanglePropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxDiscardRectangles,    ,    uint32_t,    0,    ,    max number of active discard rectangles,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExternalSemaphoreProperties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(exportFromImportedHandleTypes,    ,    VkExternalSemaphoreHandleTypeFlags,    0,    ,    ,    false) \
X__(compatibleHandleTypes,    ,    VkExternalSemaphoreHandleTypeFlags,    0,    ,    ,    false) \
X__(externalSemaphoreFeatures,    ,    VkExternalSemaphoreFeatureFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkFramebufferMixedSamplesCombinationNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(coverageReductionMode,    ,    VkCoverageReductionModeNV,    0,    ,    ,    false) \
X__(rasterizationSamples,    ,    VkSampleCountFlagBits,    0,    ,    ,    false) \
X__(depthStencilSamples,    ,    VkSampleCountFlags,    0,    ,    ,    false) \
X__(colorSamples,    ,    VkSampleCountFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSurfaceFormatKHR_members(X__) \
X__(format,    ,    VkFormat,    0,    ,    Supported pair of rendering format,    false) \
X__(colorSpace,    ,    VkColorSpaceKHR,    0,    ,    and color space for the surface,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSurfaceFormat2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(surfaceFormat,    ,    VkSurfaceFormatKHR,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSurfaceProtectedCapabilitiesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(supportsProtected,    ,    VkBool32,    0,    ,    Represents if surface can be protected,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceFeatures_members(X__) \
X__(robustBufferAccess,    ,    VkBool32,    0,    ,    out of bounds buffer accesses are well defined,    false) \
X__(fullDrawIndexUint32,    ,    VkBool32,    0,    ,    full 32-bit range of indices for indexed draw calls,    false) \
X__(imageCubeArray,    ,    VkBool32,    0,    ,    image views which are arrays of cube maps,    false) \
X__(independentBlend,    ,    VkBool32,    0,    ,    blending operations are controlled per-attachment,    false) \
X__(geometryShader,    ,    VkBool32,    0,    ,    geometry stage,    false) \
X__(tessellationShader,    ,    VkBool32,    0,    ,    tessellation control and evaluation stage,    false) \
X__(sampleRateShading,    ,    VkBool32,    0,    ,    per-sample shading and interpolation,    false) \
X__(dualSrcBlend,    ,    VkBool32,    0,    ,    blend operations which take two sources,    false) \
X__(logicOp,    ,    VkBool32,    0,    ,    logic operations,    false) \
X__(multiDrawIndirect,    ,    VkBool32,    0,    ,    multi draw indirect,    false) \
X__(drawIndirectFirstInstance,    ,    VkBool32,    0,    ,    indirect draws can use non-zero firstInstance,    false) \
X__(depthClamp,    ,    VkBool32,    0,    ,    depth clamping,    false) \
X__(depthBiasClamp,    ,    VkBool32,    0,    ,    depth bias clamping,    false) \
X__(fillModeNonSolid,    ,    VkBool32,    0,    ,    point and wireframe fill modes,    false) \
X__(depthBounds,    ,    VkBool32,    0,    ,    depth bounds test,    false) \
X__(wideLines,    ,    VkBool32,    0,    ,    lines with width greater than 1,    false) \
X__(largePoints,    ,    VkBool32,    0,    ,    points with size greater than 1,    false) \
X__(alphaToOne,    ,    VkBool32,    0,    ,    the fragment alpha component can be forced to maximum representable alpha value,    false) \
X__(multiViewport,    ,    VkBool32,    0,    ,    viewport arrays,    false) \
X__(samplerAnisotropy,    ,    VkBool32,    0,    ,    anisotropic sampler filtering,    false) \
X__(textureCompressionETC2,    ,    VkBool32,    0,    ,    ETC texture compression formats,    false) \
X__(textureCompressionASTC_LDR,    ,    VkBool32,    0,    ,    ASTC LDR texture compression formats,    false) \
X__(textureCompressionBC,    ,    VkBool32,    0,    ,    BC1-7 texture compressed formats,    false) \
X__(occlusionQueryPrecise,    ,    VkBool32,    0,    ,    precise occlusion queries returning actual sample counts,    false) \
X__(pipelineStatisticsQuery,    ,    VkBool32,    0,    ,    pipeline statistics query,    false) \
X__(vertexPipelineStoresAndAtomics,    ,    VkBool32,    0,    ,    stores and atomic ops on storage buffers and images are supported in vertex  tessellation  and geometry stages,    false) \
X__(fragmentStoresAndAtomics,    ,    VkBool32,    0,    ,    stores and atomic ops on storage buffers and images are supported in the fragment stage,    false) \
X__(shaderTessellationAndGeometryPointSize,    ,    VkBool32,    0,    ,    tessellation and geometry stages can export point size,    false) \
X__(shaderImageGatherExtended,    ,    VkBool32,    0,    ,    image gather with run-time values and independent offsets,    false) \
X__(shaderStorageImageExtendedFormats,    ,    VkBool32,    0,    ,    the extended set of formats can be used for storage images,    false) \
X__(shaderStorageImageMultisample,    ,    VkBool32,    0,    ,    multisample images can be used for storage images,    false) \
X__(shaderStorageImageReadWithoutFormat,    ,    VkBool32,    0,    ,    read from storage image does not require format qualifier,    false) \
X__(shaderStorageImageWriteWithoutFormat,    ,    VkBool32,    0,    ,    write to storage image does not require format qualifier,    false) \
X__(shaderUniformBufferArrayDynamicIndexing,    ,    VkBool32,    0,    ,    arrays of uniform buffers can be accessed with dynamically uniform indices,    false) \
X__(shaderSampledImageArrayDynamicIndexing,    ,    VkBool32,    0,    ,    arrays of sampled images can be accessed with dynamically uniform indices,    false) \
X__(shaderStorageBufferArrayDynamicIndexing,    ,    VkBool32,    0,    ,    arrays of storage buffers can be accessed with dynamically uniform indices,    false) \
X__(shaderStorageImageArrayDynamicIndexing,    ,    VkBool32,    0,    ,    arrays of storage images can be accessed with dynamically uniform indices,    false) \
X__(shaderClipDistance,    ,    VkBool32,    0,    ,    clip distance in shaders,    false) \
X__(shaderCullDistance,    ,    VkBool32,    0,    ,    cull distance in shaders,    false) \
X__(shaderFloat64,    ,    VkBool32,    0,    ,    64-bit floats (doubles) in shaders,    false) \
X__(shaderInt64,    ,    VkBool32,    0,    ,    64-bit integers in shaders,    false) \
X__(shaderInt16,    ,    VkBool32,    0,    ,    16-bit integers in shaders,    false) \
X__(shaderResourceResidency,    ,    VkBool32,    0,    ,    shader can use texture operations that return resource residency information (requires sparseNonResident support),    false) \
X__(shaderResourceMinLod,    ,    VkBool32,    0,    ,    shader can use texture operations that specify minimum resource LOD,    false) \
X__(sparseBinding,    ,    VkBool32,    0,    ,    Sparse resources support: Resource memory can be managed at opaque page level rather than object level,    false) \
X__(sparseResidencyBuffer,    ,    VkBool32,    0,    ,    Sparse resources support: GPU can access partially resident buffers ,    false) \
X__(sparseResidencyImage2D,    ,    VkBool32,    0,    ,    Sparse resources support: GPU can access partially resident 2D (non-MSAA non-depth/stencil) images ,    false) \
X__(sparseResidencyImage3D,    ,    VkBool32,    0,    ,    Sparse resources support: GPU can access partially resident 3D images ,    false) \
X__(sparseResidency2Samples,    ,    VkBool32,    0,    ,    Sparse resources support: GPU can access partially resident MSAA 2D images with 2 samples,    false) \
X__(sparseResidency4Samples,    ,    VkBool32,    0,    ,    Sparse resources support: GPU can access partially resident MSAA 2D images with 4 samples,    false) \
X__(sparseResidency8Samples,    ,    VkBool32,    0,    ,    Sparse resources support: GPU can access partially resident MSAA 2D images with 8 samples,    false) \
X__(sparseResidency16Samples,    ,    VkBool32,    0,    ,    Sparse resources support: GPU can access partially resident MSAA 2D images with 16 samples,    false) \
X__(sparseResidencyAliased,    ,    VkBool32,    0,    ,    Sparse resources support: GPU can correctly access data aliased into multiple locations (opt-in),    false) \
X__(variableMultisampleRate,    ,    VkBool32,    0,    ,    multisample rate must be the same for all pipelines in a subpass,    false) \
X__(inheritedQueries,    ,    VkBool32,    0,    ,    Queries may be inherited from primary to secondary command buffers,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplaySurfaceCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkDisplaySurfaceCreateFlagsKHR,    0,    ,    ,    false) \
X__(displayMode,    ,    VkDisplayModeKHR,    0,    ,    The mode to use when displaying this surface,    false) \
X__(planeIndex,    ,    uint32_t,    0,    ,    The plane on which this surface appears.  Must be between 0 and the value returned by vkGetPhysicalDeviceDisplayPlanePropertiesKHR() in pPropertyCount.,    false) \
X__(planeStackIndex,    ,    uint32_t,    0,    ,    The z-order of the plane.,    false) \
X__(transform,    ,    VkSurfaceTransformFlagBitsKHR,    0,    ,    Transform to apply to the images as part of the scanout operation,    false) \
X__(globalAlpha,    ,    float,    0,    ,    Global alpha value.  Must be between 0 and 1  inclusive.  Ignored if alphaMode is not VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR,    false) \
X__(alphaMode,    ,    VkDisplayPlaneAlphaFlagBitsKHR,    0,    ,    What type of alpha blending to use.  Must be a bit from vkGetDisplayPlanePropertiesKHR::supportedAlpha.,    false) \
X__(imageExtent,    ,    VkExtent2D,    0,    ,    size of the images to use with this surface,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImagePlaneMemoryRequirementsInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(planeAspect,    ,    VkImageAspectFlagBits,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageMemoryRequirementsInfo2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(image,    ,    VkImage,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExportMemoryWin32HandleInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pAttributes,    ,    SECURITY_ATTRIBUTES,    1,    ,    ,    false) \
X__(dwAccess,    ,    DWORD,    0,    ,    ,    false) \
X__(name,    ,    LPCWSTR,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkApplicationInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pApplicationName,    null-terminated,    char,    1,    ,    ,    false) \
X__(applicationVersion,    ,    uint32_t,    0,    ,    ,    false) \
X__(pEngineName,    null-terminated,    char,    1,    ,    ,    false) \
X__(engineVersion,    ,    uint32_t,    0,    ,    ,    false) \
X__(apiVersion,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDebugUtilsMessengerCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkDebugUtilsMessengerCreateFlagsEXT,    0,    ,    ,    false) \
X__(messageSeverity,    ,    VkDebugUtilsMessageSeverityFlagsEXT,    0,    ,    ,    false) \
X__(messageType,    ,    VkDebugUtilsMessageTypeFlagsEXT,    0,    ,    ,    false) \
X__(pfnUserCallback,    ,    PFN_vkDebugUtilsMessengerCallbackEXT,    0,    ,    ,    false) \
X__(pUserData,    ,    void,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDebugReportCallbackCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkDebugReportFlagsEXT,    0,    ,    Indicates which events call this callback,    false) \
X__(pfnCallback,    ,    PFN_vkDebugReportCallbackEXT,    0,    ,    Function pointer of a callback function,    false) \
X__(pUserData,    ,    void,    1,    ,    User data provided to callback function,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkValidationFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    Must be VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(enabledValidationFeatureCount,    ,    uint32_t,    0,    ,    Number of validation features to enable,    false) \
X__(pEnabledValidationFeatures,    enabledValidationFeatureCount,    VkValidationFeatureEnableEXT,    1,    ,    Validation features to enable,    false) \
X__(disabledValidationFeatureCount,    ,    uint32_t,    0,    ,    Number of validation features to disable,    false) \
X__(pDisabledValidationFeatures,    disabledValidationFeatureCount,    VkValidationFeatureDisableEXT,    1,    ,    Validation features to disable,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkInstanceCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkInstanceCreateFlags,    0,    ,    ,    false) \
X__(pApplicationInfo,    ,    VkApplicationInfo,    1,    ,    ,    false) \
X__(enabledLayerCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(ppEnabledLayerNames,    enabledLayerCount,null-terminated,    char,    2,    ,    Ordered list of layer names to be enabled,    false) \
X__(enabledExtensionCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(ppEnabledExtensionNames,    enabledExtensionCount,null-terminated,    char,    2,    ,    Extension names to be enabled,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShadingRateImageFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(shadingRateImage,    ,    VkBool32,    0,    ,    ,    false) \
X__(shadingRateCoarseSampleOrder,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineCoverageModulationStateCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineCoverageModulationStateCreateFlagsNV,    0,    ,    ,    false) \
X__(coverageModulationMode,    ,    VkCoverageModulationModeNV,    0,    ,    ,    false) \
X__(coverageModulationTableEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(coverageModulationTableCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pCoverageModulationTable,    coverageModulationTableCount,    float,    1,    ,    ,    true) \

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAndroidHardwareBufferFormatPropertiesANDROID_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(format,    ,    VkFormat,    0,    ,    ,    false) \
X__(externalFormat,    ,    uint64_t,    0,    ,    ,    false) \
X__(formatFeatures,    ,    VkFormatFeatureFlags,    0,    ,    ,    false) \
X__(samplerYcbcrConversionComponents,    ,    VkComponentMapping,    0,    ,    ,    false) \
X__(suggestedYcbcrModel,    ,    VkSamplerYcbcrModelConversion,    0,    ,    ,    false) \
X__(suggestedYcbcrRange,    ,    VkSamplerYcbcrRange,    0,    ,    ,    false) \
X__(suggestedXChromaOffset,    ,    VkChromaLocation,    0,    ,    ,    false) \
X__(suggestedYChromaOffset,    ,    VkChromaLocation,    0,    ,    ,    false) \

# endif

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAndroidHardwareBufferPropertiesANDROID_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(allocationSize,    ,    VkDeviceSize,    0,    ,    ,    false) \
X__(memoryTypeBits,    ,    uint32_t,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkObjectTableIndexBufferEntryNVX_members(X__) \
X__(type,    ,    VkObjectEntryTypeNVX,    0,    ,    ,    false) \
X__(flags,    ,    VkObjectEntryUsageFlagsNVX,    0,    ,    ,    false) \
X__(buffer,    ,    VkBuffer,    0,    ,    ,    false) \
X__(indexType,    ,    VkIndexType,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryWin32HandlePropertiesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(memoryTypeBits,    ,    uint32_t,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAttachmentReference_members(X__) \
X__(attachment,    ,    uint32_t,    0,    ,    ,    false) \
X__(layout,    ,    VkImageLayout,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSubpassDescription_members(X__) \
X__(flags,    ,    VkSubpassDescriptionFlags,    0,    ,    ,    false) \
X__(pipelineBindPoint,    ,    VkPipelineBindPoint,    0,    ,    Must be VK_PIPELINE_BIND_POINT_GRAPHICS for now,    false) \
X__(inputAttachmentCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pInputAttachments,    inputAttachmentCount,    VkAttachmentReference,    1,    ,    ,    false) \
X__(colorAttachmentCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pColorAttachments,    colorAttachmentCount,    VkAttachmentReference,    1,    ,    ,    false) \
X__(pResolveAttachments,    colorAttachmentCount,    VkAttachmentReference,    1,    ,    ,    false) \
X__(pDepthStencilAttachment,    ,    VkAttachmentReference,    1,    ,    ,    false) \
X__(preserveAttachmentCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pPreserveAttachments,    preserveAttachmentCount,    uint32_t,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceDescriptorIndexingPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(maxUpdateAfterBindDescriptorsInAllPools,    ,    uint32_t,    0,    ,    ,    false) \
X__(shaderUniformBufferArrayNonUniformIndexingNative,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderSampledImageArrayNonUniformIndexingNative,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderStorageBufferArrayNonUniformIndexingNative,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderStorageImageArrayNonUniformIndexingNative,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderInputAttachmentArrayNonUniformIndexingNative,    ,    VkBool32,    0,    ,    ,    false) \
X__(robustBufferAccessUpdateAfterBind,    ,    VkBool32,    0,    ,    ,    false) \
X__(quadDivergentImplicitLod,    ,    VkBool32,    0,    ,    ,    false) \
X__(maxPerStageDescriptorUpdateAfterBindSamplers,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxPerStageDescriptorUpdateAfterBindUniformBuffers,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxPerStageDescriptorUpdateAfterBindStorageBuffers,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxPerStageDescriptorUpdateAfterBindSampledImages,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxPerStageDescriptorUpdateAfterBindStorageImages,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxPerStageDescriptorUpdateAfterBindInputAttachments,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxPerStageUpdateAfterBindResources,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxDescriptorSetUpdateAfterBindSamplers,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxDescriptorSetUpdateAfterBindUniformBuffers,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxDescriptorSetUpdateAfterBindUniformBuffersDynamic,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxDescriptorSetUpdateAfterBindStorageBuffers,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxDescriptorSetUpdateAfterBindStorageBuffersDynamic,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxDescriptorSetUpdateAfterBindSampledImages,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxDescriptorSetUpdateAfterBindStorageImages,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxDescriptorSetUpdateAfterBindInputAttachments,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceMeshShaderFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(taskShader,    ,    VkBool32,    0,    ,    ,    false) \
X__(meshShader,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkInputAttachmentAspectReference_members(X__) \
X__(subpass,    ,    uint32_t,    0,    ,    ,    false) \
X__(inputAttachmentIndex,    ,    uint32_t,    0,    ,    ,    false) \
X__(aspectMask,    ,    VkImageAspectFlags,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_IOS_MVK)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkIOSSurfaceCreateInfoMVK_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkIOSSurfaceCreateFlagsMVK,    0,    ,    ,    false) \
X__(pView,    ,    void,    1,    ,    ,    true) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSwapchainDisplayNativeHdrCreateInfoAMD_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(localDimmingEnable,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceGroupProperties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(physicalDeviceCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(physicalDevices,    ,    VkPhysicalDevice,    0,    VK_MAX_DEVICE_GROUP_SIZE,    ,    false) \
X__(subsetAllocation,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryHostPointerPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(memoryTypeBits,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkVertexInputAttributeDescription_members(X__) \
X__(location,    ,    uint32_t,    0,    ,    location of the shader vertex attrib,    false) \
X__(binding,    ,    uint32_t,    0,    ,    Vertex buffer binding id,    false) \
X__(format,    ,    VkFormat,    0,    ,    format of source data,    false) \
X__(offset,    ,    uint32_t,    0,    ,    Offset of first element in bytes from base of vertex,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImportFenceFdInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(fence,    ,    VkFence,    0,    ,    ,    false) \
X__(flags,    ,    VkFenceImportFlags,    0,    ,    ,    false) \
X__(handleType,    ,    VkExternalFenceHandleTypeFlagBits,    0,    ,    ,    false) \
X__(fd,    ,    int,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceMemoryOverallocationCreateInfoAMD_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(overallocationBehavior,    ,    VkMemoryOverallocationBehaviorAMD,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPerformanceStreamMarkerInfoINTEL_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(marker,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceCornerSampledImageFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(cornerSampledImage,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSamplerYcbcrConversionImageFormatProperties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(combinedImageSamplerDescriptorCount,    ,    uint32_t,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAndroidHardwareBufferUsageANDROID_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(androidHardwareBufferUsage,    ,    uint64_t,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExternalMemoryProperties_members(X__) \
X__(externalMemoryFeatures,    ,    VkExternalMemoryFeatureFlags,    0,    ,    ,    false) \
X__(exportFromImportedHandleTypes,    ,    VkExternalMemoryHandleTypeFlags,    0,    ,    ,    false) \
X__(compatibleHandleTypes,    ,    VkExternalMemoryHandleTypeFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExternalImageFormatProperties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(externalMemoryProperties,    ,    VkExternalMemoryProperties,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkTextureLODGatherFormatPropertiesAMD_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(supportsTextureGatherLODBiasAMD,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageFormatProperties2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(imageFormatProperties,    ,    VkImageFormatProperties,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_XLIB_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkXlibSurfaceCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkXlibSurfaceCreateFlagsKHR,    0,    ,    ,    false) \
X__(dpy,    ,    Display,    1,    ,    ,    true) \
X__(window,    ,    Window,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBufferMemoryRequirementsInfo2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(buffer,    ,    VkBuffer,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAccelerationStructureCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(compactedSize,    ,    VkDeviceSize,    0,    ,    ,    false) \
X__(info,    ,    VkAccelerationStructureInfoNV,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceExternalSemaphoreInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleType,    ,    VkExternalSemaphoreHandleTypeFlagBits,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageResolve_members(X__) \
X__(srcSubresource,    ,    VkImageSubresourceLayers,    0,    ,    ,    false) \
X__(srcOffset,    ,    VkOffset3D,    0,    ,    ,    false) \
X__(dstSubresource,    ,    VkImageSubresourceLayers,    0,    ,    ,    false) \
X__(dstOffset,    ,    VkOffset3D,    0,    ,    ,    false) \
X__(extent,    ,    VkExtent3D,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRenderPassInputAttachmentAspectCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(aspectReferenceCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pAspectReferences,    aspectReferenceCount,    VkInputAttachmentAspectReference,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkFramebufferAttachmentImageInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkImageCreateFlags,    0,    ,    Image creation flags,    false) \
X__(usage,    ,    VkImageUsageFlags,    0,    ,    Image usage flags,    false) \
X__(width,    ,    uint32_t,    0,    ,    ,    false) \
X__(height,    ,    uint32_t,    0,    ,    ,    false) \
X__(layerCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(viewFormatCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pViewFormats,    viewFormatCount,    VkFormat,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkFramebufferAttachmentsCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(attachmentImageInfoCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pAttachmentImageInfos,    attachmentImageInfoCount,    VkFramebufferAttachmentImageInfoKHR,    1,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSurfaceCapabilitiesFullScreenExclusiveEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(fullScreenExclusiveSupported,    ,    VkBool32,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSurfaceCapabilities2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(surfaceCapabilities,    ,    VkSurfaceCapabilitiesKHR,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryGetWin32HandleInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(memory,    ,    VkDeviceMemory,    0,    ,    ,    false) \
X__(handleType,    ,    VkExternalMemoryHandleTypeFlagBits,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSampleLocationEXT_members(X__) \
X__(x,    ,    float,    0,    ,    ,    false) \
X__(y,    ,    float,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSampleLocationsInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(sampleLocationsPerPixel,    ,    VkSampleCountFlagBits,    0,    ,    ,    false) \
X__(sampleLocationGridSize,    ,    VkExtent2D,    0,    ,    ,    false) \
X__(sampleLocationsCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pSampleLocations,    sampleLocationsCount,    VkSampleLocationEXT,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageMemoryBarrier_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(srcAccessMask,    ,    VkAccessFlags,    0,    ,    Memory accesses from the source of the dependency to synchronize,    false) \
X__(dstAccessMask,    ,    VkAccessFlags,    0,    ,    Memory accesses from the destination of the dependency to synchronize,    false) \
X__(oldLayout,    ,    VkImageLayout,    0,    ,    Current layout of the image,    false) \
X__(newLayout,    ,    VkImageLayout,    0,    ,    New layout to transition the image to,    false) \
X__(srcQueueFamilyIndex,    ,    uint32_t,    0,    ,    Queue family to transition ownership from,    false) \
X__(dstQueueFamilyIndex,    ,    uint32_t,    0,    ,    Queue family to transition ownership to,    false) \
X__(image,    ,    VkImage,    0,    ,    Image to sync,    false) \
X__(subresourceRange,    ,    VkImageSubresourceRange,    0,    ,    Subresource range to sync,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceLimits_members(X__) \
X__(maxImageDimension1D,    ,    uint32_t,    0,    ,    max 1D image dimension,    false) \
X__(maxImageDimension2D,    ,    uint32_t,    0,    ,    max 2D image dimension,    false) \
X__(maxImageDimension3D,    ,    uint32_t,    0,    ,    max 3D image dimension,    false) \
X__(maxImageDimensionCube,    ,    uint32_t,    0,    ,    max cubemap image dimension,    false) \
X__(maxImageArrayLayers,    ,    uint32_t,    0,    ,    max layers for image arrays,    false) \
X__(maxTexelBufferElements,    ,    uint32_t,    0,    ,    max texel buffer size (fstexels),    false) \
X__(maxUniformBufferRange,    ,    uint32_t,    0,    ,    max uniform buffer range (bytes),    false) \
X__(maxStorageBufferRange,    ,    uint32_t,    0,    ,    max storage buffer range (bytes),    false) \
X__(maxPushConstantsSize,    ,    uint32_t,    0,    ,    max size of the push constants pool (bytes),    false) \
X__(maxMemoryAllocationCount,    ,    uint32_t,    0,    ,    max number of device memory allocations supported,    false) \
X__(maxSamplerAllocationCount,    ,    uint32_t,    0,    ,    max number of samplers that can be allocated on a device,    false) \
X__(bufferImageGranularity,    ,    VkDeviceSize,    0,    ,    Granularity (in bytes) at which buffers and images can be bound to adjacent memory for simultaneous usage,    false) \
X__(sparseAddressSpaceSize,    ,    VkDeviceSize,    0,    ,    Total address space available for sparse allocations (bytes),    false) \
X__(maxBoundDescriptorSets,    ,    uint32_t,    0,    ,    max number of descriptors sets that can be bound to a pipeline,    false) \
X__(maxPerStageDescriptorSamplers,    ,    uint32_t,    0,    ,    max number of samplers allowed per-stage in a descriptor set,    false) \
X__(maxPerStageDescriptorUniformBuffers,    ,    uint32_t,    0,    ,    max number of uniform buffers allowed per-stage in a descriptor set,    false) \
X__(maxPerStageDescriptorStorageBuffers,    ,    uint32_t,    0,    ,    max number of storage buffers allowed per-stage in a descriptor set,    false) \
X__(maxPerStageDescriptorSampledImages,    ,    uint32_t,    0,    ,    max number of sampled images allowed per-stage in a descriptor set,    false) \
X__(maxPerStageDescriptorStorageImages,    ,    uint32_t,    0,    ,    max number of storage images allowed per-stage in a descriptor set,    false) \
X__(maxPerStageDescriptorInputAttachments,    ,    uint32_t,    0,    ,    max number of input attachments allowed per-stage in a descriptor set,    false) \
X__(maxPerStageResources,    ,    uint32_t,    0,    ,    max number of resources allowed by a single stage,    false) \
X__(maxDescriptorSetSamplers,    ,    uint32_t,    0,    ,    max number of samplers allowed in all stages in a descriptor set,    false) \
X__(maxDescriptorSetUniformBuffers,    ,    uint32_t,    0,    ,    max number of uniform buffers allowed in all stages in a descriptor set,    false) \
X__(maxDescriptorSetUniformBuffersDynamic,    ,    uint32_t,    0,    ,    max number of dynamic uniform buffers allowed in all stages in a descriptor set,    false) \
X__(maxDescriptorSetStorageBuffers,    ,    uint32_t,    0,    ,    max number of storage buffers allowed in all stages in a descriptor set,    false) \
X__(maxDescriptorSetStorageBuffersDynamic,    ,    uint32_t,    0,    ,    max number of dynamic storage buffers allowed in all stages in a descriptor set,    false) \
X__(maxDescriptorSetSampledImages,    ,    uint32_t,    0,    ,    max number of sampled images allowed in all stages in a descriptor set,    false) \
X__(maxDescriptorSetStorageImages,    ,    uint32_t,    0,    ,    max number of storage images allowed in all stages in a descriptor set,    false) \
X__(maxDescriptorSetInputAttachments,    ,    uint32_t,    0,    ,    max number of input attachments allowed in all stages in a descriptor set,    false) \
X__(maxVertexInputAttributes,    ,    uint32_t,    0,    ,    max number of vertex input attribute slots,    false) \
X__(maxVertexInputBindings,    ,    uint32_t,    0,    ,    max number of vertex input binding slots,    false) \
X__(maxVertexInputAttributeOffset,    ,    uint32_t,    0,    ,    max vertex input attribute offset added to vertex buffer offset,    false) \
X__(maxVertexInputBindingStride,    ,    uint32_t,    0,    ,    max vertex input binding stride,    false) \
X__(maxVertexOutputComponents,    ,    uint32_t,    0,    ,    max number of output components written by vertex shader,    false) \
X__(maxTessellationGenerationLevel,    ,    uint32_t,    0,    ,    max level supported by tessellation primitive generator,    false) \
X__(maxTessellationPatchSize,    ,    uint32_t,    0,    ,    max patch size (vertices),    false) \
X__(maxTessellationControlPerVertexInputComponents,    ,    uint32_t,    0,    ,    max number of input components per-vertex in TCS,    false) \
X__(maxTessellationControlPerVertexOutputComponents,    ,    uint32_t,    0,    ,    max number of output components per-vertex in TCS,    false) \
X__(maxTessellationControlPerPatchOutputComponents,    ,    uint32_t,    0,    ,    max number of output components per-patch in TCS,    false) \
X__(maxTessellationControlTotalOutputComponents,    ,    uint32_t,    0,    ,    max total number of per-vertex and per-patch output components in TCS,    false) \
X__(maxTessellationEvaluationInputComponents,    ,    uint32_t,    0,    ,    max number of input components per vertex in TES,    false) \
X__(maxTessellationEvaluationOutputComponents,    ,    uint32_t,    0,    ,    max number of output components per vertex in TES,    false) \
X__(maxGeometryShaderInvocations,    ,    uint32_t,    0,    ,    max invocation count supported in geometry shader,    false) \
X__(maxGeometryInputComponents,    ,    uint32_t,    0,    ,    max number of input components read in geometry stage,    false) \
X__(maxGeometryOutputComponents,    ,    uint32_t,    0,    ,    max number of output components written in geometry stage,    false) \
X__(maxGeometryOutputVertices,    ,    uint32_t,    0,    ,    max number of vertices that can be emitted in geometry stage,    false) \
X__(maxGeometryTotalOutputComponents,    ,    uint32_t,    0,    ,    max total number of components (all vertices) written in geometry stage,    false) \
X__(maxFragmentInputComponents,    ,    uint32_t,    0,    ,    max number of input components read in fragment stage,    false) \
X__(maxFragmentOutputAttachments,    ,    uint32_t,    0,    ,    max number of output attachments written in fragment stage,    false) \
X__(maxFragmentDualSrcAttachments,    ,    uint32_t,    0,    ,    max number of output attachments written when using dual source blending,    false) \
X__(maxFragmentCombinedOutputResources,    ,    uint32_t,    0,    ,    max total number of storage buffers  storage images and output buffers,    false) \
X__(maxComputeSharedMemorySize,    ,    uint32_t,    0,    ,    max total storage size of work group local storage (bytes),    false) \
X__(maxComputeWorkGroupCount,    ,    uint32_t,    0,    3,    max num of compute work groups that may be dispatched by a single command (x y z),    false) \
X__(maxComputeWorkGroupInvocations,    ,    uint32_t,    0,    ,    max total compute invocations in a single local work group,    false) \
X__(maxComputeWorkGroupSize,    ,    uint32_t,    0,    3,    max local size of a compute work group (x y z),    false) \
X__(subPixelPrecisionBits,    ,    uint32_t,    0,    ,    number bits of subpixel precision in screen x and y,    false) \
X__(subTexelPrecisionBits,    ,    uint32_t,    0,    ,    number bits of precision for selecting texel weights,    false) \
X__(mipmapPrecisionBits,    ,    uint32_t,    0,    ,    number bits of precision for selecting mipmap weights,    false) \
X__(maxDrawIndexedIndexValue,    ,    uint32_t,    0,    ,    max index value for indexed draw calls (for 32-bit indices),    false) \
X__(maxDrawIndirectCount,    ,    uint32_t,    0,    ,    max draw count for indirect draw calls,    false) \
X__(maxSamplerLodBias,    ,    float,    0,    ,    max absolute sampler LOD bias,    false) \
X__(maxSamplerAnisotropy,    ,    float,    0,    ,    max degree of sampler anisotropy,    false) \
X__(maxViewports,    ,    uint32_t,    0,    ,    max number of active viewports,    false) \
X__(maxViewportDimensions,    ,    uint32_t,    0,    2,    max viewport dimensions (x y),    false) \
X__(viewportBoundsRange,    ,    float,    0,    2,    viewport bounds range (min max),    false) \
X__(viewportSubPixelBits,    ,    uint32_t,    0,    ,    number bits of subpixel precision for viewport,    false) \
X__(minMemoryMapAlignment,    ,    size_t,    0,    ,    min required alignment of pointers returned by MapMemory (bytes),    false) \
X__(minTexelBufferOffsetAlignment,    ,    VkDeviceSize,    0,    ,    min required alignment for texel buffer offsets (bytes) ,    false) \
X__(minUniformBufferOffsetAlignment,    ,    VkDeviceSize,    0,    ,    min required alignment for uniform buffer sizes and offsets (bytes),    false) \
X__(minStorageBufferOffsetAlignment,    ,    VkDeviceSize,    0,    ,    min required alignment for storage buffer offsets (bytes),    false) \
X__(minTexelOffset,    ,    int32_t,    0,    ,    min texel offset for OpTextureSampleOffset,    false) \
X__(maxTexelOffset,    ,    uint32_t,    0,    ,    max texel offset for OpTextureSampleOffset,    false) \
X__(minTexelGatherOffset,    ,    int32_t,    0,    ,    min texel offset for OpTextureGatherOffset,    false) \
X__(maxTexelGatherOffset,    ,    uint32_t,    0,    ,    max texel offset for OpTextureGatherOffset,    false) \
X__(minInterpolationOffset,    ,    float,    0,    ,    furthest negative offset for interpolateAtOffset,    false) \
X__(maxInterpolationOffset,    ,    float,    0,    ,    furthest positive offset for interpolateAtOffset,    false) \
X__(subPixelInterpolationOffsetBits,    ,    uint32_t,    0,    ,    number of subpixel bits for interpolateAtOffset,    false) \
X__(maxFramebufferWidth,    ,    uint32_t,    0,    ,    max width for a framebuffer,    false) \
X__(maxFramebufferHeight,    ,    uint32_t,    0,    ,    max height for a framebuffer,    false) \
X__(maxFramebufferLayers,    ,    uint32_t,    0,    ,    max layer count for a layered framebuffer,    false) \
X__(framebufferColorSampleCounts,    ,    VkSampleCountFlags,    0,    ,    supported color sample counts for a framebuffer,    false) \
X__(framebufferDepthSampleCounts,    ,    VkSampleCountFlags,    0,    ,    supported depth sample counts for a framebuffer,    false) \
X__(framebufferStencilSampleCounts,    ,    VkSampleCountFlags,    0,    ,    supported stencil sample counts for a framebuffer,    false) \
X__(framebufferNoAttachmentsSampleCounts,    ,    VkSampleCountFlags,    0,    ,    supported sample counts for a framebuffer with no attachments,    false) \
X__(maxColorAttachments,    ,    uint32_t,    0,    ,    max number of color attachments per subpass,    false) \
X__(sampledImageColorSampleCounts,    ,    VkSampleCountFlags,    0,    ,    supported color sample counts for a non-integer sampled image,    false) \
X__(sampledImageIntegerSampleCounts,    ,    VkSampleCountFlags,    0,    ,    supported sample counts for an integer image,    false) \
X__(sampledImageDepthSampleCounts,    ,    VkSampleCountFlags,    0,    ,    supported depth sample counts for a sampled image,    false) \
X__(sampledImageStencilSampleCounts,    ,    VkSampleCountFlags,    0,    ,    supported stencil sample counts for a sampled image,    false) \
X__(storageImageSampleCounts,    ,    VkSampleCountFlags,    0,    ,    supported sample counts for a storage image,    false) \
X__(maxSampleMaskWords,    ,    uint32_t,    0,    ,    max number of sample mask words,    false) \
X__(timestampComputeAndGraphics,    ,    VkBool32,    0,    ,    timestamps on graphics and compute queues,    false) \
X__(timestampPeriod,    ,    float,    0,    ,    number of nanoseconds it takes for timestamp query value to increment by 1,    false) \
X__(maxClipDistances,    ,    uint32_t,    0,    ,    max number of clip distances,    false) \
X__(maxCullDistances,    ,    uint32_t,    0,    ,    max number of cull distances,    false) \
X__(maxCombinedClipAndCullDistances,    ,    uint32_t,    0,    ,    max combined number of user clipping,    false) \
X__(discreteQueuePriorities,    ,    uint32_t,    0,    ,    distinct queue priorities available ,    false) \
X__(pointSizeRange,    ,    float,    0,    2,    range (min max) of supported point sizes,    false) \
X__(lineWidthRange,    ,    float,    0,    2,    range (min max) of supported line widths,    false) \
X__(pointSizeGranularity,    ,    float,    0,    ,    granularity of supported point sizes,    false) \
X__(lineWidthGranularity,    ,    float,    0,    ,    granularity of supported line widths,    false) \
X__(strictLines,    ,    VkBool32,    0,    ,    line rasterization follows preferred rules,    false) \
X__(standardSampleLocations,    ,    VkBool32,    0,    ,    supports standard sample locations for all supported sample counts,    false) \
X__(optimalBufferCopyOffsetAlignment,    ,    VkDeviceSize,    0,    ,    optimal offset of buffer copies,    false) \
X__(optimalBufferCopyRowPitchAlignment,    ,    VkDeviceSize,    0,    ,    optimal pitch of buffer copies,    false) \
X__(nonCoherentAtomSize,    ,    VkDeviceSize,    0,    ,    minimum size and alignment for non-coherent host-mapped device memory access,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExportSemaphoreWin32HandleInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pAttributes,    ,    SECURITY_ATTRIBUTES,    1,    ,    ,    false) \
X__(dwAccess,    ,    DWORD,    0,    ,    ,    false) \
X__(name,    ,    LPCWSTR,    0,    ,    ,    false) \

# endif

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImportSemaphoreWin32HandleInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(semaphore,    ,    VkSemaphore,    0,    ,    ,    false) \
X__(flags,    ,    VkSemaphoreImportFlags,    0,    ,    ,    false) \
X__(handleType,    ,    VkExternalSemaphoreHandleTypeFlagBits,    0,    ,    ,    false) \
X__(handle,    ,    HANDLE,    0,    ,    ,    false) \
X__(name,    ,    LPCWSTR,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMultisamplePropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxSampleLocationGridSize,    ,    VkExtent2D,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceExternalImageFormatInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleType,    ,    VkExternalMemoryHandleTypeFlagBits,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSparseMemoryBind_members(X__) \
X__(resourceOffset,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(size,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(memory,    ,    VkDeviceMemory,    0,    ,    ,    false) \
X__(memoryOffset,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(flags,    ,    VkSparseMemoryBindFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShadingRateImagePropertiesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(shadingRateTexelSize,    ,    VkExtent2D,    0,    ,    ,    false) \
X__(shadingRatePaletteSize,    ,    uint32_t,    0,    ,    ,    false) \
X__(shadingRateMaxCoarseSamples,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineRasterizationDepthClipStateCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineRasterizationDepthClipStateCreateFlagsEXT,    0,    ,    ,    false) \
X__(depthClipEnable,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDrawMeshTasksIndirectCommandNV_members(X__) \
X__(taskCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(firstTask,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAttachmentSampleLocationsEXT_members(X__) \
X__(attachmentIndex,    ,    uint32_t,    0,    ,    ,    false) \
X__(sampleLocationsInfo,    ,    VkSampleLocationsInfoEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSamplerYcbcrConversionInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(conversion,    ,    VkSamplerYcbcrConversion,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayModeParametersKHR_members(X__) \
X__(visibleRegion,    ,    VkExtent2D,    0,    ,    Visible scanout region.,    false) \
X__(refreshRate,    ,    uint32_t,    0,    ,    Number of times per second the display is updated.,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayModeCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkDisplayModeCreateFlagsKHR,    0,    ,    ,    false) \
X__(parameters,    ,    VkDisplayModeParametersKHR,    0,    ,    The parameters this mode uses.,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorUpdateTemplateCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkDescriptorUpdateTemplateCreateFlags,    0,    ,    ,    false) \
X__(descriptorUpdateEntryCount,    ,    uint32_t,    0,    ,    Number of descriptor update entries to use for the update template,    false) \
X__(pDescriptorUpdateEntries,    descriptorUpdateEntryCount,    VkDescriptorUpdateTemplateEntry,    1,    ,    Descriptor update entries for the template,    false) \
X__(templateType,    ,    VkDescriptorUpdateTemplateType,    0,    ,    ,    false) \
X__(descriptorSetLayout,    ,    VkDescriptorSetLayout,    0,    ,    ,    false) \
X__(pipelineBindPoint,    ,    VkPipelineBindPoint,    0,    ,    ,    true) \
X__(pipelineLayout,    ,    VkPipelineLayout,    0,    ,    If used for push descriptors  this is the only allowed layout,    true) \
X__(set,    ,    uint32_t,    0,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMappedMemoryRange_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(memory,    ,    VkDeviceMemory,    0,    ,    Mapped memory object,    false) \
X__(offset,    ,    VkDeviceSize,    0,    ,    Offset within the memory object where the range starts,    false) \
X__(size,    ,    VkDeviceSize,    0,    ,    Size of the range within the memory object,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSubpassSampleLocationsEXT_members(X__) \
X__(subpassIndex,    ,    uint32_t,    0,    ,    ,    false) \
X__(sampleLocationsInfo,    ,    VkSampleLocationsInfoEXT,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkFenceGetWin32HandleInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(fence,    ,    VkFence,    0,    ,    ,    false) \
X__(handleType,    ,    VkExternalFenceHandleTypeFlagBits,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkObjectTablePipelineEntryNVX_members(X__) \
X__(type,    ,    VkObjectEntryTypeNVX,    0,    ,    ,    false) \
X__(flags,    ,    VkObjectEntryUsageFlagsNVX,    0,    ,    ,    false) \
X__(pipeline,    ,    VkPipeline,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(dedicatedAllocationImageAliasing,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDevice8BitStorageFeaturesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(storageBuffer8BitAccess,    ,    VkBool32,    0,    ,    8-bit integer variables supported in StorageBuffer,    false) \
X__(uniformAndStorageBuffer8BitAccess,    ,    VkBool32,    0,    ,    8-bit integer variables supported in StorageBuffer and Uniform,    false) \
X__(storagePushConstant8,    ,    VkBool32,    0,    ,    8-bit integer variables supported in PushConstant,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(shaderDemoteToHelperInvocation,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceHostQueryResetFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(hostQueryReset,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceMultiviewFeatures_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(multiview,    ,    VkBool32,    0,    ,    Multiple views in a renderpass,    false) \
X__(multiviewGeometryShader,    ,    VkBool32,    0,    ,    Multiple views in a renderpass w/ geometry shader,    false) \
X__(multiviewTessellationShader,    ,    VkBool32,    0,    ,    Multiple views in a renderpass w/ tessellation shader,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceProtectedMemoryFeatures_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(protectedMemory,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDevice16BitStorageFeatures_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(storageBuffer16BitAccess,    ,    VkBool32,    0,    ,    16-bit integer/floating-point variables supported in BufferBlock,    false) \
X__(uniformAndStorageBuffer16BitAccess,    ,    VkBool32,    0,    ,    16-bit integer/floating-point variables supported in BufferBlock and Block,    false) \
X__(storagePushConstant16,    ,    VkBool32,    0,    ,    16-bit integer/floating-point variables supported in PushConstant,    false) \
X__(storageInputOutput16,    ,    VkBool32,    0,    ,    16-bit integer/floating-point variables supported in shader inputs and outputs,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceImagelessFramebufferFeaturesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(imagelessFramebuffer,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceExclusiveScissorFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(exclusiveScissor,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(uniformBufferStandardLayout,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(ycbcrImageArrays,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceIndexTypeUint8FeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(indexTypeUint8,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceDepthClipEnableFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    Pointer to next structure,    false) \
X__(depthClipEnable,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(texelBufferAlignment,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceDescriptorIndexingFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(shaderInputAttachmentArrayDynamicIndexing,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderUniformTexelBufferArrayDynamicIndexing,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderStorageTexelBufferArrayDynamicIndexing,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderUniformBufferArrayNonUniformIndexing,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderSampledImageArrayNonUniformIndexing,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderStorageBufferArrayNonUniformIndexing,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderStorageImageArrayNonUniformIndexing,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderInputAttachmentArrayNonUniformIndexing,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderUniformTexelBufferArrayNonUniformIndexing,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderStorageTexelBufferArrayNonUniformIndexing,    ,    VkBool32,    0,    ,    ,    false) \
X__(descriptorBindingUniformBufferUpdateAfterBind,    ,    VkBool32,    0,    ,    ,    false) \
X__(descriptorBindingSampledImageUpdateAfterBind,    ,    VkBool32,    0,    ,    ,    false) \
X__(descriptorBindingStorageImageUpdateAfterBind,    ,    VkBool32,    0,    ,    ,    false) \
X__(descriptorBindingStorageBufferUpdateAfterBind,    ,    VkBool32,    0,    ,    ,    false) \
X__(descriptorBindingUniformTexelBufferUpdateAfterBind,    ,    VkBool32,    0,    ,    ,    false) \
X__(descriptorBindingStorageTexelBufferUpdateAfterBind,    ,    VkBool32,    0,    ,    ,    false) \
X__(descriptorBindingUpdateUnusedWhilePending,    ,    VkBool32,    0,    ,    ,    false) \
X__(descriptorBindingPartiallyBound,    ,    VkBool32,    0,    ,    ,    false) \
X__(descriptorBindingVariableDescriptorCount,    ,    VkBool32,    0,    ,    ,    false) \
X__(runtimeDescriptorArray,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(scalarBlockLayout,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShaderDrawParametersFeatures_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(shaderDrawParameters,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceVariablePointersFeatures_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(variablePointersStorageBuffer,    ,    VkBool32,    0,    ,    ,    false) \
X__(variablePointers,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(shaderSMBuiltins,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceConditionalRenderingFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(conditionalRendering,    ,    VkBool32,    0,    ,    ,    false) \
X__(inheritedConditionalRendering,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShaderImageFootprintFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(imageFootprint,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(shaderFloat16,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderInt8,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceInlineUniformBlockFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(inlineUniformBlock,    ,    VkBool32,    0,    ,    ,    false) \
X__(descriptorBindingInlineUniformBlockUpdateAfterBind,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(textureCompressionASTC_HDR,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceASTCDecodeFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(decodeModeSharedExponent,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(bufferDeviceAddress,    ,    VkBool32,    0,    ,    ,    false) \
X__(bufferDeviceAddressCaptureReplay,    ,    VkBool32,    0,    ,    ,    false) \
X__(bufferDeviceAddressMultiDevice,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceLineRasterizationFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(rectangularLines,    ,    VkBool32,    0,    ,    ,    false) \
X__(bresenhamLines,    ,    VkBool32,    0,    ,    ,    false) \
X__(smoothLines,    ,    VkBool32,    0,    ,    ,    false) \
X__(stippledRectangularLines,    ,    VkBool32,    0,    ,    ,    false) \
X__(stippledBresenhamLines,    ,    VkBool32,    0,    ,    ,    false) \
X__(stippledSmoothLines,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pipelineExecutableInfo,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceSamplerYcbcrConversionFeatures_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(samplerYcbcrConversion,    ,    VkBool32,    0,    ,    Sampler color conversion supported,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(fragmentShaderBarycentric,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceCoverageReductionModeFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(coverageReductionMode,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(computeDerivativeGroupQuads,    ,    VkBool32,    0,    ,    ,    false) \
X__(computeDerivativeGroupLinear,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceTransformFeedbackFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(transformFeedback,    ,    VkBool32,    0,    ,    ,    false) \
X__(geometryStreams,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(vulkanMemoryModel,    ,    VkBool32,    0,    ,    ,    false) \
X__(vulkanMemoryModelDeviceScope,    ,    VkBool32,    0,    ,    ,    false) \
X__(vulkanMemoryModelAvailabilityVisibilityChains,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceCoherentMemoryFeaturesAMD_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(deviceCoherentMemory,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceFragmentDensityMapFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(fragmentDensityMap,    ,    VkBool32,    0,    ,    ,    false) \
X__(fragmentDensityMapDynamic,    ,    VkBool32,    0,    ,    ,    false) \
X__(fragmentDensityMapNonSubsampledImages,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(vertexAttributeInstanceRateDivisor,    ,    VkBool32,    0,    ,    ,    false) \
X__(vertexAttributeInstanceRateZeroDivisor,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    Pointer to next structure,    false) \
X__(fragmentShaderSampleInterlock,    ,    VkBool32,    0,    ,    ,    false) \
X__(fragmentShaderPixelInterlock,    ,    VkBool32,    0,    ,    ,    false) \
X__(fragmentShaderShadingRateInterlock,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceMemoryPriorityFeaturesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(memoryPriority,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceFeatures2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(features,    ,    VkPhysicalDeviceFeatures,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCalibratedTimestampInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(timeDomain,    ,    VkTimeDomainEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkObjectTableVertexBufferEntryNVX_members(X__) \
X__(type,    ,    VkObjectEntryTypeNVX,    0,    ,    ,    false) \
X__(flags,    ,    VkObjectEntryUsageFlagsNVX,    0,    ,    ,    false) \
X__(buffer,    ,    VkBuffer,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAllocationCallbacks_members(X__) \
X__(pUserData,    ,    void,    1,    ,    ,    false) \
X__(pfnAllocation,    ,    PFN_vkAllocationFunction,    0,    ,    ,    true) \
X__(pfnReallocation,    ,    PFN_vkReallocationFunction,    0,    ,    ,    true) \
X__(pfnFree,    ,    PFN_vkFreeFunction,    0,    ,    ,    true) \
X__(pfnInternalAllocation,    ,    PFN_vkInternalAllocationNotification,    0,    ,    ,    true) \
X__(pfnInternalFree,    ,    PFN_vkInternalFreeNotification,    0,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkConditionalRenderingBeginInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(buffer,    ,    VkBuffer,    0,    ,    ,    false) \
X__(offset,    ,    VkDeviceSize,    0,    ,    ,    false) \
X__(flags,    ,    VkConditionalRenderingFlagsEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkValidationCacheCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkValidationCacheCreateFlagsEXT,    0,    ,    ,    false) \
X__(initialDataSize,    ,    size_t,    0,    ,    ,    false) \
X__(pInitialData,    initialDataSize,    void,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayPlanePropertiesKHR_members(X__) \
X__(currentDisplay,    ,    VkDisplayKHR,    0,    ,    Display the plane is currently associated with.  Will be VK_NULL_HANDLE if the plane is not in use.,    false) \
X__(currentStackIndex,    ,    uint32_t,    0,    ,    Current z-order of the plane.,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayPlaneProperties2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(displayPlaneProperties,    ,    VkDisplayPlanePropertiesKHR,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorBufferInfo_members(X__) \
X__(buffer,    ,    VkBuffer,    0,    ,    Buffer used for this descriptor slot.,    false) \
X__(offset,    ,    VkDeviceSize,    0,    ,    Base offset from buffer start in bytes to update in the descriptor set.,    false) \
X__(range,    ,    VkDeviceSize,    0,    ,    Size in bytes of the buffer resource for this descriptor update.,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImportMemoryHostPointerInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleType,    ,    VkExternalMemoryHandleTypeFlagBits,    0,    ,    ,    false) \
X__(pHostPointer,    ,    void,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(descriptorSetCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDescriptorCounts,    descriptorSetCount,    uint32_t,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineVertexInputStateCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineVertexInputStateCreateFlags,    0,    ,    ,    false) \
X__(vertexBindingDescriptionCount,    ,    uint32_t,    0,    ,    number of bindings,    false) \
X__(pVertexBindingDescriptions,    vertexBindingDescriptionCount,    VkVertexInputBindingDescription,    1,    ,    ,    false) \
X__(vertexAttributeDescriptionCount,    ,    uint32_t,    0,    ,    number of attributes,    false) \
X__(pVertexAttributeDescriptions,    vertexAttributeDescriptionCount,    VkVertexInputAttributeDescription,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShaderCoreProperties2AMD_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    Pointer to next structure,    false) \
X__(shaderCoreFeatures,    ,    VkShaderCorePropertiesFlagsAMD,    0,    ,    features supported by the shader core,    false) \
X__(activeComputeUnitCount,    ,    uint32_t,    0,    ,    number of active compute units across all shader engines/arrays,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkClearDepthStencilValue_members(X__) \
X__(depth,    ,    float,    0,    ,    ,    false) \
X__(stencil,    ,    uint32_t,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_FUCHSIA)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImagePipeSurfaceCreateInfoFUCHSIA_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkImagePipeSurfaceCreateFlagsFUCHSIA,    0,    ,    ,    false) \
X__(imagePipeHandle,    ,    zx_handle_t,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceMultiviewProperties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxMultiviewViewCount,    ,    uint32_t,    0,    ,    max number of views in a subpass,    false) \
X__(maxMultiviewInstanceIndex,    ,    uint32_t,    0,    ,    max instance index for a draw in a multiview subpass,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceSparseImageFormatInfo2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(format,    ,    VkFormat,    0,    ,    ,    false) \
X__(type,    ,    VkImageType,    0,    ,    ,    false) \
X__(samples,    ,    VkSampleCountFlagBits,    0,    ,    ,    false) \
X__(usage,    ,    VkImageUsageFlags,    0,    ,    ,    false) \
X__(tiling,    ,    VkImageTiling,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkShaderModuleValidationCacheCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(validationCache,    ,    VkValidationCacheEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkShaderModuleCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkShaderModuleCreateFlags,    0,    ,    ,    false) \
X__(codeSize,    ,    size_t,    0,    ,    Specified in bytes,    false) \
X__(pCode,    latexmath:[\textrm{codeSize} \over 4],    uint32_t,    1,    ,    Binary code of size codeSize,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineRasterizationStateStreamCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineRasterizationStateStreamCreateFlagsEXT,    0,    ,    ,    false) \
X__(rasterizationStream,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineRasterizationLineStateCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(lineRasterizationMode,    ,    VkLineRasterizationModeEXT,    0,    ,    ,    false) \
X__(stippledLineEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(lineStippleFactor,    ,    uint32_t,    0,    ,    ,    false) \
X__(lineStipplePattern,    ,    uint16_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineRasterizationConservativeStateCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineRasterizationConservativeStateCreateFlagsEXT,    0,    ,    ,    false) \
X__(conservativeRasterizationMode,    ,    VkConservativeRasterizationModeEXT,    0,    ,    ,    false) \
X__(extraPrimitiveOverestimationSize,    ,    float,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineRasterizationStateCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineRasterizationStateCreateFlags,    0,    ,    ,    false) \
X__(depthClampEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(rasterizerDiscardEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(polygonMode,    ,    VkPolygonMode,    0,    ,    optional (GL45),    false) \
X__(cullMode,    ,    VkCullModeFlags,    0,    ,    ,    false) \
X__(frontFace,    ,    VkFrontFace,    0,    ,    ,    false) \
X__(depthBiasEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(depthBiasConstantFactor,    ,    float,    0,    ,    ,    false) \
X__(depthBiasClamp,    ,    float,    0,    ,    ,    false) \
X__(depthBiasSlopeFactor,    ,    float,    0,    ,    ,    false) \
X__(lineWidth,    ,    float,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceEventInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(deviceEvent,    ,    VkDeviceEventTypeEXT,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExportMemoryWin32HandleInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pAttributes,    ,    SECURITY_ATTRIBUTES,    1,    ,    ,    false) \
X__(dwAccess,    ,    DWORD,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayPropertiesKHR_members(X__) \
X__(display,    ,    VkDisplayKHR,    0,    ,    Handle of the display object,    false) \
X__(displayName,    null-terminated,    char,    1,    ,    Name of the display,    false) \
X__(physicalDimensions,    ,    VkExtent2D,    0,    ,    In millimeters?,    false) \
X__(physicalResolution,    ,    VkExtent2D,    0,    ,    Max resolution for CRT?,    false) \
X__(supportedTransforms,    ,    VkSurfaceTransformFlagsKHR,    0,    ,    one or more bits from VkSurfaceTransformFlagsKHR,    false) \
X__(planeReorderPossible,    ,    VkBool32,    0,    ,    VK_TRUE if the overlay plane`s z-order can be changed on this display.,    false) \
X__(persistentContent,    ,    VkBool32,    0,    ,    VK_TRUE if this is a ``smart`` display that supports self-refresh/internal buffering.,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayProperties2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(displayProperties,    ,    VkDisplayPropertiesKHR,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_METAL_EXT)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMetalSurfaceCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkMetalSurfaceCreateFlagsEXT,    0,    ,    ,    false) \
X__(pLayer,    ,    CAMetalLayer,    1,    ,    ,    true) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDebugUtilsObjectTagInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(objectType,    ,    VkObjectType,    0,    ,    ,    false) \
X__(objectHandle,    ,    uint64_t,    0,    ,    ,    false) \
X__(tagName,    ,    uint64_t,    0,    ,    ,    false) \
X__(tagSize,    ,    size_t,    0,    ,    ,    false) \
X__(pTag,    tagSize,    void,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkIndirectCommandsLayoutTokenNVX_members(X__) \
X__(tokenType,    ,    VkIndirectCommandsTokenTypeNVX,    0,    ,    ,    false) \
X__(bindingUnit,    ,    uint32_t,    0,    ,    Binding unit for vertex attribute / descriptor set  offset for pushconstants,    false) \
X__(dynamicCount,    ,    uint32_t,    0,    ,    Number of variable dynamic values for descriptor set / push constants,    false) \
X__(divisor,    ,    uint32_t,    0,    ,    Rate the which the array is advanced per element (must be power of 2  minimum 1),    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(bindingCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pBindingFlags,    bindingCount,    VkDescriptorBindingFlagsEXT,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceLineRasterizationPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(lineSubPixelPrecisionBits,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceMeshShaderPropertiesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxDrawMeshTasksCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxTaskWorkGroupInvocations,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxTaskWorkGroupSize,    ,    uint32_t,    0,    3,    ,    false) \
X__(maxTaskTotalMemorySize,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxTaskOutputCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxMeshWorkGroupInvocations,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxMeshWorkGroupSize,    ,    uint32_t,    0,    3,    ,    false) \
X__(maxMeshTotalMemorySize,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxMeshOutputVertices,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxMeshOutputPrimitives,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxMeshMultiviewViewCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(meshOutputPerVertexGranularity,    ,    uint32_t,    0,    ,    ,    false) \
X__(meshOutputPerPrimitiveGranularity,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceSparseProperties_members(X__) \
X__(residencyStandard2DBlockShape,    ,    VkBool32,    0,    ,    Sparse resources support: GPU will access all 2D (single sample) sparse resources using the standard sparse image block shapes (based on pixel format),    false) \
X__(residencyStandard2DMultisampleBlockShape,    ,    VkBool32,    0,    ,    Sparse resources support: GPU will access all 2D (multisample) sparse resources using the standard sparse image block shapes (based on pixel format),    false) \
X__(residencyStandard3DBlockShape,    ,    VkBool32,    0,    ,    Sparse resources support: GPU will access all 3D sparse resources using the standard sparse image block shapes (based on pixel format),    false) \
X__(residencyAlignedMipSize,    ,    VkBool32,    0,    ,    Sparse resources support: Images with mip level dimensions that are NOT a multiple of the sparse image block dimensions will be placed in the mip tail,    false) \
X__(residencyNonResidentStrict,    ,    VkBool32,    0,    ,    Sparse resources support: GPU can consistently access non-resident regions of a resource  all reads return as if data is 0  writes are discarded,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceProperties_members(X__) \
X__(apiVersion,    ,    uint32_t,    0,    ,    ,    false) \
X__(driverVersion,    ,    uint32_t,    0,    ,    ,    false) \
X__(vendorID,    ,    uint32_t,    0,    ,    ,    false) \
X__(deviceID,    ,    uint32_t,    0,    ,    ,    false) \
X__(deviceType,    ,    VkPhysicalDeviceType,    0,    ,    ,    false) \
X__(deviceName,    ,    char,    0,    VK_MAX_PHYSICAL_DEVICE_NAME_SIZE,    ,    false) \
X__(pipelineCacheUUID,    ,    uint8_t,    0,    VK_UUID_SIZE,    ,    false) \
X__(limits,    ,    VkPhysicalDeviceLimits,    0,    ,    ,    false) \
X__(sparseProperties,    ,    VkPhysicalDeviceSparseProperties,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExternalFenceProperties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(exportFromImportedHandleTypes,    ,    VkExternalFenceHandleTypeFlags,    0,    ,    ,    false) \
X__(compatibleHandleTypes,    ,    VkExternalFenceHandleTypeFlags,    0,    ,    ,    false) \
X__(externalFenceFeatures,    ,    VkExternalFenceFeatureFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkIndirectCommandsLayoutCreateInfoNVX_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pipelineBindPoint,    ,    VkPipelineBindPoint,    0,    ,    ,    false) \
X__(flags,    ,    VkIndirectCommandsLayoutUsageFlagsNVX,    0,    ,    ,    false) \
X__(tokenCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pTokens,    tokenCount,    VkIndirectCommandsLayoutTokenNVX,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBufferViewCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkBufferViewCreateFlags,    0,    ,    ,    false) \
X__(buffer,    ,    VkBuffer,    0,    ,    ,    false) \
X__(format,    ,    VkFormat,    0,    ,    Optionally specifies format of elements,    false) \
X__(offset,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(range,    ,    VkDeviceSize,    0,    ,    View size specified in bytes,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSamplerReductionModeCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(reductionMode,    ,    VkSamplerReductionModeEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExternalImageFormatPropertiesNV_members(X__) \
X__(imageFormatProperties,    ,    VkImageFormatProperties,    0,    ,    ,    false) \
X__(externalMemoryFeatures,    ,    VkExternalMemoryFeatureFlagsNV,    0,    ,    ,    false) \
X__(exportFromImportedHandleTypes,    ,    VkExternalMemoryHandleTypeFlagsNV,    0,    ,    ,    false) \
X__(compatibleHandleTypes,    ,    VkExternalMemoryHandleTypeFlagsNV,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceIDProperties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(deviceUUID,    ,    uint8_t,    0,    VK_UUID_SIZE,    ,    false) \
X__(driverUUID,    ,    uint8_t,    0,    VK_UUID_SIZE,    ,    false) \
X__(deviceLUID,    ,    uint8_t,    0,    VK_LUID_SIZE,    ,    false) \
X__(deviceNodeMask,    ,    uint32_t,    0,    ,    ,    false) \
X__(deviceLUIDValid,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkQueryPoolCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkQueryPoolCreateFlags,    0,    ,    ,    false) \
X__(queryType,    ,    VkQueryType,    0,    ,    ,    false) \
X__(queryCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pipelineStatistics,    ,    VkQueryPipelineStatisticFlags,    0,    ,    Optional,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineSampleLocationsStateCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(sampleLocationsEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(sampleLocationsInfo,    ,    VkSampleLocationsInfoEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineCoverageToColorStateCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineCoverageToColorStateCreateFlagsNV,    0,    ,    ,    false) \
X__(coverageToColorEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(coverageToColorLocation,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineCoverageReductionStateCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineCoverageReductionStateCreateFlagsNV,    0,    ,    ,    false) \
X__(coverageReductionMode,    ,    VkCoverageReductionModeNV,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineMultisampleStateCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineMultisampleStateCreateFlags,    0,    ,    ,    false) \
X__(rasterizationSamples,    ,    VkSampleCountFlagBits,    0,    ,    Number of samples used for rasterization,    false) \
X__(sampleShadingEnable,    ,    VkBool32,    0,    ,    optional (GL45),    false) \
X__(minSampleShading,    ,    float,    0,    ,    optional (GL45),    false) \
X__(pSampleMask,    latexmath:[\lceil{\mathit{rasterizationSamples} \over 32}\rceil],    VkSampleMask,    1,    ,    Array of sampleMask words,    false) \
X__(alphaToCoverageEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(alphaToOneEnable,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxVertexAttribDivisor,    ,    uint32_t,    0,    ,    max value of vertex attribute divisor,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPastPresentationTimingGOOGLE_members(X__) \
X__(presentID,    ,    uint32_t,    0,    ,    Application-provided identifier  previously given to vkQueuePresentKHR,    false) \
X__(desiredPresentTime,    ,    uint64_t,    0,    ,    Earliest time an image should have been presented  previously given to vkQueuePresentKHR,    false) \
X__(actualPresentTime,    ,    uint64_t,    0,    ,    Time the image was actually displayed,    false) \
X__(earliestPresentTime,    ,    uint64_t,    0,    ,    Earliest time the image could have been displayed,    false) \
X__(presentMargin,    ,    uint64_t,    0,    ,    How early vkQueuePresentKHR was processed vs. how soon it needed to be and make earliestPresentTime,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPushConstantRange_members(X__) \
X__(stageFlags,    ,    VkShaderStageFlags,    0,    ,    Which stages use the range,    false) \
X__(offset,    ,    uint32_t,    0,    ,    Start of the range  in bytes,    false) \
X__(size,    ,    uint32_t,    0,    ,    Size of the range  in bytes,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineLayoutCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineLayoutCreateFlags,    0,    ,    ,    false) \
X__(setLayoutCount,    ,    uint32_t,    0,    ,    Number of descriptor sets interfaced by the pipeline,    false) \
X__(pSetLayouts,    setLayoutCount,    VkDescriptorSetLayout,    1,    ,    Array of setCount number of descriptor set layout objects defining the layout of the,    false) \
X__(pushConstantRangeCount,    ,    uint32_t,    0,    ,    Number of push-constant ranges used by the pipeline,    false) \
X__(pPushConstantRanges,    pushConstantRangeCount,    VkPushConstantRange,    1,    ,    Array of pushConstantRangeCount number of ranges used by various shader stages,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSubpassBeginInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(contents,    ,    VkSubpassContents,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkStencilOpState_members(X__) \
X__(failOp,    ,    VkStencilOp,    0,    ,    ,    false) \
X__(passOp,    ,    VkStencilOp,    0,    ,    ,    false) \
X__(depthFailOp,    ,    VkStencilOp,    0,    ,    ,    false) \
X__(compareOp,    ,    VkCompareOp,    0,    ,    ,    false) \
X__(compareMask,    ,    uint32_t,    0,    ,    ,    false) \
X__(writeMask,    ,    uint32_t,    0,    ,    ,    false) \
X__(reference,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineDepthStencilStateCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineDepthStencilStateCreateFlags,    0,    ,    ,    false) \
X__(depthTestEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(depthWriteEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(depthCompareOp,    ,    VkCompareOp,    0,    ,    ,    false) \
X__(depthBoundsTestEnable,    ,    VkBool32,    0,    ,    optional (depth_bounds_test),    false) \
X__(stencilTestEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(front,    ,    VkStencilOpState,    0,    ,    ,    false) \
X__(back,    ,    VkStencilOpState,    0,    ,    ,    false) \
X__(minDepthBounds,    ,    float,    0,    ,    ,    false) \
X__(maxDepthBounds,    ,    float,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRenderPassFragmentDensityMapCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(fragmentDensityMapAttachment,    ,    VkAttachmentReference,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageViewUsageCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(usage,    ,    VkImageUsageFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageViewASTCDecodeModeEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(decodeMode,    ,    VkFormat,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageViewCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkImageViewCreateFlags,    0,    ,    ,    false) \
X__(image,    ,    VkImage,    0,    ,    ,    false) \
X__(viewType,    ,    VkImageViewType,    0,    ,    ,    false) \
X__(format,    ,    VkFormat,    0,    ,    ,    false) \
X__(components,    ,    VkComponentMapping,    0,    ,    ,    false) \
X__(subresourceRange,    ,    VkImageSubresourceRange,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceImageDrmFormatModifierInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(drmFormatModifier,    ,    uint64_t,    0,    ,    ,    false) \
X__(sharingMode,    ,    VkSharingMode,    0,    ,    ,    false) \
X__(queueFamilyIndexCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pQueueFamilyIndices,    queueFamilyIndexCount,    uint32_t,    1,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDebugUtilsLabelEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pLabelName,    null-terminated,    char,    1,    ,    ,    false) \
X__(color,    ,    float,    0,    4,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkWin32SurfaceCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkWin32SurfaceCreateFlagsKHR,    0,    ,    ,    false) \
X__(hinstance,    ,    HINSTANCE,    0,    ,    ,    false) \
X__(hwnd,    ,    HWND,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkInitializePerformanceApiInfoINTEL_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pUserData,    ,    void,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pipeline,    ,    VkPipeline,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineCacheCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineCacheCreateFlags,    0,    ,    ,    false) \
X__(initialDataSize,    ,    size_t,    0,    ,    Size of initial data to populate cache  in bytes,    false) \
X__(pInitialData,    initialDataSize,    void,    1,    ,    Initial data to populate cache,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkClearRect_members(X__) \
X__(rect,    ,    VkRect2D,    0,    ,    ,    false) \
X__(baseArrayLayer,    ,    uint32_t,    0,    ,    ,    false) \
X__(layerCount,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceGroupSwapchainCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(modes,    ,    VkDeviceGroupPresentModeFlagsKHR,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAttachmentDescription2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(flags,    ,    VkAttachmentDescriptionFlags,    0,    ,    ,    false) \
X__(format,    ,    VkFormat,    0,    ,    ,    false) \
X__(samples,    ,    VkSampleCountFlagBits,    0,    ,    ,    false) \
X__(loadOp,    ,    VkAttachmentLoadOp,    0,    ,    Load operation for color or depth data,    false) \
X__(storeOp,    ,    VkAttachmentStoreOp,    0,    ,    Store operation for color or depth data,    false) \
X__(stencilLoadOp,    ,    VkAttachmentLoadOp,    0,    ,    Load operation for stencil data,    false) \
X__(stencilStoreOp,    ,    VkAttachmentStoreOp,    0,    ,    Store operation for stencil data,    false) \
X__(initialLayout,    ,    VkImageLayout,    0,    ,    ,    false) \
X__(finalLayout,    ,    VkImageLayout,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorSetLayoutBinding_members(X__) \
X__(binding,    ,    uint32_t,    0,    ,    Binding number for this entry,    false) \
X__(descriptorType,    ,    VkDescriptorType,    0,    ,    Type of the descriptors in this binding,    false) \
X__(descriptorCount,    ,    uint32_t,    0,    ,    Number of descriptors in this binding,    false) \
X__(stageFlags,    ,    VkShaderStageFlags,    0,    ,    Shader stages this binding is visible to,    true) \
X__(pImmutableSamplers,    descriptorCount,    VkSampler,    1,    ,    Immutable samplers (used if descriptor type is SAMPLER or COMBINED_IMAGE_SAMPLER  is either NULL or contains count number of elements),    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayPlaneCapabilities2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(capabilities,    ,    VkDisplayPlaneCapabilitiesKHR,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRenderPassSampleLocationsBeginInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(attachmentInitialSampleLocationsCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pAttachmentInitialSampleLocations,    attachmentInitialSampleLocationsCount,    VkAttachmentSampleLocationsEXT,    1,    ,    ,    false) \
X__(postSubpassSampleLocationsCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pPostSubpassSampleLocations,    postSubpassSampleLocationsCount,    VkSubpassSampleLocationsEXT,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSparseImageOpaqueMemoryBindInfo_members(X__) \
X__(image,    ,    VkImage,    0,    ,    ,    false) \
X__(bindCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pBinds,    bindCount,    VkSparseMemoryBind,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayModePropertiesKHR_members(X__) \
X__(displayMode,    ,    VkDisplayModeKHR,    0,    ,    Handle of this display mode.,    false) \
X__(parameters,    ,    VkDisplayModeParametersKHR,    0,    ,    The parameters this mode uses.,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineRepresentativeFragmentTestStateCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(representativeFragmentTestEnable,    ,    VkBool32,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSurfaceFullScreenExclusiveWin32InfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(hmonitor,    ,    HMONITOR,    0,    ,    ,    false) \

# endif

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSurfaceFullScreenExclusiveInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(fullScreenExclusive,    ,    VkFullScreenExclusiveEXT,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSwapchainCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkSwapchainCreateFlagsKHR,    0,    ,    ,    false) \
X__(surface,    ,    VkSurfaceKHR,    0,    ,    The swapchain`s target surface,    false) \
X__(minImageCount,    ,    uint32_t,    0,    ,    Minimum number of presentation images the application needs,    false) \
X__(imageFormat,    ,    VkFormat,    0,    ,    Format of the presentation images,    false) \
X__(imageColorSpace,    ,    VkColorSpaceKHR,    0,    ,    Colorspace of the presentation images,    false) \
X__(imageExtent,    ,    VkExtent2D,    0,    ,    Dimensions of the presentation images,    false) \
X__(imageArrayLayers,    ,    uint32_t,    0,    ,    Determines the number of views for multiview/stereo presentation,    false) \
X__(imageUsage,    ,    VkImageUsageFlags,    0,    ,    Bits indicating how the presentation images will be used,    false) \
X__(imageSharingMode,    ,    VkSharingMode,    0,    ,    Sharing mode used for the presentation images,    false) \
X__(queueFamilyIndexCount,    ,    uint32_t,    0,    ,    Number of queue families having access to the images in case of concurrent sharing mode,    false) \
X__(pQueueFamilyIndices,    queueFamilyIndexCount,    uint32_t,    1,    ,    Array of queue family indices having access to the images in case of concurrent sharing mode,    true) \
X__(preTransform,    ,    VkSurfaceTransformFlagBitsKHR,    0,    ,    The transform  relative to the device`s natural orientation  applied to the image content prior to presentation,    false) \
X__(compositeAlpha,    ,    VkCompositeAlphaFlagBitsKHR,    0,    ,    The alpha blending mode used when compositing this surface with other surfaces in the window system,    false) \
X__(presentMode,    ,    VkPresentModeKHR,    0,    ,    Which presentation mode to use for presents on this swap chain,    false) \
X__(clipped,    ,    VkBool32,    0,    ,    Specifies whether presentable images may be affected by window clip regions,    false) \
X__(oldSwapchain,    ,    VkSwapchainKHR,    0,    ,    Existing swap chain to replace  if any,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkObjectTableCreateInfoNVX_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(objectCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pObjectEntryTypes,    objectCount,    VkObjectEntryTypeNVX,    1,    ,    ,    false) \
X__(pObjectEntryCounts,    objectCount,    uint32_t,    1,    ,    ,    false) \
X__(pObjectEntryUsageFlags,    objectCount,    VkObjectEntryUsageFlagsNVX,    1,    ,    ,    false) \
X__(maxUniformBuffersPerDescriptor,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxStorageBuffersPerDescriptor,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxStorageImagesPerDescriptor,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxSampledImagesPerDescriptor,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxPipelineLayouts,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSubpassDependency_members(X__) \
X__(srcSubpass,    ,    uint32_t,    0,    ,    ,    false) \
X__(dstSubpass,    ,    uint32_t,    0,    ,    ,    false) \
X__(srcStageMask,    ,    VkPipelineStageFlags,    0,    ,    ,    false) \
X__(dstStageMask,    ,    VkPipelineStageFlags,    0,    ,    ,    false) \
X__(srcAccessMask,    ,    VkAccessFlags,    0,    ,    Memory accesses from the source of the dependency to synchronize,    false) \
X__(dstAccessMask,    ,    VkAccessFlags,    0,    ,    Memory accesses from the destination of the dependency to synchronize,    false) \
X__(dependencyFlags,    ,    VkDependencyFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRenderPassMultiviewCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(subpassCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pViewMasks,    subpassCount,    uint32_t,    1,    ,    ,    false) \
X__(dependencyCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pViewOffsets,    dependencyCount,    int32_t,    1,    ,    ,    false) \
X__(correlationMaskCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pCorrelationMasks,    correlationMaskCount,    uint32_t,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAcquireNextImageInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(swapchain,    ,    VkSwapchainKHR,    0,    ,    ,    false) \
X__(timeout,    ,    uint64_t,    0,    ,    ,    false) \
X__(semaphore,    ,    VkSemaphore,    0,    ,    ,    false) \
X__(fence,    ,    VkFence,    0,    ,    ,    false) \
X__(deviceMask,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkQueryPoolCreateInfoINTEL_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(performanceCountersSampling,    ,    VkQueryPoolSamplingModeINTEL,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkXYColorEXT_members(X__) \
X__(x,    ,    float,    0,    ,    ,    false) \
X__(y,    ,    float,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkHdrMetadataEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(displayPrimaryRed,    ,    VkXYColorEXT,    0,    ,    Display primary`s Red,    true) \
X__(displayPrimaryGreen,    ,    VkXYColorEXT,    0,    ,    Display primary`s Green,    true) \
X__(displayPrimaryBlue,    ,    VkXYColorEXT,    0,    ,    Display primary`s Blue,    true) \
X__(whitePoint,    ,    VkXYColorEXT,    0,    ,    Display primary`s Blue,    true) \
X__(maxLuminance,    ,    float,    0,    ,    Display maximum luminance,    true) \
X__(minLuminance,    ,    float,    0,    ,    Display minimum luminance,    true) \
X__(maxContentLightLevel,    ,    float,    0,    ,    Content maximum luminance,    true) \
X__(maxFrameAverageLightLevel,    ,    float,    0,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxVariableDescriptorCount,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorSetLayoutSupport_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(supported,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceInlineUniformBlockPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxInlineUniformBlockSize,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxPerStageDescriptorInlineUniformBlocks,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxDescriptorSetInlineUniformBlocks,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxDescriptorSetUpdateAfterBindInlineUniformBlocks,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDrawIndexedIndirectCommand_members(X__) \
X__(indexCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(instanceCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(firstIndex,    ,    uint32_t,    0,    ,    ,    false) \
X__(vertexOffset,    ,    int32_t,    0,    ,    ,    false) \
X__(firstInstance,    ,    uint32_t,    0,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkFenceGetFdInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(fence,    ,    VkFence,    0,    ,    ,    false) \
X__(handleType,    ,    VkExternalFenceHandleTypeFlagBits,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExportFenceWin32HandleInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pAttributes,    ,    SECURITY_ATTRIBUTES,    1,    ,    ,    false) \
X__(dwAccess,    ,    DWORD,    0,    ,    ,    false) \
X__(name,    ,    LPCWSTR,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineExecutableInternalRepresentationKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(name,    ,    char,    0,    VK_MAX_DESCRIPTION_SIZE,    ,    false) \
X__(description,    ,    char,    0,    VK_MAX_DESCRIPTION_SIZE,    ,    false) \
X__(isText,    ,    VkBool32,    0,    ,    ,    false) \
X__(dataSize,    ,    size_t,    0,    ,    ,    false) \
X__(pData,    dataSize,    void,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRenderPassAttachmentBeginInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(attachmentCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pAttachments,    attachmentCount,    VkImageView,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceMaintenance3Properties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxPerSetDescriptors,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxMemoryAllocationSize,    ,    VkDeviceSize,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSwapchainImageCreateInfoANDROID_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(usage,    ,    VkSwapchainImageUsageFlagsANDROID,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkClearAttachment_members(X__) \
X__(aspectMask,    ,    VkImageAspectFlags,    0,    ,    ,    false) \
X__(colorAttachment,    ,    uint32_t,    0,    ,    ,    false) \
X__(clearValue,    ,    VkClearValue,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImportMemoryWin32HandleInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleType,    ,    VkExternalMemoryHandleTypeFlagsNV,    0,    ,    ,    false) \
X__(handle,    ,    HANDLE,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceImageFormatInfo2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(format,    ,    VkFormat,    0,    ,    ,    false) \
X__(type,    ,    VkImageType,    0,    ,    ,    false) \
X__(tiling,    ,    VkImageTiling,    0,    ,    ,    false) \
X__(usage,    ,    VkImageUsageFlags,    0,    ,    ,    false) \
X__(flags,    ,    VkImageCreateFlags,    0,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImportFenceWin32HandleInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(fence,    ,    VkFence,    0,    ,    ,    false) \
X__(flags,    ,    VkFenceImportFlags,    0,    ,    ,    false) \
X__(handleType,    ,    VkExternalFenceHandleTypeFlagBits,    0,    ,    ,    false) \
X__(handle,    ,    HANDLE,    0,    ,    ,    false) \
X__(name,    ,    LPCWSTR,    0,    ,    ,    false) \

# endif

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkNativeBufferUsage2ANDROID_members(X__) \
X__(consumer,    ,    uint64_t,    0,    ,    ,    false) \
X__(producer,    ,    uint64_t,    0,    ,    ,    false) \

# endif

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkNativeBufferANDROID_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handle,    ,    void,    1,    ,    ,    false) \
X__(stride,    ,    int,    0,    ,    ,    false) \
X__(format,    ,    int,    0,    ,    ,    false) \
X__(usage,    ,    int,    0,    ,    ,    false) \
X__(usage2,    ,    VkNativeBufferUsage2ANDROID,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExportFenceCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleTypes,    ,    VkExternalFenceHandleTypeFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDevicePointClippingProperties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pointClippingBehavior,    ,    VkPointClippingBehavior,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(shaderSMCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(shaderWarpsPerSM,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceExternalMemoryHostPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(minImportedHostPointerAlignment,    ,    VkDeviceSize,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceDepthStencilResolvePropertiesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(supportedDepthResolveModes,    ,    VkResolveModeFlagsKHR,    0,    ,    supported depth resolve modes,    false) \
X__(supportedStencilResolveModes,    ,    VkResolveModeFlagsKHR,    0,    ,    supported stencil resolve modes,    false) \
X__(independentResolveNone,    ,    VkBool32,    0,    ,    depth and stencil resolve modes can be set independently if one of them is none,    false) \
X__(independentResolve,    ,    VkBool32,    0,    ,    depth and stencil resolve modes can be set independently,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceTransformFeedbackPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxTransformFeedbackStreams,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxTransformFeedbackBuffers,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxTransformFeedbackBufferSize,    ,    VkDeviceSize,    0,    ,    ,    false) \
X__(maxTransformFeedbackStreamDataSize,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxTransformFeedbackBufferDataSize,    ,    uint32_t,    0,    ,    ,    false) \
X__(maxTransformFeedbackBufferDataStride,    ,    uint32_t,    0,    ,    ,    false) \
X__(transformFeedbackQueries,    ,    VkBool32,    0,    ,    ,    false) \
X__(transformFeedbackStreamsLinesTriangles,    ,    VkBool32,    0,    ,    ,    false) \
X__(transformFeedbackRasterizationStreamSelect,    ,    VkBool32,    0,    ,    ,    false) \
X__(transformFeedbackDraw,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceProtectedMemoryProperties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(protectedNoFault,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(perViewPositionAllComponents,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceConservativeRasterizationPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    Pointer to next structure,    false) \
X__(primitiveOverestimationSize,    ,    float,    0,    ,    The size in pixels the primitive is enlarged at each edge during conservative rasterization,    false) \
X__(maxExtraPrimitiveOverestimationSize,    ,    float,    0,    ,    The maximum additional overestimation the client can specify in the pipeline state,    false) \
X__(extraPrimitiveOverestimationSizeGranularity,    ,    float,    0,    ,    The granularity of extra overestimation sizes the implementations supports between 0 and maxExtraOverestimationSize,    false) \
X__(primitiveUnderestimation,    ,    VkBool32,    0,    ,    true if the implementation supports conservative rasterization underestimation mode,    false) \
X__(conservativePointAndLineRasterization,    ,    VkBool32,    0,    ,    true if conservative rasterization also applies to points and lines,    false) \
X__(degenerateTrianglesRasterized,    ,    VkBool32,    0,    ,    true if degenerate triangles (those with zero area after snap) are rasterized,    false) \
X__(degenerateLinesRasterized,    ,    VkBool32,    0,    ,    true if degenerate lines (those with zero length after snap) are rasterized,    false) \
X__(fullyCoveredFragmentShaderInputVariable,    ,    VkBool32,    0,    ,    true if the implementation supports the FullyCoveredEXT SPIR-V builtin fragment shader input variable,    false) \
X__(conservativeRasterizationPostDepthCoverage,    ,    VkBool32,    0,    ,    true if the implementation supports both conservative rasterization and post depth coverage sample coverage mask,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(storageTexelBufferOffsetAlignmentBytes,    ,    VkDeviceSize,    0,    ,    ,    false) \
X__(storageTexelBufferOffsetSingleTexelAlignment,    ,    VkBool32,    0,    ,    ,    false) \
X__(uniformTexelBufferOffsetAlignmentBytes,    ,    VkDeviceSize,    0,    ,    ,    false) \
X__(uniformTexelBufferOffsetSingleTexelAlignment,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDevicePushDescriptorPropertiesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(maxPushDescriptors,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceFloatControlsPropertiesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(denormBehaviorIndependence,    ,    VkShaderFloatControlsIndependenceKHR,    0,    ,    ,    false) \
X__(roundingModeIndependence,    ,    VkShaderFloatControlsIndependenceKHR,    0,    ,    ,    false) \
X__(shaderSignedZeroInfNanPreserveFloat16,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderSignedZeroInfNanPreserveFloat32,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderSignedZeroInfNanPreserveFloat64,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderDenormPreserveFloat16,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderDenormPreserveFloat32,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderDenormPreserveFloat64,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderDenormFlushToZeroFloat16,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderDenormFlushToZeroFloat32,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderDenormFlushToZeroFloat64,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderRoundingModeRTEFloat16,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderRoundingModeRTEFloat32,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderRoundingModeRTEFloat64,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderRoundingModeRTZFloat16,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderRoundingModeRTZFloat32,    ,    VkBool32,    0,    ,    ,    false) \
X__(shaderRoundingModeRTZFloat64,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceFragmentDensityMapPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(minFragmentDensityTexelSize,    ,    VkExtent2D,    0,    ,    ,    false) \
X__(maxFragmentDensityTexelSize,    ,    VkExtent2D,    0,    ,    ,    false) \
X__(fragmentDensityInvocations,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceProperties2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(properties,    ,    VkPhysicalDeviceProperties,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSubpassDependency2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    true) \
X__(srcSubpass,    ,    uint32_t,    0,    ,    ,    false) \
X__(dstSubpass,    ,    uint32_t,    0,    ,    ,    false) \
X__(srcStageMask,    ,    VkPipelineStageFlags,    0,    ,    ,    false) \
X__(dstStageMask,    ,    VkPipelineStageFlags,    0,    ,    ,    false) \
X__(srcAccessMask,    ,    VkAccessFlags,    0,    ,    ,    false) \
X__(dstAccessMask,    ,    VkAccessFlags,    0,    ,    ,    false) \
X__(dependencyFlags,    ,    VkDependencyFlags,    0,    ,    ,    false) \
X__(viewOffset,    ,    int32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRenderPassCreateInfo2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkRenderPassCreateFlags,    0,    ,    ,    true) \
X__(attachmentCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pAttachments,    attachmentCount,    VkAttachmentDescription2KHR,    1,    ,    ,    false) \
X__(subpassCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pSubpasses,    subpassCount,    VkSubpassDescription2KHR,    1,    ,    ,    false) \
X__(dependencyCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDependencies,    dependencyCount,    VkSubpassDependency2KHR,    1,    ,    ,    false) \
X__(correlatedViewMaskCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pCorrelatedViewMasks,    correlatedViewMaskCount,    uint32_t,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineCompilerControlCreateInfoAMD_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(compilerControlFlags,    ,    VkPipelineCompilerControlFlagsAMD,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkQueueFamilyProperties_members(X__) \
X__(queueFlags,    ,    VkQueueFlags,    0,    ,    Queue flags,    false) \
X__(queueCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(timestampValidBits,    ,    uint32_t,    0,    ,    ,    false) \
X__(minImageTransferGranularity,    ,    VkExtent3D,    0,    ,    Minimum alignment requirement for image transfers,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkQueueFamilyCheckpointPropertiesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(checkpointExecutionStageMask,    ,    VkPipelineStageFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkQueueFamilyProperties2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(queueFamilyProperties,    ,    VkQueueFamilyProperties,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSamplerYcbcrConversionCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(format,    ,    VkFormat,    0,    ,    ,    false) \
X__(ycbcrModel,    ,    VkSamplerYcbcrModelConversion,    0,    ,    ,    false) \
X__(ycbcrRange,    ,    VkSamplerYcbcrRange,    0,    ,    ,    false) \
X__(components,    ,    VkComponentMapping,    0,    ,    ,    false) \
X__(xChromaOffset,    ,    VkChromaLocation,    0,    ,    ,    false) \
X__(yChromaOffset,    ,    VkChromaLocation,    0,    ,    ,    false) \
X__(chromaFilter,    ,    VkFilter,    0,    ,    ,    false) \
X__(forceExplicitReconstruction,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSparseImageMemoryRequirements_members(X__) \
X__(formatProperties,    ,    VkSparseImageFormatProperties,    0,    ,    ,    false) \
X__(imageMipTailFirstLod,    ,    uint32_t,    0,    ,    ,    false) \
X__(imageMipTailSize,    ,    VkDeviceSize,    0,    ,    Specified in bytes  must be a multiple of sparse block size in bytes / alignment,    false) \
X__(imageMipTailOffset,    ,    VkDeviceSize,    0,    ,    Specified in bytes  must be a multiple of sparse block size in bytes / alignment,    false) \
X__(imageMipTailStride,    ,    VkDeviceSize,    0,    ,    Specified in bytes  must be a multiple of sparse block size in bytes / alignment,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkWriteDescriptorSetInlineUniformBlockEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(dataSize,    ,    uint32_t,    0,    ,    ,    false) \
X__(pData,    dataSize,    void,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExportMemoryAllocateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleTypes,    ,    VkExternalMemoryHandleTypeFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineInputAssemblyStateCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineInputAssemblyStateCreateFlags,    0,    ,    ,    false) \
X__(topology,    ,    VkPrimitiveTopology,    0,    ,    ,    false) \
X__(primitiveRestartEnable,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkGraphicsPipelineCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineCreateFlags,    0,    ,    Pipeline creation flags,    false) \
X__(stageCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pStages,    stageCount,    VkPipelineShaderStageCreateInfo,    1,    ,    One entry for each active shader stage,    false) \
X__(pVertexInputState,    ,    VkPipelineVertexInputStateCreateInfo,    1,    ,    ,    true) \
X__(pInputAssemblyState,    ,    VkPipelineInputAssemblyStateCreateInfo,    1,    ,    ,    true) \
X__(pTessellationState,    ,    VkPipelineTessellationStateCreateInfo,    1,    ,    ,    true) \
X__(pViewportState,    ,    VkPipelineViewportStateCreateInfo,    1,    ,    ,    true) \
X__(pRasterizationState,    ,    VkPipelineRasterizationStateCreateInfo,    1,    ,    ,    false) \
X__(pMultisampleState,    ,    VkPipelineMultisampleStateCreateInfo,    1,    ,    ,    true) \
X__(pDepthStencilState,    ,    VkPipelineDepthStencilStateCreateInfo,    1,    ,    ,    true) \
X__(pColorBlendState,    ,    VkPipelineColorBlendStateCreateInfo,    1,    ,    ,    true) \
X__(pDynamicState,    ,    VkPipelineDynamicStateCreateInfo,    1,    ,    ,    false) \
X__(layout,    ,    VkPipelineLayout,    0,    ,    Interface layout of the pipeline,    false) \
X__(renderPass,    ,    VkRenderPass,    0,    ,    ,    false) \
X__(subpass,    ,    uint32_t,    0,    ,    ,    false) \
X__(basePipelineHandle,    ,    VkPipeline,    0,    ,    If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is nonzero  it specifies the handle of the base pipeline this is a derivative of,    true) \
X__(basePipelineIndex,    ,    int32_t,    0,    ,    If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is not -1  it specifies an index into pCreateInfos of the base pipeline this is a derivative of,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSemaphoreGetFdInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(semaphore,    ,    VkSemaphore,    0,    ,    ,    false) \
X__(handleType,    ,    VkExternalSemaphoreHandleTypeFlagBits,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExportMemoryAllocateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleTypes,    ,    VkExternalMemoryHandleTypeFlagsNV,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExternalBufferProperties_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(externalMemoryProperties,    ,    VkExternalMemoryProperties,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkObjectTableDescriptorSetEntryNVX_members(X__) \
X__(type,    ,    VkObjectEntryTypeNVX,    0,    ,    ,    false) \
X__(flags,    ,    VkObjectEntryUsageFlagsNVX,    0,    ,    ,    false) \
X__(pipelineLayout,    ,    VkPipelineLayout,    0,    ,    ,    false) \
X__(descriptorSet,    ,    VkDescriptorSet,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceExternalBufferInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkBufferCreateFlags,    0,    ,    ,    false) \
X__(usage,    ,    VkBufferUsageFlags,    0,    ,    ,    false) \
X__(handleType,    ,    VkExternalMemoryHandleTypeFlagBits,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSamplerCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkSamplerCreateFlags,    0,    ,    ,    false) \
X__(magFilter,    ,    VkFilter,    0,    ,    Filter mode for magnification,    false) \
X__(minFilter,    ,    VkFilter,    0,    ,    Filter mode for minifiation,    false) \
X__(mipmapMode,    ,    VkSamplerMipmapMode,    0,    ,    Mipmap selection mode,    false) \
X__(addressModeU,    ,    VkSamplerAddressMode,    0,    ,    ,    false) \
X__(addressModeV,    ,    VkSamplerAddressMode,    0,    ,    ,    false) \
X__(addressModeW,    ,    VkSamplerAddressMode,    0,    ,    ,    false) \
X__(mipLodBias,    ,    float,    0,    ,    ,    false) \
X__(anisotropyEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(maxAnisotropy,    ,    float,    0,    ,    ,    false) \
X__(compareEnable,    ,    VkBool32,    0,    ,    ,    false) \
X__(compareOp,    ,    VkCompareOp,    0,    ,    ,    true) \
X__(minLod,    ,    float,    0,    ,    ,    false) \
X__(maxLod,    ,    float,    0,    ,    ,    false) \
X__(borderColor,    ,    VkBorderColor,    0,    ,    ,    true) \
X__(unnormalizedCoordinates,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageCopy_members(X__) \
X__(srcSubresource,    ,    VkImageSubresourceLayers,    0,    ,    ,    false) \
X__(srcOffset,    ,    VkOffset3D,    0,    ,    Specified in pixels for both compressed and uncompressed images,    false) \
X__(dstSubresource,    ,    VkImageSubresourceLayers,    0,    ,    ,    false) \
X__(dstOffset,    ,    VkOffset3D,    0,    ,    Specified in pixels for both compressed and uncompressed images,    false) \
X__(extent,    ,    VkExtent3D,    0,    ,    Specified in pixels for both compressed and uncompressed images,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDebugMarkerObjectNameInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(objectType,    ,    VkDebugReportObjectTypeEXT,    0,    ,    The type of the object,    false) \
X__(object,    ,    uint64_t,    0,    ,    The handle of the object  cast to uint64_t,    false) \
X__(pObjectName,    null-terminated,    char,    1,    ,    Name to apply to the object,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkObjectTableEntryNVX_members(X__) \
X__(type,    ,    VkObjectEntryTypeNVX,    0,    ,    ,    false) \
X__(flags,    ,    VkObjectEntryUsageFlagsNVX,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDedicatedAllocationBufferCreateInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(dedicatedAllocation,    ,    VkBool32,    0,    ,    Whether this buffer uses a dedicated allocation,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBufferCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkBufferCreateFlags,    0,    ,    Buffer creation flags,    false) \
X__(size,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(usage,    ,    VkBufferUsageFlags,    0,    ,    Buffer usage flags,    false) \
X__(sharingMode,    ,    VkSharingMode,    0,    ,    ,    false) \
X__(queueFamilyIndexCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pQueueFamilyIndices,    queueFamilyIndexCount,    uint32_t,    1,    ,    ,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryFdPropertiesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(memoryTypeBits,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceGroupRenderPassBeginInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(deviceMask,    ,    uint32_t,    0,    ,    ,    false) \
X__(deviceRenderAreaCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDeviceRenderAreas,    deviceRenderAreaCount,    VkRect2D,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceGeneratedCommandsFeaturesNVX_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(computeBindingPointSupport,    ,    VkBool32,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBufferDeviceAddressInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(buffer,    ,    VkBuffer,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageSubresource_members(X__) \
X__(aspectMask,    ,    VkImageAspectFlags,    0,    ,    ,    false) \
X__(mipLevel,    ,    uint32_t,    0,    ,    ,    false) \
X__(arrayLayer,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSparseImageMemoryBind_members(X__) \
X__(subresource,    ,    VkImageSubresource,    0,    ,    ,    false) \
X__(offset,    ,    VkOffset3D,    0,    ,    ,    false) \
X__(extent,    ,    VkExtent3D,    0,    ,    ,    false) \
X__(memory,    ,    VkDeviceMemory,    0,    ,    ,    false) \
X__(memoryOffset,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(flags,    ,    VkSparseMemoryBindFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSparseImageMemoryBindInfo_members(X__) \
X__(image,    ,    VkImage,    0,    ,    ,    false) \
X__(bindCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pBinds,    bindCount,    VkSparseImageMemoryBind,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkFenceCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkFenceCreateFlags,    0,    ,    Fence creation flags,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryAllocateFlagsInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkMemoryAllocateFlags,    0,    ,    ,    false) \
X__(deviceMask,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineExecutableInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(pipeline,    ,    VkPipeline,    0,    ,    ,    false) \
X__(executableIndex,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCopyDescriptorSet_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(srcSet,    ,    VkDescriptorSet,    0,    ,    Source descriptor set,    false) \
X__(srcBinding,    ,    uint32_t,    0,    ,    Binding within the source descriptor set to copy from,    false) \
X__(srcArrayElement,    ,    uint32_t,    0,    ,    Array element within the source binding to copy from,    false) \
X__(dstSet,    ,    VkDescriptorSet,    0,    ,    Destination descriptor set,    false) \
X__(dstBinding,    ,    uint32_t,    0,    ,    Binding within the destination descriptor set to copy to,    false) \
X__(dstArrayElement,    ,    uint32_t,    0,    ,    Array element within the destination binding to copy to,    false) \
X__(descriptorCount,    ,    uint32_t,    0,    ,    Number of descriptors to write (determines the size of the array pointed by pDescriptors),    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryDedicatedAllocateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(image,    ,    VkImage,    0,    ,    Image that this allocation will be bound to,    false) \
X__(buffer,    ,    VkBuffer,    0,    ,    Buffer that this allocation will be bound to,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRenderPassBeginInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(renderPass,    ,    VkRenderPass,    0,    ,    ,    false) \
X__(framebuffer,    ,    VkFramebuffer,    0,    ,    ,    false) \
X__(renderArea,    ,    VkRect2D,    0,    ,    ,    false) \
X__(clearValueCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pClearValues,    clearValueCount,    VkClearValue,    1,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_VI_NN)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkViSurfaceCreateInfoNN_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkViSurfaceCreateFlagsNN,    0,    ,    ,    false) \
X__(window,    ,    void,    1,    ,    ,    true) \

# endif

# if defined(VK_USE_PLATFORM_XCB_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkXcbSurfaceCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkXcbSurfaceCreateFlagsKHR,    0,    ,    ,    false) \
X__(connection,    ,    xcb_connection_t,    1,    ,    ,    true) \
X__(window,    ,    xcb_window_t,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkFramebufferCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkFramebufferCreateFlags,    0,    ,    ,    false) \
X__(renderPass,    ,    VkRenderPass,    0,    ,    ,    false) \
X__(attachmentCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pAttachments,    attachmentCount,    VkImageView,    1,    ,    ,    true) \
X__(width,    ,    uint32_t,    0,    ,    ,    false) \
X__(height,    ,    uint32_t,    0,    ,    ,    false) \
X__(layers,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorSetLayoutCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkDescriptorSetLayoutCreateFlags,    0,    ,    ,    false) \
X__(bindingCount,    ,    uint32_t,    0,    ,    Number of bindings in the descriptor set layout,    false) \
X__(pBindings,    bindingCount,    VkDescriptorSetLayoutBinding,    1,    ,    Array of descriptor set layout bindings,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSparseImageFormatProperties2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(properties,    ,    VkSparseImageFormatProperties,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceQueueGlobalPriorityCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(globalPriority,    ,    VkQueueGlobalPriorityEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkComputePipelineCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkPipelineCreateFlags,    0,    ,    Pipeline creation flags,    false) \
X__(stage,    ,    VkPipelineShaderStageCreateInfo,    0,    ,    ,    false) \
X__(layout,    ,    VkPipelineLayout,    0,    ,    Interface layout of the pipeline,    false) \
X__(basePipelineHandle,    ,    VkPipeline,    0,    ,    If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is nonzero  it specifies the handle of the base pipeline this is a derivative of,    true) \
X__(basePipelineIndex,    ,    int32_t,    0,    ,    If VK_PIPELINE_CREATE_DERIVATIVE_BIT is set and this value is not -1  it specifies an index into pCreateInfos of the base pipeline this is a derivative of,    false) \

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryGetAndroidHardwareBufferInfoANDROID_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(memory,    ,    VkDeviceMemory,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDeviceSurfaceInfo2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(surface,    ,    VkSurfaceKHR,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCmdReserveSpaceForCommandsInfoNVX_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(objectTable,    ,    VkObjectTableNVX,    0,    ,    ,    false) \
X__(indirectCommandsLayout,    ,    VkIndirectCommandsLayoutNVX,    0,    ,    ,    false) \
X__(maxSequencesCount,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayModeProperties2KHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(displayModeProperties,    ,    VkDisplayModePropertiesKHR,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorImageInfo_members(X__) \
X__(sampler,    ,    VkSampler,    0,    ,    Sampler to write to the descriptor in case it is a SAMPLER or COMBINED_IMAGE_SAMPLER descriptor. Ignored otherwise.,    true) \
X__(imageView,    ,    VkImageView,    0,    ,    Image view to write to the descriptor in case it is a SAMPLED_IMAGE  STORAGE_IMAGE  COMBINED_IMAGE_SAMPLER  or INPUT_ATTACHMENT descriptor. Ignored otherwise.,    true) \
X__(imageLayout,    ,    VkImageLayout,    0,    ,    Layout the image is expected to be in when accessed using this descriptor (only used if imageView is not VK_NULL_HANDLE).,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSparseBufferMemoryBindInfo_members(X__) \
X__(buffer,    ,    VkBuffer,    0,    ,    ,    false) \
X__(bindCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pBinds,    bindCount,    VkSparseMemoryBind,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRenderPassCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkRenderPassCreateFlags,    0,    ,    ,    true) \
X__(attachmentCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pAttachments,    attachmentCount,    VkAttachmentDescription,    1,    ,    ,    false) \
X__(subpassCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pSubpasses,    subpassCount,    VkSubpassDescription,    1,    ,    ,    false) \
X__(dependencyCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDependencies,    dependencyCount,    VkSubpassDependency,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkExportSemaphoreCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(handleTypes,    ,    VkExternalSemaphoreHandleTypeFlags,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSemaphoreCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkSemaphoreCreateFlags,    0,    ,    Semaphore creation flags,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPerformanceOverrideInfoINTEL_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(type,    ,    VkPerformanceOverrideTypeINTEL,    0,    ,    ,    false) \
X__(enable,    ,    VkBool32,    0,    ,    ,    false) \
X__(parameter,    ,    uint64_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCheckpointDataNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(stage,    ,    VkPipelineStageFlagBits,    0,    ,    ,    false) \
X__(pCheckpointMarker,    ,    void,    1,    ,    ,    true) \

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkAndroidSurfaceCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkAndroidSurfaceCreateFlagsKHR,    0,    ,    ,    false) \
X__(window,    ,    ANativeWindow,    1,    ,    ,    true) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDrmFormatModifierPropertiesListEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(drmFormatModifierCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDrmFormatModifierProperties,    drmFormatModifierCount,    VkDrmFormatModifierPropertiesEXT,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDisplayPowerInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(powerState,    ,    VkDisplayPowerStateEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkShaderStatisticsInfoAMD_members(X__) \
X__(shaderStageMask,    ,    VkShaderStageFlags,    0,    ,    ,    false) \
X__(resourceUsage,    ,    VkShaderResourceUsageAMD,    0,    ,    ,    false) \
X__(numPhysicalVgprs,    ,    uint32_t,    0,    ,    ,    false) \
X__(numPhysicalSgprs,    ,    uint32_t,    0,    ,    ,    false) \
X__(numAvailableVgprs,    ,    uint32_t,    0,    ,    ,    false) \
X__(numAvailableSgprs,    ,    uint32_t,    0,    ,    ,    false) \
X__(computeWorkGroupSize,    ,    uint32_t,    0,    3,    ,    false) \

# if defined(VK_USE_PLATFORM_GGP)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkStreamDescriptorSurfaceCreateInfoGGP_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkStreamDescriptorSurfaceCreateFlagsGGP,    0,    ,    ,    false) \
X__(streamDescriptor,    ,    GgpStreamDescriptor,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBufferCopy_members(X__) \
X__(srcOffset,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(dstOffset,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    false) \
X__(size,    ,    VkDeviceSize,    0,    ,    Specified in bytes,    true) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSurfaceCapabilities2EXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(minImageCount,    ,    uint32_t,    0,    ,    Supported minimum number of images for the surface,    false) \
X__(maxImageCount,    ,    uint32_t,    0,    ,    Supported maximum number of images for the surface  0 for unlimited,    false) \
X__(currentExtent,    ,    VkExtent2D,    0,    ,    Current image width and height for the surface  (0  0) if undefined,    false) \
X__(minImageExtent,    ,    VkExtent2D,    0,    ,    Supported minimum image width and height for the surface,    false) \
X__(maxImageExtent,    ,    VkExtent2D,    0,    ,    Supported maximum image width and height for the surface,    false) \
X__(maxImageArrayLayers,    ,    uint32_t,    0,    ,    Supported maximum number of image layers for the surface,    false) \
X__(supportedTransforms,    ,    VkSurfaceTransformFlagsKHR,    0,    ,    1 or more bits representing the transforms supported,    false) \
X__(currentTransform,    ,    VkSurfaceTransformFlagBitsKHR,    0,    ,    The surface`s current transform relative to the device`s natural orientation,    false) \
X__(supportedCompositeAlpha,    ,    VkCompositeAlphaFlagsKHR,    0,    ,    1 or more bits representing the alpha compositing modes supported,    false) \
X__(supportedUsageFlags,    ,    VkImageUsageFlags,    0,    ,    Supported image usage flags for the surface,    false) \
X__(supportedSurfaceCounters,    ,    VkSurfaceCounterFlagsEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCommandPoolCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkCommandPoolCreateFlags,    0,    ,    Command pool creation flags,    false) \
X__(queueFamilyIndex,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceQueueCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkDeviceQueueCreateFlags,    0,    ,    ,    false) \
X__(queueFamilyIndex,    ,    uint32_t,    0,    ,    ,    false) \
X__(queueCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pQueuePriorities,    queueCount,    float,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDeviceCreateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkDeviceCreateFlags,    0,    ,    ,    false) \
X__(queueCreateInfoCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pQueueCreateInfos,    queueCreateInfoCount,    VkDeviceQueueCreateInfo,    1,    ,    ,    false) \
X__(enabledLayerCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(ppEnabledLayerNames,    enabledLayerCount,null-terminated,    char,    2,    ,    Ordered list of layer names to be enabled,    false) \
X__(enabledExtensionCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(ppEnabledExtensionNames,    enabledExtensionCount,null-terminated,    char,    2,    ,    ,    false) \
X__(pEnabledFeatures,    ,    VkPhysicalDeviceFeatures,    1,    ,    ,    false) \

# if defined(VK_USE_PLATFORM_ANDROID_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPhysicalDevicePresentationPropertiesANDROID_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(sharedImage,    ,    VkBool32,    0,    ,    ,    false) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCooperativeMatrixPropertiesNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(MSize,    ,    uint32_t,    0,    ,    ,    false) \
X__(NSize,    ,    uint32_t,    0,    ,    ,    false) \
X__(KSize,    ,    uint32_t,    0,    ,    ,    false) \
X__(AType,    ,    VkComponentTypeNV,    0,    ,    ,    false) \
X__(BType,    ,    VkComponentTypeNV,    0,    ,    ,    false) \
X__(CType,    ,    VkComponentTypeNV,    0,    ,    ,    false) \
X__(DType,    ,    VkComponentTypeNV,    0,    ,    ,    false) \
X__(scope,    ,    VkScopeNV,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageDrmFormatModifierPropertiesEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(drmFormatModifier,    ,    uint64_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDescriptorSetAllocateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(descriptorPool,    ,    VkDescriptorPool,    0,    ,    ,    false) \
X__(descriptorSetCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pSetLayouts,    descriptorSetCount,    VkDescriptorSetLayout,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkFormatProperties_members(X__) \
X__(linearTilingFeatures,    ,    VkFormatFeatureFlags,    0,    ,    Format features in case of linear tiling,    false) \
X__(optimalTilingFeatures,    ,    VkFormatFeatureFlags,    0,    ,    Format features in case of optimal tiling,    false) \
X__(bufferFeatures,    ,    VkFormatFeatureFlags,    0,    ,    Format features supported by buffers,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkFormatProperties2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(formatProperties,    ,    VkFormatProperties,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkIndirectCommandsTokenNVX_members(X__) \
X__(tokenType,    ,    VkIndirectCommandsTokenTypeNVX,    0,    ,    ,    false) \
X__(buffer,    ,    VkBuffer,    0,    ,    buffer containing tableEntries and additional data for indirectCommands,    false) \
X__(offset,    ,    VkDeviceSize,    0,    ,    offset from the base address of the buffer,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkCmdProcessCommandsInfoNVX_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(objectTable,    ,    VkObjectTableNVX,    0,    ,    ,    false) \
X__(indirectCommandsLayout,    ,    VkIndirectCommandsLayoutNVX,    0,    ,    ,    false) \
X__(indirectCommandsTokenCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pIndirectCommandsTokens,    indirectCommandsTokenCount,    VkIndirectCommandsTokenNVX,    1,    ,    ,    false) \
X__(maxSequencesCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(targetCommandBuffer,    ,    VkCommandBuffer,    0,    ,    ,    false) \
X__(sequencesCountBuffer,    ,    VkBuffer,    0,    ,    ,    false) \
X__(sequencesCountOffset,    ,    VkDeviceSize,    0,    ,    ,    false) \
X__(sequencesIndexBuffer,    ,    VkBuffer,    0,    ,    ,    false) \
X__(sequencesIndexOffset,    ,    VkDeviceSize,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMemoryAllocateInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(allocationSize,    ,    VkDeviceSize,    0,    ,    Size of memory allocation,    false) \
X__(memoryTypeIndex,    ,    uint32_t,    0,    ,    Index of the of the memory type to allocate from,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBindAccelerationStructureMemoryInfoNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(accelerationStructure,    ,    VkAccelerationStructureNV,    0,    ,    ,    false) \
X__(memory,    ,    VkDeviceMemory,    0,    ,    ,    false) \
X__(memoryOffset,    ,    VkDeviceSize,    0,    ,    ,    false) \
X__(deviceIndexCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pDeviceIndices,    deviceIndexCount,    uint32_t,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBindSparseInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(waitSemaphoreCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pWaitSemaphores,    waitSemaphoreCount,    VkSemaphore,    1,    ,    ,    false) \
X__(bufferBindCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pBufferBinds,    bufferBindCount,    VkSparseBufferMemoryBindInfo,    1,    ,    ,    false) \
X__(imageOpaqueBindCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pImageOpaqueBinds,    imageOpaqueBindCount,    VkSparseImageOpaqueMemoryBindInfo,    1,    ,    ,    false) \
X__(imageBindCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pImageBinds,    imageBindCount,    VkSparseImageMemoryBindInfo,    1,    ,    ,    false) \
X__(signalSemaphoreCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pSignalSemaphores,    signalSemaphoreCount,    VkSemaphore,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkBindBufferMemoryInfo_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(buffer,    ,    VkBuffer,    0,    ,    ,    false) \
X__(memory,    ,    VkDeviceMemory,    0,    ,    ,    false) \
X__(memoryOffset,    ,    VkDeviceSize,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkWriteDescriptorSetAccelerationStructureNV_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(accelerationStructureCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pAccelerationStructures,    accelerationStructureCount,    VkAccelerationStructureNV,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDebugUtilsMessengerCallbackDataEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkDebugUtilsMessengerCallbackDataFlagsEXT,    0,    ,    ,    false) \
X__(pMessageIdName,    null-terminated,    char,    1,    ,    ,    false) \
X__(messageIdNumber,    ,    int32_t,    0,    ,    ,    false) \
X__(pMessage,    null-terminated,    char,    1,    ,    ,    false) \
X__(queueLabelCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pQueueLabels,    queueLabelCount,    VkDebugUtilsLabelEXT,    1,    ,    ,    false) \
X__(cmdBufLabelCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pCmdBufLabels,    cmdBufLabelCount,    VkDebugUtilsLabelEXT,    1,    ,    ,    false) \
X__(objectCount,    ,    uint32_t,    0,    ,    ,    false) \
X__(pObjects,    objectCount,    VkDebugUtilsObjectNameInfoEXT,    1,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkSparseImageMemoryRequirements2_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(memoryRequirements,    ,    VkSparseImageMemoryRequirements,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkHeadlessSurfaceCreateInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkHeadlessSurfaceCreateFlagsEXT,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkDebugMarkerObjectTagInfoEXT_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(objectType,    ,    VkDebugReportObjectTypeEXT,    0,    ,    The type of the object,    false) \
X__(object,    ,    uint64_t,    0,    ,    The handle of the object  cast to uint64_t,    false) \
X__(tagName,    ,    uint64_t,    0,    ,    The name of the tag to set on the object,    false) \
X__(tagSize,    ,    size_t,    0,    ,    The length in bytes of the tag data,    false) \
X__(pTag,    tagSize,    void,    1,    ,    Tag data to attach to the object,    false) \

# if defined(VK_USE_PLATFORM_WAYLAND_KHR)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkWaylandSurfaceCreateInfoKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkWaylandSurfaceCreateFlagsKHR,    0,    ,    ,    false) \
X__(display,    ,    wl_display,    1,    ,    ,    true) \
X__(surface,    ,    wl_surface,    1,    ,    ,    true) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkImageBlit_members(X__) \
X__(srcSubresource,    ,    VkImageSubresourceLayers,    0,    ,    ,    false) \
X__(srcOffsets,    ,    VkOffset3D,    0,    2,    Specified in pixels for both compressed and uncompressed images,    false) \
X__(dstSubresource,    ,    VkImageSubresourceLayers,    0,    ,    ,    false) \
X__(dstOffsets,    ,    VkOffset3D,    0,    2,    Specified in pixels for both compressed and uncompressed images,    false) \

# if defined(VK_USE_PLATFORM_MACOS_MVK)

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkMacOSSurfaceCreateInfoMVK_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(flags,    ,    VkMacOSSurfaceCreateFlagsMVK,    0,    ,    ,    false) \
X__(pView,    ,    void,    1,    ,    ,    true) \

# endif

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPerformanceMarkerInfoINTEL_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(marker,    ,    uint64_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkPipelineExecutablePropertiesKHR_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(stages,    ,    VkShaderStageFlags,    0,    ,    ,    false) \
X__(name,    ,    char,    0,    VK_MAX_DESCRIPTION_SIZE,    ,    false) \
X__(description,    ,    char,    0,    VK_MAX_DESCRIPTION_SIZE,    ,    false) \
X__(subgroupSize,    ,    uint32_t,    0,    ,    ,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkRefreshCycleDurationGOOGLE_members(X__) \
X__(refreshDuration,    ,    uint64_t,    0,    ,    Number of nanoseconds from the start of one refresh cycle to the next,    false) \

/*name__, len__, type__, point_layers__, array__, comment__, noautovalidity__*/
# define Xt_VkWriteDescriptorSet_members(X__) \
X__(sType,    ,    VkStructureType,    0,    ,    ,    false) \
X__(pNext,    ,    void,    1,    ,    ,    false) \
X__(dstSet,    ,    VkDescriptorSet,    0,    ,    Destination descriptor set,    true) \
X__(dstBinding,    ,    uint32_t,    0,    ,    Binding within the destination descriptor set to write,    false) \
X__(dstArrayElement,    ,    uint32_t,    0,    ,    Array element within the destination binding to write,    false) \
X__(descriptorCount,    ,    uint32_t,    0,    ,    Number of descriptors to write (determines the size of the array pointed by pDescriptors),    false) \
X__(descriptorType,    ,    VkDescriptorType,    0,    ,    Descriptor type to write (determines which members of the array pointed by pDescriptors are going to be used),    false) \
X__(pImageInfo,    descriptorCount,    VkDescriptorImageInfo,    1,    ,    Sampler  image view  and layout for SAMPLER  COMBINED_IMAGE_SAMPLER  {SAMPLED STORAGE}_IMAGE  and INPUT_ATTACHMENT descriptor types.,    true) \
X__(pBufferInfo,    descriptorCount,    VkDescriptorBufferInfo,    1,    ,    Raw buffer  size  and offset for {UNIFORM STORAGE}_BUFFER[_DYNAMIC] descriptor types.,    true) \
X__(pTexelBufferView,    descriptorCount,    VkBufferView,    1,    ,    Buffer view to write to the descriptor for {UNIFORM STORAGE}_TEXEL_BUFFER descriptor types.,    true) \

# define Xt_VK_USE_PLATFORM_FUCHSIA_structures(X__) \
X__(VkImagePipeSurfaceCreateInfoFUCHSIA,    ImagePipeSurfaceCreateInfoFUCHSIA) \

# if defined(VK_USE_PLATFORM_FUCHSIA)
# define Xt_vk_api_VK_USE_PLATFORM_FUCHSIA(X__) \
X__(vkCreateImagePipeSurfaceFUCHSIA) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_FUCHSIA(...) 
# endif

# define Xt_VK_USE_PLATFORM_IOS_MVK_structures(X__) \
X__(VkIOSSurfaceCreateInfoMVK,    IOSSurfaceCreateInfoMVK) \

# if defined(VK_USE_PLATFORM_IOS_MVK)
# define Xt_vk_api_VK_USE_PLATFORM_IOS_MVK(X__) \
X__(vkCreateIOSSurfaceMVK) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_IOS_MVK(...) 
# endif

# define Xt_VK_USE_PLATFORM_METAL_EXT_structures(X__) \
X__(VkMetalSurfaceCreateInfoEXT,    MetalSurfaceCreateInfoEXT) \

# if defined(VK_USE_PLATFORM_METAL_EXT)
# define Xt_vk_api_VK_USE_PLATFORM_METAL_EXT(X__) \
X__(vkCreateMetalSurfaceEXT) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_METAL_EXT(...) 
# endif

# define Xt_VK_USE_PLATFORM_XLIB_KHR_structures(X__) \
X__(VkXlibSurfaceCreateInfoKHR,    XlibSurfaceCreateInfoKHR) \

# if defined(VK_USE_PLATFORM_XLIB_KHR)
# define Xt_vk_api_VK_USE_PLATFORM_XLIB_KHR(X__) \
X__(vkCreateXlibSurfaceKHR) \
X__(vkGetPhysicalDeviceXlibPresentationSupportKHR) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_XLIB_KHR(...) 
# endif

# define Xt_VK_USE_PLATFORM_GGP_structures(X__) \
X__(VkPresentFrameTokenGGP,    PresentFrameTokenGGP) \
X__(VkStreamDescriptorSurfaceCreateInfoGGP,    StreamDescriptorSurfaceCreateInfoGGP) \

# if defined(VK_USE_PLATFORM_GGP)
# define Xt_vk_api_VK_USE_PLATFORM_GGP(X__) \
X__(vkCreateStreamDescriptorSurfaceGGP) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_GGP(...) 
# endif

# define Xt_VK_USE_PLATFORM_WAYLAND_KHR_structures(X__) \
X__(VkWaylandSurfaceCreateInfoKHR,    WaylandSurfaceCreateInfoKHR) \

# if defined(VK_USE_PLATFORM_WAYLAND_KHR)
# define Xt_vk_api_VK_USE_PLATFORM_WAYLAND_KHR(X__) \
X__(vkCreateWaylandSurfaceKHR) \
X__(vkGetPhysicalDeviceWaylandPresentationSupportKHR) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_WAYLAND_KHR(...) 
# endif

# define Xt_VK_USE_PLATFORM_VI_NN_structures(X__) \
X__(VkViSurfaceCreateInfoNN,    ViSurfaceCreateInfoNN) \

# if defined(VK_USE_PLATFORM_VI_NN)
# define Xt_vk_api_VK_USE_PLATFORM_VI_NN(X__) \
X__(vkCreateViSurfaceNN) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_VI_NN(...) 
# endif

# define Xt_VK_USE_PLATFORM_ANDROID_KHR_flagbits(X__) \
X__(VkSwapchainImageUsageFlagBitsANDROID,    SwapchainImageUsageANDROID) \

# define Xt_VK_USE_PLATFORM_ANDROID_KHR_structures(X__) \
X__(VkExternalFormatANDROID,    ExternalFormatANDROID) \
X__(VkImportAndroidHardwareBufferInfoANDROID,    ImportAndroidHardwareBufferInfoANDROID) \
X__(VkAndroidHardwareBufferFormatPropertiesANDROID,    AndroidHardwareBufferFormatPropertiesANDROID) \
X__(VkAndroidHardwareBufferPropertiesANDROID,    AndroidHardwareBufferPropertiesANDROID) \
X__(VkAndroidHardwareBufferUsageANDROID,    AndroidHardwareBufferUsageANDROID) \
X__(VkSwapchainImageCreateInfoANDROID,    SwapchainImageCreateInfoANDROID) \
X__(VkNativeBufferUsage2ANDROID,    NativeBufferUsage2ANDROID) \
X__(VkNativeBufferANDROID,    NativeBufferANDROID) \
X__(VkMemoryGetAndroidHardwareBufferInfoANDROID,    MemoryGetAndroidHardwareBufferInfoANDROID) \
X__(VkAndroidSurfaceCreateInfoKHR,    AndroidSurfaceCreateInfoKHR) \
X__(VkPhysicalDevicePresentationPropertiesANDROID,    PhysicalDevicePresentationPropertiesANDROID) \

# if defined(VK_USE_PLATFORM_ANDROID_KHR)
# define Xt_vk_api_VK_USE_PLATFORM_ANDROID_KHR(X__) \
X__(vkGetSwapchainGrallocUsage2ANDROID) \
X__(vkCreateAndroidSurfaceKHR) \
X__(vkGetMemoryAndroidHardwareBufferANDROID) \
X__(vkGetAndroidHardwareBufferPropertiesANDROID) \
X__(vkAcquireImageANDROID) \
X__(vkQueueSignalReleaseImageANDROID) \
X__(vkGetSwapchainGrallocUsageANDROID) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_ANDROID_KHR(...) 
# endif

# define Xt_VK_USE_PLATFORM_XCB_KHR_structures(X__) \
X__(VkXcbSurfaceCreateInfoKHR,    XcbSurfaceCreateInfoKHR) \

# if defined(VK_USE_PLATFORM_XCB_KHR)
# define Xt_vk_api_VK_USE_PLATFORM_XCB_KHR(X__) \
X__(vkCreateXcbSurfaceKHR) \
X__(vkGetPhysicalDeviceXcbPresentationSupportKHR) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_XCB_KHR(...) 
# endif

# define Xt_VK_USE_PLATFORM_WIN32_KHR_enums(X__) \
X__(VkFullScreenExclusiveEXT,    FullScreenExclusiveEXT) \

# define Xt_VK_USE_PLATFORM_WIN32_KHR_structures(X__) \
X__(VkWin32KeyedMutexAcquireReleaseInfoKHR,    Win32KeyedMutexAcquireReleaseInfoKHR) \
X__(VkWin32KeyedMutexAcquireReleaseInfoNV,    Win32KeyedMutexAcquireReleaseInfoNV) \
X__(VkD3D12FenceSubmitInfoKHR,    D3D12FenceSubmitInfoKHR) \
X__(VkImportMemoryWin32HandleInfoKHR,    ImportMemoryWin32HandleInfoKHR) \
X__(VkSemaphoreGetWin32HandleInfoKHR,    SemaphoreGetWin32HandleInfoKHR) \
X__(VkExportMemoryWin32HandleInfoKHR,    ExportMemoryWin32HandleInfoKHR) \
X__(VkMemoryWin32HandlePropertiesKHR,    MemoryWin32HandlePropertiesKHR) \
X__(VkSurfaceCapabilitiesFullScreenExclusiveEXT,    SurfaceCapabilitiesFullScreenExclusiveEXT) \
X__(VkMemoryGetWin32HandleInfoKHR,    MemoryGetWin32HandleInfoKHR) \
X__(VkExportSemaphoreWin32HandleInfoKHR,    ExportSemaphoreWin32HandleInfoKHR) \
X__(VkImportSemaphoreWin32HandleInfoKHR,    ImportSemaphoreWin32HandleInfoKHR) \
X__(VkFenceGetWin32HandleInfoKHR,    FenceGetWin32HandleInfoKHR) \
X__(VkExportMemoryWin32HandleInfoNV,    ExportMemoryWin32HandleInfoNV) \
X__(VkWin32SurfaceCreateInfoKHR,    Win32SurfaceCreateInfoKHR) \
X__(VkSurfaceFullScreenExclusiveWin32InfoEXT,    SurfaceFullScreenExclusiveWin32InfoEXT) \
X__(VkSurfaceFullScreenExclusiveInfoEXT,    SurfaceFullScreenExclusiveInfoEXT) \
X__(VkExportFenceWin32HandleInfoKHR,    ExportFenceWin32HandleInfoKHR) \
X__(VkImportMemoryWin32HandleInfoNV,    ImportMemoryWin32HandleInfoNV) \
X__(VkImportFenceWin32HandleInfoKHR,    ImportFenceWin32HandleInfoKHR) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)
# define Xt_vk_api_VK_USE_PLATFORM_WIN32_KHR(X__) \
X__(vkGetMemoryWin32HandleKHR) \
X__(vkGetSemaphoreWin32HandleKHR) \
X__(vkImportFenceWin32HandleKHR) \
X__(vkGetMemoryWin32HandlePropertiesKHR) \
X__(vkGetPhysicalDeviceSurfacePresentModes2EXT) \
X__(vkGetDeviceGroupSurfacePresentModes2EXT) \
X__(vkGetPhysicalDeviceWin32PresentationSupportKHR) \
X__(vkAcquireFullScreenExclusiveModeEXT) \
X__(vkGetMemoryWin32HandleNV) \
X__(vkGetFenceWin32HandleKHR) \
X__(vkImportSemaphoreWin32HandleKHR) \
X__(vkReleaseFullScreenExclusiveModeEXT) \
X__(vkCreateWin32SurfaceKHR) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_WIN32_KHR(...) 
# endif

# if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
# define Xt_vk_api_VK_USE_PLATFORM_XLIB_XRANDR_EXT(X__) \
X__(vkAcquireXlibDisplayEXT) \
X__(vkGetRandROutputDisplayEXT) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_XLIB_XRANDR_EXT(...) 
# endif

# define Xt_VK_USE_PLATFORM_MACOS_MVK_structures(X__) \
X__(VkMacOSSurfaceCreateInfoMVK,    MacOSSurfaceCreateInfoMVK) \

# if defined(VK_USE_PLATFORM_MACOS_MVK)
# define Xt_vk_api_VK_USE_PLATFORM_MACOS_MVK(X__) \
X__(vkCreateMacOSSurfaceMVK) \

# else
# define Xt_vk_api_VK_USE_PLATFORM_MACOS_MVK(...) 
# endif

# define Xt_vk_api_all_platform(X__) \
Xt_vk_api_VK_USE_PLATFORM_FUCHSIA(X__) \
Xt_vk_api_VK_USE_PLATFORM_VI_NN(X__) \
Xt_vk_api_VK_USE_PLATFORM_MACOS_MVK(X__) \
Xt_vk_api_VK_USE_PLATFORM_XCB_KHR(X__) \
Xt_vk_api_VK_USE_PLATFORM_GGP(X__) \
Xt_vk_api_VK_USE_PLATFORM_METAL_EXT(X__) \
Xt_vk_api_VK_USE_PLATFORM_XLIB_XRANDR_EXT(X__) \
Xt_vk_api_VK_USE_PLATFORM_WIN32_KHR(X__) \
Xt_vk_api_VK_USE_PLATFORM_ANDROID_KHR(X__) \
Xt_vk_api_VK_USE_PLATFORM_WAYLAND_KHR(X__) \
Xt_vk_api_VK_USE_PLATFORM_XLIB_KHR(X__) \
Xt_vk_api_VK_USE_PLATFORM_IOS_MVK(X__) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDiscardRectangleModeEXT_noalias_members(X__) \
X__(VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT,    inclusive_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT,    exclusive_ext,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkValidationFeatureDisableEXT_noalias_members(X__) \
X__(VK_VALIDATION_FEATURE_DISABLE_ALL_EXT,    all_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT,    shaders_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT,    thread_safety_ext,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT,    api_parameters_ext,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT,    object_lifetimes_ext,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT,    core_checks_ext,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT,    unique_handles_ext,    6,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPerformanceValueTypeINTEL_noalias_members(X__) \
X__(VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL,    uint32_intel,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL,    uint64_intel,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL,    float_intel,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL,    bool_intel,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL,    string_intel,    4,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDisplayPowerStateEXT_noalias_members(X__) \
X__(VK_DISPLAY_POWER_STATE_OFF_EXT,    off_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DISPLAY_POWER_STATE_SUSPEND_EXT,    suspend_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DISPLAY_POWER_STATE_ON_EXT,    on_ext,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPhysicalDeviceType_noalias_members(X__) \
X__(VK_PHYSICAL_DEVICE_TYPE_OTHER,    other,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU,    integrated_gpu,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU,    discrete_gpu,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU,    virtual_gpu,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PHYSICAL_DEVICE_TYPE_CPU,    cpu,    4,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkValidationCacheHeaderVersionEXT_noalias_members(X__) \
X__(VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT,    one_ext,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCoverageModulationModeNV_noalias_members(X__) \
X__(VK_COVERAGE_MODULATION_MODE_NONE_NV,    none_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COVERAGE_MODULATION_MODE_RGB_NV,    rgb_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COVERAGE_MODULATION_MODE_ALPHA_NV,    alpha_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COVERAGE_MODULATION_MODE_RGBA_NV,    rgba_nv,    3,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkMemoryOverallocationBehaviorAMD_noalias_members(X__) \
X__(VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD,    default_amd,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD,    allowed_amd,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD,    disallowed_amd,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkBlendOverlapEXT_noalias_members(X__) \
X__(VK_BLEND_OVERLAP_UNCORRELATED_EXT,    uncorrelated_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OVERLAP_DISJOINT_EXT,    disjoint_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OVERLAP_CONJOINT_EXT,    conjoint_ext,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkQueryPoolSamplingModeINTEL_noalias_members(X__) \
X__(VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL,    manual_intel,    0,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDebugReportObjectTypeEXT_noalias_members(X__) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT,    unknown_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT,    instance_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT,    physical_device_ext,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT,    device_ext,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT,    queue_ext,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT,    semaphore_ext,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT,    command_buffer_ext,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT,    fence_ext,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT,    device_memory_ext,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT,    buffer_ext,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT,    image_ext,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT,    event_ext,    11,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT,    query_pool_ext,    12,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT,    buffer_view_ext,    13,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT,    image_view_ext,    14,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT,    shader_module_ext,    15,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT,    pipeline_cache_ext,    16,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT,    pipeline_layout_ext,    17,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT,    render_pass_ext,    18,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT,    pipeline_ext,    19,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT,    descriptor_set_layout_ext,    20,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT,    sampler_ext,    21,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT,    descriptor_pool_ext,    22,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT,    descriptor_set_ext,    23,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT,    framebuffer_ext,    24,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT,    command_pool_ext,    25,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT,    surface_khr_ext,    26,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT,    swapchain_khr_ext,    27,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT,    debug_report_callback_ext_ext,    28,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT,    display_khr_ext,    29,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT,    display_mode_khr_ext,    30,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT,    object_table_nvx_ext,    31,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT,    indirect_commands_layout_nvx_ext,    32,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT,    validation_cache_ext_ext,    33,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT,    sampler_ycbcr_conversion_ext,    ,    0,    ,    VK_EXT_debug_report,    157,    vulkan,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT,    descriptor_update_template_ext,    ,    0,    ,    VK_EXT_debug_report,    86,    vulkan,    ,    ) \
X__(VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT,    acceleration_structure_nv_ext,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkImageViewType_noalias_members(X__) \
X__(VK_IMAGE_VIEW_TYPE_1D,    1d,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_2D,    2d,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_3D,    3d,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_CUBE,    cube,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_1D_ARRAY,    1d_array,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_2D_ARRAY,    2d_array,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_VIEW_TYPE_CUBE_ARRAY,    cube_array,    6,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkGeometryTypeNV_noalias_members(X__) \
X__(VK_GEOMETRY_TYPE_TRIANGLES_NV,    triangles_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_GEOMETRY_TYPE_AABBS_NV,    aabbs_nv,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkAccelerationStructureTypeNV_noalias_members(X__) \
X__(VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV,    top_level_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV,    bottom_level_nv,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPerformanceConfigurationTypeINTEL_noalias_members(X__) \
X__(VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL,    command_queue_metrics_discovery_activated_intel,    0,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDriverIdKHR_noalias_members(X__) \
X__(VK_DRIVER_ID_AMD_PROPRIETARY_KHR,    amd_proprietary_khr,    1,    ,    Advanced Micro Devices  Inc.,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR,    amd_open_source_khr,    2,    ,    Advanced Micro Devices  Inc.,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_MESA_RADV_KHR,    mesa_radv_khr,    3,    ,    Mesa open source project,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR,    nvidia_proprietary_khr,    4,    ,    NVIDIA Corporation,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR,    intel_proprietary_windows_khr,    5,    ,    Intel Corporation,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR,    intel_open_source_mesa_khr,    6,    ,    Intel Corporation,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR,    imagination_proprietary_khr,    7,    ,    Imagination Technologies,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR,    qualcomm_proprietary_khr,    8,    ,    Qualcomm Technologies  Inc.,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_ARM_PROPRIETARY_KHR,    arm_proprietary_khr,    9,    ,    Arm Limited,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR,    google_swiftshader_khr,    10,    ,    Google LLC,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_GGP_PROPRIETARY_KHR,    ggp_proprietary_khr,    11,    ,    Google LLC,    ,    ,    ,    ,    ) \
X__(VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR,    broadcom_proprietary_khr,    12,    ,    Broadcom Inc.,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSamplerYcbcrModelConversion_noalias_members(X__) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY,    rgb_identity,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY,    ycbcr_identity,    1,    ,    just range expansion,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709,    ycbcr_709,    2,    ,    aka HD YUV,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601,    ycbcr_601,    3,    ,    aka SD YUV,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020,    ycbcr_2020,    4,    ,    aka UHD YUV,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSubpassContents_noalias_members(X__) \
X__(VK_SUBPASS_CONTENTS_INLINE,    inline,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS,    secondary_command_buffers,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkScopeNV_noalias_members(X__) \
X__(VK_SCOPE_DEVICE_NV,    device_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SCOPE_WORKGROUP_NV,    workgroup_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SCOPE_SUBGROUP_NV,    subgroup_nv,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SCOPE_QUEUE_FAMILY_NV,    queue_family_nv,    5,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkStencilOp_noalias_members(X__) \
X__(VK_STENCIL_OP_KEEP,    keep,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_ZERO,    zero,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_REPLACE,    replace,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_INCREMENT_AND_CLAMP,    increment_and_clamp,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_DECREMENT_AND_CLAMP,    decrement_and_clamp,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_INVERT,    invert,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_INCREMENT_AND_WRAP,    increment_and_wrap,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STENCIL_OP_DECREMENT_AND_WRAP,    decrement_and_wrap,    7,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPipelineExecutableStatisticFormatKHR_noalias_members(X__) \
X__(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_BOOL32_KHR,    bool32_khr,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_INT64_KHR,    int64_khr,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_UINT64_KHR,    uint64_khr,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_EXECUTABLE_STATISTIC_FORMAT_FLOAT64_KHR,    float64_khr,    3,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkShaderFloatControlsIndependenceKHR_noalias_members(X__) \
X__(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR,    32_bit_only_khr,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR,    all_khr,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR,    none_khr,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkTimeDomainEXT_noalias_members(X__) \
X__(VK_TIME_DOMAIN_DEVICE_EXT,    device_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT,    clock_monotonic_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT,    clock_monotonic_raw_ext,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT,    query_performance_counter_ext,    3,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkTessellationDomainOrigin_noalias_members(X__) \
X__(VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT,    upper_left,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT,    lower_left,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDescriptorType_noalias_members(X__) \
X__(VK_DESCRIPTOR_TYPE_SAMPLER,    sampler,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER,    combined_image_sampler,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE,    sampled_image,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_STORAGE_IMAGE,    storage_image,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER,    uniform_texel_buffer,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER,    storage_texel_buffer,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER,    uniform_buffer,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_STORAGE_BUFFER,    storage_buffer,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC,    uniform_buffer_dynamic,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC,    storage_buffer_dynamic,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT,    input_attachment,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT,    inline_uniform_block_ext,    ,    0,    ,    VK_EXT_inline_uniform_block,    139,    vulkan,    ,    ) \
X__(VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV,    acceleration_structure_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCoverageReductionModeNV_noalias_members(X__) \
X__(VK_COVERAGE_REDUCTION_MODE_MERGE_NV,    merge_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV,    truncate_nv,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkViewportCoordinateSwizzleNV_noalias_members(X__) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV,    positive_x_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV,    negative_x_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV,    positive_y_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV,    negative_y_nv,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV,    positive_z_nv,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV,    negative_z_nv,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV,    positive_w_nv,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV,    negative_w_nv,    7,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkComponentSwizzle_noalias_members(X__) \
X__(VK_COMPONENT_SWIZZLE_IDENTITY,    identity,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_ZERO,    zero,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_ONE,    one,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_R,    r,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_G,    g,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_B,    b,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_SWIZZLE_A,    a,    6,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkShadingRatePaletteEntryNV_noalias_members(X__) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV,    no_invocations_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV,    16_invocations_per_pixel_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV,    8_invocations_per_pixel_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV,    4_invocations_per_pixel_nv,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV,    2_invocations_per_pixel_nv,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV,    1_invocation_per_pixel_nv,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV,    1_invocation_per_2x1_pixels_nv,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV,    1_invocation_per_1x2_pixels_nv,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV,    1_invocation_per_2x2_pixels_nv,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV,    1_invocation_per_4x2_pixels_nv,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV,    1_invocation_per_2x4_pixels_nv,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV,    1_invocation_per_4x4_pixels_nv,    11,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkFilter_noalias_members(X__) \
X__(VK_FILTER_NEAREST,    nearest,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FILTER_LINEAR,    linear,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FILTER_CUBIC_IMG,    cubic_img,    ,    0,    ,    VK_IMG_filter_cubic,    16,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkChromaLocation_noalias_members(X__) \
X__(VK_CHROMA_LOCATION_COSITED_EVEN,    cosited_even,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_CHROMA_LOCATION_MIDPOINT,    midpoint,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPrimitiveTopology_noalias_members(X__) \
X__(VK_PRIMITIVE_TOPOLOGY_POINT_LIST,    point_list,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_LINE_LIST,    line_list,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_LINE_STRIP,    line_strip,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST,    triangle_list,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP,    triangle_strip,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN,    triangle_fan,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY,    line_list_with_adjacency,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY,    line_strip_with_adjacency,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY,    triangle_list_with_adjacency,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY,    triangle_strip_with_adjacency,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRIMITIVE_TOPOLOGY_PATCH_LIST,    patch_list,    10,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDeviceEventTypeEXT_noalias_members(X__) \
X__(VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT,    display_hotplug_ext,    0,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkAccelerationStructureMemoryRequirementsTypeNV_noalias_members(X__) \
X__(VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV,    object_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV,    build_scratch_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV,    update_scratch_nv,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPolygonMode_noalias_members(X__) \
X__(VK_POLYGON_MODE_FILL,    fill,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_POLYGON_MODE_LINE,    line,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_POLYGON_MODE_POINT,    point,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_POLYGON_MODE_FILL_RECTANGLE_NV,    fill_rectangle_nv,    ,    0,    ,    VK_NV_fill_rectangle,    154,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSharingMode_noalias_members(X__) \
X__(VK_SHARING_MODE_EXCLUSIVE,    exclusive,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHARING_MODE_CONCURRENT,    concurrent,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkQueryType_noalias_members(X__) \
X__(VK_QUERY_TYPE_OCCLUSION,    occlusion,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_QUERY_TYPE_PIPELINE_STATISTICS,    pipeline_statistics,    1,    ,    Optional,    ,    ,    ,    ,    ) \
X__(VK_QUERY_TYPE_TIMESTAMP,    timestamp,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT,    transform_feedback_stream_ext,    ,    4,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ,    ) \
X__(VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV,    acceleration_structure_compacted_size_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkObjectType_noalias_members(X__) \
X__(VK_OBJECT_TYPE_UNKNOWN,    unknown,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_INSTANCE,    instance,    1,    ,    VkInstance,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_PHYSICAL_DEVICE,    physical_device,    2,    ,    VkPhysicalDevice,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DEVICE,    device,    3,    ,    VkDevice,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_QUEUE,    queue,    4,    ,    VkQueue,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_SEMAPHORE,    semaphore,    5,    ,    VkSemaphore,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_COMMAND_BUFFER,    command_buffer,    6,    ,    VkCommandBuffer,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_FENCE,    fence,    7,    ,    VkFence,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DEVICE_MEMORY,    device_memory,    8,    ,    VkDeviceMemory,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_BUFFER,    buffer,    9,    ,    VkBuffer,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_IMAGE,    image,    10,    ,    VkImage,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_EVENT,    event,    11,    ,    VkEvent,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_QUERY_POOL,    query_pool,    12,    ,    VkQueryPool,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_BUFFER_VIEW,    buffer_view,    13,    ,    VkBufferView,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_IMAGE_VIEW,    image_view,    14,    ,    VkImageView,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_SHADER_MODULE,    shader_module,    15,    ,    VkShaderModule,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_PIPELINE_CACHE,    pipeline_cache,    16,    ,    VkPipelineCache,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_PIPELINE_LAYOUT,    pipeline_layout,    17,    ,    VkPipelineLayout,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_RENDER_PASS,    render_pass,    18,    ,    VkRenderPass,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_PIPELINE,    pipeline,    19,    ,    VkPipeline,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT,    descriptor_set_layout,    20,    ,    VkDescriptorSetLayout,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_SAMPLER,    sampler,    21,    ,    VkSampler,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DESCRIPTOR_POOL,    descriptor_pool,    22,    ,    VkDescriptorPool,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DESCRIPTOR_SET,    descriptor_set,    23,    ,    VkDescriptorSet,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_FRAMEBUFFER,    framebuffer,    24,    ,    VkFramebuffer,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_COMMAND_POOL,    command_pool,    25,    ,    VkCommandPool,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION,    sampler_ycbcr_conversion,    ,    0,    ,    ,    157,    ,    ,    ) \
X__(VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE,    descriptor_update_template,    ,    0,    ,    ,    86,    ,    ,    ) \
X__(VK_OBJECT_TYPE_SURFACE_KHR,    surface_khr,    ,    0,    VkSurfaceKHR,    VK_KHR_surface,    1,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_SWAPCHAIN_KHR,    swapchain_khr,    ,    0,    VkSwapchainKHR,    VK_KHR_swapchain,    2,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_DISPLAY_KHR,    display_khr,    ,    0,    VkDisplayKHR,    VK_KHR_display,    3,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_DISPLAY_MODE_KHR,    display_mode_khr,    ,    1,    VkDisplayModeKHR,    VK_KHR_display,    3,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT,    debug_report_callback_ext,    ,    0,    VkDebugReportCallbackEXT,    VK_EXT_debug_report,    12,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_OBJECT_TABLE_NVX,    object_table_nvx,    ,    0,    VkobjectTableNVX,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX,    indirect_commands_layout_nvx,    ,    1,    VkIndirectCommandsLayoutNVX,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT,    debug_utils_messenger_ext,    ,    0,    VkDebugUtilsMessengerEXT,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_VALIDATION_CACHE_EXT,    validation_cache_ext,    ,    0,    VkValidationCacheEXT,    VK_EXT_validation_cache,    161,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV,    acceleration_structure_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL,    performance_configuration_intel,    ,    0,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPipelineBindPoint_noalias_members(X__) \
X__(VK_PIPELINE_BIND_POINT_GRAPHICS,    graphics,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_BIND_POINT_COMPUTE,    compute,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PIPELINE_BIND_POINT_RAY_TRACING_NV,    ray_tracing_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkRasterizationOrderAMD_noalias_members(X__) \
X__(VK_RASTERIZATION_ORDER_STRICT_AMD,    strict_amd,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_RASTERIZATION_ORDER_RELAXED_AMD,    relaxed_amd,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCommandBufferLevel_noalias_members(X__) \
X__(VK_COMMAND_BUFFER_LEVEL_PRIMARY,    primary,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMMAND_BUFFER_LEVEL_SECONDARY,    secondary,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkColorSpaceKHR_noalias_members(X__) \
X__(VK_COLOR_SPACE_SRGB_NONLINEAR_KHR,    srgb_nonlinear_khr,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT,    display_p3_nonlinear_ext,    ,    1,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT,    extended_srgb_linear_ext,    ,    2,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT,    display_p3_linear_ext,    ,    3,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT,    dci_p3_nonlinear_ext,    ,    4,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_BT709_LINEAR_EXT,    bt709_linear_ext,    ,    5,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_BT709_NONLINEAR_EXT,    bt709_nonlinear_ext,    ,    6,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_BT2020_LINEAR_EXT,    bt2020_linear_ext,    ,    7,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_HDR10_ST2084_EXT,    hdr10_st2084_ext,    ,    8,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_DOLBYVISION_EXT,    dolbyvision_ext,    ,    9,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_HDR10_HLG_EXT,    hdr10_hlg_ext,    ,    10,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT,    adobergb_linear_ext,    ,    11,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT,    adobergb_nonlinear_ext,    ,    12,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_PASS_THROUGH_EXT,    pass_through_ext,    ,    13,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT,    extended_srgb_nonlinear_ext,    ,    14,    ,    VK_EXT_swapchain_colorspace,    105,    vulkan,    ,    ) \
X__(VK_COLOR_SPACE_DISPLAY_NATIVE_AMD,    display_native_amd,    ,    0,    ,    VK_AMD_display_native_hdr,    214,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkFormat_noalias_members(X__) \
X__(VK_FORMAT_UNDEFINED,    undefined,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R4G4_UNORM_PACK8,    r4g4_unorm_pack8,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R4G4B4A4_UNORM_PACK16,    r4g4b4a4_unorm_pack16,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B4G4R4A4_UNORM_PACK16,    b4g4r4a4_unorm_pack16,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R5G6B5_UNORM_PACK16,    r5g6b5_unorm_pack16,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B5G6R5_UNORM_PACK16,    b5g6r5_unorm_pack16,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R5G5B5A1_UNORM_PACK16,    r5g5b5a1_unorm_pack16,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B5G5R5A1_UNORM_PACK16,    b5g5r5a1_unorm_pack16,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A1R5G5B5_UNORM_PACK16,    a1r5g5b5_unorm_pack16,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_UNORM,    r8_unorm,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_SNORM,    r8_snorm,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_USCALED,    r8_uscaled,    11,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_SSCALED,    r8_sscaled,    12,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_UINT,    r8_uint,    13,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_SINT,    r8_sint,    14,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8_SRGB,    r8_srgb,    15,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_UNORM,    r8g8_unorm,    16,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_SNORM,    r8g8_snorm,    17,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_USCALED,    r8g8_uscaled,    18,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_SSCALED,    r8g8_sscaled,    19,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_UINT,    r8g8_uint,    20,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_SINT,    r8g8_sint,    21,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8_SRGB,    r8g8_srgb,    22,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_UNORM,    r8g8b8_unorm,    23,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_SNORM,    r8g8b8_snorm,    24,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_USCALED,    r8g8b8_uscaled,    25,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_SSCALED,    r8g8b8_sscaled,    26,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_UINT,    r8g8b8_uint,    27,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_SINT,    r8g8b8_sint,    28,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8_SRGB,    r8g8b8_srgb,    29,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_UNORM,    b8g8r8_unorm,    30,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_SNORM,    b8g8r8_snorm,    31,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_USCALED,    b8g8r8_uscaled,    32,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_SSCALED,    b8g8r8_sscaled,    33,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_UINT,    b8g8r8_uint,    34,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_SINT,    b8g8r8_sint,    35,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8_SRGB,    b8g8r8_srgb,    36,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_UNORM,    r8g8b8a8_unorm,    37,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_SNORM,    r8g8b8a8_snorm,    38,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_USCALED,    r8g8b8a8_uscaled,    39,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_SSCALED,    r8g8b8a8_sscaled,    40,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_UINT,    r8g8b8a8_uint,    41,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_SINT,    r8g8b8a8_sint,    42,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R8G8B8A8_SRGB,    r8g8b8a8_srgb,    43,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_UNORM,    b8g8r8a8_unorm,    44,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_SNORM,    b8g8r8a8_snorm,    45,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_USCALED,    b8g8r8a8_uscaled,    46,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_SSCALED,    b8g8r8a8_sscaled,    47,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_UINT,    b8g8r8a8_uint,    48,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_SINT,    b8g8r8a8_sint,    49,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8A8_SRGB,    b8g8r8a8_srgb,    50,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_UNORM_PACK32,    a8b8g8r8_unorm_pack32,    51,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_SNORM_PACK32,    a8b8g8r8_snorm_pack32,    52,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_USCALED_PACK32,    a8b8g8r8_uscaled_pack32,    53,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_SSCALED_PACK32,    a8b8g8r8_sscaled_pack32,    54,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_UINT_PACK32,    a8b8g8r8_uint_pack32,    55,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_SINT_PACK32,    a8b8g8r8_sint_pack32,    56,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A8B8G8R8_SRGB_PACK32,    a8b8g8r8_srgb_pack32,    57,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_UNORM_PACK32,    a2r10g10b10_unorm_pack32,    58,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_SNORM_PACK32,    a2r10g10b10_snorm_pack32,    59,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_USCALED_PACK32,    a2r10g10b10_uscaled_pack32,    60,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_SSCALED_PACK32,    a2r10g10b10_sscaled_pack32,    61,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_UINT_PACK32,    a2r10g10b10_uint_pack32,    62,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2R10G10B10_SINT_PACK32,    a2r10g10b10_sint_pack32,    63,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_UNORM_PACK32,    a2b10g10r10_unorm_pack32,    64,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_SNORM_PACK32,    a2b10g10r10_snorm_pack32,    65,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_USCALED_PACK32,    a2b10g10r10_uscaled_pack32,    66,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_SSCALED_PACK32,    a2b10g10r10_sscaled_pack32,    67,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_UINT_PACK32,    a2b10g10r10_uint_pack32,    68,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_A2B10G10R10_SINT_PACK32,    a2b10g10r10_sint_pack32,    69,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_UNORM,    r16_unorm,    70,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_SNORM,    r16_snorm,    71,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_USCALED,    r16_uscaled,    72,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_SSCALED,    r16_sscaled,    73,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_UINT,    r16_uint,    74,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_SINT,    r16_sint,    75,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16_SFLOAT,    r16_sfloat,    76,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_UNORM,    r16g16_unorm,    77,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_SNORM,    r16g16_snorm,    78,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_USCALED,    r16g16_uscaled,    79,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_SSCALED,    r16g16_sscaled,    80,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_UINT,    r16g16_uint,    81,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_SINT,    r16g16_sint,    82,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16_SFLOAT,    r16g16_sfloat,    83,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_UNORM,    r16g16b16_unorm,    84,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_SNORM,    r16g16b16_snorm,    85,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_USCALED,    r16g16b16_uscaled,    86,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_SSCALED,    r16g16b16_sscaled,    87,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_UINT,    r16g16b16_uint,    88,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_SINT,    r16g16b16_sint,    89,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16_SFLOAT,    r16g16b16_sfloat,    90,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_UNORM,    r16g16b16a16_unorm,    91,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_SNORM,    r16g16b16a16_snorm,    92,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_USCALED,    r16g16b16a16_uscaled,    93,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_SSCALED,    r16g16b16a16_sscaled,    94,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_UINT,    r16g16b16a16_uint,    95,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_SINT,    r16g16b16a16_sint,    96,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R16G16B16A16_SFLOAT,    r16g16b16a16_sfloat,    97,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32_UINT,    r32_uint,    98,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32_SINT,    r32_sint,    99,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32_SFLOAT,    r32_sfloat,    100,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32_UINT,    r32g32_uint,    101,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32_SINT,    r32g32_sint,    102,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32_SFLOAT,    r32g32_sfloat,    103,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32_UINT,    r32g32b32_uint,    104,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32_SINT,    r32g32b32_sint,    105,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32_SFLOAT,    r32g32b32_sfloat,    106,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32A32_UINT,    r32g32b32a32_uint,    107,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32A32_SINT,    r32g32b32a32_sint,    108,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R32G32B32A32_SFLOAT,    r32g32b32a32_sfloat,    109,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64_UINT,    r64_uint,    110,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64_SINT,    r64_sint,    111,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64_SFLOAT,    r64_sfloat,    112,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64_UINT,    r64g64_uint,    113,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64_SINT,    r64g64_sint,    114,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64_SFLOAT,    r64g64_sfloat,    115,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64_UINT,    r64g64b64_uint,    116,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64_SINT,    r64g64b64_sint,    117,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64_SFLOAT,    r64g64b64_sfloat,    118,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64A64_UINT,    r64g64b64a64_uint,    119,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64A64_SINT,    r64g64b64a64_sint,    120,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_R64G64B64A64_SFLOAT,    r64g64b64a64_sfloat,    121,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_B10G11R11_UFLOAT_PACK32,    b10g11r11_ufloat_pack32,    122,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_E5B9G9R9_UFLOAT_PACK32,    e5b9g9r9_ufloat_pack32,    123,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_D16_UNORM,    d16_unorm,    124,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_X8_D24_UNORM_PACK32,    x8_d24_unorm_pack32,    125,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_D32_SFLOAT,    d32_sfloat,    126,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_S8_UINT,    s8_uint,    127,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_D16_UNORM_S8_UINT,    d16_unorm_s8_uint,    128,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_D24_UNORM_S8_UINT,    d24_unorm_s8_uint,    129,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_D32_SFLOAT_S8_UINT,    d32_sfloat_s8_uint,    130,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC1_RGB_UNORM_BLOCK,    bc1_rgb_unorm_block,    131,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC1_RGB_SRGB_BLOCK,    bc1_rgb_srgb_block,    132,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC1_RGBA_UNORM_BLOCK,    bc1_rgba_unorm_block,    133,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC1_RGBA_SRGB_BLOCK,    bc1_rgba_srgb_block,    134,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC2_UNORM_BLOCK,    bc2_unorm_block,    135,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC2_SRGB_BLOCK,    bc2_srgb_block,    136,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC3_UNORM_BLOCK,    bc3_unorm_block,    137,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC3_SRGB_BLOCK,    bc3_srgb_block,    138,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC4_UNORM_BLOCK,    bc4_unorm_block,    139,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC4_SNORM_BLOCK,    bc4_snorm_block,    140,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC5_UNORM_BLOCK,    bc5_unorm_block,    141,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC5_SNORM_BLOCK,    bc5_snorm_block,    142,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC6H_UFLOAT_BLOCK,    bc6h_ufloat_block,    143,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC6H_SFLOAT_BLOCK,    bc6h_sfloat_block,    144,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC7_UNORM_BLOCK,    bc7_unorm_block,    145,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_BC7_SRGB_BLOCK,    bc7_srgb_block,    146,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK,    etc2_r8g8b8_unorm_block,    147,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK,    etc2_r8g8b8_srgb_block,    148,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK,    etc2_r8g8b8a1_unorm_block,    149,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK,    etc2_r8g8b8a1_srgb_block,    150,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK,    etc2_r8g8b8a8_unorm_block,    151,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK,    etc2_r8g8b8a8_srgb_block,    152,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_EAC_R11_UNORM_BLOCK,    eac_r11_unorm_block,    153,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_EAC_R11_SNORM_BLOCK,    eac_r11_snorm_block,    154,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_EAC_R11G11_UNORM_BLOCK,    eac_r11g11_unorm_block,    155,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_EAC_R11G11_SNORM_BLOCK,    eac_r11g11_snorm_block,    156,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_4x4_UNORM_BLOCK,    astc_4x4_unorm_block,    157,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_4x4_SRGB_BLOCK,    astc_4x4_srgb_block,    158,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_5x4_UNORM_BLOCK,    astc_5x4_unorm_block,    159,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_5x4_SRGB_BLOCK,    astc_5x4_srgb_block,    160,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_5x5_UNORM_BLOCK,    astc_5x5_unorm_block,    161,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_5x5_SRGB_BLOCK,    astc_5x5_srgb_block,    162,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_6x5_UNORM_BLOCK,    astc_6x5_unorm_block,    163,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_6x5_SRGB_BLOCK,    astc_6x5_srgb_block,    164,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_6x6_UNORM_BLOCK,    astc_6x6_unorm_block,    165,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_6x6_SRGB_BLOCK,    astc_6x6_srgb_block,    166,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x5_UNORM_BLOCK,    astc_8x5_unorm_block,    167,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x5_SRGB_BLOCK,    astc_8x5_srgb_block,    168,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x6_UNORM_BLOCK,    astc_8x6_unorm_block,    169,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x6_SRGB_BLOCK,    astc_8x6_srgb_block,    170,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x8_UNORM_BLOCK,    astc_8x8_unorm_block,    171,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_8x8_SRGB_BLOCK,    astc_8x8_srgb_block,    172,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x5_UNORM_BLOCK,    astc_10x5_unorm_block,    173,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x5_SRGB_BLOCK,    astc_10x5_srgb_block,    174,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x6_UNORM_BLOCK,    astc_10x6_unorm_block,    175,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x6_SRGB_BLOCK,    astc_10x6_srgb_block,    176,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x8_UNORM_BLOCK,    astc_10x8_unorm_block,    177,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x8_SRGB_BLOCK,    astc_10x8_srgb_block,    178,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x10_UNORM_BLOCK,    astc_10x10_unorm_block,    179,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_10x10_SRGB_BLOCK,    astc_10x10_srgb_block,    180,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_12x10_UNORM_BLOCK,    astc_12x10_unorm_block,    181,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_12x10_SRGB_BLOCK,    astc_12x10_srgb_block,    182,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_12x12_UNORM_BLOCK,    astc_12x12_unorm_block,    183,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_ASTC_12x12_SRGB_BLOCK,    astc_12x12_srgb_block,    184,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FORMAT_G8B8G8R8_422_UNORM,    g8b8g8r8_422_unorm,    ,    0,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_B8G8R8G8_422_UNORM,    b8g8r8g8_422_unorm,    ,    1,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM,    g8_b8_r8_3plane_420_unorm,    ,    2,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G8_B8R8_2PLANE_420_UNORM,    g8_b8r8_2plane_420_unorm,    ,    3,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM,    g8_b8_r8_3plane_422_unorm,    ,    4,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G8_B8R8_2PLANE_422_UNORM,    g8_b8r8_2plane_422_unorm,    ,    5,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM,    g8_b8_r8_3plane_444_unorm,    ,    6,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R10X6_UNORM_PACK16,    r10x6_unorm_pack16,    ,    7,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R10X6G10X6_UNORM_2PACK16,    r10x6g10x6_unorm_2pack16,    ,    8,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16,    r10x6g10x6b10x6a10x6_unorm_4pack16,    ,    9,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16,    g10x6b10x6g10x6r10x6_422_unorm_4pack16,    ,    10,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16,    b10x6g10x6r10x6g10x6_422_unorm_4pack16,    ,    11,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16,    g10x6_b10x6_r10x6_3plane_420_unorm_3pack16,    ,    12,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16,    g10x6_b10x6r10x6_2plane_420_unorm_3pack16,    ,    13,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16,    g10x6_b10x6_r10x6_3plane_422_unorm_3pack16,    ,    14,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16,    g10x6_b10x6r10x6_2plane_422_unorm_3pack16,    ,    15,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16,    g10x6_b10x6_r10x6_3plane_444_unorm_3pack16,    ,    16,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R12X4_UNORM_PACK16,    r12x4_unorm_pack16,    ,    17,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R12X4G12X4_UNORM_2PACK16,    r12x4g12x4_unorm_2pack16,    ,    18,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16,    r12x4g12x4b12x4a12x4_unorm_4pack16,    ,    19,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16,    g12x4b12x4g12x4r12x4_422_unorm_4pack16,    ,    20,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16,    b12x4g12x4r12x4g12x4_422_unorm_4pack16,    ,    21,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16,    g12x4_b12x4_r12x4_3plane_420_unorm_3pack16,    ,    22,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16,    g12x4_b12x4r12x4_2plane_420_unorm_3pack16,    ,    23,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16,    g12x4_b12x4_r12x4_3plane_422_unorm_3pack16,    ,    24,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16,    g12x4_b12x4r12x4_2plane_422_unorm_3pack16,    ,    25,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16,    g12x4_b12x4_r12x4_3plane_444_unorm_3pack16,    ,    26,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16B16G16R16_422_UNORM,    g16b16g16r16_422_unorm,    ,    27,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_B16G16R16G16_422_UNORM,    b16g16r16g16_422_unorm,    ,    28,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM,    g16_b16_r16_3plane_420_unorm,    ,    29,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16_B16R16_2PLANE_420_UNORM,    g16_b16r16_2plane_420_unorm,    ,    30,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM,    g16_b16_r16_3plane_422_unorm,    ,    31,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16_B16R16_2PLANE_422_UNORM,    g16_b16r16_2plane_422_unorm,    ,    32,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM,    g16_b16_r16_3plane_444_unorm,    ,    33,    ,    ,    157,    ,    ,    ) \
X__(VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG,    pvrtc1_2bpp_unorm_block_img,    ,    0,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG,    pvrtc1_4bpp_unorm_block_img,    ,    1,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG,    pvrtc2_2bpp_unorm_block_img,    ,    2,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG,    pvrtc2_4bpp_unorm_block_img,    ,    3,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG,    pvrtc1_2bpp_srgb_block_img,    ,    4,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG,    pvrtc1_4bpp_srgb_block_img,    ,    5,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG,    pvrtc2_2bpp_srgb_block_img,    ,    6,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG,    pvrtc2_4bpp_srgb_block_img,    ,    7,    ,    VK_IMG_format_pvrtc,    55,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT,    astc_4x4_sfloat_block_ext,    ,    0,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT,    astc_5x4_sfloat_block_ext,    ,    1,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT,    astc_5x5_sfloat_block_ext,    ,    2,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT,    astc_6x5_sfloat_block_ext,    ,    3,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT,    astc_6x6_sfloat_block_ext,    ,    4,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT,    astc_8x5_sfloat_block_ext,    ,    5,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT,    astc_8x6_sfloat_block_ext,    ,    6,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT,    astc_8x8_sfloat_block_ext,    ,    7,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT,    astc_10x5_sfloat_block_ext,    ,    8,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT,    astc_10x6_sfloat_block_ext,    ,    9,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT,    astc_10x8_sfloat_block_ext,    ,    10,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT,    astc_10x10_sfloat_block_ext,    ,    11,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT,    astc_12x10_sfloat_block_ext,    ,    12,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT,    astc_12x12_sfloat_block_ext,    ,    13,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkVendorId_noalias_members(X__) \
X__(VK_VENDOR_ID_VIV,    viv,    0x10001,    ,    Vivante vendor ID,    ,    ,    ,    ,    ) \
X__(VK_VENDOR_ID_VSI,    vsi,    0x10002,    ,    VeriSilicon vendor ID,    ,    ,    ,    ,    ) \
X__(VK_VENDOR_ID_KAZAN,    kazan,    0x10003,    ,    Kazan Software Renderer,    ,    ,    ,    ,    ) \

# if defined(VK_USE_PLATFORM_WIN32_KHR)

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkFullScreenExclusiveEXT_noalias_members(X__) \
X__(VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT,    default_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT,    allowed_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT,    disallowed_ext,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT,    application_controlled_ext,    3,    ,    ,    ,    ,    ,    ,    ) \

# endif

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSamplerAddressMode_noalias_members(X__) \
X__(VK_SAMPLER_ADDRESS_MODE_REPEAT,    repeat,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT,    mirrored_repeat,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE,    clamp_to_edge,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER,    clamp_to_border,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE,    mirror_clamp_to_edge,    4,    ,    Note that this defines what was previously a core enum  and so uses the `value` attribute rather than `offset`  and does not have a suffix. This is a special case  and should not be repeated,    VK_KHR_sampler_mirror_clamp_to_edge,    15,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkImageType_noalias_members(X__) \
X__(VK_IMAGE_TYPE_1D,    1d,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_TYPE_2D,    2d,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_TYPE_3D,    3d,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPipelineCacheHeaderVersion_noalias_members(X__) \
X__(VK_PIPELINE_CACHE_HEADER_VERSION_ONE,    one,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPerformanceParameterTypeINTEL_noalias_members(X__) \
X__(VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL,    hw_counters_supported_intel,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL,    stream_marker_valid_bits_intel,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkIndirectCommandsTokenTypeNVX_noalias_members(X__) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX,    pipeline_nvx,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX,    descriptor_set_nvx,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX,    index_buffer_nvx,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX,    vertex_buffer_nvx,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX,    push_constant_nvx,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX,    draw_indexed_nvx,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX,    draw_nvx,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX,    dispatch_nvx,    7,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkImageLayout_noalias_members(X__) \
X__(VK_IMAGE_LAYOUT_UNDEFINED,    undefined,    0,    ,    Implicit layout an image is when its contents are undefined due to various reasons (e.g. right after creation),    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_GENERAL,    general,    1,    ,    General layout when image can be used for any kind of access,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,    color_attachment_optimal,    2,    ,    Optimal layout when image is only used for color attachment read/write,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL,    depth_stencil_attachment_optimal,    3,    ,    Optimal layout when image is only used for depth/stencil attachment read/write,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL,    depth_stencil_read_only_optimal,    4,    ,    Optimal layout when image is used for read only depth/stencil attachment and shader access,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,    shader_read_only_optimal,    5,    ,    Optimal layout when image is used for read only shader access,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,    transfer_src_optimal,    6,    ,    Optimal layout when image is used only as source of transfer operations,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,    transfer_dst_optimal,    7,    ,    Optimal layout when image is used only as destination of transfer operations,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_PREINITIALIZED,    preinitialized,    8,    ,    Initial layout used when the data is populated by the CPU,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL,    depth_read_only_stencil_attachment_optimal,    ,    0,    ,    ,    118,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL,    depth_attachment_stencil_read_only_optimal,    ,    1,    ,    ,    118,    ,    ,    ) \
X__(VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,    present_src_khr,    ,    2,    ,    VK_KHR_swapchain,    2,    vulkan,    ,    ) \
X__(VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR,    shared_present_khr,    ,    0,    ,    VK_KHR_shared_presentable_image,    112,    vulkan,    ,    ) \
X__(VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV,    shading_rate_optimal_nv,    ,    3,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT,    fragment_density_map_optimal_ext,    ,    0,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkImageTiling_noalias_members(X__) \
X__(VK_IMAGE_TILING_OPTIMAL,    optimal,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_TILING_LINEAR,    linear,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT,    drm_format_modifier_ext,    ,    0,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSamplerMipmapMode_noalias_members(X__) \
X__(VK_SAMPLER_MIPMAP_MODE_NEAREST,    nearest,    0,    ,    Choose nearest mip level,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_MIPMAP_MODE_LINEAR,    linear,    1,    ,    Linear filter between mip levels,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkValidationCheckEXT_noalias_members(X__) \
X__(VK_VALIDATION_CHECK_ALL_EXT,    all_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_CHECK_SHADERS_EXT,    shaders_ext,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkResult_noalias_members(X__) \
X__(VK_SUCCESS,    success,    0,    ,    Command completed successfully,    ,    ,    ,    ,    ) \
X__(VK_NOT_READY,    not_ready,    1,    ,    A fence or query has not yet completed,    ,    ,    ,    ,    ) \
X__(VK_TIMEOUT,    timeout,    2,    ,    A wait operation has not completed in the specified time,    ,    ,    ,    ,    ) \
X__(VK_EVENT_SET,    event_set,    3,    ,    An event is signaled,    ,    ,    ,    ,    ) \
X__(VK_EVENT_RESET,    event_reset,    4,    ,    An event is unsignaled,    ,    ,    ,    ,    ) \
X__(VK_INCOMPLETE,    incomplete,    5,    ,    A return array was too small for the result,    ,    ,    ,    ,    ) \
X__(VK_ERROR_OUT_OF_HOST_MEMORY,    error_out_of_host_memory,    -1,    ,    A host memory allocation has failed,    ,    ,    ,    ,    ) \
X__(VK_ERROR_OUT_OF_DEVICE_MEMORY,    error_out_of_device_memory,    -2,    ,    A device memory allocation has failed,    ,    ,    ,    ,    ) \
X__(VK_ERROR_INITIALIZATION_FAILED,    error_initialization_failed,    -3,    ,    Initialization of a object has failed,    ,    ,    ,    ,    ) \
X__(VK_ERROR_DEVICE_LOST,    error_device_lost,    -4,    ,    The logical device has been lost. See <<devsandqueues-lost-device>>,    ,    ,    ,    ,    ) \
X__(VK_ERROR_MEMORY_MAP_FAILED,    error_memory_map_failed,    -5,    ,    Mapping of a memory object has failed,    ,    ,    ,    ,    ) \
X__(VK_ERROR_LAYER_NOT_PRESENT,    error_layer_not_present,    -6,    ,    Layer specified does not exist,    ,    ,    ,    ,    ) \
X__(VK_ERROR_EXTENSION_NOT_PRESENT,    error_extension_not_present,    -7,    ,    Extension specified does not exist,    ,    ,    ,    ,    ) \
X__(VK_ERROR_FEATURE_NOT_PRESENT,    error_feature_not_present,    -8,    ,    Requested feature is not available on this device,    ,    ,    ,    ,    ) \
X__(VK_ERROR_INCOMPATIBLE_DRIVER,    error_incompatible_driver,    -9,    ,    Unable to find a Vulkan driver,    ,    ,    ,    ,    ) \
X__(VK_ERROR_TOO_MANY_OBJECTS,    error_too_many_objects,    -10,    ,    Too many objects of the type have already been created,    ,    ,    ,    ,    ) \
X__(VK_ERROR_FORMAT_NOT_SUPPORTED,    error_format_not_supported,    -11,    ,    Requested format is not supported on this device,    ,    ,    ,    ,    ) \
X__(VK_ERROR_FRAGMENTED_POOL,    error_fragmented_pool,    -12,    ,    A requested pool allocation has failed due to fragmentation of the pool`s memory,    ,    ,    ,    ,    ) \
X__(VK_ERROR_OUT_OF_POOL_MEMORY,    error_out_of_pool_memory,    ,    0,    ,    ,    70,    ,    -,    ) \
X__(VK_ERROR_INVALID_EXTERNAL_HANDLE,    error_invalid_external_handle,    ,    3,    ,    ,    73,    ,    -,    ) \
X__(VK_ERROR_SURFACE_LOST_KHR,    error_surface_lost_khr,    ,    0,    ,    VK_KHR_surface,    1,    vulkan,    -,    ) \
X__(VK_ERROR_NATIVE_WINDOW_IN_USE_KHR,    error_native_window_in_use_khr,    ,    1,    ,    VK_KHR_surface,    1,    vulkan,    -,    ) \
X__(VK_SUBOPTIMAL_KHR,    suboptimal_khr,    ,    3,    ,    VK_KHR_swapchain,    2,    vulkan,    ,    ) \
X__(VK_ERROR_OUT_OF_DATE_KHR,    error_out_of_date_khr,    ,    4,    ,    VK_KHR_swapchain,    2,    vulkan,    -,    ) \
X__(VK_ERROR_INCOMPATIBLE_DISPLAY_KHR,    error_incompatible_display_khr,    ,    1,    ,    VK_KHR_display_swapchain,    4,    vulkan,    -,    ) \
X__(VK_ERROR_VALIDATION_FAILED_EXT,    error_validation_failed_ext,    ,    1,    ,    VK_EXT_debug_report,    12,    vulkan,    -,    ) \
X__(VK_ERROR_INVALID_SHADER_NV,    error_invalid_shader_nv,    ,    0,    ,    VK_NV_glsl_shader,    13,    vulkan,    -,    ) \
X__(VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT,    error_invalid_drm_format_modifier_plane_layout_ext,    ,    0,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    -,    ) \
X__(VK_ERROR_FRAGMENTATION_EXT,    error_fragmentation_ext,    ,    0,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    -,    ) \
X__(VK_ERROR_NOT_PERMITTED_EXT,    error_not_permitted_ext,    ,    1,    ,    VK_EXT_global_priority,    175,    vulkan,    -,    ) \
X__(VK_ERROR_INVALID_DEVICE_ADDRESS_EXT,    error_invalid_device_address_ext,    ,    0,    ,    VK_EXT_buffer_device_address,    245,    vulkan,    -,    ) \
X__(VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT,    error_full_screen_exclusive_mode_lost_ext,    ,    0,    ,    VK_EXT_full_screen_exclusive,    256,    vulkan,    -,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkObjectEntryTypeNVX_noalias_members(X__) \
X__(VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX,    descriptor_set_nvx,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX,    pipeline_nvx,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX,    index_buffer_nvx,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX,    vertex_buffer_nvx,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX,    push_constant_nvx,    4,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkIndexType_noalias_members(X__) \
X__(VK_INDEX_TYPE_UINT16,    uint16,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDEX_TYPE_UINT32,    uint32,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_INDEX_TYPE_NONE_NV,    none_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkShaderInfoTypeAMD_noalias_members(X__) \
X__(VK_SHADER_INFO_TYPE_STATISTICS_AMD,    statistics_amd,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_INFO_TYPE_BINARY_AMD,    binary_amd,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD,    disassembly_amd,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSamplerYcbcrRange_noalias_members(X__) \
X__(VK_SAMPLER_YCBCR_RANGE_ITU_FULL,    itu_full,    0,    ,    Luma 0..1 maps to 0..255  chroma -0.5..0.5 to 1..255 (clamped),    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_YCBCR_RANGE_ITU_NARROW,    itu_narrow,    1,    ,    Luma 0..1 maps to 16..235  chroma -0.5..0.5 to 16..240,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDescriptorUpdateTemplateType_noalias_members(X__) \
X__(VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET,    descriptor_set,    0,    ,    Create descriptor update template for descriptor set updates,    ,    ,    ,    ,    ) \
X__(VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR,    push_descriptors_khr,    1,    ,    Create descriptor update template for pushed descriptor updates,    VK_KHR_push_descriptor,    81,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkVertexInputRate_noalias_members(X__) \
X__(VK_VERTEX_INPUT_RATE_VERTEX,    vertex,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VERTEX_INPUT_RATE_INSTANCE,    instance,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkBlendFactor_noalias_members(X__) \
X__(VK_BLEND_FACTOR_ZERO,    zero,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE,    one,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_SRC_COLOR,    src_color,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR,    one_minus_src_color,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_DST_COLOR,    dst_color,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR,    one_minus_dst_color,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_SRC_ALPHA,    src_alpha,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA,    one_minus_src_alpha,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_DST_ALPHA,    dst_alpha,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA,    one_minus_dst_alpha,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_CONSTANT_COLOR,    constant_color,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR,    one_minus_constant_color,    11,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_CONSTANT_ALPHA,    constant_alpha,    12,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA,    one_minus_constant_alpha,    13,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_SRC_ALPHA_SATURATE,    src_alpha_saturate,    14,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_SRC1_COLOR,    src1_color,    15,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR,    one_minus_src1_color,    16,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_SRC1_ALPHA,    src1_alpha,    17,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA,    one_minus_src1_alpha,    18,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCompareOp_noalias_members(X__) \
X__(VK_COMPARE_OP_NEVER,    never,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_LESS,    less,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_EQUAL,    equal,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_LESS_OR_EQUAL,    less_or_equal,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_GREATER,    greater,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_NOT_EQUAL,    not_equal,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_GREATER_OR_EQUAL,    greater_or_equal,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPARE_OP_ALWAYS,    always,    7,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCoarseSampleOrderTypeNV_noalias_members(X__) \
X__(VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV,    default_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV,    custom_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV,    pixel_major_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV,    sample_major_nv,    3,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkInternalAllocationType_noalias_members(X__) \
X__(VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE,    executable,    0,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSamplerReductionModeEXT_noalias_members(X__) \
X__(VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT,    weighted_average_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_REDUCTION_MODE_MIN_EXT,    min_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SAMPLER_REDUCTION_MODE_MAX_EXT,    max_ext,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkLineRasterizationModeEXT_noalias_members(X__) \
X__(VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT,    default_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT,    rectangular_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT,    bresenham_ext,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT,    rectangular_smooth_ext,    3,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkBlendOp_noalias_members(X__) \
X__(VK_BLEND_OP_ADD,    add,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OP_SUBTRACT,    subtract,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OP_REVERSE_SUBTRACT,    reverse_subtract,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OP_MIN,    min,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OP_MAX,    max,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BLEND_OP_ZERO_EXT,    zero_ext,    ,    0,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SRC_EXT,    src_ext,    ,    1,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DST_EXT,    dst_ext,    ,    2,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SRC_OVER_EXT,    src_over_ext,    ,    3,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DST_OVER_EXT,    dst_over_ext,    ,    4,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SRC_IN_EXT,    src_in_ext,    ,    5,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DST_IN_EXT,    dst_in_ext,    ,    6,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SRC_OUT_EXT,    src_out_ext,    ,    7,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DST_OUT_EXT,    dst_out_ext,    ,    8,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SRC_ATOP_EXT,    src_atop_ext,    ,    9,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DST_ATOP_EXT,    dst_atop_ext,    ,    10,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_XOR_EXT,    xor_ext,    ,    11,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_MULTIPLY_EXT,    multiply_ext,    ,    12,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SCREEN_EXT,    screen_ext,    ,    13,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_OVERLAY_EXT,    overlay_ext,    ,    14,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DARKEN_EXT,    darken_ext,    ,    15,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_LIGHTEN_EXT,    lighten_ext,    ,    16,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_COLORDODGE_EXT,    colordodge_ext,    ,    17,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_COLORBURN_EXT,    colorburn_ext,    ,    18,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HARDLIGHT_EXT,    hardlight_ext,    ,    19,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_SOFTLIGHT_EXT,    softlight_ext,    ,    20,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_DIFFERENCE_EXT,    difference_ext,    ,    21,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_EXCLUSION_EXT,    exclusion_ext,    ,    22,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_INVERT_EXT,    invert_ext,    ,    23,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_INVERT_RGB_EXT,    invert_rgb_ext,    ,    24,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_LINEARDODGE_EXT,    lineardodge_ext,    ,    25,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_LINEARBURN_EXT,    linearburn_ext,    ,    26,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_VIVIDLIGHT_EXT,    vividlight_ext,    ,    27,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_LINEARLIGHT_EXT,    linearlight_ext,    ,    28,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_PINLIGHT_EXT,    pinlight_ext,    ,    29,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HARDMIX_EXT,    hardmix_ext,    ,    30,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HSL_HUE_EXT,    hsl_hue_ext,    ,    31,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HSL_SATURATION_EXT,    hsl_saturation_ext,    ,    32,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HSL_COLOR_EXT,    hsl_color_ext,    ,    33,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_HSL_LUMINOSITY_EXT,    hsl_luminosity_ext,    ,    34,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_PLUS_EXT,    plus_ext,    ,    35,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_PLUS_CLAMPED_EXT,    plus_clamped_ext,    ,    36,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT,    plus_clamped_alpha_ext,    ,    37,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_PLUS_DARKER_EXT,    plus_darker_ext,    ,    38,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_MINUS_EXT,    minus_ext,    ,    39,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_MINUS_CLAMPED_EXT,    minus_clamped_ext,    ,    40,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_CONTRAST_EXT,    contrast_ext,    ,    41,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_INVERT_OVG_EXT,    invert_ovg_ext,    ,    42,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_RED_EXT,    red_ext,    ,    43,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_GREEN_EXT,    green_ext,    ,    44,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_BLEND_OP_BLUE_EXT,    blue_ext,    ,    45,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkFrontFace_noalias_members(X__) \
X__(VK_FRONT_FACE_COUNTER_CLOCKWISE,    counter_clockwise,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_FRONT_FACE_CLOCKWISE,    clockwise,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPerformanceOverrideTypeINTEL_noalias_members(X__) \
X__(VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL,    null_hardware_intel,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL,    flush_gpu_caches_intel,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkAttachmentLoadOp_noalias_members(X__) \
X__(VK_ATTACHMENT_LOAD_OP_LOAD,    load,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ATTACHMENT_LOAD_OP_CLEAR,    clear,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ATTACHMENT_LOAD_OP_DONT_CARE,    dont_care,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkCopyAccelerationStructureModeNV_noalias_members(X__) \
X__(VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV,    clone_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV,    compact_nv,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkLogicOp_noalias_members(X__) \
X__(VK_LOGIC_OP_CLEAR,    clear,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_AND,    and,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_AND_REVERSE,    and_reverse,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_COPY,    copy,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_AND_INVERTED,    and_inverted,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_NO_OP,    no_op,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_XOR,    xor,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_OR,    or,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_NOR,    nor,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_EQUIVALENT,    equivalent,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_INVERT,    invert,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_OR_REVERSE,    or_reverse,    11,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_COPY_INVERTED,    copy_inverted,    12,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_OR_INVERTED,    or_inverted,    13,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_NAND,    nand,    14,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_LOGIC_OP_SET,    set,    15,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkRayTracingShaderGroupTypeNV_noalias_members(X__) \
X__(VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV,    general_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV,    triangles_hit_group_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV,    procedural_hit_group_nv,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDisplayEventTypeEXT_noalias_members(X__) \
X__(VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT,    first_pixel_out_ext,    0,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPresentModeKHR_noalias_members(X__) \
X__(VK_PRESENT_MODE_IMMEDIATE_KHR,    immediate_khr,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRESENT_MODE_MAILBOX_KHR,    mailbox_khr,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRESENT_MODE_FIFO_KHR,    fifo_khr,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRESENT_MODE_FIFO_RELAXED_KHR,    fifo_relaxed_khr,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR,    shared_demand_refresh_khr,    ,    0,    ,    VK_KHR_shared_presentable_image,    112,    vulkan,    ,    ) \
X__(VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR,    shared_continuous_refresh_khr,    ,    1,    ,    VK_KHR_shared_presentable_image,    112,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkComponentTypeNV_noalias_members(X__) \
X__(VK_COMPONENT_TYPE_FLOAT16_NV,    float16_nv,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_FLOAT32_NV,    float32_nv,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_FLOAT64_NV,    float64_nv,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_SINT8_NV,    sint8_nv,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_SINT16_NV,    sint16_nv,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_SINT32_NV,    sint32_nv,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_SINT64_NV,    sint64_nv,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_UINT8_NV,    uint8_nv,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_UINT16_NV,    uint16_nv,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_UINT32_NV,    uint32_nv,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_COMPONENT_TYPE_UINT64_NV,    uint64_nv,    10,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkDynamicState_noalias_members(X__) \
X__(VK_DYNAMIC_STATE_VIEWPORT,    viewport,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_SCISSOR,    scissor,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_LINE_WIDTH,    line_width,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_DEPTH_BIAS,    depth_bias,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_BLEND_CONSTANTS,    blend_constants,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_DEPTH_BOUNDS,    depth_bounds,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK,    stencil_compare_mask,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_STENCIL_WRITE_MASK,    stencil_write_mask,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_STENCIL_REFERENCE,    stencil_reference,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV,    viewport_w_scaling_nv,    ,    0,    ,    VK_NV_clip_space_w_scaling,    88,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT,    discard_rectangle_ext,    ,    0,    ,    VK_EXT_discard_rectangles,    100,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT,    sample_locations_ext,    ,    0,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV,    viewport_shading_rate_palette_nv,    ,    4,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV,    viewport_coarse_sample_order_nv,    ,    6,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV,    exclusive_scissor_nv,    ,    1,    ,    VK_NV_scissor_exclusive,    206,    vulkan,    ,    ) \
X__(VK_DYNAMIC_STATE_LINE_STIPPLE_EXT,    line_stipple_ext,    ,    0,    ,    VK_EXT_line_rasterization,    260,    vulkan,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkValidationFeatureEnableEXT_noalias_members(X__) \
X__(VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT,    gpu_assisted_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT,    gpu_assisted_reserve_binding_slot_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT,    best_practices_ext,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkQueueGlobalPriorityEXT_noalias_members(X__) \
X__(VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT,    low_ext,    128,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT,    medium_ext,    256,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT,    high_ext,    512,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT,    realtime_ext,    1024,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkConservativeRasterizationModeEXT_noalias_members(X__) \
X__(VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT,    disabled_ext,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT,    overestimate_ext,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT,    underestimate_ext,    2,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkAttachmentStoreOp_noalias_members(X__) \
X__(VK_ATTACHMENT_STORE_OP_STORE,    store,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_ATTACHMENT_STORE_OP_DONT_CARE,    dont_care,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkSystemAllocationScope_noalias_members(X__) \
X__(VK_SYSTEM_ALLOCATION_SCOPE_COMMAND,    command,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SYSTEM_ALLOCATION_SCOPE_OBJECT,    object,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SYSTEM_ALLOCATION_SCOPE_CACHE,    cache,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SYSTEM_ALLOCATION_SCOPE_DEVICE,    device,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE,    instance,    4,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkPointClippingBehavior_noalias_members(X__) \
X__(VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES,    all_clip_planes,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY,    user_clip_planes_only,    1,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkBorderColor_noalias_members(X__) \
X__(VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK,    float_transparent_black,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BORDER_COLOR_INT_TRANSPARENT_BLACK,    int_transparent_black,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK,    float_opaque_black,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BORDER_COLOR_INT_OPAQUE_BLACK,    int_opaque_black,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE,    float_opaque_white,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_BORDER_COLOR_INT_OPAQUE_WHITE,    int_opaque_white,    5,    ,    ,    ,    ,    ,    ,    ) \

/*name__, my_name__, value__, offset__, comment__, extname__, extnumber__, supported__, dir__, alias__*/
# define Xt_VkStructureType_noalias_members(X__) \
X__(VK_STRUCTURE_TYPE_APPLICATION_INFO,    application_info,    0,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,    instance_create_info,    1,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,    device_queue_create_info,    2,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,    device_create_info,    3,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBMIT_INFO,    submit_info,    4,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO,    memory_allocate_info,    5,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE,    mapped_memory_range,    6,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_SPARSE_INFO,    bind_sparse_info,    7,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,    fence_create_info,    8,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO,    semaphore_create_info,    9,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EVENT_CREATE_INFO,    event_create_info,    10,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO,    query_pool_create_info,    11,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO,    buffer_create_info,    12,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO,    buffer_view_create_info,    13,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO,    image_create_info,    14,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO,    image_view_create_info,    15,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO,    shader_module_create_info,    16,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO,    pipeline_cache_create_info,    17,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO,    pipeline_shader_stage_create_info,    18,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO,    pipeline_vertex_input_state_create_info,    19,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO,    pipeline_input_assembly_state_create_info,    20,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO,    pipeline_tessellation_state_create_info,    21,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO,    pipeline_viewport_state_create_info,    22,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO,    pipeline_rasterization_state_create_info,    23,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO,    pipeline_multisample_state_create_info,    24,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO,    pipeline_depth_stencil_state_create_info,    25,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO,    pipeline_color_blend_state_create_info,    26,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO,    pipeline_dynamic_state_create_info,    27,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO,    graphics_pipeline_create_info,    28,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO,    compute_pipeline_create_info,    29,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO,    pipeline_layout_create_info,    30,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO,    sampler_create_info,    31,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO,    descriptor_set_layout_create_info,    32,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO,    descriptor_pool_create_info,    33,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO,    descriptor_set_allocate_info,    34,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET,    write_descriptor_set,    35,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET,    copy_descriptor_set,    36,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO,    framebuffer_create_info,    37,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO,    render_pass_create_info,    38,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,    command_pool_create_info,    39,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,    command_buffer_allocate_info,    40,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO,    command_buffer_inheritance_info,    41,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO,    command_buffer_begin_info,    42,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO,    render_pass_begin_info,    43,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER,    buffer_memory_barrier,    44,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,    image_memory_barrier,    45,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_BARRIER,    memory_barrier,    46,    ,    ,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO,    loader_instance_create_info,    47,    ,    Reserved for internal use by the loader  layers  and ICDs,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO,    loader_device_create_info,    48,    ,    Reserved for internal use by the loader  layers  and ICDs,    ,    ,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES,    physical_device_subgroup_properties,    ,    0,    ,    ,    95,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO,    bind_buffer_memory_info,    ,    0,    ,    ,    158,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO,    bind_image_memory_info,    ,    1,    ,    ,    158,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES,    physical_device_16bit_storage_features,    ,    0,    ,    ,    84,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS,    memory_dedicated_requirements,    ,    0,    ,    ,    128,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO,    memory_dedicated_allocate_info,    ,    1,    ,    ,    128,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO,    memory_allocate_flags_info,    ,    0,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO,    device_group_render_pass_begin_info,    ,    3,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO,    device_group_command_buffer_begin_info,    ,    4,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO,    device_group_submit_info,    ,    5,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO,    device_group_bind_sparse_info,    ,    6,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO,    bind_buffer_memory_device_group_info,    ,    13,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO,    bind_image_memory_device_group_info,    ,    14,    ,    ,    61,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES,    physical_device_group_properties,    ,    0,    ,    ,    71,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO,    device_group_device_create_info,    ,    1,    ,    ,    71,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2,    buffer_memory_requirements_info_2,    ,    0,    ,    ,    147,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2,    image_memory_requirements_info_2,    ,    1,    ,    ,    147,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2,    image_sparse_memory_requirements_info_2,    ,    2,    ,    ,    147,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2,    memory_requirements_2,    ,    3,    ,    ,    147,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2,    sparse_image_memory_requirements_2,    ,    4,    ,    ,    147,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2,    physical_device_features_2,    ,    0,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2,    physical_device_properties_2,    ,    1,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2,    format_properties_2,    ,    2,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2,    image_format_properties_2,    ,    3,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2,    physical_device_image_format_info_2,    ,    4,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2,    queue_family_properties_2,    ,    5,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2,    physical_device_memory_properties_2,    ,    6,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2,    sparse_image_format_properties_2,    ,    7,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2,    physical_device_sparse_image_format_info_2,    ,    8,    ,    ,    60,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES,    physical_device_point_clipping_properties,    ,    0,    ,    ,    118,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO,    render_pass_input_attachment_aspect_create_info,    ,    1,    ,    ,    118,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO,    image_view_usage_create_info,    ,    2,    ,    ,    118,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO,    pipeline_tessellation_domain_origin_state_create_info,    ,    3,    ,    ,    118,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO,    render_pass_multiview_create_info,    ,    0,    ,    ,    54,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES,    physical_device_multiview_features,    ,    1,    ,    ,    54,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES,    physical_device_multiview_properties,    ,    2,    ,    ,    54,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES,    physical_device_variable_pointers_features,    ,    0,    ,    ,    121,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO,    protected_submit_info,    ,    0,    ,    ,    146,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES,    physical_device_protected_memory_features,    ,    1,    ,    ,    146,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES,    physical_device_protected_memory_properties,    ,    2,    ,    ,    146,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2,    device_queue_info_2,    ,    3,    ,    ,    146,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO,    sampler_ycbcr_conversion_create_info,    ,    0,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO,    sampler_ycbcr_conversion_info,    ,    1,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO,    bind_image_plane_memory_info,    ,    2,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO,    image_plane_memory_requirements_info,    ,    3,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES,    physical_device_sampler_ycbcr_conversion_features,    ,    4,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES,    sampler_ycbcr_conversion_image_format_properties,    ,    5,    ,    ,    157,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO,    descriptor_update_template_create_info,    ,    0,    ,    ,    86,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO,    physical_device_external_image_format_info,    ,    0,    ,    ,    72,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES,    external_image_format_properties,    ,    1,    ,    ,    72,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO,    physical_device_external_buffer_info,    ,    2,    ,    ,    72,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES,    external_buffer_properties,    ,    3,    ,    ,    72,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES,    physical_device_id_properties,    ,    4,    ,    ,    72,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO,    external_memory_buffer_create_info,    ,    0,    ,    ,    73,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO,    external_memory_image_create_info,    ,    1,    ,    ,    73,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO,    export_memory_allocate_info,    ,    2,    ,    ,    73,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO,    physical_device_external_fence_info,    ,    0,    ,    ,    113,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES,    external_fence_properties,    ,    1,    ,    ,    113,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO,    export_fence_create_info,    ,    0,    ,    ,    114,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO,    export_semaphore_create_info,    ,    0,    ,    ,    78,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO,    physical_device_external_semaphore_info,    ,    0,    ,    ,    77,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES,    external_semaphore_properties,    ,    1,    ,    ,    77,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES,    physical_device_maintenance_3_properties,    ,    0,    ,    ,    169,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT,    descriptor_set_layout_support,    ,    1,    ,    ,    169,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES,    physical_device_shader_draw_parameters_features,    ,    0,    ,    ,    64,    ,    ,    ) \
X__(VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR,    swapchain_create_info_khr,    ,    0,    ,    VK_KHR_swapchain,    2,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PRESENT_INFO_KHR,    present_info_khr,    ,    1,    ,    VK_KHR_swapchain,    2,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR,    device_group_present_capabilities_khr,    ,    7,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR,    image_swapchain_create_info_khr,    ,    8,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR,    bind_image_memory_swapchain_info_khr,    ,    9,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR,    acquire_next_image_info_khr,    ,    10,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR,    device_group_present_info_khr,    ,    11,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR,    device_group_swapchain_create_info_khr,    ,    12,    ,    VK_KHR_swapchain,    61,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR,    display_mode_create_info_khr,    ,    0,    ,    VK_KHR_display,    3,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR,    display_surface_create_info_khr,    ,    1,    ,    VK_KHR_display,    3,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR,    display_present_info_khr,    ,    0,    ,    VK_KHR_display_swapchain,    4,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR,    xlib_surface_create_info_khr,    ,    0,    ,    VK_KHR_xlib_surface,    5,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR,    xcb_surface_create_info_khr,    ,    0,    ,    VK_KHR_xcb_surface,    6,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR,    wayland_surface_create_info_khr,    ,    0,    ,    VK_KHR_wayland_surface,    7,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR,    android_surface_create_info_khr,    ,    0,    ,    VK_KHR_android_surface,    9,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR,    win32_surface_create_info_khr,    ,    0,    ,    VK_KHR_win32_surface,    10,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT,    debug_report_callback_create_info_ext,    ,    0,    ,    VK_EXT_debug_report,    12,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD,    pipeline_rasterization_state_rasterization_order_amd,    ,    0,    ,    VK_AMD_rasterization_order,    19,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT,    debug_marker_object_name_info_ext,    ,    0,    ,    VK_EXT_debug_marker,    23,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT,    debug_marker_object_tag_info_ext,    ,    1,    ,    VK_EXT_debug_marker,    23,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT,    debug_marker_marker_info_ext,    ,    2,    ,    VK_EXT_debug_marker,    23,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV,    dedicated_allocation_image_create_info_nv,    ,    0,    ,    VK_NV_dedicated_allocation,    27,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV,    dedicated_allocation_buffer_create_info_nv,    ,    1,    ,    VK_NV_dedicated_allocation,    27,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV,    dedicated_allocation_memory_allocate_info_nv,    ,    2,    ,    VK_NV_dedicated_allocation,    27,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT,    physical_device_transform_feedback_features_ext,    ,    0,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT,    physical_device_transform_feedback_properties_ext,    ,    1,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT,    pipeline_rasterization_state_stream_create_info_ext,    ,    2,    ,    VK_EXT_transform_feedback,    29,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX,    image_view_handle_info_nvx,    ,    0,    ,    VK_NVX_image_view_handle,    31,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD,    texture_lod_gather_format_properties_amd,    ,    0,    ,    VK_AMD_texture_gather_bias_lod,    42,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP,    stream_descriptor_surface_create_info_ggp,    ,    0,    ,    VK_GGP_stream_descriptor_surface,    50,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV,    physical_device_corner_sampled_image_features_nv,    ,    0,    ,    VK_NV_corner_sampled_image,    51,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV,    external_memory_image_create_info_nv,    ,    0,    ,    VK_NV_external_memory,    57,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV,    export_memory_allocate_info_nv,    ,    1,    ,    VK_NV_external_memory,    57,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV,    import_memory_win32_handle_info_nv,    ,    0,    ,    VK_NV_external_memory_win32,    58,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV,    export_memory_win32_handle_info_nv,    ,    1,    ,    VK_NV_external_memory_win32,    58,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV,    win32_keyed_mutex_acquire_release_info_nv,    ,    0,    ,    VK_NV_win32_keyed_mutex,    59,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT,    validation_flags_ext,    ,    0,    ,    VK_EXT_validation_flags,    62,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN,    vi_surface_create_info_nn,    ,    0,    ,    VK_NN_vi_surface,    63,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT,    physical_device_texture_compression_astc_hdr_features_ext,    ,    0,    ,    VK_EXT_texture_compression_astc_hdr,    67,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT,    image_view_astc_decode_mode_ext,    ,    0,    ,    VK_EXT_astc_decode_mode,    68,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT,    physical_device_astc_decode_features_ext,    ,    1,    ,    VK_EXT_astc_decode_mode,    68,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR,    import_memory_win32_handle_info_khr,    ,    0,    ,    VK_KHR_external_memory_win32,    74,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR,    export_memory_win32_handle_info_khr,    ,    1,    ,    VK_KHR_external_memory_win32,    74,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR,    memory_win32_handle_properties_khr,    ,    2,    ,    VK_KHR_external_memory_win32,    74,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR,    memory_get_win32_handle_info_khr,    ,    3,    ,    VK_KHR_external_memory_win32,    74,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR,    import_memory_fd_info_khr,    ,    0,    ,    VK_KHR_external_memory_fd,    75,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR,    memory_fd_properties_khr,    ,    1,    ,    VK_KHR_external_memory_fd,    75,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR,    memory_get_fd_info_khr,    ,    2,    ,    VK_KHR_external_memory_fd,    75,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR,    win32_keyed_mutex_acquire_release_info_khr,    ,    0,    ,    VK_KHR_win32_keyed_mutex,    76,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR,    import_semaphore_win32_handle_info_khr,    ,    0,    ,    VK_KHR_external_semaphore_win32,    79,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR,    export_semaphore_win32_handle_info_khr,    ,    1,    ,    VK_KHR_external_semaphore_win32,    79,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR,    d3d12_fence_submit_info_khr,    ,    2,    ,    VK_KHR_external_semaphore_win32,    79,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR,    semaphore_get_win32_handle_info_khr,    ,    3,    ,    VK_KHR_external_semaphore_win32,    79,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR,    import_semaphore_fd_info_khr,    ,    0,    ,    VK_KHR_external_semaphore_fd,    80,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR,    semaphore_get_fd_info_khr,    ,    1,    ,    VK_KHR_external_semaphore_fd,    80,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR,    physical_device_push_descriptor_properties_khr,    ,    0,    ,    VK_KHR_push_descriptor,    81,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT,    command_buffer_inheritance_conditional_rendering_info_ext,    ,    0,    ,    VK_EXT_conditional_rendering,    82,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT,    physical_device_conditional_rendering_features_ext,    ,    1,    ,    VK_EXT_conditional_rendering,    82,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT,    conditional_rendering_begin_info_ext,    ,    2,    ,    VK_EXT_conditional_rendering,    82,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR,    physical_device_shader_float16_int8_features_khr,    ,    0,    ,    VK_KHR_shader_float16_int8,    83,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR,    present_regions_khr,    ,    0,    ,    VK_KHR_incremental_present,    85,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX,    object_table_create_info_nvx,    ,    0,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX,    indirect_commands_layout_create_info_nvx,    ,    1,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX,    cmd_process_commands_info_nvx,    ,    2,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX,    cmd_reserve_space_for_commands_info_nvx,    ,    3,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX,    device_generated_commands_limits_nvx,    ,    4,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX,    device_generated_commands_features_nvx,    ,    5,    ,    VK_NVX_device_generated_commands,    87,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV,    pipeline_viewport_w_scaling_state_create_info_nv,    ,    0,    ,    VK_NV_clip_space_w_scaling,    88,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT,    surface_capabilities_2_ext,    ,    0,    ,    VK_EXT_display_surface_counter,    91,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT,    display_power_info_ext,    ,    0,    ,    VK_EXT_display_control,    92,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT,    device_event_info_ext,    ,    1,    ,    VK_EXT_display_control,    92,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT,    display_event_info_ext,    ,    2,    ,    VK_EXT_display_control,    92,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT,    swapchain_counter_create_info_ext,    ,    3,    ,    VK_EXT_display_control,    92,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE,    present_times_info_google,    ,    0,    ,    VK_GOOGLE_display_timing,    93,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX,    physical_device_multiview_per_view_attributes_properties_nvx,    ,    0,    ,    VK_NVX_multiview_per_view_attributes,    98,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV,    pipeline_viewport_swizzle_state_create_info_nv,    ,    0,    ,    VK_NV_viewport_swizzle,    99,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT,    physical_device_discard_rectangle_properties_ext,    ,    0,    ,    VK_EXT_discard_rectangles,    100,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT,    pipeline_discard_rectangle_state_create_info_ext,    ,    1,    ,    VK_EXT_discard_rectangles,    100,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT,    physical_device_conservative_rasterization_properties_ext,    ,    0,    ,    VK_EXT_conservative_rasterization,    102,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT,    pipeline_rasterization_conservative_state_create_info_ext,    ,    1,    ,    VK_EXT_conservative_rasterization,    102,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT,    physical_device_depth_clip_enable_features_ext,    ,    0,    ,    VK_EXT_depth_clip_enable,    103,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT,    pipeline_rasterization_depth_clip_state_create_info_ext,    ,    1,    ,    VK_EXT_depth_clip_enable,    103,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_HDR_METADATA_EXT,    hdr_metadata_ext,    ,    0,    ,    VK_EXT_hdr_metadata,    106,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR,    physical_device_imageless_framebuffer_features_khr,    ,    0,    ,    VK_KHR_imageless_framebuffer,    109,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR,    framebuffer_attachments_create_info_khr,    ,    1,    ,    VK_KHR_imageless_framebuffer,    109,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR,    framebuffer_attachment_image_info_khr,    ,    2,    ,    VK_KHR_imageless_framebuffer,    109,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR,    render_pass_attachment_begin_info_khr,    ,    3,    ,    VK_KHR_imageless_framebuffer,    109,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR,    attachment_description_2_khr,    ,    0,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR,    attachment_reference_2_khr,    ,    1,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR,    subpass_description_2_khr,    ,    2,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR,    subpass_dependency_2_khr,    ,    3,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR,    render_pass_create_info_2_khr,    ,    4,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR,    subpass_begin_info_khr,    ,    5,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR,    subpass_end_info_khr,    ,    6,    ,    VK_KHR_create_renderpass2,    110,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR,    shared_present_surface_capabilities_khr,    ,    0,    ,    VK_KHR_shared_presentable_image,    112,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR,    import_fence_win32_handle_info_khr,    ,    0,    ,    VK_KHR_external_fence_win32,    115,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR,    export_fence_win32_handle_info_khr,    ,    1,    ,    VK_KHR_external_fence_win32,    115,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR,    fence_get_win32_handle_info_khr,    ,    2,    ,    VK_KHR_external_fence_win32,    115,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR,    import_fence_fd_info_khr,    ,    0,    ,    VK_KHR_external_fence_fd,    116,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR,    fence_get_fd_info_khr,    ,    1,    ,    VK_KHR_external_fence_fd,    116,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR,    physical_device_surface_info_2_khr,    ,    0,    ,    VK_KHR_get_surface_capabilities2,    120,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR,    surface_capabilities_2_khr,    ,    1,    ,    VK_KHR_get_surface_capabilities2,    120,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR,    surface_format_2_khr,    ,    2,    ,    VK_KHR_get_surface_capabilities2,    120,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR,    display_properties_2_khr,    ,    0,    ,    VK_KHR_get_display_properties2,    122,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR,    display_plane_properties_2_khr,    ,    1,    ,    VK_KHR_get_display_properties2,    122,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR,    display_mode_properties_2_khr,    ,    2,    ,    VK_KHR_get_display_properties2,    122,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR,    display_plane_info_2_khr,    ,    3,    ,    VK_KHR_get_display_properties2,    122,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR,    display_plane_capabilities_2_khr,    ,    4,    ,    VK_KHR_get_display_properties2,    122,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK,    ios_surface_create_info_mvk,    ,    0,    ,    VK_MVK_ios_surface,    123,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK,    macos_surface_create_info_mvk,    ,    0,    ,    VK_MVK_macos_surface,    124,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT,    debug_utils_object_name_info_ext,    ,    0,    ,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT,    debug_utils_object_tag_info_ext,    ,    1,    ,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT,    debug_utils_label_ext,    ,    2,    ,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT,    debug_utils_messenger_callback_data_ext,    ,    3,    ,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT,    debug_utils_messenger_create_info_ext,    ,    4,    ,    VK_EXT_debug_utils,    129,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID,    android_hardware_buffer_usage_android,    ,    0,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID,    android_hardware_buffer_properties_android,    ,    1,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID,    android_hardware_buffer_format_properties_android,    ,    2,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID,    import_android_hardware_buffer_info_android,    ,    3,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID,    memory_get_android_hardware_buffer_info_android,    ,    4,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID,    external_format_android,    ,    5,    ,    VK_ANDROID_external_memory_android_hardware_buffer,    130,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT,    physical_device_sampler_filter_minmax_properties_ext,    ,    0,    ,    VK_EXT_sampler_filter_minmax,    131,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT,    sampler_reduction_mode_create_info_ext,    ,    1,    ,    VK_EXT_sampler_filter_minmax,    131,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT,    physical_device_inline_uniform_block_features_ext,    ,    0,    ,    VK_EXT_inline_uniform_block,    139,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT,    physical_device_inline_uniform_block_properties_ext,    ,    1,    ,    VK_EXT_inline_uniform_block,    139,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT,    write_descriptor_set_inline_uniform_block_ext,    ,    2,    ,    VK_EXT_inline_uniform_block,    139,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT,    descriptor_pool_inline_uniform_block_create_info_ext,    ,    3,    ,    VK_EXT_inline_uniform_block,    139,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT,    sample_locations_info_ext,    ,    0,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT,    render_pass_sample_locations_begin_info_ext,    ,    1,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT,    pipeline_sample_locations_state_create_info_ext,    ,    2,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT,    physical_device_sample_locations_properties_ext,    ,    3,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT,    multisample_properties_ext,    ,    4,    ,    VK_EXT_sample_locations,    144,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR,    image_format_list_create_info_khr,    ,    0,    ,    VK_KHR_image_format_list,    148,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT,    physical_device_blend_operation_advanced_features_ext,    ,    0,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT,    physical_device_blend_operation_advanced_properties_ext,    ,    1,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT,    pipeline_color_blend_advanced_state_create_info_ext,    ,    2,    ,    VK_EXT_blend_operation_advanced,    149,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV,    pipeline_coverage_to_color_state_create_info_nv,    ,    0,    ,    VK_NV_fragment_coverage_to_color,    150,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV,    pipeline_coverage_modulation_state_create_info_nv,    ,    0,    ,    VK_NV_framebuffer_mixed_samples,    153,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV,    physical_device_shader_sm_builtins_features_nv,    ,    0,    ,    VK_NV_shader_sm_builtins,    155,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV,    physical_device_shader_sm_builtins_properties_nv,    ,    1,    ,    VK_NV_shader_sm_builtins,    155,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT,    drm_format_modifier_properties_list_ext,    ,    0,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT,    drm_format_modifier_properties_ext,    ,    1,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT,    physical_device_image_drm_format_modifier_info_ext,    ,    2,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT,    image_drm_format_modifier_list_create_info_ext,    ,    3,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT,    image_drm_format_modifier_explicit_create_info_ext,    ,    4,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT,    image_drm_format_modifier_properties_ext,    ,    5,    ,    VK_EXT_image_drm_format_modifier,    159,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT,    validation_cache_create_info_ext,    ,    0,    ,    VK_EXT_validation_cache,    161,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT,    shader_module_validation_cache_create_info_ext,    ,    1,    ,    VK_EXT_validation_cache,    161,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT,    descriptor_set_layout_binding_flags_create_info_ext,    ,    0,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT,    physical_device_descriptor_indexing_features_ext,    ,    1,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT,    physical_device_descriptor_indexing_properties_ext,    ,    2,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT,    descriptor_set_variable_descriptor_count_allocate_info_ext,    ,    3,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT,    descriptor_set_variable_descriptor_count_layout_support_ext,    ,    4,    ,    VK_EXT_descriptor_indexing,    162,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV,    pipeline_viewport_shading_rate_image_state_create_info_nv,    ,    0,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV,    physical_device_shading_rate_image_features_nv,    ,    1,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV,    physical_device_shading_rate_image_properties_nv,    ,    2,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV,    pipeline_viewport_coarse_sample_order_state_create_info_nv,    ,    5,    ,    VK_NV_shading_rate_image,    165,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV,    ray_tracing_pipeline_create_info_nv,    ,    0,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV,    acceleration_structure_create_info_nv,    ,    1,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_GEOMETRY_NV,    geometry_nv,    ,    3,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV,    geometry_triangles_nv,    ,    4,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV,    geometry_aabb_nv,    ,    5,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV,    bind_acceleration_structure_memory_info_nv,    ,    6,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV,    write_descriptor_set_acceleration_structure_nv,    ,    7,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV,    acceleration_structure_memory_requirements_info_nv,    ,    8,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV,    physical_device_ray_tracing_properties_nv,    ,    9,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV,    ray_tracing_shader_group_create_info_nv,    ,    11,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV,    acceleration_structure_info_nv,    ,    12,    ,    VK_NV_ray_tracing,    166,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV,    physical_device_representative_fragment_test_features_nv,    ,    0,    ,    VK_NV_representative_fragment_test,    167,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV,    pipeline_representative_fragment_test_state_create_info_nv,    ,    1,    ,    VK_NV_representative_fragment_test,    167,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT,    physical_device_image_view_image_format_info_ext,    ,    0,    ,    VK_EXT_filter_cubic,    171,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT,    filter_cubic_image_view_image_format_properties_ext,    ,    1,    ,    VK_EXT_filter_cubic,    171,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT,    device_queue_global_priority_create_info_ext,    ,    0,    ,    VK_EXT_global_priority,    175,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR,    physical_device_8bit_storage_features_khr,    ,    0,    ,    VK_KHR_8bit_storage,    178,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT,    import_memory_host_pointer_info_ext,    ,    0,    ,    VK_EXT_external_memory_host,    179,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT,    memory_host_pointer_properties_ext,    ,    1,    ,    VK_EXT_external_memory_host,    179,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT,    physical_device_external_memory_host_properties_ext,    ,    2,    ,    VK_EXT_external_memory_host,    179,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR,    physical_device_shader_atomic_int64_features_khr,    ,    0,    ,    VK_KHR_shader_atomic_int64,    181,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD,    pipeline_compiler_control_create_info_amd,    ,    0,    ,    VK_AMD_pipeline_compiler_control,    184,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT,    calibrated_timestamp_info_ext,    ,    0,    ,    VK_EXT_calibrated_timestamps,    185,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD,    physical_device_shader_core_properties_amd,    ,    0,    ,    VK_AMD_shader_core_properties,    186,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD,    device_memory_overallocation_create_info_amd,    ,    0,    ,    VK_AMD_memory_overallocation_behavior,    190,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT,    physical_device_vertex_attribute_divisor_properties_ext,    ,    0,    ,    VK_EXT_vertex_attribute_divisor,    191,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT,    pipeline_vertex_input_divisor_state_create_info_ext,    ,    1,    ,    VK_EXT_vertex_attribute_divisor,    191,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT,    physical_device_vertex_attribute_divisor_features_ext,    ,    2,    ,    VK_EXT_vertex_attribute_divisor,    191,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP,    present_frame_token_ggp,    ,    0,    ,    VK_GGP_frame_token,    192,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT,    pipeline_creation_feedback_create_info_ext,    ,    0,    ,    VK_EXT_pipeline_creation_feedback,    193,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR,    physical_device_driver_properties_khr,    ,    0,    ,    VK_KHR_driver_properties,    197,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR,    physical_device_float_controls_properties_khr,    ,    0,    ,    VK_KHR_shader_float_controls,    198,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR,    physical_device_depth_stencil_resolve_properties_khr,    ,    0,    ,    VK_KHR_depth_stencil_resolve,    200,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR,    subpass_description_depth_stencil_resolve_khr,    ,    1,    ,    VK_KHR_depth_stencil_resolve,    200,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV,    physical_device_compute_shader_derivatives_features_nv,    ,    0,    ,    VK_NV_compute_shader_derivatives,    202,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV,    physical_device_mesh_shader_features_nv,    ,    0,    ,    VK_NV_mesh_shader,    203,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV,    physical_device_mesh_shader_properties_nv,    ,    1,    ,    VK_NV_mesh_shader,    203,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV,    physical_device_fragment_shader_barycentric_features_nv,    ,    0,    ,    VK_NV_fragment_shader_barycentric,    204,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV,    physical_device_shader_image_footprint_features_nv,    ,    0,    ,    VK_NV_shader_image_footprint,    205,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV,    pipeline_viewport_exclusive_scissor_state_create_info_nv,    ,    0,    ,    VK_NV_scissor_exclusive,    206,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV,    physical_device_exclusive_scissor_features_nv,    ,    2,    ,    VK_NV_scissor_exclusive,    206,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV,    checkpoint_data_nv,    ,    0,    ,    VK_NV_device_diagnostic_checkpoints,    207,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV,    queue_family_checkpoint_properties_nv,    ,    1,    ,    VK_NV_device_diagnostic_checkpoints,    207,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL,    physical_device_shader_integer_functions_2_features_intel,    ,    0,    ,    VK_INTEL_shader_integer_functions2,    210,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL,    query_pool_create_info_intel,    ,    0,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL,    initialize_performance_api_info_intel,    ,    1,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL,    performance_marker_info_intel,    ,    2,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL,    performance_stream_marker_info_intel,    ,    3,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL,    performance_override_info_intel,    ,    4,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL,    performance_configuration_acquire_info_intel,    ,    5,    ,    VK_INTEL_performance_query,    211,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR,    physical_device_vulkan_memory_model_features_khr,    ,    0,    ,    VK_KHR_vulkan_memory_model,    212,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT,    physical_device_pci_bus_info_properties_ext,    ,    0,    ,    VK_EXT_pci_bus_info,    213,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD,    display_native_hdr_surface_capabilities_amd,    ,    0,    ,    VK_AMD_display_native_hdr,    214,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD,    swapchain_display_native_hdr_create_info_amd,    ,    1,    ,    VK_AMD_display_native_hdr,    214,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA,    imagepipe_surface_create_info_fuchsia,    ,    0,    ,    VK_FUCHSIA_imagepipe_surface,    215,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT,    metal_surface_create_info_ext,    ,    0,    ,    VK_EXT_metal_surface,    218,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT,    physical_device_fragment_density_map_features_ext,    ,    0,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT,    physical_device_fragment_density_map_properties_ext,    ,    1,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT,    render_pass_fragment_density_map_create_info_ext,    ,    2,    ,    VK_EXT_fragment_density_map,    219,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT,    physical_device_scalar_block_layout_features_ext,    ,    0,    ,    VK_EXT_scalar_block_layout,    222,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT,    physical_device_subgroup_size_control_properties_ext,    ,    0,    ,    VK_EXT_subgroup_size_control,    226,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT,    pipeline_shader_stage_required_subgroup_size_create_info_ext,    ,    1,    ,    VK_EXT_subgroup_size_control,    226,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT,    physical_device_subgroup_size_control_features_ext,    ,    2,    ,    VK_EXT_subgroup_size_control,    226,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD,    physical_device_shader_core_properties_2_amd,    ,    0,    ,    VK_AMD_shader_core_properties2,    228,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD,    physical_device_coherent_memory_features_amd,    ,    0,    ,    VK_AMD_device_coherent_memory,    230,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT,    physical_device_memory_budget_properties_ext,    ,    0,    ,    VK_EXT_memory_budget,    238,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT,    physical_device_memory_priority_features_ext,    ,    0,    ,    VK_EXT_memory_priority,    239,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT,    memory_priority_allocate_info_ext,    ,    1,    ,    VK_EXT_memory_priority,    239,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR,    surface_protected_capabilities_khr,    ,    0,    ,    VK_KHR_surface_protected_capabilities,    240,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV,    physical_device_dedicated_allocation_image_aliasing_features_nv,    ,    0,    ,    VK_NV_dedicated_allocation_image_aliasing,    241,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT,    physical_device_buffer_device_address_features_ext,    ,    0,    ,    VK_EXT_buffer_device_address,    245,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT,    buffer_device_address_info_ext,    ,    1,    ,    VK_EXT_buffer_device_address,    245,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT,    buffer_device_address_create_info_ext,    ,    2,    ,    VK_EXT_buffer_device_address,    245,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT,    image_stencil_usage_create_info_ext,    ,    0,    ,    VK_EXT_separate_stencil_usage,    247,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT,    validation_features_ext,    ,    0,    ,    VK_EXT_validation_features,    248,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV,    physical_device_cooperative_matrix_features_nv,    ,    0,    ,    VK_NV_cooperative_matrix,    250,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV,    cooperative_matrix_properties_nv,    ,    1,    ,    VK_NV_cooperative_matrix,    250,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV,    physical_device_cooperative_matrix_properties_nv,    ,    2,    ,    VK_NV_cooperative_matrix,    250,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV,    physical_device_coverage_reduction_mode_features_nv,    ,    0,    ,    VK_NV_coverage_reduction_mode,    251,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV,    pipeline_coverage_reduction_state_create_info_nv,    ,    1,    ,    VK_NV_coverage_reduction_mode,    251,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV,    framebuffer_mixed_samples_combination_nv,    ,    2,    ,    VK_NV_coverage_reduction_mode,    251,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT,    physical_device_fragment_shader_interlock_features_ext,    ,    0,    ,    VK_EXT_fragment_shader_interlock,    252,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT,    physical_device_ycbcr_image_arrays_features_ext,    ,    0,    ,    VK_EXT_ycbcr_image_arrays,    253,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR,    physical_device_uniform_buffer_standard_layout_features_khr,    ,    0,    ,    VK_KHR_uniform_buffer_standard_layout,    254,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT,    surface_full_screen_exclusive_info_ext,    ,    0,    ,    VK_EXT_full_screen_exclusive,    256,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT,    surface_capabilities_full_screen_exclusive_ext,    ,    2,    ,    VK_EXT_full_screen_exclusive,    256,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT,    surface_full_screen_exclusive_win32_info_ext,    ,    1,    ,    VK_EXT_full_screen_exclusive,    256,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT,    headless_surface_create_info_ext,    ,    0,    ,    VK_EXT_headless_surface,    257,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT,    physical_device_line_rasterization_features_ext,    ,    0,    ,    VK_EXT_line_rasterization,    260,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT,    pipeline_rasterization_line_state_create_info_ext,    ,    1,    ,    VK_EXT_line_rasterization,    260,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT,    physical_device_line_rasterization_properties_ext,    ,    2,    ,    VK_EXT_line_rasterization,    260,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT,    physical_device_host_query_reset_features_ext,    ,    0,    ,    VK_EXT_host_query_reset,    262,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT,    physical_device_index_type_uint8_features_ext,    ,    0,    ,    VK_EXT_index_type_uint8,    266,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR,    physical_device_pipeline_executable_properties_features_khr,    ,    0,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR,    pipeline_info_khr,    ,    1,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR,    pipeline_executable_properties_khr,    ,    2,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR,    pipeline_executable_info_khr,    ,    3,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR,    pipeline_executable_statistic_khr,    ,    4,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR,    pipeline_executable_internal_representation_khr,    ,    5,    ,    VK_KHR_pipeline_executable_properties,    270,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT,    physical_device_shader_demote_to_helper_invocation_features_ext,    ,    0,    ,    VK_EXT_shader_demote_to_helper_invocation,    277,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT,    physical_device_texel_buffer_alignment_features_ext,    ,    0,    ,    VK_EXT_texel_buffer_alignment,    282,    vulkan,    ,    ) \
X__(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT,    physical_device_texel_buffer_alignment_properties_ext,    ,    1,    ,    VK_EXT_texel_buffer_alignment,    282,    vulkan,    ,    ) \

# if VK_KHR_display_swapchain
# define Xt_vk_api_VK_KHR_display_swapchain(X__) \
    X__(vkCreateSharedSwapchainsKHR) \

# else
# define Xt_vk_api_VK_KHR_display_swapchain(...) 
#endif // # if VK_KHR_display_swapchain
# if VK_ANDROID_native_buffer
# define Xt_vk_api_VK_ANDROID_native_buffer(X__) \
    X__(vkGetSwapchainGrallocUsageANDROID) \
    X__(vkAcquireImageANDROID) \
    X__(vkQueueSignalReleaseImageANDROID) \
    X__(vkGetSwapchainGrallocUsage2ANDROID) \

# else
# define Xt_vk_api_VK_ANDROID_native_buffer(...) 
#endif // # if VK_ANDROID_native_buffer
# if VK_KHR_external_semaphore_capabilities
# define Xt_vk_api_VK_KHR_external_semaphore_capabilities(X__) \
    X__(vkGetPhysicalDeviceExternalSemaphorePropertiesKHR) \

# else
# define Xt_vk_api_VK_KHR_external_semaphore_capabilities(...) 
#endif // # if VK_KHR_external_semaphore_capabilities
# if VK_NN_vi_surface
# define Xt_vk_api_VK_NN_vi_surface(X__) \
    X__(vkCreateViSurfaceNN) \

# else
# define Xt_vk_api_VK_NN_vi_surface(...) 
#endif // # if VK_NN_vi_surface
# if VK_KHR_external_semaphore_fd
# define Xt_vk_api_VK_KHR_external_semaphore_fd(X__) \
    X__(vkImportSemaphoreFdKHR) \
    X__(vkGetSemaphoreFdKHR) \

# else
# define Xt_vk_api_VK_KHR_external_semaphore_fd(...) 
#endif // # if VK_KHR_external_semaphore_fd
# if VK_KHR_get_physical_device_properties2
# define Xt_vk_api_VK_KHR_get_physical_device_properties2(X__) \
    X__(vkGetPhysicalDeviceFeatures2KHR) \
    X__(vkGetPhysicalDeviceProperties2KHR) \
    X__(vkGetPhysicalDeviceFormatProperties2KHR) \
    X__(vkGetPhysicalDeviceImageFormatProperties2KHR) \
    X__(vkGetPhysicalDeviceQueueFamilyProperties2KHR) \
    X__(vkGetPhysicalDeviceMemoryProperties2KHR) \
    X__(vkGetPhysicalDeviceSparseImageFormatProperties2KHR) \

# else
# define Xt_vk_api_VK_KHR_get_physical_device_properties2(...) 
#endif // # if VK_KHR_get_physical_device_properties2
# if VK_NVX_image_view_handle
# define Xt_vk_api_VK_NVX_image_view_handle(X__) \
    X__(vkGetImageViewHandleNVX) \

# else
# define Xt_vk_api_VK_NVX_image_view_handle(...) 
#endif // # if VK_NVX_image_view_handle
# if VK_EXT_image_drm_format_modifier
# define Xt_vk_api_VK_EXT_image_drm_format_modifier(X__) \
    X__(vkGetImageDrmFormatModifierPropertiesEXT) \

# else
# define Xt_vk_api_VK_EXT_image_drm_format_modifier(...) 
#endif // # if VK_EXT_image_drm_format_modifier
# if VK_EXT_direct_mode_display
# define Xt_vk_api_VK_EXT_direct_mode_display(X__) \
    X__(vkReleaseDisplayEXT) \

# else
# define Xt_vk_api_VK_EXT_direct_mode_display(...) 
#endif // # if VK_EXT_direct_mode_display
# if VK_KHR_get_surface_capabilities2
# define Xt_vk_api_VK_KHR_get_surface_capabilities2(X__) \
    X__(vkGetPhysicalDeviceSurfaceCapabilities2KHR) \
    X__(vkGetPhysicalDeviceSurfaceFormats2KHR) \

# else
# define Xt_vk_api_VK_KHR_get_surface_capabilities2(...) 
#endif // # if VK_KHR_get_surface_capabilities2
# if VK_EXT_hdr_metadata
# define Xt_vk_api_VK_EXT_hdr_metadata(X__) \
    X__(vkSetHdrMetadataEXT) \

# else
# define Xt_vk_api_VK_EXT_hdr_metadata(...) 
#endif // # if VK_EXT_hdr_metadata
# if VK_NV_mesh_shader
# define Xt_vk_api_VK_NV_mesh_shader(X__) \
    X__(vkCmdDrawMeshTasksNV) \
    X__(vkCmdDrawMeshTasksIndirectNV) \
    X__(vkCmdDrawMeshTasksIndirectCountNV) \

# else
# define Xt_vk_api_VK_NV_mesh_shader(...) 
#endif // # if VK_NV_mesh_shader
# if VK_KHR_xcb_surface
# define Xt_vk_api_VK_KHR_xcb_surface(X__) \
    X__(vkCreateXcbSurfaceKHR) \
    X__(vkGetPhysicalDeviceXcbPresentationSupportKHR) \

# else
# define Xt_vk_api_VK_KHR_xcb_surface(...) 
#endif // # if VK_KHR_xcb_surface
# if VK_AMD_buffer_marker
# define Xt_vk_api_VK_AMD_buffer_marker(X__) \
    X__(vkCmdWriteBufferMarkerAMD) \

# else
# define Xt_vk_api_VK_AMD_buffer_marker(...) 
#endif // # if VK_AMD_buffer_marker
# if VK_EXT_display_surface_counter
# define Xt_vk_api_VK_EXT_display_surface_counter(X__) \
    X__(vkGetPhysicalDeviceSurfaceCapabilities2EXT) \

# else
# define Xt_vk_api_VK_EXT_display_surface_counter(...) 
#endif // # if VK_EXT_display_surface_counter
# if VK_KHR_bind_memory2
# define Xt_vk_api_VK_KHR_bind_memory2(X__) \
    X__(vkBindBufferMemory2KHR) \
    X__(vkBindImageMemory2KHR) \

# else
# define Xt_vk_api_VK_KHR_bind_memory2(...) 
#endif // # if VK_KHR_bind_memory2
# if VK_NV_shading_rate_image
# define Xt_vk_api_VK_NV_shading_rate_image(X__) \
    X__(vkCmdBindShadingRateImageNV) \
    X__(vkCmdSetViewportShadingRatePaletteNV) \
    X__(vkCmdSetCoarseSampleOrderNV) \

# else
# define Xt_vk_api_VK_NV_shading_rate_image(...) 
#endif // # if VK_NV_shading_rate_image
# if VK_NV_cooperative_matrix
# define Xt_vk_api_VK_NV_cooperative_matrix(X__) \
    X__(vkGetPhysicalDeviceCooperativeMatrixPropertiesNV) \

# else
# define Xt_vk_api_VK_NV_cooperative_matrix(...) 
#endif // # if VK_NV_cooperative_matrix
# if VK_EXT_line_rasterization
# define Xt_vk_api_VK_EXT_line_rasterization(X__) \
    X__(vkCmdSetLineStippleEXT) \

# else
# define Xt_vk_api_VK_EXT_line_rasterization(...) 
#endif // # if VK_EXT_line_rasterization
# if VK_NV_clip_space_w_scaling
# define Xt_vk_api_VK_NV_clip_space_w_scaling(X__) \
    X__(vkCmdSetViewportWScalingNV) \

# else
# define Xt_vk_api_VK_NV_clip_space_w_scaling(...) 
#endif // # if VK_NV_clip_space_w_scaling
# if VK_KHR_maintenance3
# define Xt_vk_api_VK_KHR_maintenance3(X__) \
    X__(vkGetDescriptorSetLayoutSupportKHR) \

# else
# define Xt_vk_api_VK_KHR_maintenance3(...) 
#endif // # if VK_KHR_maintenance3
# if VK_MVK_ios_surface
# define Xt_vk_api_VK_MVK_ios_surface(X__) \
    X__(vkCreateIOSSurfaceMVK) \

# else
# define Xt_vk_api_VK_MVK_ios_surface(...) 
#endif // # if VK_MVK_ios_surface
# if VK_KHR_swapchain
# define Xt_vk_api_VK_KHR_swapchain(X__) \
    X__(vkCreateSwapchainKHR) \
    X__(vkDestroySwapchainKHR) \
    X__(vkGetSwapchainImagesKHR) \
    X__(vkAcquireNextImageKHR) \
    X__(vkQueuePresentKHR) \
    X__(vkGetDeviceGroupPresentCapabilitiesKHR) \
    X__(vkGetDeviceGroupSurfacePresentModesKHR) \
    X__(vkGetPhysicalDevicePresentRectanglesKHR) \
    X__(vkAcquireNextImage2KHR) \

# else
# define Xt_vk_api_VK_KHR_swapchain(...) 
#endif // # if VK_KHR_swapchain
# if VK_KHR_wayland_surface
# define Xt_vk_api_VK_KHR_wayland_surface(X__) \
    X__(vkCreateWaylandSurfaceKHR) \
    X__(vkGetPhysicalDeviceWaylandPresentationSupportKHR) \

# else
# define Xt_vk_api_VK_KHR_wayland_surface(...) 
#endif // # if VK_KHR_wayland_surface
# if VK_EXT_validation_cache
# define Xt_vk_api_VK_EXT_validation_cache(X__) \
    X__(vkCreateValidationCacheEXT) \
    X__(vkDestroyValidationCacheEXT) \
    X__(vkMergeValidationCachesEXT) \
    X__(vkGetValidationCacheDataEXT) \

# else
# define Xt_vk_api_VK_EXT_validation_cache(...) 
#endif // # if VK_EXT_validation_cache
# if VK_KHR_sampler_ycbcr_conversion
# define Xt_vk_api_VK_KHR_sampler_ycbcr_conversion(X__) \
    X__(vkCreateSamplerYcbcrConversionKHR) \
    X__(vkDestroySamplerYcbcrConversionKHR) \

# else
# define Xt_vk_api_VK_KHR_sampler_ycbcr_conversion(...) 
#endif // # if VK_KHR_sampler_ycbcr_conversion
# if VK_MVK_macos_surface
# define Xt_vk_api_VK_MVK_macos_surface(X__) \
    X__(vkCreateMacOSSurfaceMVK) \

# else
# define Xt_vk_api_VK_MVK_macos_surface(...) 
#endif // # if VK_MVK_macos_surface
# if VK_GGP_stream_descriptor_surface
# define Xt_vk_api_VK_GGP_stream_descriptor_surface(X__) \
    X__(vkCreateStreamDescriptorSurfaceGGP) \

# else
# define Xt_vk_api_VK_GGP_stream_descriptor_surface(...) 
#endif // # if VK_GGP_stream_descriptor_surface
# if VK_EXT_acquire_xlib_display
# define Xt_vk_api_VK_EXT_acquire_xlib_display(X__) \
    X__(vkAcquireXlibDisplayEXT) \
    X__(vkGetRandROutputDisplayEXT) \

# else
# define Xt_vk_api_VK_EXT_acquire_xlib_display(...) 
#endif // # if VK_EXT_acquire_xlib_display
# if VK_EXT_display_control
# define Xt_vk_api_VK_EXT_display_control(X__) \
    X__(vkDisplayPowerControlEXT) \
    X__(vkRegisterDeviceEventEXT) \
    X__(vkRegisterDisplayEventEXT) \
    X__(vkGetSwapchainCounterEXT) \

# else
# define Xt_vk_api_VK_EXT_display_control(...) 
#endif // # if VK_EXT_display_control
# if VK_NV_external_memory_win32
# define Xt_vk_api_VK_NV_external_memory_win32(X__) \
    X__(vkGetMemoryWin32HandleNV) \

# else
# define Xt_vk_api_VK_NV_external_memory_win32(...) 
#endif // # if VK_NV_external_memory_win32
# if VK_NV_scissor_exclusive
# define Xt_vk_api_VK_NV_scissor_exclusive(X__) \
    X__(vkCmdSetExclusiveScissorNV) \

# else
# define Xt_vk_api_VK_NV_scissor_exclusive(...) 
#endif // # if VK_NV_scissor_exclusive
# if VK_NV_ray_tracing
# define Xt_vk_api_VK_NV_ray_tracing(X__) \
    X__(vkCreateAccelerationStructureNV) \
    X__(vkDestroyAccelerationStructureNV) \
    X__(vkGetAccelerationStructureMemoryRequirementsNV) \
    X__(vkBindAccelerationStructureMemoryNV) \
    X__(vkCmdBuildAccelerationStructureNV) \
    X__(vkCmdCopyAccelerationStructureNV) \
    X__(vkCmdTraceRaysNV) \
    X__(vkCreateRayTracingPipelinesNV) \
    X__(vkGetRayTracingShaderGroupHandlesNV) \
    X__(vkGetAccelerationStructureHandleNV) \
    X__(vkCmdWriteAccelerationStructuresPropertiesNV) \
    X__(vkCompileDeferredNV) \

# else
# define Xt_vk_api_VK_NV_ray_tracing(...) 
#endif // # if VK_NV_ray_tracing
# if VK_EXT_debug_utils
# define Xt_vk_api_VK_EXT_debug_utils(X__) \
    X__(vkSetDebugUtilsObjectNameEXT) \
    X__(vkSetDebugUtilsObjectTagEXT) \
    X__(vkQueueBeginDebugUtilsLabelEXT) \
    X__(vkQueueEndDebugUtilsLabelEXT) \
    X__(vkQueueInsertDebugUtilsLabelEXT) \
    X__(vkCmdBeginDebugUtilsLabelEXT) \
    X__(vkCmdEndDebugUtilsLabelEXT) \
    X__(vkCmdInsertDebugUtilsLabelEXT) \
    X__(vkCreateDebugUtilsMessengerEXT) \
    X__(vkDestroyDebugUtilsMessengerEXT) \
    X__(vkSubmitDebugUtilsMessageEXT) \

# else
# define Xt_vk_api_VK_EXT_debug_utils(...) 
#endif // # if VK_EXT_debug_utils
# if VK_KHR_external_fence_win32
# define Xt_vk_api_VK_KHR_external_fence_win32(X__) \
    X__(vkImportFenceWin32HandleKHR) \
    X__(vkGetFenceWin32HandleKHR) \

# else
# define Xt_vk_api_VK_KHR_external_fence_win32(...) 
#endif // # if VK_KHR_external_fence_win32
# if VK_EXT_debug_marker
# define Xt_vk_api_VK_EXT_debug_marker(X__) \
    X__(vkDebugMarkerSetObjectTagEXT) \
    X__(vkDebugMarkerSetObjectNameEXT) \
    X__(vkCmdDebugMarkerBeginEXT) \
    X__(vkCmdDebugMarkerEndEXT) \
    X__(vkCmdDebugMarkerInsertEXT) \

# else
# define Xt_vk_api_VK_EXT_debug_marker(...) 
#endif // # if VK_EXT_debug_marker
# if VK_KHR_external_semaphore_win32
# define Xt_vk_api_VK_KHR_external_semaphore_win32(X__) \
    X__(vkImportSemaphoreWin32HandleKHR) \
    X__(vkGetSemaphoreWin32HandleKHR) \

# else
# define Xt_vk_api_VK_KHR_external_semaphore_win32(...) 
#endif // # if VK_KHR_external_semaphore_win32
# if VK_ANDROID_external_memory_android_hardware_buffer
# define Xt_vk_api_VK_ANDROID_external_memory_android_hardware_buffer(X__) \
    X__(vkGetAndroidHardwareBufferPropertiesANDROID) \
    X__(vkGetMemoryAndroidHardwareBufferANDROID) \

# else
# define Xt_vk_api_VK_ANDROID_external_memory_android_hardware_buffer(...) 
#endif // # if VK_ANDROID_external_memory_android_hardware_buffer
# if VK_KHR_external_memory_capabilities
# define Xt_vk_api_VK_KHR_external_memory_capabilities(X__) \
    X__(vkGetPhysicalDeviceExternalBufferPropertiesKHR) \

# else
# define Xt_vk_api_VK_KHR_external_memory_capabilities(...) 
#endif // # if VK_KHR_external_memory_capabilities
# if VK_EXT_conditional_rendering
# define Xt_vk_api_VK_EXT_conditional_rendering(X__) \
    X__(vkCmdBeginConditionalRenderingEXT) \
    X__(vkCmdEndConditionalRenderingEXT) \

# else
# define Xt_vk_api_VK_EXT_conditional_rendering(...) 
#endif // # if VK_EXT_conditional_rendering
# if VK_KHR_draw_indirect_count
# define Xt_vk_api_VK_KHR_draw_indirect_count(X__) \
    X__(vkCmdDrawIndirectCountKHR) \
    X__(vkCmdDrawIndexedIndirectCountKHR) \

# else
# define Xt_vk_api_VK_KHR_draw_indirect_count(...) 
#endif // # if VK_KHR_draw_indirect_count
# if VK_FUCHSIA_imagepipe_surface
# define Xt_vk_api_VK_FUCHSIA_imagepipe_surface(X__) \
    X__(vkCreateImagePipeSurfaceFUCHSIA) \

# else
# define Xt_vk_api_VK_FUCHSIA_imagepipe_surface(...) 
#endif // # if VK_FUCHSIA_imagepipe_surface
# if VK_KHR_external_memory_win32
# define Xt_vk_api_VK_KHR_external_memory_win32(X__) \
    X__(vkGetMemoryWin32HandleKHR) \
    X__(vkGetMemoryWin32HandlePropertiesKHR) \

# else
# define Xt_vk_api_VK_KHR_external_memory_win32(...) 
#endif // # if VK_KHR_external_memory_win32
# if VK_KHR_surface
# define Xt_vk_api_VK_KHR_surface(X__) \
    X__(vkDestroySurfaceKHR) \
    X__(vkGetPhysicalDeviceSurfaceSupportKHR) \
    X__(vkGetPhysicalDeviceSurfaceCapabilitiesKHR) \
    X__(vkGetPhysicalDeviceSurfaceFormatsKHR) \
    X__(vkGetPhysicalDeviceSurfacePresentModesKHR) \

# else
# define Xt_vk_api_VK_KHR_surface(...) 
#endif // # if VK_KHR_surface
# if VK_KHR_descriptor_update_template
# define Xt_vk_api_VK_KHR_descriptor_update_template(X__) \
    X__(vkCreateDescriptorUpdateTemplateKHR) \
    X__(vkDestroyDescriptorUpdateTemplateKHR) \
    X__(vkUpdateDescriptorSetWithTemplateKHR) \

# else
# define Xt_vk_api_VK_KHR_descriptor_update_template(...) 
#endif // # if VK_KHR_descriptor_update_template
# if VK_EXT_metal_surface
# define Xt_vk_api_VK_EXT_metal_surface(X__) \
    X__(vkCreateMetalSurfaceEXT) \

# else
# define Xt_vk_api_VK_EXT_metal_surface(...) 
#endif // # if VK_EXT_metal_surface
# if VK_AMD_shader_info
# define Xt_vk_api_VK_AMD_shader_info(X__) \
    X__(vkGetShaderInfoAMD) \

# else
# define Xt_vk_api_VK_AMD_shader_info(...) 
#endif // # if VK_AMD_shader_info
# if VK_KHR_external_memory_fd
# define Xt_vk_api_VK_KHR_external_memory_fd(X__) \
    X__(vkGetMemoryFdKHR) \
    X__(vkGetMemoryFdPropertiesKHR) \

# else
# define Xt_vk_api_VK_KHR_external_memory_fd(...) 
#endif // # if VK_KHR_external_memory_fd
# if VK_NV_device_diagnostic_checkpoints
# define Xt_vk_api_VK_NV_device_diagnostic_checkpoints(X__) \
    X__(vkCmdSetCheckpointNV) \
    X__(vkGetQueueCheckpointDataNV) \

# else
# define Xt_vk_api_VK_NV_device_diagnostic_checkpoints(...) 
#endif // # if VK_NV_device_diagnostic_checkpoints
# if VK_KHR_win32_surface
# define Xt_vk_api_VK_KHR_win32_surface(X__) \
    X__(vkCreateWin32SurfaceKHR) \
    X__(vkGetPhysicalDeviceWin32PresentationSupportKHR) \

# else
# define Xt_vk_api_VK_KHR_win32_surface(...) 
#endif // # if VK_KHR_win32_surface
# if VK_NV_coverage_reduction_mode
# define Xt_vk_api_VK_NV_coverage_reduction_mode(X__) \
    X__(vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV) \

# else
# define Xt_vk_api_VK_NV_coverage_reduction_mode(...) 
#endif // # if VK_NV_coverage_reduction_mode
# if VK_KHR_get_display_properties2
# define Xt_vk_api_VK_KHR_get_display_properties2(X__) \
    X__(vkGetPhysicalDeviceDisplayProperties2KHR) \
    X__(vkGetPhysicalDeviceDisplayPlaneProperties2KHR) \
    X__(vkGetDisplayModeProperties2KHR) \
    X__(vkGetDisplayPlaneCapabilities2KHR) \

# else
# define Xt_vk_api_VK_KHR_get_display_properties2(...) 
#endif // # if VK_KHR_get_display_properties2
# if VK_KHR_maintenance1
# define Xt_vk_api_VK_KHR_maintenance1(X__) \
    X__(vkTrimCommandPoolKHR) \

# else
# define Xt_vk_api_VK_KHR_maintenance1(...) 
#endif // # if VK_KHR_maintenance1
# if VK_GOOGLE_display_timing
# define Xt_vk_api_VK_GOOGLE_display_timing(X__) \
    X__(vkGetRefreshCycleDurationGOOGLE) \
    X__(vkGetPastPresentationTimingGOOGLE) \

# else
# define Xt_vk_api_VK_GOOGLE_display_timing(...) 
#endif // # if VK_GOOGLE_display_timing
# if VK_KHR_device_group
# define Xt_vk_api_VK_KHR_device_group(X__) \
    X__(vkGetDeviceGroupPeerMemoryFeaturesKHR) \
    X__(vkCmdSetDeviceMaskKHR) \
    X__(vkCmdDispatchBaseKHR) \
    X__(vkGetDeviceGroupSurfacePresentModes2EXT) \

# else
# define Xt_vk_api_VK_KHR_device_group(...) 
#endif // # if VK_KHR_device_group
# if VK_NV_external_memory_capabilities
# define Xt_vk_api_VK_NV_external_memory_capabilities(X__) \
    X__(vkGetPhysicalDeviceExternalImageFormatPropertiesNV) \

# else
# define Xt_vk_api_VK_NV_external_memory_capabilities(...) 
#endif // # if VK_NV_external_memory_capabilities
# if VK_EXT_transform_feedback
# define Xt_vk_api_VK_EXT_transform_feedback(X__) \
    X__(vkCmdBindTransformFeedbackBuffersEXT) \
    X__(vkCmdBeginTransformFeedbackEXT) \
    X__(vkCmdEndTransformFeedbackEXT) \
    X__(vkCmdBeginQueryIndexedEXT) \
    X__(vkCmdEndQueryIndexedEXT) \
    X__(vkCmdDrawIndirectByteCountEXT) \

# else
# define Xt_vk_api_VK_EXT_transform_feedback(...) 
#endif // # if VK_EXT_transform_feedback
# if VK_KHR_display
# define Xt_vk_api_VK_KHR_display(X__) \
    X__(vkGetPhysicalDeviceDisplayPropertiesKHR) \
    X__(vkGetPhysicalDeviceDisplayPlanePropertiesKHR) \
    X__(vkGetDisplayPlaneSupportedDisplaysKHR) \
    X__(vkGetDisplayModePropertiesKHR) \
    X__(vkCreateDisplayModeKHR) \
    X__(vkGetDisplayPlaneCapabilitiesKHR) \
    X__(vkCreateDisplayPlaneSurfaceKHR) \

# else
# define Xt_vk_api_VK_KHR_display(...) 
#endif // # if VK_KHR_display
# if VK_EXT_full_screen_exclusive
# define Xt_vk_api_VK_EXT_full_screen_exclusive(X__) \
    X__(vkGetPhysicalDeviceSurfacePresentModes2EXT) \
    X__(vkAcquireFullScreenExclusiveModeEXT) \
    X__(vkReleaseFullScreenExclusiveModeEXT) \

# else
# define Xt_vk_api_VK_EXT_full_screen_exclusive(...) 
#endif // # if VK_EXT_full_screen_exclusive
# if VK_EXT_discard_rectangles
# define Xt_vk_api_VK_EXT_discard_rectangles(X__) \
    X__(vkCmdSetDiscardRectangleEXT) \

# else
# define Xt_vk_api_VK_EXT_discard_rectangles(...) 
#endif // # if VK_EXT_discard_rectangles
# if VK_KHR_external_fence_fd
# define Xt_vk_api_VK_KHR_external_fence_fd(X__) \
    X__(vkImportFenceFdKHR) \
    X__(vkGetFenceFdKHR) \

# else
# define Xt_vk_api_VK_KHR_external_fence_fd(...) 
#endif // # if VK_KHR_external_fence_fd
# if VK_KHR_pipeline_executable_properties
# define Xt_vk_api_VK_KHR_pipeline_executable_properties(X__) \
    X__(vkGetPipelineExecutablePropertiesKHR) \
    X__(vkGetPipelineExecutableStatisticsKHR) \
    X__(vkGetPipelineExecutableInternalRepresentationsKHR) \

# else
# define Xt_vk_api_VK_KHR_pipeline_executable_properties(...) 
#endif // # if VK_KHR_pipeline_executable_properties
# if VK_EXT_headless_surface
# define Xt_vk_api_VK_EXT_headless_surface(X__) \
    X__(vkCreateHeadlessSurfaceEXT) \

# else
# define Xt_vk_api_VK_EXT_headless_surface(...) 
#endif // # if VK_EXT_headless_surface
# if VK_AMD_draw_indirect_count
# define Xt_vk_api_VK_AMD_draw_indirect_count(X__) \
    X__(vkCmdDrawIndirectCountAMD) \
    X__(vkCmdDrawIndexedIndirectCountAMD) \

# else
# define Xt_vk_api_VK_AMD_draw_indirect_count(...) 
#endif // # if VK_AMD_draw_indirect_count
# if VK_KHR_push_descriptor
# define Xt_vk_api_VK_KHR_push_descriptor(X__) \
    X__(vkCmdPushDescriptorSetKHR) \
    X__(vkCmdPushDescriptorSetWithTemplateKHR) \

# else
# define Xt_vk_api_VK_KHR_push_descriptor(...) 
#endif // # if VK_KHR_push_descriptor
# if VK_KHR_get_memory_requirements2
# define Xt_vk_api_VK_KHR_get_memory_requirements2(X__) \
    X__(vkGetImageMemoryRequirements2KHR) \
    X__(vkGetBufferMemoryRequirements2KHR) \
    X__(vkGetImageSparseMemoryRequirements2KHR) \

# else
# define Xt_vk_api_VK_KHR_get_memory_requirements2(...) 
#endif // # if VK_KHR_get_memory_requirements2
# if VK_KHR_xlib_surface
# define Xt_vk_api_VK_KHR_xlib_surface(X__) \
    X__(vkCreateXlibSurfaceKHR) \
    X__(vkGetPhysicalDeviceXlibPresentationSupportKHR) \

# else
# define Xt_vk_api_VK_KHR_xlib_surface(...) 
#endif // # if VK_KHR_xlib_surface
# if VK_KHR_create_renderpass2
# define Xt_vk_api_VK_KHR_create_renderpass2(X__) \
    X__(vkCreateRenderPass2KHR) \
    X__(vkCmdBeginRenderPass2KHR) \
    X__(vkCmdNextSubpass2KHR) \
    X__(vkCmdEndRenderPass2KHR) \

# else
# define Xt_vk_api_VK_KHR_create_renderpass2(...) 
#endif // # if VK_KHR_create_renderpass2
# if VK_KHR_shared_presentable_image
# define Xt_vk_api_VK_KHR_shared_presentable_image(X__) \
    X__(vkGetSwapchainStatusKHR) \

# else
# define Xt_vk_api_VK_KHR_shared_presentable_image(...) 
#endif // # if VK_KHR_shared_presentable_image
# if VK_KHR_device_group_creation
# define Xt_vk_api_VK_KHR_device_group_creation(X__) \
    X__(vkEnumeratePhysicalDeviceGroupsKHR) \

# else
# define Xt_vk_api_VK_KHR_device_group_creation(...) 
#endif // # if VK_KHR_device_group_creation
# if VK_INTEL_performance_query
# define Xt_vk_api_VK_INTEL_performance_query(X__) \
    X__(vkInitializePerformanceApiINTEL) \
    X__(vkUninitializePerformanceApiINTEL) \
    X__(vkCmdSetPerformanceMarkerINTEL) \
    X__(vkCmdSetPerformanceStreamMarkerINTEL) \
    X__(vkCmdSetPerformanceOverrideINTEL) \
    X__(vkAcquirePerformanceConfigurationINTEL) \
    X__(vkReleasePerformanceConfigurationINTEL) \
    X__(vkQueueSetPerformanceConfigurationINTEL) \
    X__(vkGetPerformanceParameterINTEL) \

# else
# define Xt_vk_api_VK_INTEL_performance_query(...) 
#endif // # if VK_INTEL_performance_query
# if VK_AMD_display_native_hdr
# define Xt_vk_api_VK_AMD_display_native_hdr(X__) \
    X__(vkSetLocalDimmingAMD) \

# else
# define Xt_vk_api_VK_AMD_display_native_hdr(...) 
#endif // # if VK_AMD_display_native_hdr
# if VK_EXT_buffer_device_address
# define Xt_vk_api_VK_EXT_buffer_device_address(X__) \
    X__(vkGetBufferDeviceAddressEXT) \

# else
# define Xt_vk_api_VK_EXT_buffer_device_address(...) 
#endif // # if VK_EXT_buffer_device_address
# if VK_EXT_host_query_reset
# define Xt_vk_api_VK_EXT_host_query_reset(X__) \
    X__(vkResetQueryPoolEXT) \

# else
# define Xt_vk_api_VK_EXT_host_query_reset(...) 
#endif // # if VK_EXT_host_query_reset
# if VK_EXT_external_memory_host
# define Xt_vk_api_VK_EXT_external_memory_host(X__) \
    X__(vkGetMemoryHostPointerPropertiesEXT) \

# else
# define Xt_vk_api_VK_EXT_external_memory_host(...) 
#endif // # if VK_EXT_external_memory_host
# if VK_EXT_debug_report
# define Xt_vk_api_VK_EXT_debug_report(X__) \
    X__(vkCreateDebugReportCallbackEXT) \
    X__(vkDestroyDebugReportCallbackEXT) \
    X__(vkDebugReportMessageEXT) \

# else
# define Xt_vk_api_VK_EXT_debug_report(...) 
#endif // # if VK_EXT_debug_report
# if VK_EXT_sample_locations
# define Xt_vk_api_VK_EXT_sample_locations(X__) \
    X__(vkCmdSetSampleLocationsEXT) \
    X__(vkGetPhysicalDeviceMultisamplePropertiesEXT) \

# else
# define Xt_vk_api_VK_EXT_sample_locations(...) 
#endif // # if VK_EXT_sample_locations
# if VK_KHR_android_surface
# define Xt_vk_api_VK_KHR_android_surface(X__) \
    X__(vkCreateAndroidSurfaceKHR) \

# else
# define Xt_vk_api_VK_KHR_android_surface(...) 
#endif // # if VK_KHR_android_surface
# if VK_EXT_calibrated_timestamps
# define Xt_vk_api_VK_EXT_calibrated_timestamps(X__) \
    X__(vkGetPhysicalDeviceCalibrateableTimeDomainsEXT) \
    X__(vkGetCalibratedTimestampsEXT) \

# else
# define Xt_vk_api_VK_EXT_calibrated_timestamps(...) 
#endif // # if VK_EXT_calibrated_timestamps
# if VK_KHR_external_fence_capabilities
# define Xt_vk_api_VK_KHR_external_fence_capabilities(X__) \
    X__(vkGetPhysicalDeviceExternalFencePropertiesKHR) \

# else
# define Xt_vk_api_VK_KHR_external_fence_capabilities(...) 
#endif // # if VK_KHR_external_fence_capabilities
# if VK_NVX_device_generated_commands
# define Xt_vk_api_VK_NVX_device_generated_commands(X__) \
    X__(vkCmdProcessCommandsNVX) \
    X__(vkCmdReserveSpaceForCommandsNVX) \
    X__(vkCreateIndirectCommandsLayoutNVX) \
    X__(vkDestroyIndirectCommandsLayoutNVX) \
    X__(vkCreateObjectTableNVX) \
    X__(vkDestroyObjectTableNVX) \
    X__(vkRegisterObjectsNVX) \
    X__(vkUnregisterObjectsNVX) \
    X__(vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX) \

# else
# define Xt_vk_api_VK_NVX_device_generated_commands(...) 
#endif // # if VK_NVX_device_generated_commands

# define Xt_extensions_name(X__) \
    X__(VK_KHR_display_swapchain,VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME) \
    X__(VK_AMD_extension_17,VK_AMD_EXTENSION_17_EXTENSION_NAME) \
    X__(VK_QCOM_extension_172,VK_QCOM_extension_172_EXTENSION_NAME) \
    X__(VK_BRCM_extension_264,VK_BRCM_EXTENSION_264_EXTENSION_NAME) \
    X__(VK_AMD_shader_fragment_mask,VK_AMD_SHADER_FRAGMENT_MASK_EXTENSION_NAME) \
    X__(VK_EXT_extension_259,VK_EXT_EXTENSION_259_EXTENSION_NAME) \
    X__(VK_GOOGLE_extension_217,VK_KHR_EXTENSION_217_EXTENSION_NAME) \
    X__(VK_EXT_astc_decode_mode,VK_EXT_ASTC_DECODE_MODE_EXTENSION_NAME) \
    X__(VK_AMD_extension_188,VK_KHR_EXTENSION_188_EXTENSION_NAME) \
    X__(VK_KHR_external_semaphore_capabilities,VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME) \
    X__(VK_NN_vi_surface,VK_NN_VI_SURFACE_EXTENSION_NAME) \
    X__(VK_EXT_extension_220,VK_EXT_EXTENSION_220_EXTENSION_NAME) \
    X__(VK_KHR_extension_237,VK_KHR_EXTENSION_237_EXTENSION_NAME) \
    X__(VK_EXT_post_depth_coverage,VK_EXT_POST_DEPTH_COVERAGE_EXTENSION_NAME) \
    X__(VK_KHR_external_semaphore_fd,VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME) \
    X__(VK_KHR_get_physical_device_properties2,VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME) \
    X__(VK_KHR_sampler_mirror_clamp_to_edge,VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_EXTENSION_NAME) \
    X__(VK_NVX_image_view_handle,VK_NVX_IMAGE_VIEW_HANDLE_EXTENSION_NAME) \
    X__(VK_KHR_incremental_present,VK_KHR_INCREMENTAL_PRESENT_EXTENSION_NAME) \
    X__(VK_EXT_image_drm_format_modifier,VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_EXTENSION_NAME) \
    X__(VK_AMD_gpu_shader_int16,VK_AMD_GPU_SHADER_INT16_EXTENSION_NAME) \
    X__(VK_GOOGLE_extension_195,VK_GOOGLE_EXTENSION_195_EXTENSION_NAME) \
    X__(VK_EXT_direct_mode_display,VK_EXT_DIRECT_MODE_DISPLAY_EXTENSION_NAME) \
    X__(VK_EXT_texel_buffer_alignment,VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME) \
    X__(VK_NV_extension_261,VK_NV_EXTENSION_261_EXTENSION_NAME) \
    X__(VK_INTEL_extension_243,VK_INTEL_EXTENSION_243_EXTENSION_NAME) \
    X__(VK_KHR_get_surface_capabilities2,VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME) \
    X__(VK_GOOGLE_extension_49,VK_GOOGLE_EXTENSION_49_EXTENSION_NAME) \
    X__(VK_AMD_shader_ballot,VK_AMD_SHADER_BALLOT_EXTENSION_NAME) \
    X__(VK_NV_shader_image_footprint,VK_NV_SHADER_IMAGE_FOOTPRINT_EXTENSION_NAME) \
    X__(VK_EXT_hdr_metadata,VK_EXT_HDR_METADATA_EXTENSION_NAME) \
    X__(VK_NV_mesh_shader,VK_NV_MESH_SHADER_EXTENSION_NAME) \
    X__(VK_NVX_extension_48,VK_NVX_EXTENSION_48_EXTENSION_NAME) \
    X__(VK_KHR_xcb_surface,VK_KHR_XCB_SURFACE_EXTENSION_NAME) \
    X__(VK_KHR_16bit_storage,VK_KHR_16BIT_STORAGE_EXTENSION_NAME) \
    X__(VK_KHR_extension_119,VK_KHR_EXTENSION_119_EXTENSION_NAME) \
    X__(VK_KHR_variable_pointers,VK_KHR_VARIABLE_POINTERS_EXTENSION_NAME) \
    X__(VK_KHR_maintenance2,VK_KHR_MAINTENANCE2_EXTENSION_NAME) \
    X__(VK_NV_dedicated_allocation,VK_NV_DEDICATED_ALLOCATION_EXTENSION_NAME) \
    X__(VK_KHR_shader_float16_int8,VK_KHR_SHADER_FLOAT16_INT8_EXTENSION_NAME) \
    X__(VK_EXT_inline_uniform_block,VK_EXT_INLINE_UNIFORM_BLOCK_EXTENSION_NAME) \
    X__(VK_AMD_buffer_marker,VK_AMD_BUFFER_MARKER_EXTENSION_NAME) \
    X__(VK_NV_viewport_swizzle,VK_NV_VIEWPORT_SWIZZLE_EXTENSION_NAME) \
    X__(VK_EXT_display_surface_counter,VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME) \
    X__(VK_AMD_extension_33,VK_AMD_EXTENSION_33_EXTENSION_NAME) \
    X__(VK_KHR_shader_float_controls,VK_KHR_SHADER_FLOAT_CONTROLS_EXTENSION_NAME) \
    X__(VK_KHR_bind_memory2,VK_KHR_BIND_MEMORY_2_EXTENSION_NAME) \
    X__(VK_NV_shading_rate_image,VK_NV_SHADING_RATE_IMAGE_EXTENSION_NAME) \
    X__(VK_EXT_extension_177,VK_KHR_EXTENSION_177_EXTENSION_NAME) \
    X__(VK_NV_cooperative_matrix,VK_NV_COOPERATIVE_MATRIX_EXTENSION_NAME) \
    X__(VK_GOOGLE_extension_194,VK_GOOGLE_EXTENSION_194_EXTENSION_NAME) \
    X__(VK_EXT_line_rasterization,VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME) \
    X__(VK_NV_external_memory,VK_NV_EXTERNAL_MEMORY_EXTENSION_NAME) \
    X__(VK_NV_clip_space_w_scaling,VK_NV_CLIP_SPACE_W_SCALING_EXTENSION_NAME) \
    X__(VK_KHR_maintenance3,VK_KHR_MAINTENANCE3_EXTENSION_NAME) \
    X__(VK_NV_corner_sampled_image,VK_NV_CORNER_SAMPLED_IMAGE_EXTENSION_NAME) \
    X__(VK_AMD_negative_viewport_height,VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_EXTENSION_NAME) \
    X__(VK_NV_fragment_shader_barycentric,VK_NV_FRAGMENT_SHADER_BARYCENTRIC_EXTENSION_NAME) \
    X__(VK_MVK_ios_surface,VK_MVK_IOS_SURFACE_EXTENSION_NAME) \
    X__(VK_AMD_extension_135,VK_AMD_EXTENSION_135_EXTENSION_NAME) \
    X__(VK_KHR_swapchain,VK_KHR_SWAPCHAIN_EXTENSION_NAME) \
    X__(VK_EXT_extension_255,VK_EXT_EXTENSION_255_EXTENSION_NAME) \
    X__(VK_KHR_dedicated_allocation,VK_KHR_DEDICATED_ALLOCATION_EXTENSION_NAME) \
    X__(VK_AMD_gpu_shader_half_float,VK_AMD_GPU_SHADER_HALF_FLOAT_EXTENSION_NAME) \
    X__(VK_KHR_mir_surface,VK_KHR_MIR_SURFACE_EXTENSION_NAME) \
    X__(VK_AMD_extension_40,VK_AMD_EXTENSION_40_EXTENSION_NAME) \
    X__(VK_KHR_depth_stencil_resolve,VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME) \
    X__(VK_NV_glsl_shader,VK_NV_GLSL_SHADER_EXTENSION_NAME) \
    X__(VK_NV_extension_152,VK_NV_EXTENSION_152_EXTENSION_NAME) \
    X__(VK_KHR_wayland_surface,VK_KHR_WAYLAND_SURFACE_EXTENSION_NAME) \
    X__(VK_KHR_imageless_framebuffer,VK_KHR_IMAGELESS_FRAMEBUFFER_EXTENSION_NAME) \
    X__(VK_EXT_shader_viewport_index_layer,VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_EXTENSION_NAME) \
    X__(VK_EXT_external_memory_dma_buf,VK_EXT_EXTERNAL_MEMORY_DMA_BUF_EXTENSION_NAME) \
    X__(VK_EXT_validation_cache,VK_EXT_VALIDATION_CACHE_EXTENSION_NAME) \
    X__(VK_NV_framebuffer_mixed_samples,VK_NV_FRAMEBUFFER_MIXED_SAMPLES_EXTENSION_NAME) \
    X__(VK_NV_extension_168,VK_EXT_EXTENSION_168_EXTENSION_NAME) \
    X__(VK_KHR_sampler_ycbcr_conversion,VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME) \
    X__(VK_EXT_fragment_shader_interlock,VK_EXT_FRAGMENT_SHADER_INTERLOCK_EXTENSION_NAME) \
    X__(VK_MVK_macos_surface,VK_MVK_MACOS_SURFACE_EXTENSION_NAME) \
    X__(VK_GGP_stream_descriptor_surface,VK_GGP_STREAM_DESCRIPTOR_SURFACE_EXTENSION_NAME) \
    X__(VK_AMD_extension_45,VK_AMD_EXTENSION_45_EXTENSION_NAME) \
    X__(VK_KHR_shader_draw_parameters,VK_KHR_SHADER_DRAW_PARAMETERS_EXTENSION_NAME) \
    X__(VK_KHR_external_fence,VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME) \
    X__(VK_EXT_acquire_xlib_display,VK_EXT_ACQUIRE_XLIB_DISPLAY_EXTENSION_NAME) \
    X__(VK_EXT_display_control,VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME) \
    X__(VK_NV_external_memory_win32,VK_NV_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME) \
    X__(VK_NV_scissor_exclusive,VK_NV_SCISSOR_EXCLUSIVE_EXTENSION_NAME) \
    X__(VK_EXT_extension_160,VK_EXT_EXTENSION_160_EXTENSION_NAME) \
    X__(VK_AMD_extension_189,VK_KHR_EXTENSION_189_EXTENSION_NAME) \
    X__(VK_NV_representative_fragment_test,VK_NV_REPRESENTATIVE_FRAGMENT_TEST_EXTENSION_NAME) \
    X__(VK_NV_ray_tracing,VK_NV_RAY_TRACING_EXTENSION_NAME) \
    X__(VK_AMD_shader_image_load_store_lod,VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_EXTENSION_NAME) \
    X__(VK_EXT_blend_operation_advanced,VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME) \
    X__(VK_BRCM_extension_265,VK_BRCM_EXTENSION_265_EXTENSION_NAME) \
    X__(VK_AMD_extension_229,VK_AMD_EXTENSION_229_EXTENSION_NAME) \
    X__(VK_AMD_extension_32,VK_AMD_EXTENSION_32_EXTENSION_NAME) \
    X__(VK_EXT_debug_utils,VK_EXT_DEBUG_UTILS_EXTENSION_NAME) \
    X__(VK_NVX_extension_288,VK_NVX_EXTENSION_288_EXTENSION_NAME) \
    X__(VK_KHR_external_fence_win32,VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME) \
    X__(VK_NV_extension_52,VK_NV_EXTENSION_52_EXTENSION_NAME) \
    X__(VK_AMD_extension_232,VK_AMD_EXTENSION_232_EXTENSION_NAME) \
    X__(VK_EXT_shader_demote_to_helper_invocation,VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_EXTENSION_NAME) \
    X__(VK_NV_shader_sm_builtins,VK_NV_SHADER_SM_BUILTINS_EXTENSION_NAME) \
    X__(VK_KHR_external_semaphore,VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME) \
    X__(VK_AMD_extension_134,VK_AMD_EXTENSION_134_EXTENSION_NAME) \
    X__(VK_AMD_shader_explicit_vertex_parameter,VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_EXTENSION_NAME) \
    X__(VK_EXT_extension_176,VK_KHR_EXTENSION_176_EXTENSION_NAME) \
    X__(VK_AMD_rasterization_order,VK_AMD_RASTERIZATION_ORDER_EXTENSION_NAME) \
    X__(VK_NV_dedicated_allocation_image_aliasing,VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_EXTENSION_NAME) \
    X__(VK_AMD_memory_overallocation_behavior,VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_EXTENSION_NAME) \
    X__(VK_EXT_debug_marker,VK_EXT_DEBUG_MARKER_EXTENSION_NAME) \
    X__(VK_EXT_shader_stencil_export,VK_EXT_SHADER_STENCIL_EXPORT_EXTENSION_NAME) \
    X__(VK_KHR_driver_properties,VK_KHR_DRIVER_PROPERTIES_EXTENSION_NAME) \
    X__(VK_QCOM_extension_173,VK_QCOM_extension_173_EXTENSION_NAME) \
    X__(VK_KHR_external_semaphore_win32,VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME) \
    X__(VK_ANDROID_external_memory_android_hardware_buffer,VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_EXTENSION_NAME) \
    X__(VK_IMG_extension_111,VK_IMG_EXTENSION_111_EXTENSION_NAME) \
    X__(VK_NV_extension_242,VK_NV_EXTENSION_242_EXTENSION_NAME) \
    X__(VK_EXT_index_type_uint8,VK_EXT_INDEX_TYPE_UINT8_EXTENSION_NAME) \
    X__(VK_EXT_extension_28,VK_EXT_EXTENSION_28_EXTENSION_NAME) \
    X__(VK_NVX_extension_30,VK_NVX_EXTENSION_30_EXTENSION_NAME) \
    X__(VK_AMD_extension_136,VK_AMD_EXTENSION_136_EXTENSION_NAME) \
    X__(VK_NVX_extension_287,VK_NVX_EXTENSION_287_EXTENSION_NAME) \
    X__(VK_EXT_ycbcr_image_arrays,VK_EXT_YCBCR_IMAGE_ARRAYS_EXTENSION_NAME) \
    X__(VK_KHR_extension_249,VK_KHR_EXTENSION_249_EXTENSION_NAME) \
    X__(VK_AMD_shader_core_properties2,VK_AMD_SHADER_CORE_PROPERTIES_2_EXTENSION_NAME) \
    X__(VK_KHR_storage_buffer_storage_class,VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_EXTENSION_NAME) \
    X__(VK_KHR_external_memory_capabilities,VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME) \
    X__(VK_EXT_conditional_rendering,VK_EXT_CONDITIONAL_RENDERING_EXTENSION_NAME) \
    X__(VK_AMD_extension_20,VK_AMD_EXTENSION_20_EXTENSION_NAME) \
    X__(VK_EXT_fragment_density_map,VK_EXT_FRAGMENT_DENSITY_MAP_EXTENSION_NAME) \
    X__(VK_AMD_extension_44,VK_AMD_EXTENSION_44_EXTENSION_NAME) \
    X__(VK_AMD_extension_35,VK_AMD_EXTENSION_35_EXTENSION_NAME) \
    X__(VK_NV_sample_mask_override_coverage,VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_EXTENSION_NAME) \
    X__(VK_KHR_draw_indirect_count,VK_KHR_DRAW_INDIRECT_COUNT_EXTENSION_NAME) \
    X__(VK_EXT_queue_family_foreign,VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME) \
    X__(VK_FUCHSIA_imagepipe_surface,VK_FUCHSIA_IMAGEPIPE_SURFACE_EXTENSION_NAME) \
    X__(VK_KHR_external_memory_win32,VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME) \
    X__(VK_EXT_sampler_filter_minmax,VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME) \
    X__(VK_KHR_vulkan_memory_model,VK_KHR_VULKAN_MEMORY_MODEL_EXTENSION_NAME) \
    X__(VK_EXT_shader_subgroup_ballot,VK_EXT_SHADER_SUBGROUP_BALLOT_EXTENSION_NAME) \
    X__(VK_KHR_external_memory,VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME) \
    X__(VK_GOOGLE_hlsl_functionality1,VK_GOOGLE_HLSL_FUNCTIONALITY1_EXTENSION_NAME) \
    X__(VK_EXT_scalar_block_layout,VK_EXT_SCALAR_BLOCK_LAYOUT_EXTENSION_NAME) \
    X__(VK_KHR_surface,VK_KHR_SURFACE_EXTENSION_NAME) \
    X__(VK_KHR_descriptor_update_template,VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME) \
    X__(VK_EXT_extension_246,VK_EXT_EXTENSION_246_EXTENSION_NAME) \
    X__(VK_EXT_metal_surface,VK_EXT_METAL_SURFACE_EXTENSION_NAME) \
    X__(VK_GOOGLE_decorate_string,VK_GOOGLE_DECORATE_STRING_EXTENSION_NAME) \
    X__(VK_AMD_extension_231,VK_AMD_EXTENSION_231_EXTENSION_NAME) \
    X__(VK_GOOGLE_extension_216,VK_KHR_EXTENSION_216_EXTENSION_NAME) \
    X__(VK_EXT_filter_cubic,VK_EXT_FILTER_CUBIC_EXTENSION_NAME) \
    X__(VK_NV_viewport_array2,VK_NV_VIEWPORT_ARRAY2_EXTENSION_NAME) \
    X__(VK_AMD_shader_info,VK_AMD_SHADER_INFO_EXTENSION_NAME) \
    X__(VK_AMD_extension_234,VK_AMD_EXTENSION_234_EXTENSION_NAME) \
    X__(VK_KHR_swapchain_mutable_format,VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_EXTENSION_NAME) \
    X__(VK_KHR_external_memory_fd,VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME) \
    X__(VK_KHR_shader_atomic_int64,VK_KHR_SHADER_ATOMIC_INT64_EXTENSION_NAME) \
    X__(VK_KHR_extension_117,VK_KHR_EXTENSION_117_EXTENSION_NAME) \
    X__(VK_NV_device_diagnostic_checkpoints,VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_EXTENSION_NAME) \
    X__(VK_KHR_win32_surface,VK_KHR_WIN32_SURFACE_EXTENSION_NAME) \
    X__(VK_NV_coverage_reduction_mode,VK_NV_COVERAGE_REDUCTION_MODE_EXTENSION_NAME) \
    X__(VK_AMD_extension_182,VK_KHR_EXTENSION_182_EXTENSION_NAME) \
    X__(VK_KHR_get_display_properties2,VK_KHR_GET_DISPLAY_PROPERTIES_2_EXTENSION_NAME) \
    X__(VK_AMD_extension_46,VK_AMD_EXTENSION_46_EXTENSION_NAME) \
    X__(VK_KHR_maintenance1,VK_KHR_MAINTENANCE1_EXTENSION_NAME) \
    X__(VK_AMD_extension_142,VK_AMD_EXTENSION_142_EXTENSION_NAME) \
    X__(VK_NV_geometry_shader_passthrough,VK_NV_GEOMETRY_SHADER_PASSTHROUGH_EXTENSION_NAME) \
    X__(VK_EXT_texture_compression_astc_hdr,VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_EXTENSION_NAME) \
    X__(VK_EXT_extension_223,VK_EXT_EXTENSION_223_EXTENSION_NAME) \
    X__(VK_NV_win32_keyed_mutex,VK_NV_WIN32_KEYED_MUTEX_EXTENSION_NAME) \
    X__(VK_EXT_shader_subgroup_vote,VK_EXT_SHADER_SUBGROUP_VOTE_EXTENSION_NAME) \
    X__(VK_AMD_extension_18,VK_AMD_EXTENSION_18_EXTENSION_NAME) \
    X__(VK_AMD_extension_187,VK_KHR_EXTENSION_187_EXTENSION_NAME) \
    X__(VK_GOOGLE_display_timing,VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME) \
    X__(VK_AMD_extension_236,VK_AMD_EXTENSION_236_EXTENSION_NAME) \
    X__(VK_AMD_extension_227,VK_AMD_EXTENSION_227_EXTENSION_NAME) \
    X__(VK_EXT_vertex_attribute_divisor,VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME) \
    X__(VK_KHR_device_group,VK_KHR_DEVICE_GROUP_EXTENSION_NAME) \
    X__(VK_NV_external_memory_capabilities,VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME) \
    X__(VK_EXT_transform_feedback,VK_EXT_TRANSFORM_FEEDBACK_EXTENSION_NAME) \
    X__(VK_KHR_display,VK_KHR_DISPLAY_EXTENSION_NAME) \
    X__(VK_AMD_extension_183,VK_KHR_EXTENSION_183_EXTENSION_NAME) \
    X__(VK_EXT_depth_range_unrestricted,VK_EXT_DEPTH_RANGE_UNRESTRICTED_EXTENSION_NAME) \
    X__(VK_EXT_full_screen_exclusive,VK_EXT_FULL_SCREEN_EXCLUSIVE_EXTENSION_NAME) \
    X__(VK_AMD_extension_140,VK_AMD_EXTENSION_140_EXTENSION_NAME) \
    X__(VK_INTEL_shader_integer_functions2,VK_INTEL_SHADER_INTEGER_FUNCTIONS_2_EXTENSION_NAME) \
    X__(VK_EXT_discard_rectangles,VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME) \
    X__(VK_AMD_shader_core_properties,VK_AMD_SHADER_CORE_PROPERTIES_EXTENSION_NAME) \
    X__(VK_KHR_external_fence_fd,VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME) \
    X__(VK_KHR_image_format_list,VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME) \
    X__(VK_KHR_pipeline_executable_properties,VK_KHR_PIPELINE_EXECUTABLE_PROPERTIES_EXTENSION_NAME) \
    X__(VK_EXT_headless_surface,VK_EXT_HEADLESS_SURFACE_EXTENSION_NAME) \
    X__(VK_AMD_draw_indirect_count,VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME) \
    X__(VK_KHR_8bit_storage,VK_KHR_8BIT_STORAGE_EXTENSION_NAME) \
    X__(VK_KHR_push_descriptor,VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME) \
    X__(VK_NV_compute_shader_derivatives,VK_NV_COMPUTE_SHADER_DERIVATIVES_EXTENSION_NAME) \
    X__(VK_AMD_gcn_shader,VK_AMD_GCN_SHADER_EXTENSION_NAME) \
    X__(VK_KHR_get_memory_requirements2,VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME) \
    X__(VK_KHR_xlib_surface,VK_KHR_XLIB_SURFACE_EXTENSION_NAME) \
    X__(VK_KHR_create_renderpass2,VK_KHR_CREATE_RENDERPASS_2_EXTENSION_NAME) \
    X__(VK_AMD_extension_24,VK_AMD_EXTENSION_24_EXTENSION_NAME) \
    X__(VK_EXT_validation_features,VK_EXT_VALIDATION_FEATURES_EXTENSION_NAME) \
    X__(VK_NV_extension_101,VK_NV_EXTENSION_101_EXTENSION_NAME) \
    X__(VK_AMD_extension_235,VK_AMD_EXTENSION_235_EXTENSION_NAME) \
    X__(VK_EXT_separate_stencil_usage,VK_EXT_SEPARATE_STENCIL_USAGE_EXTENSION_NAME) \
    X__(VK_EXT_global_priority,VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME) \
    X__(VK_NV_shader_subgroup_partitioned,VK_NV_SHADER_SUBGROUP_PARTITIONED_EXTENSION_NAME) \
    X__(VK_EXT_depth_clip_enable,VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME) \
    X__(VK_AMD_extension_41,VK_AMD_EXTENSION_41_EXTENSION_NAME) \
    X__(VK_KHR_shared_presentable_image,VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME) \
    X__(VK_KHR_device_group_creation,VK_KHR_DEVICE_GROUP_CREATION_EXTENSION_NAME) \
    X__(VK_NV_extension_151,VK_NV_EXTENSION_151_EXTENSION_NAME) \
    X__(VK_KHR_extension_221,VK_KHR_EXTENSION_221_EXTENSION_NAME) \
    X__(VK_KHR_multiview,VK_KHR_MULTIVIEW_EXTENSION_NAME) \
    X__(VK_NV_fragment_coverage_to_color,VK_NV_FRAGMENT_COVERAGE_TO_COLOR_EXTENSION_NAME) \
    X__(VK_QCOM_extension_174,VK_QCOM_extension_174_EXTENSION_NAME) \
    X__(VK_EXT_validation_flags,VK_EXT_VALIDATION_FLAGS_EXTENSION_NAME) \
    X__(VK_KHR_extension_209,VK_KHR_EXTENSION_209_EXTENSION_NAME) \
    X__(VK_EXT_subgroup_size_control,VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME) \
    X__(VK_AMD_texture_gather_bias_lod,VK_AMD_TEXTURE_GATHER_BIAS_LOD_EXTENSION_NAME) \
    X__(VK_INTEL_performance_query,VK_INTEL_PERFORMANCE_QUERY_EXTENSION_NAME) \
    X__(VK_AMD_shader_trinary_minmax,VK_AMD_SHADER_TRINARY_MINMAX_EXTENSION_NAME) \
    X__(VK_EXT_pipeline_creation_feedback,VK_EXT_PIPELINE_CREATION_FEEDBACK_EXTENSION_NAME) \
    X__(VK_AMD_mixed_attachment_samples,VK_AMD_MIXED_ATTACHMENT_SAMPLES_EXTENSION_NAME) \
    X__(VK_NVX_multiview_per_view_attributes,VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME) \
    X__(VK_KHR_relaxed_block_layout,VK_KHR_RELAXED_BLOCK_LAYOUT_EXTENSION_NAME) \
    X__(VK_NV_extension_53,VK_NV_EXTENSION_53_EXTENSION_NAME) \
    X__(VK_AMD_display_native_hdr,VK_AMD_DISPLAY_NATIVE_HDR_EXTENSION_NAME) \
    X__(VK_KHR_surface_protected_capabilities,VK_KHR_SURFACE_PROTECTED_CAPABILITIES_EXTENSION_NAME) \
    X__(VK_IMG_extension_108,VK_IMG_EXTENSION_108_EXTENSION_NAME) \
    X__(VK_IMG_extension_69,VK_IMG_EXTENSION_69_EXTENSION_NAME) \
    X__(VK_AMD_device_coherent_memory,VK_AMD_DEVICE_COHERENT_MEMORY_EXTENSION_NAME) \
    X__(VK_NV_fill_rectangle,VK_NV_FILL_RECTANGLE_EXTENSION_NAME) \
    X__(VK_AMD_extension_39,VK_AMD_EXTENSION_39_EXTENSION_NAME) \
    X__(VK_EXT_descriptor_indexing,VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME) \
    X__(VK_KHR_extension_208,VK_KHR_EXTENSION_208_EXTENSION_NAME) \
    X__(VK_MESA_extension_244,VK_MESA_EXTENSION_244_EXTENSION_NAME) \
    X__(VK_AMD_extension_25,VK_AMD_EXTENSION_25_EXTENSION_NAME) \
    X__(VK_EXT_buffer_device_address,VK_EXT_BUFFER_DEVICE_ADDRESS_EXTENSION_NAME) \
    X__(VK_IMG_format_pvrtc,VK_IMG_FORMAT_PVRTC_EXTENSION_NAME) \
    X__(VK_IMG_filter_cubic,VK_IMG_FILTER_CUBIC_EXTENSION_NAME) \
    X__(VK_MVK_moltenvk,VK_MVK_MOLTENVK_EXTENSION_NAME) \
    X__(VK_EXT_host_query_reset,VK_EXT_HOST_QUERY_RESET_EXTENSION_NAME) \
    X__(VK_EXT_swapchain_colorspace,VK_EXT_SWAPCHAIN_COLOR_SPACE_EXTENSION_NAME) \
    X__(VK_EXT_external_memory_host,VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME) \
    X__(VK_GGP_frame_token,VK_GGP_FRAME_TOKEN_EXTENSION_NAME) \
    X__(VK_AMD_extension_233,VK_AMD_EXTENSION_233_EXTENSION_NAME) \
    X__(VK_NV_extension_104,VK_NV_EXTENSION_104_EXTENSION_NAME) \
    X__(VK_AMD_pipeline_compiler_control,VK_AMD_PIPELINE_COMPILER_CONTROL_EXTENSION_NAME) \
    X__(VK_EXT_debug_report,VK_EXT_DEBUG_REPORT_EXTENSION_NAME) \
    X__(VK_NV_extension_164,VK_EXT_EXTENSION_164_EXTENSION_NAME) \
    X__(VK_EXT_conservative_rasterization,VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME) \
    X__(VK_EXT_sample_locations,VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME) \
    X__(VK_KHR_android_surface,VK_KHR_ANDROID_SURFACE_EXTENSION_NAME) \
    X__(VK_AMD_extension_143,VK_AMD_EXTENSION_143_EXTENSION_NAME) \
    X__(VK_EXT_calibrated_timestamps,VK_EXT_CALIBRATED_TIMESTAMPS_EXTENSION_NAME) \
    X__(VK_GOOGLE_extension_196,VK_GOOGLE_EXTENSION_196_EXTENSION_NAME) \
    X__(VK_KHR_external_fence_capabilities,VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME) \
    X__(VK_EXT_pci_bus_info,VK_EXT_PCI_BUS_INFO_EXTENSION_NAME) \
    X__(VK_EXT_extension_258,VK_EXT_EXTENSION_258_EXTENSION_NAME) \
    X__(VK_NVX_device_generated_commands,VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME) \
    X__(VK_EXT_memory_budget,VK_EXT_MEMORY_BUDGET_EXTENSION_NAME) \
    X__(VK_IMG_extension_107,VK_IMG_EXTENSION_107_EXTENSION_NAME) \
    X__(VK_EXT_extension_289,VK_EXT_EXTENSION_289_EXTENSION_NAME) \
    X__(VK_KHR_win32_keyed_mutex,VK_KHR_WIN32_KEYED_MUTEX_EXTENSION_NAME) \
    X__(VK_GGP_extension_263,VK_GOOGLE_EXTENSION_263_EXTENSION_NAME) \
    X__(VK_KHR_uniform_buffer_standard_layout,VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_EXTENSION_NAME) \
    X__(VK_EXT_memory_priority,VK_EXT_MEMORY_PRIORITY_EXTENSION_NAME) \

# define Xt_vk_api_extensions(X__) \
    Xt_vk_api_VK_KHR_display_swapchain(X__) \
    Xt_vk_api_VK_ANDROID_native_buffer(X__) \
    Xt_vk_api_VK_KHR_external_semaphore_capabilities(X__) \
    Xt_vk_api_VK_NN_vi_surface(X__) \
    Xt_vk_api_VK_KHR_external_semaphore_fd(X__) \
    Xt_vk_api_VK_KHR_get_physical_device_properties2(X__) \
    Xt_vk_api_VK_NVX_image_view_handle(X__) \
    Xt_vk_api_VK_EXT_image_drm_format_modifier(X__) \
    Xt_vk_api_VK_EXT_direct_mode_display(X__) \
    Xt_vk_api_VK_KHR_get_surface_capabilities2(X__) \
    Xt_vk_api_VK_EXT_hdr_metadata(X__) \
    Xt_vk_api_VK_NV_mesh_shader(X__) \
    Xt_vk_api_VK_KHR_xcb_surface(X__) \
    Xt_vk_api_VK_AMD_buffer_marker(X__) \
    Xt_vk_api_VK_EXT_display_surface_counter(X__) \
    Xt_vk_api_VK_KHR_bind_memory2(X__) \
    Xt_vk_api_VK_NV_shading_rate_image(X__) \
    Xt_vk_api_VK_NV_cooperative_matrix(X__) \
    Xt_vk_api_VK_EXT_line_rasterization(X__) \
    Xt_vk_api_VK_NV_clip_space_w_scaling(X__) \
    Xt_vk_api_VK_KHR_maintenance3(X__) \
    Xt_vk_api_VK_MVK_ios_surface(X__) \
    Xt_vk_api_VK_KHR_swapchain(X__) \
    Xt_vk_api_VK_KHR_wayland_surface(X__) \
    Xt_vk_api_VK_EXT_validation_cache(X__) \
    Xt_vk_api_VK_KHR_sampler_ycbcr_conversion(X__) \
    Xt_vk_api_VK_MVK_macos_surface(X__) \
    Xt_vk_api_VK_GGP_stream_descriptor_surface(X__) \
    Xt_vk_api_VK_EXT_acquire_xlib_display(X__) \
    Xt_vk_api_VK_EXT_display_control(X__) \
    Xt_vk_api_VK_NV_external_memory_win32(X__) \
    Xt_vk_api_VK_NV_scissor_exclusive(X__) \
    Xt_vk_api_VK_NV_ray_tracing(X__) \
    Xt_vk_api_VK_EXT_debug_utils(X__) \
    Xt_vk_api_VK_KHR_external_fence_win32(X__) \
    Xt_vk_api_VK_EXT_debug_marker(X__) \
    Xt_vk_api_VK_KHR_external_semaphore_win32(X__) \
    Xt_vk_api_VK_ANDROID_external_memory_android_hardware_buffer(X__) \
    Xt_vk_api_VK_KHR_external_memory_capabilities(X__) \
    Xt_vk_api_VK_EXT_conditional_rendering(X__) \
    Xt_vk_api_VK_KHR_draw_indirect_count(X__) \
    Xt_vk_api_VK_FUCHSIA_imagepipe_surface(X__) \
    Xt_vk_api_VK_KHR_external_memory_win32(X__) \
    Xt_vk_api_VK_KHR_surface(X__) \
    Xt_vk_api_VK_KHR_descriptor_update_template(X__) \
    Xt_vk_api_VK_EXT_metal_surface(X__) \
    Xt_vk_api_VK_AMD_shader_info(X__) \
    Xt_vk_api_VK_KHR_external_memory_fd(X__) \
    Xt_vk_api_VK_NV_device_diagnostic_checkpoints(X__) \
    Xt_vk_api_VK_KHR_win32_surface(X__) \
    Xt_vk_api_VK_NV_coverage_reduction_mode(X__) \
    Xt_vk_api_VK_KHR_get_display_properties2(X__) \
    Xt_vk_api_VK_KHR_maintenance1(X__) \
    Xt_vk_api_VK_GOOGLE_display_timing(X__) \
    Xt_vk_api_VK_KHR_device_group(X__) \
    Xt_vk_api_VK_NV_external_memory_capabilities(X__) \
    Xt_vk_api_VK_EXT_transform_feedback(X__) \
    Xt_vk_api_VK_KHR_display(X__) \
    Xt_vk_api_VK_EXT_full_screen_exclusive(X__) \
    Xt_vk_api_VK_EXT_discard_rectangles(X__) \
    Xt_vk_api_VK_KHR_external_fence_fd(X__) \
    Xt_vk_api_VK_KHR_pipeline_executable_properties(X__) \
    Xt_vk_api_VK_EXT_headless_surface(X__) \
    Xt_vk_api_VK_AMD_draw_indirect_count(X__) \
    Xt_vk_api_VK_KHR_push_descriptor(X__) \
    Xt_vk_api_VK_KHR_get_memory_requirements2(X__) \
    Xt_vk_api_VK_KHR_xlib_surface(X__) \
    Xt_vk_api_VK_KHR_create_renderpass2(X__) \
    Xt_vk_api_VK_KHR_shared_presentable_image(X__) \
    Xt_vk_api_VK_KHR_device_group_creation(X__) \
    Xt_vk_api_VK_INTEL_performance_query(X__) \
    Xt_vk_api_VK_AMD_display_native_hdr(X__) \
    Xt_vk_api_VK_EXT_buffer_device_address(X__) \
    Xt_vk_api_VK_EXT_host_query_reset(X__) \
    Xt_vk_api_VK_EXT_external_memory_host(X__) \
    Xt_vk_api_VK_EXT_debug_report(X__) \
    Xt_vk_api_VK_EXT_sample_locations(X__) \
    Xt_vk_api_VK_KHR_android_surface(X__) \
    Xt_vk_api_VK_EXT_calibrated_timestamps(X__) \
    Xt_vk_api_VK_KHR_external_fence_capabilities(X__) \
    Xt_vk_api_VK_NVX_device_generated_commands(X__) \

#define Xt_vk_all_api(X__) \
    X__(vkEnumeratePhysicalDeviceGroups) \
    X__(vkCmdCopyImageToBuffer) \
    X__(vkCmdSetDeviceMask) \
    X__(vkCmdBindVertexBuffers) \
    X__(vkDeviceWaitIdle) \
    X__(vkCmdResetQueryPool) \
    X__(vkCmdInsertDebugUtilsLabelEXT) \
    X__(vkDestroyFramebuffer) \
    X__(vkDestroyAccelerationStructureNV) \
    X__(vkGetSemaphoreFdKHR) \
    X__(vkGetBufferMemoryRequirements2) \
    X__(vkAllocateMemory) \
    X__(vkUnregisterObjectsNVX) \
    X__(vkGetAccelerationStructureHandleNV) \
    X__(vkGetMemoryFdPropertiesKHR) \
    X__(vkGetPipelineExecutablePropertiesKHR) \
    X__(vkCmdCopyAccelerationStructureNV) \
    X__(vkCmdSetViewportShadingRatePaletteNV) \
    X__(vkCmdSetLineStippleEXT) \
    X__(vkCreateDevice) \
    X__(vkDestroyEvent) \
    X__(vkResetDescriptorPool) \
    X__(vkEnumeratePhysicalDevices) \
    X__(vkGetPhysicalDeviceDisplayPlanePropertiesKHR) \
    X__(vkGetPipelineExecutableStatisticsKHR) \
    X__(vkQueueSetPerformanceConfigurationINTEL) \
    X__(vkDestroyPipeline) \
    X__(vkCmdSetLineWidth) \
    X__(vkCreateFramebuffer) \
    X__(vkResetQueryPoolEXT) \
    X__(vkAllocateCommandBuffers) \
    X__(vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX) \
    X__(vkCompileDeferredNV) \
    X__(vkCmdEndRenderPass) \
    X__(vkUpdateDescriptorSetWithTemplate) \
    X__(vkCmdBindShadingRateImageNV) \
    X__(vkCmdSetDeviceMaskKHR) \
    X__(vkSetEvent) \
    X__(vkGetPhysicalDeviceExternalBufferProperties) \
    X__(vkGetPhysicalDeviceSparseImageFormatProperties2KHR) \
    X__(vkGetPhysicalDeviceExternalFencePropertiesKHR) \
    X__(vkRegisterObjectsNVX) \
    X__(vkCmdDrawIndirectCountAMD) \
    X__(vkGetPhysicalDeviceDisplayProperties2KHR) \
    X__(vkGetBufferMemoryRequirements2KHR) \
    X__(vkCmdResetEvent) \
    X__(vkBindBufferMemory2KHR) \
    X__(vkCmdDebugMarkerBeginEXT) \
    X__(vkCmdFillBuffer) \
    X__(vkAcquireNextImageKHR) \
    X__(vkCmdEndDebugUtilsLabelEXT) \
    X__(vkCreateSwapchainKHR) \
    X__(vkBindImageMemory2) \
    X__(vkWaitForFences) \
    X__(vkCmdEndTransformFeedbackEXT) \
    X__(vkMergePipelineCaches) \
    X__(vkGetDescriptorSetLayoutSupportKHR) \
    X__(vkBindImageMemory) \
    X__(vkGetPhysicalDeviceFormatProperties2) \
    X__(vkCmdDrawMeshTasksIndirectCountNV) \
    X__(vkCmdCopyImage) \
    X__(vkGetPhysicalDeviceImageFormatProperties2) \
    X__(vkCmdSetDepthBounds) \
    X__(vkReleaseDisplayEXT) \
    X__(vkGetDeviceQueue2) \
    X__(vkDestroySampler) \
    X__(vkGetPhysicalDeviceMemoryProperties) \
    X__(vkGetEventStatus) \
    X__(vkEnumerateInstanceVersion) \
    X__(vkTrimCommandPoolKHR) \
    X__(vkCmdSetViewport) \
    X__(vkGetPhysicalDeviceQueueFamilyProperties2) \
    X__(vkCmdTraceRaysNV) \
    X__(vkGetDeviceGroupSurfacePresentModesKHR) \
    X__(vkGetPhysicalDeviceProperties) \
    X__(vkGetPhysicalDevicePresentRectanglesKHR) \
    X__(vkCmdUpdateBuffer) \
    X__(vkCreateRenderPass2KHR) \
    X__(vkDestroyDescriptorPool) \
    X__(vkCmdBeginQuery) \
    X__(vkCmdSetBlendConstants) \
    X__(vkCmdBeginQueryIndexedEXT) \
    X__(vkCmdSetCheckpointNV) \
    X__(vkCmdSetStencilCompareMask) \
    X__(vkGetValidationCacheDataEXT) \
    X__(vkCmdWriteAccelerationStructuresPropertiesNV) \
    X__(vkCmdDispatchBaseKHR) \
    X__(vkFlushMappedMemoryRanges) \
    X__(vkDestroySemaphore) \
    X__(vkGetAccelerationStructureMemoryRequirementsNV) \
    X__(vkInitializePerformanceApiINTEL) \
    X__(vkCmdSetEvent) \
    X__(vkGetFenceFdKHR) \
    X__(vkGetPhysicalDeviceDisplayPropertiesKHR) \
    X__(vkGetImageMemoryRequirements2) \
    X__(vkQueueBindSparse) \
    X__(vkGetPhysicalDeviceFormatProperties2KHR) \
    X__(vkGetMemoryFdKHR) \
    X__(vkCreateComputePipelines) \
    X__(vkGetDisplayPlaneSupportedDisplaysKHR) \
    X__(vkResetCommandPool) \
    X__(vkDestroyDescriptorUpdateTemplate) \
    X__(vkGetPhysicalDeviceSurfaceFormats2KHR) \
    X__(vkDestroyDescriptorSetLayout) \
    X__(vkDestroyBuffer) \
    X__(vkCmdEndRenderPass2KHR) \
    X__(vkCmdSetViewportWScalingNV) \
    X__(vkFreeCommandBuffers) \
    X__(vkDestroyCommandPool) \
    X__(vkCmdPushDescriptorSetWithTemplateKHR) \
    X__(vkAcquireNextImage2KHR) \
    X__(vkResetCommandBuffer) \
    X__(vkCreateSemaphore) \
    X__(vkQueuePresentKHR) \
    X__(vkCmdDrawIndirectByteCountEXT) \
    X__(vkDestroyPipelineLayout) \
    X__(vkDestroyValidationCacheEXT) \
    X__(vkGetPhysicalDeviceMemoryProperties2) \
    X__(vkCreateDescriptorUpdateTemplate) \
    X__(vkCmdCopyQueryPoolResults) \
    X__(vkCreateDisplayModeKHR) \
    X__(vkCmdDrawIndirectCountKHR) \
    X__(vkGetSwapchainStatusKHR) \
    X__(vkImportSemaphoreFdKHR) \
    X__(vkCmdNextSubpass) \
    X__(vkQueueInsertDebugUtilsLabelEXT) \
    X__(vkGetQueueCheckpointDataNV) \
    X__(vkDestroySurfaceKHR) \
    X__(vkGetRayTracingShaderGroupHandlesNV) \
    X__(vkGetPipelineCacheData) \
    X__(vkDestroyShaderModule) \
    X__(vkDebugMarkerSetObjectTagEXT) \
    X__(vkMergeValidationCachesEXT) \
    X__(vkDestroyIndirectCommandsLayoutNVX) \
    X__(vkCreatePipelineCache) \
    X__(vkQueueEndDebugUtilsLabelEXT) \
    X__(vkGetPhysicalDeviceQueueFamilyProperties2KHR) \
    X__(vkGetDeviceMemoryCommitment) \
    X__(vkGetDeviceQueue) \
    X__(vkEnumerateInstanceExtensionProperties) \
    X__(vkGetSwapchainCounterEXT) \
    X__(vkGetPhysicalDeviceExternalSemaphoreProperties) \
    X__(vkRegisterDeviceEventEXT) \
    X__(vkDestroyObjectTableNVX) \
    X__(vkGetRefreshCycleDurationGOOGLE) \
    X__(vkCmdSetExclusiveScissorNV) \
    X__(vkGetPhysicalDeviceSurfaceFormatsKHR) \
    X__(vkGetPhysicalDeviceSurfaceCapabilities2KHR) \
    X__(vkGetPhysicalDeviceQueueFamilyProperties) \
    X__(vkCreateDescriptorSetLayout) \
    X__(vkGetPhysicalDeviceSparseImageFormatProperties) \
    X__(vkGetDisplayPlaneCapabilitiesKHR) \
    X__(vkDebugReportMessageEXT) \
    X__(vkGetPhysicalDeviceExternalSemaphorePropertiesKHR) \
    X__(vkGetPhysicalDeviceProperties2) \
    X__(vkGetPhysicalDeviceExternalBufferPropertiesKHR) \
    X__(vkCmdDebugMarkerInsertEXT) \
    X__(vkGetPhysicalDeviceProperties2KHR) \
    X__(vkCmdClearColorImage) \
    X__(vkDestroySamplerYcbcrConversion) \
    X__(vkCmdWriteBufferMarkerAMD) \
    X__(vkCreateGraphicsPipelines) \
    X__(vkGetDeviceProcAddr) \
    X__(vkGetFenceStatus) \
    X__(vkGetPhysicalDeviceFeatures2KHR) \
    X__(vkCreateDescriptorPool) \
    X__(vkCmdSetStencilReference) \
    X__(vkReleasePerformanceConfigurationINTEL) \
    X__(vkImportFenceFdKHR) \
    X__(vkBindBufferMemory2) \
    X__(vkCmdDispatch) \
    X__(vkGetImageMemoryRequirements) \
    X__(vkEnumerateDeviceLayerProperties) \
    X__(vkCreateImageView) \
    X__(vkCmdSetPerformanceMarkerINTEL) \
    X__(vkGetShaderInfoAMD) \
    X__(vkEnumerateDeviceExtensionProperties) \
    X__(vkTrimCommandPool) \
    X__(vkCmdSetSampleLocationsEXT) \
    X__(vkDestroyBufferView) \
    X__(vkCmdDispatchIndirect) \
    X__(vkCmdDrawIndexedIndirectCountAMD) \
    X__(vkGetImageSparseMemoryRequirements2) \
    X__(vkCmdBeginRenderPass2KHR) \
    X__(vkCmdResolveImage) \
    X__(vkMapMemory) \
    X__(vkCmdExecuteCommands) \
    X__(vkFreeMemory) \
    X__(vkCreateValidationCacheEXT) \
    X__(vkGetPhysicalDeviceCooperativeMatrixPropertiesNV) \
    X__(vkGetPhysicalDeviceSurfaceSupportKHR) \
    X__(vkAcquirePerformanceConfigurationINTEL) \
    X__(vkEnumerateInstanceLayerProperties) \
    X__(vkCmdPushConstants) \
    X__(vkDestroyDebugReportCallbackEXT) \
    X__(vkGetPhysicalDeviceFeatures) \
    X__(vkCmdNextSubpass2KHR) \
    X__(vkCmdDispatchBase) \
    X__(vkGetBufferMemoryRequirements) \
    X__(vkGetDescriptorSetLayoutSupport) \
    X__(vkGetImageDrmFormatModifierPropertiesEXT) \
    X__(vkCmdWriteTimestamp) \
    X__(vkEndCommandBuffer) \
    X__(vkCmdBindPipeline) \
    X__(vkCreateRenderPass) \
    X__(vkCreateFence) \
    X__(vkDestroyInstance) \
    X__(vkGetQueryPoolResults) \
    X__(vkGetCalibratedTimestampsEXT) \
    X__(vkCmdBeginTransformFeedbackEXT) \
    X__(vkGetPhysicalDeviceExternalFenceProperties) \
    X__(vkSubmitDebugUtilsMessageEXT) \
    X__(vkCmdSetScissor) \
    X__(vkDestroyDescriptorUpdateTemplateKHR) \
    X__(vkCmdBeginDebugUtilsLabelEXT) \
    X__(vkCmdDebugMarkerEndEXT) \
    X__(vkCmdSetDepthBias) \
    X__(vkGetPhysicalDeviceSurfaceCapabilitiesKHR) \
    X__(vkResetFences) \
    X__(vkQueueSubmit) \
    X__(vkCmdBindTransformFeedbackBuffersEXT) \
    X__(vkCreateSamplerYcbcrConversionKHR) \
    X__(vkCreateObjectTableNVX) \
    X__(vkDestroySwapchainKHR) \
    X__(vkCmdBeginConditionalRenderingEXT) \
    X__(vkGetBufferDeviceAddressEXT) \
    X__(vkCmdCopyBuffer) \
    X__(vkGetPastPresentationTimingGOOGLE) \
    X__(vkCmdEndQuery) \
    X__(vkGetImageSubresourceLayout) \
    X__(vkGetInstanceProcAddr) \
    X__(vkCreateEvent) \
    X__(vkBindBufferMemory) \
    X__(vkCmdPipelineBarrier) \
    X__(vkDestroyQueryPool) \
    X__(vkGetDisplayPlaneCapabilities2KHR) \
    X__(vkCreateDebugReportCallbackEXT) \
    X__(vkGetImageSparseMemoryRequirements) \
    X__(vkCmdDrawMeshTasksNV) \
    X__(vkDestroyImage) \
    X__(vkQueueBeginDebugUtilsLabelEXT) \
    X__(vkCreateAccelerationStructureNV) \
    X__(vkCreatePipelineLayout) \
    X__(vkCreateShaderModule) \
    X__(vkCmdCopyBufferToImage) \
    X__(vkCmdBindDescriptorSets) \
    X__(vkGetPhysicalDeviceFeatures2) \
    X__(vkDestroyDebugUtilsMessengerEXT) \
    X__(vkGetPhysicalDeviceMultisamplePropertiesEXT) \
    X__(vkCreateDebugUtilsMessengerEXT) \
    X__(vkCreateDescriptorUpdateTemplateKHR) \
    X__(vkCmdBlitImage) \
    X__(vkBeginCommandBuffer) \
    X__(vkCreateIndirectCommandsLayoutNVX) \
    X__(vkCreateImage) \
    X__(vkCreateRayTracingPipelinesNV) \
    X__(vkCmdClearAttachments) \
    X__(vkCmdDraw) \
    X__(vkGetPhysicalDeviceMemoryProperties2KHR) \
    X__(vkCmdReserveSpaceForCommandsNVX) \
    X__(vkGetDisplayModePropertiesKHR) \
    X__(vkInvalidateMappedMemoryRanges) \
    X__(vkGetPhysicalDeviceFormatProperties) \
    X__(vkSetDebugUtilsObjectNameEXT) \
    X__(vkGetPhysicalDeviceImageFormatProperties) \
    X__(vkCreateSampler) \
    X__(vkSetHdrMetadataEXT) \
    X__(vkBindImageMemory2KHR) \
    X__(vkGetSwapchainImagesKHR) \
    X__(vkCreateSamplerYcbcrConversion) \
    X__(vkDestroyImageView) \
    X__(vkCmdBuildAccelerationStructureNV) \
    X__(vkCreateHeadlessSurfaceEXT) \
    X__(vkCreateDisplayPlaneSurfaceKHR) \
    X__(vkCreateSharedSwapchainsKHR) \
    X__(vkRegisterDisplayEventEXT) \
    X__(vkUnmapMemory) \
    X__(vkGetImageMemoryRequirements2KHR) \
    X__(vkDestroyFence) \
    X__(vkCmdClearDepthStencilImage) \
    X__(vkCmdSetStencilWriteMask) \
    X__(vkBindAccelerationStructureMemoryNV) \
    X__(vkUninitializePerformanceApiINTEL) \
    X__(vkGetPhysicalDeviceImageFormatProperties2KHR) \
    X__(vkCreateBuffer) \
    X__(vkGetPhysicalDeviceSparseImageFormatProperties2) \
    X__(vkCmdDrawIndirect) \
    X__(vkGetRenderAreaGranularity) \
    X__(vkCmdProcessCommandsNVX) \
    X__(vkGetPhysicalDeviceDisplayPlaneProperties2KHR) \
    X__(vkCreateInstance) \
    X__(vkGetPipelineExecutableInternalRepresentationsKHR) \
    X__(vkGetImageSparseMemoryRequirements2KHR) \
    X__(vkSetDebugUtilsObjectTagEXT) \
    X__(vkCmdSetPerformanceOverrideINTEL) \
    X__(vkGetDeviceGroupPeerMemoryFeaturesKHR) \
    X__(vkEnumeratePhysicalDeviceGroupsKHR) \
    X__(vkDestroyPipelineCache) \
    X__(vkGetMemoryHostPointerPropertiesEXT) \
    X__(vkGetImageViewHandleNVX) \
    X__(vkCmdBindIndexBuffer) \
    X__(vkGetDisplayModeProperties2KHR) \
    X__(vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV) \
    X__(vkDestroyDevice) \
    X__(vkCmdEndConditionalRenderingEXT) \
    X__(vkDestroyRenderPass) \
    X__(vkCreateQueryPool) \
    X__(vkCreateBufferView) \
    X__(vkGetPhysicalDeviceCalibrateableTimeDomainsEXT) \
    X__(vkDebugMarkerSetObjectNameEXT) \
    X__(vkCreateCommandPool) \
    X__(vkCmdDrawIndexedIndirect) \
    X__(vkCmdSetDiscardRectangleEXT) \
    X__(vkCmdSetCoarseSampleOrderNV) \
    X__(vkCmdDrawIndexed) \
    X__(vkCmdSetPerformanceStreamMarkerINTEL) \
    X__(vkGetPhysicalDeviceSurfacePresentModesKHR) \
    X__(vkDestroySamplerYcbcrConversionKHR) \
    X__(vkGetPhysicalDeviceExternalImageFormatPropertiesNV) \
    X__(vkGetPhysicalDeviceSurfaceCapabilities2EXT) \
    X__(vkDisplayPowerControlEXT) \
    X__(vkSetLocalDimmingAMD) \
    X__(vkCmdEndQueryIndexedEXT) \
    X__(vkCmdDrawIndexedIndirectCountKHR) \
    X__(vkUpdateDescriptorSets) \
    X__(vkCmdWaitEvents) \
    X__(vkQueueWaitIdle) \
    X__(vkGetPerformanceParameterINTEL) \
    X__(vkAllocateDescriptorSets) \
    X__(vkGetDeviceGroupPresentCapabilitiesKHR) \
    X__(vkUpdateDescriptorSetWithTemplateKHR) \
    X__(vkGetDeviceGroupPeerMemoryFeatures) \
    X__(vkFreeDescriptorSets) \
    X__(vkCmdDrawMeshTasksIndirectNV) \
    X__(vkCmdBeginRenderPass) \
    X__(vkResetEvent) \
    X__(vkCmdPushDescriptorSetKHR) \

# define Xt_names_table(X__) \
    X__(VkDiscardRectangleModeEXT, E_DiscardRectangleModeEXT) \
    X__(VkValidationFeatureDisableEXT, E_ValidationFeatureDisableEXT) \
    X__(VkSharingMode, E_SharingMode) \
    X__(VkPerformanceValueTypeINTEL, E_PerformanceValueTypeINTEL) \
    X__(VkColorSpaceKHR, E_ColorSpaceKHR) \
    X__(VkPhysicalDeviceType, E_PhysicalDeviceType) \
    X__(VkImageLayout, E_ImageLayout) \
    X__(VkValidationCacheHeaderVersionEXT, E_ValidationCacheHeaderVersionEXT) \
    X__(VkCoverageModulationModeNV, E_CoverageModulationModeNV) \
    X__(VkMemoryOverallocationBehaviorAMD, E_MemoryOverallocationBehaviorAMD) \
    X__(VkBlendOverlapEXT, E_BlendOverlapEXT) \
    X__(VkQueryPoolSamplingModeINTEL, E_QueryPoolSamplingModeINTEL) \
    X__(VkDebugReportObjectTypeEXT, E_DebugReportObjectTypeEXT) \
    X__(VkGeometryTypeNV, E_GeometryTypeNV) \
    X__(VkAccelerationStructureTypeNV, E_AccelerationStructureTypeNV) \
    X__(VkPerformanceConfigurationTypeINTEL, E_PerformanceConfigurationTypeINTEL) \
    X__(VkDriverIdKHR, E_DriverIdKHR) \
    X__(VkSamplerYcbcrModelConversion, E_SamplerYcbcrModelConversion) \
    X__(VkSubpassContents, E_SubpassContents) \
    X__(VkScopeNV, E_ScopeNV) \
    X__(VkSamplerMipmapMode, E_SamplerMipmapMode) \
    X__(VkPipelineExecutableStatisticFormatKHR, E_PipelineExecutableStatisticFormatKHR) \
    X__(VkShaderFloatControlsIndependenceKHR, E_ShaderFloatControlsIndependenceKHR) \
    X__(VkTimeDomainEXT, E_TimeDomainEXT) \
    X__(VkTessellationDomainOrigin, E_TessellationDomainOrigin) \
    X__(VkDescriptorType, E_DescriptorType) \
    X__(VkCoverageReductionModeNV, E_CoverageReductionModeNV) \
    X__(VkPerformanceParameterTypeINTEL, E_PerformanceParameterTypeINTEL) \
    X__(VkImageViewType, E_ImageViewType) \
    X__(VkShadingRatePaletteEntryNV, E_ShadingRatePaletteEntryNV) \
    X__(VkFilter, E_Filter) \
    X__(VkChromaLocation, E_ChromaLocation) \
    X__(VkPrimitiveTopology, E_PrimitiveTopology) \
    X__(VkDeviceEventTypeEXT, E_DeviceEventTypeEXT) \
    X__(VkAccelerationStructureMemoryRequirementsTypeNV, E_AccelerationStructureMemoryRequirementsTypeNV) \
    X__(VkPolygonMode, E_PolygonMode) \
    X__(VkObjectEntryTypeNVX, E_ObjectEntryTypeNVX) \
    X__(VkQueryType, E_QueryType) \
    X__(VkObjectType, E_ObjectType) \
    X__(VkPipelineBindPoint, E_PipelineBindPoint) \
    X__(VkComponentSwizzle, E_ComponentSwizzle) \
    X__(VkCommandBufferLevel, E_CommandBufferLevel) \
    X__(VkDisplayPowerStateEXT, E_DisplayPowerStateEXT) \
    X__(VkFormat, E_Format) \
    X__(VkVendorId, E_VendorId) \
    X__(VkRasterizationOrderAMD, E_RasterizationOrderAMD) \
    X__(VkFullScreenExclusiveEXT, E_FullScreenExclusiveEXT) \
    X__(VkSamplerAddressMode, E_SamplerAddressMode) \
    X__(VkImageType, E_ImageType) \
    X__(VkPipelineCacheHeaderVersion, E_PipelineCacheHeaderVersion) \
    X__(VkViewportCoordinateSwizzleNV, E_ViewportCoordinateSwizzleNV) \
    X__(VkIndirectCommandsTokenTypeNVX, E_IndirectCommandsTokenTypeNVX) \
    X__(VkShaderInfoTypeAMD, E_ShaderInfoTypeAMD) \
    X__(VkImageTiling, E_ImageTiling) \
    X__(VkStencilOp, E_StencilOp) \
    X__(VkValidationCheckEXT, E_ValidationCheckEXT) \
    X__(VkResult, E_Result) \
    X__(VkIndexType, E_IndexType) \
    X__(VkQueueGlobalPriorityEXT, E_QueueGlobalPriorityEXT) \
    X__(VkSamplerYcbcrRange, E_SamplerYcbcrRange) \
    X__(VkDescriptorUpdateTemplateType, E_DescriptorUpdateTemplateType) \
    X__(VkVertexInputRate, E_VertexInputRate) \
    X__(VkBlendFactor, E_BlendFactor) \
    X__(VkCompareOp, E_CompareOp) \
    X__(VkCoarseSampleOrderTypeNV, E_CoarseSampleOrderTypeNV) \
    X__(VkInternalAllocationType, E_InternalAllocationType) \
    X__(VkSamplerReductionModeEXT, E_SamplerReductionModeEXT) \
    X__(VkLineRasterizationModeEXT, E_LineRasterizationModeEXT) \
    X__(VkBlendOp, E_BlendOp) \
    X__(VkFrontFace, E_FrontFace) \
    X__(VkPerformanceOverrideTypeINTEL, E_PerformanceOverrideTypeINTEL) \
    X__(VkAttachmentLoadOp, E_AttachmentLoadOp) \
    X__(VkCopyAccelerationStructureModeNV, E_CopyAccelerationStructureModeNV) \
    X__(VkLogicOp, E_LogicOp) \
    X__(VkRayTracingShaderGroupTypeNV, E_RayTracingShaderGroupTypeNV) \
    X__(VkDisplayEventTypeEXT, E_DisplayEventTypeEXT) \
    X__(VkPresentModeKHR, E_PresentModeKHR) \
    X__(VkComponentTypeNV, E_ComponentTypeNV) \
    X__(VkDynamicState, E_DynamicState) \
    X__(VkValidationFeatureEnableEXT, E_ValidationFeatureEnableEXT) \
    X__(VkConservativeRasterizationModeEXT, E_ConservativeRasterizationModeEXT) \
    X__(VkAttachmentStoreOp, E_AttachmentStoreOp) \
    X__(VkSystemAllocationScope, E_SystemAllocationScope) \
    X__(VkPointClippingBehavior, E_PointClippingBehavior) \
    X__(VkBorderColor, E_BorderColor) \
    X__(VkStructureType, E_StructureType) \
    X__(VkMemoryHeapFlagBits, F_MemoryHeap) \
    X__(VkSwapchainCreateFlagBitsKHR, F_SwapchainCreateKHR) \
    X__(VkExternalSemaphoreHandleTypeFlagBits, F_ExternalSemaphoreHandleType) \
    X__(VkImageViewCreateFlagBits, F_ImageViewCreate) \
    X__(VkDeviceQueueCreateFlagBits, F_DeviceQueueCreate) \
    X__(VkFenceCreateFlagBits, F_FenceCreate) \
    X__(VkCommandPoolResetFlagBits, F_CommandPoolReset) \
    X__(VkExternalSemaphoreFeatureFlagBits, F_ExternalSemaphoreFeature) \
    X__(VkQueryControlFlagBits, F_QueryControl) \
    X__(VkCommandPoolCreateFlagBits, F_CommandPoolCreate) \
    X__(VkDebugReportFlagBitsEXT, F_DebugReportEXT) \
    X__(VkDeviceGroupPresentModeFlagBitsKHR, F_DeviceGroupPresentModeKHR) \
    X__(VkDisplayPlaneAlphaFlagBitsKHR, F_DisplayPlaneAlphaKHR) \
    X__(VkResolveModeFlagBitsKHR, F_ResolveModeKHR) \
    X__(VkCommandBufferResetFlagBits, F_CommandBufferReset) \
    X__(VkRenderPassCreateFlagBits, F_RenderPassCreate) \
    X__(VkQueryResultFlagBits, F_QueryResult) \
    X__(VkSwapchainImageUsageFlagBitsANDROID, F_SwapchainImageUsageANDROID) \
    X__(VkBuildAccelerationStructureFlagBitsNV, F_BuildAccelerationStructureNV) \
    X__(VkShaderModuleCreateFlagBits, F_ShaderModuleCreate) \
    X__(VkSamplerCreateFlagBits, F_SamplerCreate) \
    X__(VkGeometryFlagBitsNV, F_GeometryNV) \
    X__(VkCompositeAlphaFlagBitsKHR, F_CompositeAlphaKHR) \
    X__(VkAttachmentDescriptionFlagBits, F_AttachmentDescription) \
    X__(VkPeerMemoryFeatureFlagBits, F_PeerMemoryFeature) \
    X__(VkExternalMemoryHandleTypeFlagBits, F_ExternalMemoryHandleType) \
    X__(VkPipelineCompilerControlFlagBitsAMD, F_PipelineCompilerControlAMD) \
    X__(VkSparseImageFormatFlagBits, F_SparseImageFormat) \
    X__(VkBufferUsageFlagBits, F_BufferUsage) \
    X__(VkSampleCountFlagBits, F_SampleCount) \
    X__(VkQueueFlagBits, F_Queue) \
    X__(VkDebugUtilsMessageTypeFlagBitsEXT, F_DebugUtilsMessageTypeEXT) \
    X__(VkDescriptorPoolCreateFlagBits, F_DescriptorPoolCreate) \
    X__(VkImageCreateFlagBits, F_ImageCreate) \
    X__(VkIndirectCommandsLayoutUsageFlagBitsNVX, F_IndirectCommandsLayoutUsageNVX) \
    X__(VkExternalMemoryFeatureFlagBits, F_ExternalMemoryFeature) \
    X__(VkBufferCreateFlagBits, F_BufferCreate) \
    X__(VkShaderStageFlagBits, F_ShaderStage) \
    X__(VkColorComponentFlagBits, F_ColorComponent) \
    X__(VkPipelineCreateFlagBits, F_PipelineCreate) \
    X__(VkSubpassDescriptionFlagBits, F_SubpassDescription) \
    X__(VkFramebufferCreateFlagBits, F_FramebufferCreate) \
    X__(VkSparseMemoryBindFlagBits, F_SparseMemoryBind) \
    X__(VkFormatFeatureFlagBits, F_FormatFeature) \
    X__(VkQueryPipelineStatisticFlagBits, F_QueryPipelineStatistic) \
    X__(VkSurfaceTransformFlagBitsKHR, F_SurfaceTransformKHR) \
    X__(VkImageUsageFlagBits, F_ImageUsage) \
    X__(VkDebugUtilsMessageSeverityFlagBitsEXT, F_DebugUtilsMessageSeverityEXT) \
    X__(VkSurfaceCounterFlagBitsEXT, F_SurfaceCounterEXT) \
    X__(VkSubgroupFeatureFlagBits, F_SubgroupFeature) \
    X__(VkSemaphoreImportFlagBits, F_SemaphoreImport) \
    X__(VkMemoryAllocateFlagBits, F_MemoryAllocate) \
    X__(VkCullModeFlagBits, F_CullMode) \
    X__(VkStencilFaceFlagBits, F_StencilFace) \
    X__(VkAccessFlagBits, F_Access) \
    X__(VkExternalFenceFeatureFlagBits, F_ExternalFenceFeature) \
    X__(VkDescriptorBindingFlagBitsEXT, F_DescriptorBindingEXT) \
    X__(VkExternalMemoryHandleTypeFlagBitsNV, F_ExternalMemoryHandleTypeNV) \
    X__(VkExternalMemoryFeatureFlagBitsNV, F_ExternalMemoryFeatureNV) \
    X__(VkFenceImportFlagBits, F_FenceImport) \
    X__(VkImageAspectFlagBits, F_ImageAspect) \
    X__(VkDescriptorSetLayoutCreateFlagBits, F_DescriptorSetLayoutCreate) \
    X__(VkExternalFenceHandleTypeFlagBits, F_ExternalFenceHandleType) \
    X__(VkPipelineStageFlagBits, F_PipelineStage) \
    X__(VkPipelineShaderStageCreateFlagBits, F_PipelineShaderStageCreate) \
    X__(VkShaderCorePropertiesFlagBitsAMD, F_ShaderCorePropertiesAMD) \
    X__(VkDependencyFlagBits, F_Dependency) \
    X__(VkGeometryInstanceFlagBitsNV, F_GeometryInstanceNV) \
    X__(VkConditionalRenderingFlagBitsEXT, F_ConditionalRenderingEXT) \
    X__(VkMemoryPropertyFlagBits, F_MemoryProperty) \
    X__(VkPipelineCreationFeedbackFlagBitsEXT, F_PipelineCreationFeedbackEXT) \
    X__(VkCommandBufferUsageFlagBits, F_CommandBufferUsage) \
    X__(VkObjectEntryUsageFlagBitsNVX, F_ObjectEntryUsageNVX) \

# endif // __dawn_VK_XTABLE_HPP__