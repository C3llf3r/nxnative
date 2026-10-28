// Auto-generated NVN thunks and names for Windows host
#include <stdint.h>
#include <stddef.h>

typedef struct { void *fn; uint64_t count; } nvn_slot_t;
extern nvn_slot_t nvn_slot[537];

const char *nvn_names[537] = {
    "nvnDeviceBuilderSetDefaults",
    "nvnDeviceBuilderSetFlags",
    "nvnDeviceBuilderGetFlags",
    "nvnDeviceInitialize",
    "nvnDeviceFinalize",
    "nvnDeviceSetDebugLabel",
    "nvnDeviceGetProcAddress",
    "nvnDeviceGetInteger",
    "nvnDeviceGetCurrentTimestampInNanoseconds",
    "nvnDeviceSetIntermediateShaderCache",
    "nvnDeviceGetTextureHandle",
    "nvnDeviceGetTexelFetchHandle",
    "nvnDeviceGetImageHandle",
    "nvnDeviceInstallDebugCallback",
    "nvnDeviceGenerateDebugDomainId",
    "nvnDeviceSetWindowOriginMode",
    "nvnDeviceSetDepthMode",
    "nvnDeviceRegisterFastClearColor",
    "nvnDeviceRegisterFastClearColori",
    "nvnDeviceRegisterFastClearColorui",
    "nvnDeviceRegisterFastClearDepth",
    "nvnDeviceGetWindowOriginMode",
    "nvnDeviceGetDepthMode",
    "nvnDeviceGetTimestampInNanoseconds",
    "nvnDeviceApplyDeferredFinalizes",
    "nvnDeviceFinalizeCommandHandle",
    "nvnDeviceWalkDebugDatabase",
    "nvnDeviceGetSeparateTextureHandle",
    "nvnDeviceGetSeparateSamplerHandle",
    "nvnDeviceIsExternalDebuggerAttached",
    "nvnQueueGetError",
    "nvnQueueGetTotalCommandMemoryUsed",
    "nvnQueueGetTotalControlMemoryUsed",
    "nvnQueueGetTotalComputeMemoryUsed",
    "nvnQueueResetMemoryUsageCounts",
    "nvnQueueBuilderSetDevice",
    "nvnQueueBuilderSetDefaults",
    "nvnQueueBuilderSetFlags",
    "nvnQueueBuilderSetCommandMemorySize",
    "nvnQueueBuilderSetComputeMemorySize",
    "nvnQueueBuilderSetControlMemorySize",
    "nvnQueueBuilderGetQueueMemorySize",
    "nvnQueueBuilderSetQueueMemory",
    "nvnQueueBuilderSetCommandFlushThreshold",
    "nvnQueueBuilderSetQueuePriority",
    "nvnQueueBuilderGetQueuePriority",
    "nvnQueueBuilderGetDevice",
    "nvnQueueBuilderGetFlags",
    "nvnQueueBuilderGetCommandMemorySize",
    "nvnQueueBuilderGetComputeMemorySize",
    "nvnQueueBuilderGetControlMemorySize",
    "nvnQueueBuilderGetCommandFlushThreshold",
    "nvnQueueBuilderGetMemorySize",
    "nvnQueueBuilderGetMemory",
    "nvnQueueInitialize",
    "nvnQueueFinalize",
    "nvnQueueSetDebugLabel",
    "nvnQueueSubmitCommands",
    "nvnQueueFlush",
    "nvnQueueFinish",
    "nvnQueuePresentTexture",
    "nvnQueueAcquireTexture",
    "nvnWindowBuilderSetDevice",
    "nvnWindowBuilderSetDefaults",
    "nvnWindowBuilderSetNativeWindow",
    "nvnWindowBuilderSetTextures",
    "nvnWindowBuilderSetPresentInterval",
    "nvnWindowBuilderSetNumActiveTextures",
    "nvnWindowBuilderGetDevice",
    "nvnWindowBuilderGetNumTextures",
    "nvnWindowBuilderGetTexture",
    "nvnWindowBuilderGetNativeWindow",
    "nvnWindowBuilderGetPresentInterval",
    "nvnWindowBuilderGetNumActiveTextures",
    "nvnWindowInitialize",
    "nvnWindowFinalize",
    "nvnWindowSetDebugLabel",
    "nvnWindowAcquireTexture",
    "nvnWindowGetNativeWindow",
    "nvnWindowGetPresentInterval",
    "nvnWindowSetPresentInterval",
    "nvnWindowSetCrop",
    "nvnWindowGetCrop",
    "nvnWindowSetNumActiveTextures",
    "nvnWindowGetNumActiveTextures",
    "nvnWindowGetNumTextures",
    "nvnProgramInitialize",
    "nvnProgramFinalize",
    "nvnProgramSetDebugLabel",
    "nvnProgramSetShaders",
    "nvnProgramSetShadersExt",
    "nvnProgramSetSampleShading",
    "nvnMemoryPoolBuilderSetDevice",
    "nvnMemoryPoolBuilderSetDefaults",
    "nvnMemoryPoolBuilderSetStorage",
    "nvnMemoryPoolBuilderSetFlags",
    "nvnMemoryPoolBuilderGetDevice",
    "nvnMemoryPoolBuilderGetMemory",
    "nvnMemoryPoolBuilderGetSize",
    "nvnMemoryPoolBuilderGetFlags",
    "nvnMemoryPoolInitialize",
    "nvnMemoryPoolSetDebugLabel",
    "nvnMemoryPoolFinalize",
    "nvnMemoryPoolMap",
    "nvnMemoryPoolFlushMappedRange",
    "nvnMemoryPoolInvalidateMappedRange",
    "nvnMemoryPoolGetBufferAddress",
    "nvnMemoryPoolMapVirtual",
    "nvnMemoryPoolGetSize",
    "nvnMemoryPoolGetFlags",
    "nvnTexturePoolInitialize",
    "nvnTexturePoolSetDebugLabel",
    "nvnTexturePoolFinalize",
    "nvnTexturePoolRegisterTexture",
    "nvnTexturePoolRegisterImage",
    "nvnTexturePoolGetMemoryPool",
    "nvnTexturePoolGetMemoryOffset",
    "nvnTexturePoolGetSize",
    "nvnSamplerPoolInitialize",
    "nvnSamplerPoolSetDebugLabel",
    "nvnSamplerPoolFinalize",
    "nvnSamplerPoolRegisterSampler",
    "nvnSamplerPoolRegisterSamplerBuilder",
    "nvnSamplerPoolGetMemoryPool",
    "nvnSamplerPoolGetMemoryOffset",
    "nvnSamplerPoolGetSize",
    "nvnBufferBuilderSetDevice",
    "nvnBufferBuilderSetDefaults",
    "nvnBufferBuilderSetStorage",
    "nvnBufferBuilderGetDevice",
    "nvnBufferBuilderGetMemoryPool",
    "nvnBufferBuilderGetMemoryOffset",
    "nvnBufferBuilderGetSize",
    "nvnBufferInitialize",
    "nvnBufferSetDebugLabel",
    "nvnBufferFinalize",
    "nvnBufferMap",
    "nvnBufferGetAddress",
    "nvnBufferFlushMappedRange",
    "nvnBufferInvalidateMappedRange",
    "nvnBufferGetMemoryPool",
    "nvnBufferGetMemoryOffset",
    "nvnBufferGetSize",
    "nvnBufferGetDebugID",
    "nvnTextureBuilderSetDevice",
    "nvnTextureBuilderSetDefaults",
    "nvnTextureBuilderSetFlags",
    "nvnTextureBuilderSetTarget",
    "nvnTextureBuilderSetWidth",
    "nvnTextureBuilderSetHeight",
    "nvnTextureBuilderSetDepth",
    "nvnTextureBuilderSetSize1D",
    "nvnTextureBuilderSetSize2D",
    "nvnTextureBuilderSetSize3D",
    "nvnTextureBuilderSetLevels",
    "nvnTextureBuilderSetFormat",
    "nvnTextureBuilderSetSamples",
    "nvnTextureBuilderSetSwizzle",
    "nvnTextureBuilderSetDepthStencilMode",
    "nvnTextureBuilderGetStorageSize",
    "nvnTextureBuilderGetStorageAlignment",
    "nvnTextureBuilderSetStorage",
    "nvnTextureBuilderSetPackagedTextureData",
    "nvnTextureBuilderSetPackagedTextureLayout",
    "nvnTextureBuilderSetStride",
    "nvnTextureBuilderSetGLTextureName",
    "nvnTextureBuilderGetStorageClass",
    "nvnTextureBuilderGetDevice",
    "nvnTextureBuilderGetFlags",
    "nvnTextureBuilderGetTarget",
    "nvnTextureBuilderGetWidth",
    "nvnTextureBuilderGetHeight",
    "nvnTextureBuilderGetDepth",
    "nvnTextureBuilderGetLevels",
    "nvnTextureBuilderGetFormat",
    "nvnTextureBuilderGetSamples",
    "nvnTextureBuilderGetSwizzle",
    "nvnTextureBuilderGetDepthStencilMode",
    "nvnTextureBuilderGetPackagedTextureData",
    "nvnTextureBuilderGetPackagedTextureLayout",
    "nvnTextureBuilderGetStride",
    "nvnTextureBuilderGetSparseTileLayout",
    "nvnTextureBuilderGetGLTextureName",
    "nvnTextureBuilderGetZCullStorageSize",
    "nvnTextureBuilderGetMemoryPool",
    "nvnTextureBuilderGetMemoryOffset",
    "nvnTextureBuilderGetRawStorageClass",
    "nvnTextureViewSetDefaults",
    "nvnTextureViewSetLevels",
    "nvnTextureViewSetLayers",
    "nvnTextureViewSetFormat",
    "nvnTextureViewSetSwizzle",
    "nvnTextureViewSetDepthStencilMode",
    "nvnTextureViewSetTarget",
    "nvnTextureViewGetLevels",
    "nvnTextureViewGetLayers",
    "nvnTextureViewGetFormat",
    "nvnTextureViewGetSwizzle",
    "nvnTextureViewGetDepthStencilMode",
    "nvnTextureViewGetTarget",
    "nvnTextureViewCompare",
    "nvnTextureInitialize",
    "nvnTextureGetZCullStorageSize",
    "nvnTextureFinalize",
    "nvnTextureSetDebugLabel",
    "nvnTextureGetStorageClass",
    "nvnTextureGetViewOffset",
    "nvnTextureGetFlags",
    "nvnTextureGetTarget",
    "nvnTextureGetWidth",
    "nvnTextureGetHeight",
    "nvnTextureGetDepth",
    "nvnTextureGetLevels",
    "nvnTextureGetFormat",
    "nvnTextureGetSamples",
    "nvnTextureGetSwizzle",
    "nvnTextureGetDepthStencilMode",
    "nvnTextureGetStride",
    "nvnTextureGetTextureAddress",
    "nvnTextureGetSparseTileLayout",
    "nvnTextureWriteTexels",
    "nvnTextureWriteTexelsStrided",
    "nvnTextureReadTexels",
    "nvnTextureReadTexelsStrided",
    "nvnTextureFlushTexels",
    "nvnTextureInvalidateTexels",
    "nvnTextureGetMemoryPool",
    "nvnTextureGetMemoryOffset",
    "nvnTextureGetStorageSize",
    "nvnTextureCompare",
    "nvnTextureGetDebugID",
    "nvnTextureGetRawStorageClass",
    "nvnSamplerBuilderSetDevice",
    "nvnSamplerBuilderSetDefaults",
    "nvnSamplerBuilderSetMinMagFilter",
    "nvnSamplerBuilderSetWrapMode",
    "nvnSamplerBuilderSetLodClamp",
    "nvnSamplerBuilderSetLodBias",
    "nvnSamplerBuilderSetCompare",
    "nvnSamplerBuilderSetBorderColor",
    "nvnSamplerBuilderSetBorderColori",
    "nvnSamplerBuilderSetBorderColorui",
    "nvnSamplerBuilderSetMaxAnisotropy",
    "nvnSamplerBuilderSetReductionFilter",
    "nvnSamplerBuilderSetLodSnap",
    "nvnSamplerBuilderGetDevice",
    "nvnSamplerBuilderGetMinMagFilter",
    "nvnSamplerBuilderGetWrapMode",
    "nvnSamplerBuilderGetLodClamp",
    "nvnSamplerBuilderGetLodBias",
    "nvnSamplerBuilderGetCompare",
    "nvnSamplerBuilderGetBorderColor",
    "nvnSamplerBuilderGetBorderColori",
    "nvnSamplerBuilderGetBorderColorui",
    "nvnSamplerBuilderGetMaxAnisotropy",
    "nvnSamplerBuilderGetReductionFilter",
    "nvnSamplerBuilderGetLodSnap",
    "nvnSamplerInitialize",
    "nvnSamplerFinalize",
    "nvnSamplerSetDebugLabel",
    "nvnSamplerGetMinMagFilter",
    "nvnSamplerGetWrapMode",
    "nvnSamplerGetLodClamp",
    "nvnSamplerGetLodBias",
    "nvnSamplerGetCompare",
    "nvnSamplerGetBorderColor",
    "nvnSamplerGetBorderColori",
    "nvnSamplerGetBorderColorui",
    "nvnSamplerGetMaxAnisotropy",
    "nvnSamplerGetReductionFilter",
    "nvnSamplerCompare",
    "nvnSamplerGetDebugID",
    "nvnBlendStateSetDefaults",
    "nvnBlendStateSetBlendTarget",
    "nvnBlendStateSetBlendFunc",
    "nvnBlendStateSetBlendEquation",
    "nvnBlendStateSetAdvancedMode",
    "nvnBlendStateSetAdvancedOverlap",
    "nvnBlendStateSetAdvancedPremultipliedSrc",
    "nvnBlendStateSetAdvancedNormalizedDst",
    "nvnBlendStateGetBlendTarget",
    "nvnBlendStateGetBlendFunc",
    "nvnBlendStateGetBlendEquation",
    "nvnBlendStateGetAdvancedMode",
    "nvnBlendStateGetAdvancedOverlap",
    "nvnBlendStateGetAdvancedPremultipliedSrc",
    "nvnBlendStateGetAdvancedNormalizedDst",
    "nvnColorStateSetDefaults",
    "nvnColorStateSetBlendEnable",
    "nvnColorStateSetLogicOp",
    "nvnColorStateSetAlphaTest",
    "nvnColorStateGetBlendEnable",
    "nvnColorStateGetLogicOp",
    "nvnColorStateGetAlphaTest",
    "nvnChannelMaskStateSetDefaults",
    "nvnChannelMaskStateSetChannelMask",
    "nvnChannelMaskStateGetChannelMask",
    "nvnMultisampleStateSetDefaults",
    "nvnMultisampleStateSetMultisampleEnable",
    "nvnMultisampleStateSetSamples",
    "nvnMultisampleStateSetAlphaToCoverageEnable",
    "nvnMultisampleStateSetAlphaToCoverageDither",
    "nvnMultisampleStateGetMultisampleEnable",
    "nvnMultisampleStateGetSamples",
    "nvnMultisampleStateGetAlphaToCoverageEnable",
    "nvnMultisampleStateGetAlphaToCoverageDither",
    "nvnMultisampleStateSetRasterSamples",
    "nvnMultisampleStateGetRasterSamples",
    "nvnMultisampleStateSetCoverageModulationMode",
    "nvnMultisampleStateGetCoverageModulationMode",
    "nvnMultisampleStateSetCoverageToColorEnable",
    "nvnMultisampleStateGetCoverageToColorEnable",
    "nvnMultisampleStateSetCoverageToColorOutput",
    "nvnMultisampleStateGetCoverageToColorOutput",
    "nvnMultisampleStateSetSampleLocationsEnable",
    "nvnMultisampleStateGetSampleLocationsEnable",
    "nvnMultisampleStateGetSampleLocationsGrid",
    "nvnMultisampleStateSetSampleLocationsGridEnable",
    "nvnMultisampleStateGetSampleLocationsGridEnable",
    "nvnMultisampleStateSetSampleLocations",
    "nvnPolygonStateSetDefaults",
    "nvnPolygonStateSetCullFace",
    "nvnPolygonStateSetFrontFace",
    "nvnPolygonStateSetPolygonMode",
    "nvnPolygonStateSetPolygonOffsetEnables",
    "nvnPolygonStateGetCullFace",
    "nvnPolygonStateGetFrontFace",
    "nvnPolygonStateGetPolygonMode",
    "nvnPolygonStateGetPolygonOffsetEnables",
    "nvnDepthStencilStateSetDefaults",
    "nvnDepthStencilStateSetDepthTestEnable",
    "nvnDepthStencilStateSetDepthWriteEnable",
    "nvnDepthStencilStateSetDepthFunc",
    "nvnDepthStencilStateSetStencilTestEnable",
    "nvnDepthStencilStateSetStencilFunc",
    "nvnDepthStencilStateSetStencilOp",
    "nvnDepthStencilStateGetDepthTestEnable",
    "nvnDepthStencilStateGetDepthWriteEnable",
    "nvnDepthStencilStateGetDepthFunc",
    "nvnDepthStencilStateGetStencilTestEnable",
    "nvnDepthStencilStateGetStencilFunc",
    "nvnDepthStencilStateGetStencilOp",
    "nvnVertexAttribStateSetDefaults",
    "nvnVertexAttribStateSetFormat",
    "nvnVertexAttribStateSetStreamIndex",
    "nvnVertexAttribStateGetFormat",
    "nvnVertexAttribStateGetStreamIndex",
    "nvnVertexStreamStateSetDefaults",
    "nvnVertexStreamStateSetStride",
    "nvnVertexStreamStateSetDivisor",
    "nvnVertexStreamStateGetStride",
    "nvnVertexStreamStateGetDivisor",
    "nvnCommandBufferInitialize",
    "nvnCommandBufferFinalize",
    "nvnCommandBufferSetDebugLabel",
    "nvnCommandBufferSetMemoryCallback",
    "nvnCommandBufferSetMemoryCallbackData",
    "nvnCommandBufferSetCommandMemoryCallbackEnabled",
    "nvnCommandBufferAddCommandMemory",
    "nvnCommandBufferAddControlMemory",
    "nvnCommandBufferGetCommandMemorySize",
    "nvnCommandBufferGetCommandMemoryUsed",
    "nvnCommandBufferGetCommandMemoryFree",
    "nvnCommandBufferGetControlMemorySize",
    "nvnCommandBufferGetControlMemoryUsed",
    "nvnCommandBufferGetControlMemoryFree",
    "nvnCommandBufferBeginRecording",
    "nvnCommandBufferEndRecording",
    "nvnCommandBufferCallCommands",
    "nvnCommandBufferCopyCommands",
    "nvnCommandBufferBindBlendState",
    "nvnCommandBufferBindChannelMaskState",
    "nvnCommandBufferBindColorState",
    "nvnCommandBufferBindMultisampleState",
    "nvnCommandBufferBindPolygonState",
    "nvnCommandBufferBindDepthStencilState",
    "nvnCommandBufferBindVertexAttribState",
    "nvnCommandBufferBindVertexStreamState",
    "nvnCommandBufferBindProgram",
    "nvnCommandBufferBindVertexBuffer",
    "nvnCommandBufferBindVertexBuffers",
    "nvnCommandBufferBindUniformBuffer",
    "nvnCommandBufferBindUniformBuffers",
    "nvnCommandBufferBindTransformFeedbackBuffer",
    "nvnCommandBufferBindTransformFeedbackBuffers",
    "nvnCommandBufferBindStorageBuffer",
    "nvnCommandBufferBindStorageBuffers",
    "nvnCommandBufferBindTexture",
    "nvnCommandBufferBindTextures",
    "nvnCommandBufferBindImage",
    "nvnCommandBufferBindImages",
    "nvnCommandBufferSetPatchSize",
    "nvnCommandBufferSetInnerTessellationLevels",
    "nvnCommandBufferSetOuterTessellationLevels",
    "nvnCommandBufferSetPrimitiveRestart",
    "nvnCommandBufferBeginTransformFeedback",
    "nvnCommandBufferEndTransformFeedback",
    "nvnCommandBufferPauseTransformFeedback",
    "nvnCommandBufferResumeTransformFeedback",
    "nvnCommandBufferDrawTransformFeedback",
    "nvnCommandBufferDrawArrays",
    "nvnCommandBufferDrawElements",
    "nvnCommandBufferDrawElementsBaseVertex",
    "nvnCommandBufferDrawArraysInstanced",
    "nvnCommandBufferDrawElementsInstanced",
    "nvnCommandBufferDrawArraysIndirect",
    "nvnCommandBufferDrawElementsIndirect",
    "nvnCommandBufferMultiDrawArraysIndirectCount",
    "nvnCommandBufferMultiDrawElementsIndirectCount",
    "nvnCommandBufferClearColor",
    "nvnCommandBufferClearColori",
    "nvnCommandBufferClearColorui",
    "nvnCommandBufferClearDepthStencil",
    "nvnCommandBufferDispatchCompute",
    "nvnCommandBufferDispatchComputeIndirect",
    "nvnCommandBufferSetViewport",
    "nvnCommandBufferSetViewports",
    "nvnCommandBufferSetViewportSwizzles",
    "nvnCommandBufferSetScissor",
    "nvnCommandBufferSetScissors",
    "nvnCommandBufferSetDepthRange",
    "nvnCommandBufferSetDepthBounds",
    "nvnCommandBufferSetDepthRanges",
    "nvnCommandBufferSetTiledCacheAction",
    "nvnCommandBufferSetTiledCacheTileSize",
    "nvnCommandBufferBindSeparateTexture",
    "nvnCommandBufferBindSeparateSampler",
    "nvnCommandBufferBindSeparateTextures",
    "nvnCommandBufferBindSeparateSamplers",
    "nvnCommandBufferSetStencilValueMask",
    "nvnCommandBufferSetStencilMask",
    "nvnCommandBufferSetStencilRef",
    "nvnCommandBufferSetBlendColor",
    "nvnCommandBufferSetPointSize",
    "nvnCommandBufferSetLineWidth",
    "nvnCommandBufferSetPolygonOffsetClamp",
    "nvnCommandBufferSetAlphaRef",
    "nvnCommandBufferSetSampleMask",
    "nvnCommandBufferSetRasterizerDiscard",
    "nvnCommandBufferSetDepthClamp",
    "nvnCommandBufferSetConservativeRasterEnable",
    "nvnCommandBufferSetConservativeRasterDilate",
    "nvnCommandBufferSetSubpixelPrecisionBias",
    "nvnCommandBufferCopyBufferToTexture",
    "nvnCommandBufferCopyTextureToBuffer",
    "nvnCommandBufferCopyTextureToTexture",
    "nvnCommandBufferCopyBufferToBuffer",
    "nvnCommandBufferClearBuffer",
    "nvnCommandBufferClearTexture",
    "nvnCommandBufferClearTexturei",
    "nvnCommandBufferClearTextureui",
    "nvnCommandBufferUpdateUniformBuffer",
    "nvnCommandBufferReportCounter",
    "nvnCommandBufferResetCounter",
    "nvnCommandBufferReportValue",
    "nvnCommandBufferSetRenderEnable",
    "nvnCommandBufferSetRenderEnableConditional",
    "nvnCommandBufferSetRenderTargets",
    "nvnCommandBufferDiscardColor",
    "nvnCommandBufferDiscardDepthStencil",
    "nvnCommandBufferDownsample",
    "nvnCommandBufferTiledDownsample",
    "nvnCommandBufferDownsampleTextureView",
    "nvnCommandBufferTiledDownsampleTextureView",
    "nvnCommandBufferBarrier",
    "nvnCommandBufferWaitSync",
    "nvnCommandBufferFenceSync",
    "nvnCommandBufferSetTexturePool",
    "nvnCommandBufferSetSamplerPool",
    "nvnCommandBufferSetShaderScratchMemory",
    "nvnCommandBufferSaveZCullData",
    "nvnCommandBufferRestoreZCullData",
    "nvnCommandBufferSetCopyRowStride",
    "nvnCommandBufferSetCopyImageStride",
    "nvnCommandBufferGetCopyRowStride",
    "nvnCommandBufferGetCopyImageStride",
    "nvnCommandBufferDrawTexture",
    "nvnProgramSetSubroutineLinkage",
    "nvnCommandBufferSetProgramSubroutines",
    "nvnCommandBufferBindCoverageModulationTable",
    "nvnCommandBufferResolveDepthBuffer",
    "nvnCommandBufferSetColorReductionEnable",
    "nvnCommandBufferSetColorReductionThresholds",
    "nvnCommandBufferPushDebugGroupStatic",
    "nvnCommandBufferPushDebugGroupDynamic",
    "nvnCommandBufferPushDebugGroup",
    "nvnCommandBufferPopDebugGroup",
    "nvnCommandBufferPopDebugGroupId",
    "nvnCommandBufferInsertDebugMarkerStatic",
    "nvnCommandBufferInsertDebugMarkerDynamic",
    "nvnCommandBufferInsertDebugMarker",
    "nvnCommandBufferGetMemoryCallback",
    "nvnCommandBufferGetMemoryCallbackData",
    "nvnCommandBufferIsRecording",
    "nvnSyncInitialize",
    "nvnSyncFinalize",
    "nvnSyncSetDebugLabel",
    "nvnQueueFenceSync",
    "nvnSyncWait",
    "nvnQueueWaitSync",
    "nvnSyncInitializeFromFencedGLSync",
    "nvnSyncCreateGLSync",
    "nvnEventBuilderSetDefaults",
    "nvnEventBuilderSetStorage",
    "nvnEventBuilderGetStorage",
    "nvnEventBuilderGetMemoryPool",
    "nvnEventBuilderGetMemoryOffset",
    "nvnEventInitialize",
    "nvnEventFinalize",
    "nvnEventGetValue",
    "nvnEventSignal",
    "nvnEventGetMemoryPool",
    "nvnEventGetMemoryOffset",
    "nvnCommandBufferWaitEvent",
    "nvnCommandBufferSignalEvent",
    "nvnCommandBufferSetStencilCullCriteria",
    "nvnCommandBufferInsertCheckpointStatic",
    "nvnCommandBufferInsertCheckpointDynamic",
    "nvnDeviceSetAutomaticCheckpointsEnable",
    "nvnDeviceSetAutomaticCheckpointsSamplingInterval",
    "nvnDeviceSetAutomaticCheckpointsByDebugGroup",
    "nvnDeviceSetCheckpointCallStacksEnable",
    "nvnDeviceSetCheckpointMaxCallStacksDepth",
    "nvnCommandBufferBindImagesDeferred",
    "nvnCommandBufferBindSeparateSamplersDeferred",
    "nvnCommandBufferBindSeparateTexturesDeferred",
    "nvnCommandBufferBindStorageBuffersDeferred",
    "nvnCommandBufferBindTexturesDeferred",
    "nvnCommandBufferBindUniformBuffersDeferred",
    "nvnCommandBufferOverrideSubtileSize",
    "nvnCommandBufferSetControlMemoryCallbackEnabled",
    "nvnCommandBufferSetProvokingVertexMode",
    "nvnCommandBufferSetZCullZF32CompressionEnable",
    "nvnDeviceSetAutomaticCheckpointsMask",
    "nvnProgramGetSubtileSize",
    "nvnTextureBuilderGetViewOffset",
    "nvnSetExternalDebuggerEnabledNVX",
};

static void *thunk_0(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[0].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[0].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_1(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[1].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[1].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_2(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[2].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[2].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_3(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[3].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[3].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_4(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[4].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[4].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_5(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[5].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[5].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_6(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[6].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[6].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_7(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[7].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[7].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_8(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[8].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[8].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_9(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[9].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[9].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_10(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[10].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[10].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_11(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[11].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[11].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_12(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[12].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[12].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_13(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[13].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[13].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_14(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[14].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[14].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_15(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[15].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[15].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_16(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[16].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[16].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_17(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[17].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[17].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_18(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[18].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[18].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_19(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[19].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[19].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_20(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[20].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[20].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_21(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[21].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[21].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_22(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[22].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[22].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_23(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[23].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[23].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_24(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[24].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[24].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_25(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[25].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[25].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_26(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[26].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[26].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_27(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[27].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[27].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_28(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[28].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[28].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_29(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[29].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[29].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_30(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[30].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[30].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_31(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[31].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[31].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_32(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[32].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[32].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_33(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[33].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[33].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_34(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[34].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[34].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_35(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[35].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[35].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_36(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[36].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[36].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_37(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[37].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[37].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_38(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[38].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[38].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_39(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[39].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[39].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_40(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[40].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[40].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_41(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[41].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[41].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_42(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[42].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[42].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_43(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[43].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[43].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_44(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[44].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[44].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_45(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[45].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[45].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_46(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[46].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[46].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_47(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[47].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[47].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_48(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[48].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[48].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_49(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[49].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[49].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_50(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[50].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[50].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_51(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[51].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[51].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_52(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[52].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[52].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_53(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[53].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[53].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_54(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[54].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[54].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_55(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[55].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[55].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_56(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[56].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[56].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_57(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[57].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[57].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_58(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[58].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[58].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_59(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[59].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[59].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_60(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[60].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[60].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_61(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[61].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[61].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_62(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[62].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[62].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_63(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[63].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[63].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_64(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[64].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[64].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_65(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[65].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[65].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_66(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[66].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[66].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_67(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[67].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[67].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_68(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[68].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[68].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_69(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[69].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[69].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_70(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[70].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[70].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_71(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[71].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[71].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_72(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[72].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[72].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_73(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[73].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[73].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_74(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[74].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[74].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_75(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[75].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[75].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_76(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[76].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[76].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_77(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[77].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[77].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_78(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[78].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[78].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_79(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[79].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[79].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_80(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[80].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[80].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_81(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[81].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[81].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_82(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[82].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[82].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_83(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[83].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[83].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_84(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[84].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[84].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_85(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[85].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[85].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_86(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[86].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[86].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_87(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[87].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[87].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_88(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[88].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[88].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_89(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[89].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[89].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_90(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[90].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[90].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_91(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[91].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[91].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_92(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[92].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[92].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_93(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[93].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[93].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_94(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[94].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[94].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_95(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[95].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[95].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_96(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[96].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[96].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_97(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[97].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[97].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_98(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[98].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[98].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_99(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[99].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[99].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_100(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[100].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[100].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_101(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[101].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[101].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_102(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[102].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[102].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_103(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[103].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[103].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_104(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[104].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[104].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_105(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[105].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[105].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_106(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[106].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[106].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_107(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[107].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[107].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_108(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[108].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[108].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_109(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[109].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[109].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_110(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[110].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[110].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_111(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[111].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[111].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_112(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[112].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[112].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_113(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[113].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[113].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_114(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[114].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[114].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_115(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[115].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[115].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_116(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[116].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[116].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_117(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[117].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[117].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_118(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[118].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[118].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_119(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[119].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[119].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_120(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[120].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[120].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_121(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[121].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[121].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_122(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[122].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[122].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_123(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[123].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[123].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_124(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[124].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[124].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_125(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[125].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[125].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_126(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[126].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[126].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_127(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[127].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[127].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_128(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[128].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[128].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_129(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[129].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[129].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_130(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[130].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[130].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_131(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[131].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[131].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_132(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[132].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[132].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_133(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[133].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[133].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_134(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[134].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[134].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_135(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[135].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[135].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_136(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[136].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[136].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_137(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[137].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[137].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_138(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[138].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[138].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_139(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[139].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[139].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_140(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[140].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[140].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_141(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[141].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[141].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_142(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[142].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[142].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_143(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[143].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[143].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_144(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[144].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[144].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_145(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[145].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[145].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_146(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[146].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[146].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_147(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[147].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[147].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_148(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[148].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[148].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_149(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[149].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[149].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_150(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[150].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[150].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_151(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[151].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[151].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_152(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[152].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[152].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_153(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[153].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[153].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_154(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[154].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[154].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_155(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[155].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[155].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_156(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[156].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[156].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_157(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[157].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[157].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_158(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[158].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[158].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_159(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[159].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[159].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_160(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[160].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[160].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_161(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[161].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[161].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_162(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[162].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[162].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_163(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[163].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[163].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_164(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[164].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[164].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_165(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[165].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[165].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_166(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[166].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[166].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_167(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[167].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[167].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_168(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[168].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[168].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_169(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[169].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[169].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_170(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[170].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[170].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_171(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[171].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[171].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_172(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[172].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[172].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_173(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[173].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[173].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_174(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[174].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[174].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_175(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[175].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[175].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_176(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[176].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[176].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_177(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[177].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[177].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_178(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[178].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[178].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_179(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[179].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[179].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_180(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[180].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[180].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_181(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[181].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[181].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_182(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[182].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[182].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_183(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[183].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[183].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_184(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[184].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[184].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_185(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[185].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[185].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_186(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[186].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[186].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_187(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[187].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[187].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_188(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[188].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[188].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_189(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[189].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[189].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_190(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[190].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[190].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_191(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[191].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[191].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_192(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[192].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[192].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_193(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[193].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[193].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_194(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[194].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[194].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_195(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[195].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[195].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_196(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[196].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[196].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_197(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[197].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[197].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_198(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[198].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[198].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_199(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[199].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[199].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_200(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[200].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[200].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_201(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[201].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[201].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_202(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[202].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[202].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_203(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[203].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[203].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_204(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[204].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[204].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_205(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[205].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[205].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_206(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[206].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[206].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_207(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[207].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[207].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_208(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[208].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[208].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_209(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[209].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[209].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_210(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[210].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[210].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_211(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[211].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[211].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_212(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[212].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[212].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_213(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[213].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[213].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_214(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[214].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[214].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_215(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[215].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[215].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_216(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[216].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[216].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_217(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[217].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[217].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_218(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[218].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[218].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_219(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[219].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[219].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_220(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[220].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[220].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_221(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[221].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[221].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_222(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[222].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[222].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_223(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[223].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[223].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_224(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[224].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[224].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_225(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[225].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[225].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_226(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[226].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[226].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_227(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[227].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[227].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_228(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[228].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[228].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_229(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[229].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[229].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_230(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[230].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[230].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_231(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[231].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[231].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_232(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[232].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[232].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_233(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[233].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[233].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_234(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[234].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[234].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_235(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[235].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[235].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_236(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[236].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[236].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_237(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[237].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[237].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_238(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[238].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[238].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_239(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[239].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[239].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_240(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[240].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[240].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_241(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[241].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[241].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_242(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[242].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[242].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_243(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[243].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[243].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_244(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[244].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[244].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_245(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[245].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[245].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_246(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[246].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[246].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_247(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[247].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[247].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_248(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[248].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[248].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_249(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[249].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[249].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_250(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[250].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[250].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_251(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[251].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[251].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_252(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[252].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[252].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_253(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[253].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[253].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_254(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[254].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[254].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_255(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[255].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[255].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_256(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[256].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[256].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_257(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[257].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[257].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_258(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[258].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[258].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_259(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[259].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[259].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_260(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[260].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[260].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_261(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[261].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[261].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_262(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[262].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[262].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_263(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[263].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[263].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_264(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[264].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[264].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_265(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[265].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[265].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_266(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[266].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[266].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_267(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[267].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[267].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_268(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[268].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[268].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_269(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[269].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[269].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_270(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[270].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[270].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_271(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[271].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[271].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_272(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[272].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[272].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_273(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[273].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[273].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_274(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[274].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[274].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_275(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[275].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[275].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_276(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[276].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[276].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_277(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[277].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[277].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_278(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[278].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[278].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_279(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[279].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[279].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_280(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[280].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[280].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_281(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[281].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[281].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_282(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[282].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[282].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_283(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[283].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[283].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_284(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[284].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[284].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_285(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[285].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[285].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_286(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[286].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[286].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_287(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[287].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[287].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_288(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[288].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[288].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_289(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[289].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[289].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_290(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[290].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[290].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_291(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[291].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[291].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_292(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[292].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[292].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_293(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[293].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[293].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_294(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[294].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[294].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_295(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[295].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[295].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_296(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[296].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[296].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_297(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[297].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[297].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_298(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[298].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[298].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_299(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[299].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[299].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_300(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[300].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[300].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_301(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[301].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[301].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_302(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[302].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[302].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_303(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[303].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[303].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_304(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[304].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[304].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_305(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[305].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[305].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_306(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[306].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[306].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_307(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[307].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[307].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_308(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[308].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[308].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_309(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[309].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[309].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_310(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[310].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[310].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_311(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[311].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[311].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_312(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[312].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[312].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_313(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[313].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[313].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_314(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[314].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[314].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_315(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[315].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[315].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_316(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[316].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[316].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_317(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[317].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[317].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_318(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[318].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[318].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_319(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[319].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[319].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_320(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[320].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[320].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_321(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[321].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[321].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_322(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[322].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[322].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_323(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[323].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[323].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_324(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[324].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[324].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_325(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[325].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[325].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_326(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[326].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[326].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_327(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[327].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[327].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_328(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[328].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[328].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_329(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[329].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[329].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_330(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[330].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[330].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_331(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[331].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[331].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_332(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[332].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[332].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_333(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[333].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[333].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_334(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[334].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[334].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_335(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[335].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[335].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_336(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[336].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[336].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_337(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[337].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[337].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_338(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[338].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[338].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_339(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[339].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[339].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_340(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[340].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[340].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_341(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[341].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[341].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_342(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[342].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[342].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_343(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[343].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[343].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_344(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[344].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[344].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_345(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[345].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[345].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_346(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[346].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[346].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_347(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[347].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[347].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_348(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[348].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[348].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_349(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[349].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[349].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_350(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[350].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[350].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_351(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[351].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[351].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_352(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[352].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[352].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_353(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[353].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[353].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_354(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[354].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[354].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_355(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[355].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[355].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_356(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[356].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[356].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_357(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[357].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[357].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_358(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[358].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[358].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_359(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[359].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[359].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_360(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[360].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[360].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_361(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[361].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[361].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_362(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[362].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[362].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_363(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[363].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[363].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_364(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[364].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[364].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_365(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[365].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[365].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_366(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[366].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[366].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_367(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[367].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[367].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_368(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[368].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[368].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_369(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[369].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[369].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_370(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[370].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[370].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_371(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[371].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[371].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_372(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[372].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[372].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_373(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[373].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[373].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_374(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[374].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[374].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_375(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[375].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[375].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_376(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[376].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[376].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_377(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[377].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[377].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_378(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[378].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[378].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_379(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[379].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[379].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_380(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[380].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[380].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_381(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[381].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[381].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_382(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[382].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[382].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_383(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[383].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[383].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_384(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[384].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[384].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_385(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[385].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[385].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_386(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[386].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[386].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_387(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[387].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[387].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_388(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[388].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[388].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_389(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[389].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[389].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_390(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[390].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[390].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_391(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[391].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[391].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_392(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[392].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[392].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_393(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[393].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[393].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_394(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[394].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[394].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_395(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[395].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[395].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_396(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[396].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[396].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_397(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[397].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[397].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_398(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[398].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[398].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_399(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[399].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[399].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_400(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[400].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[400].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_401(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[401].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[401].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_402(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[402].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[402].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_403(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[403].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[403].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_404(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[404].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[404].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_405(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[405].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[405].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_406(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[406].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[406].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_407(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[407].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[407].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_408(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[408].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[408].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_409(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[409].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[409].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_410(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[410].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[410].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_411(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[411].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[411].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_412(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[412].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[412].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_413(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[413].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[413].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_414(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[414].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[414].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_415(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[415].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[415].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_416(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[416].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[416].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_417(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[417].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[417].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_418(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[418].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[418].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_419(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[419].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[419].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_420(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[420].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[420].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_421(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[421].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[421].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_422(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[422].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[422].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_423(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[423].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[423].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_424(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[424].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[424].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_425(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[425].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[425].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_426(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[426].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[426].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_427(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[427].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[427].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_428(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[428].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[428].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_429(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[429].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[429].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_430(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[430].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[430].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_431(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[431].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[431].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_432(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[432].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[432].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_433(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[433].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[433].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_434(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[434].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[434].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_435(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[435].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[435].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_436(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[436].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[436].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_437(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[437].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[437].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_438(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[438].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[438].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_439(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[439].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[439].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_440(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[440].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[440].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_441(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[441].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[441].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_442(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[442].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[442].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_443(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[443].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[443].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_444(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[444].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[444].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_445(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[445].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[445].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_446(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[446].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[446].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_447(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[447].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[447].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_448(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[448].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[448].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_449(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[449].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[449].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_450(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[450].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[450].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_451(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[451].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[451].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_452(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[452].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[452].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_453(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[453].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[453].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_454(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[454].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[454].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_455(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[455].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[455].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_456(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[456].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[456].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_457(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[457].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[457].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_458(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[458].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[458].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_459(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[459].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[459].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_460(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[460].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[460].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_461(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[461].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[461].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_462(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[462].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[462].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_463(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[463].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[463].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_464(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[464].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[464].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_465(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[465].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[465].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_466(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[466].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[466].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_467(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[467].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[467].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_468(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[468].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[468].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_469(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[469].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[469].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_470(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[470].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[470].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_471(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[471].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[471].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_472(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[472].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[472].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_473(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[473].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[473].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_474(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[474].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[474].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_475(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[475].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[475].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_476(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[476].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[476].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_477(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[477].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[477].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_478(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[478].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[478].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_479(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[479].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[479].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_480(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[480].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[480].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_481(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[481].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[481].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_482(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[482].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[482].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_483(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[483].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[483].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_484(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[484].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[484].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_485(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[485].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[485].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_486(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[486].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[486].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_487(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[487].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[487].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_488(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[488].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[488].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_489(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[489].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[489].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_490(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[490].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[490].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_491(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[491].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[491].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_492(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[492].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[492].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_493(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[493].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[493].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_494(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[494].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[494].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_495(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[495].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[495].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_496(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[496].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[496].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_497(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[497].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[497].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_498(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[498].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[498].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_499(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[499].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[499].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_500(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[500].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[500].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_501(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[501].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[501].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_502(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[502].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[502].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_503(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[503].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[503].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_504(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[504].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[504].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_505(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[505].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[505].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_506(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[506].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[506].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_507(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[507].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[507].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_508(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[508].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[508].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_509(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[509].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[509].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_510(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[510].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[510].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_511(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[511].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[511].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_512(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[512].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[512].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_513(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[513].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[513].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_514(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[514].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[514].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_515(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[515].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[515].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_516(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[516].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[516].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_517(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[517].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[517].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_518(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[518].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[518].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_519(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[519].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[519].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_520(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[520].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[520].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_521(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[521].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[521].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_522(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[522].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[522].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_523(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[523].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[523].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_524(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[524].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[524].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_525(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[525].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[525].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_526(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[526].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[526].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_527(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[527].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[527].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_528(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[528].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[528].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_529(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[529].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[529].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_530(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[530].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[530].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_531(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[531].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[531].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_532(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[532].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[532].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_533(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[533].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[533].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_534(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[534].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[534].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_535(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[535].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[535].fn)(a, b, c, d, e, f, g, h);
}
static void *thunk_536(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) {
    nvn_slot[536].count++;
    return ((void *(*)(void*,void*,void*,void*,void*,void*,void*,void*))nvn_slot[536].fn)(a, b, c, d, e, f, g, h);
}

void *nvn_thunk[537] = {
    (void *)thunk_0,
    (void *)thunk_1,
    (void *)thunk_2,
    (void *)thunk_3,
    (void *)thunk_4,
    (void *)thunk_5,
    (void *)thunk_6,
    (void *)thunk_7,
    (void *)thunk_8,
    (void *)thunk_9,
    (void *)thunk_10,
    (void *)thunk_11,
    (void *)thunk_12,
    (void *)thunk_13,
    (void *)thunk_14,
    (void *)thunk_15,
    (void *)thunk_16,
    (void *)thunk_17,
    (void *)thunk_18,
    (void *)thunk_19,
    (void *)thunk_20,
    (void *)thunk_21,
    (void *)thunk_22,
    (void *)thunk_23,
    (void *)thunk_24,
    (void *)thunk_25,
    (void *)thunk_26,
    (void *)thunk_27,
    (void *)thunk_28,
    (void *)thunk_29,
    (void *)thunk_30,
    (void *)thunk_31,
    (void *)thunk_32,
    (void *)thunk_33,
    (void *)thunk_34,
    (void *)thunk_35,
    (void *)thunk_36,
    (void *)thunk_37,
    (void *)thunk_38,
    (void *)thunk_39,
    (void *)thunk_40,
    (void *)thunk_41,
    (void *)thunk_42,
    (void *)thunk_43,
    (void *)thunk_44,
    (void *)thunk_45,
    (void *)thunk_46,
    (void *)thunk_47,
    (void *)thunk_48,
    (void *)thunk_49,
    (void *)thunk_50,
    (void *)thunk_51,
    (void *)thunk_52,
    (void *)thunk_53,
    (void *)thunk_54,
    (void *)thunk_55,
    (void *)thunk_56,
    (void *)thunk_57,
    (void *)thunk_58,
    (void *)thunk_59,
    (void *)thunk_60,
    (void *)thunk_61,
    (void *)thunk_62,
    (void *)thunk_63,
    (void *)thunk_64,
    (void *)thunk_65,
    (void *)thunk_66,
    (void *)thunk_67,
    (void *)thunk_68,
    (void *)thunk_69,
    (void *)thunk_70,
    (void *)thunk_71,
    (void *)thunk_72,
    (void *)thunk_73,
    (void *)thunk_74,
    (void *)thunk_75,
    (void *)thunk_76,
    (void *)thunk_77,
    (void *)thunk_78,
    (void *)thunk_79,
    (void *)thunk_80,
    (void *)thunk_81,
    (void *)thunk_82,
    (void *)thunk_83,
    (void *)thunk_84,
    (void *)thunk_85,
    (void *)thunk_86,
    (void *)thunk_87,
    (void *)thunk_88,
    (void *)thunk_89,
    (void *)thunk_90,
    (void *)thunk_91,
    (void *)thunk_92,
    (void *)thunk_93,
    (void *)thunk_94,
    (void *)thunk_95,
    (void *)thunk_96,
    (void *)thunk_97,
    (void *)thunk_98,
    (void *)thunk_99,
    (void *)thunk_100,
    (void *)thunk_101,
    (void *)thunk_102,
    (void *)thunk_103,
    (void *)thunk_104,
    (void *)thunk_105,
    (void *)thunk_106,
    (void *)thunk_107,
    (void *)thunk_108,
    (void *)thunk_109,
    (void *)thunk_110,
    (void *)thunk_111,
    (void *)thunk_112,
    (void *)thunk_113,
    (void *)thunk_114,
    (void *)thunk_115,
    (void *)thunk_116,
    (void *)thunk_117,
    (void *)thunk_118,
    (void *)thunk_119,
    (void *)thunk_120,
    (void *)thunk_121,
    (void *)thunk_122,
    (void *)thunk_123,
    (void *)thunk_124,
    (void *)thunk_125,
    (void *)thunk_126,
    (void *)thunk_127,
    (void *)thunk_128,
    (void *)thunk_129,
    (void *)thunk_130,
    (void *)thunk_131,
    (void *)thunk_132,
    (void *)thunk_133,
    (void *)thunk_134,
    (void *)thunk_135,
    (void *)thunk_136,
    (void *)thunk_137,
    (void *)thunk_138,
    (void *)thunk_139,
    (void *)thunk_140,
    (void *)thunk_141,
    (void *)thunk_142,
    (void *)thunk_143,
    (void *)thunk_144,
    (void *)thunk_145,
    (void *)thunk_146,
    (void *)thunk_147,
    (void *)thunk_148,
    (void *)thunk_149,
    (void *)thunk_150,
    (void *)thunk_151,
    (void *)thunk_152,
    (void *)thunk_153,
    (void *)thunk_154,
    (void *)thunk_155,
    (void *)thunk_156,
    (void *)thunk_157,
    (void *)thunk_158,
    (void *)thunk_159,
    (void *)thunk_160,
    (void *)thunk_161,
    (void *)thunk_162,
    (void *)thunk_163,
    (void *)thunk_164,
    (void *)thunk_165,
    (void *)thunk_166,
    (void *)thunk_167,
    (void *)thunk_168,
    (void *)thunk_169,
    (void *)thunk_170,
    (void *)thunk_171,
    (void *)thunk_172,
    (void *)thunk_173,
    (void *)thunk_174,
    (void *)thunk_175,
    (void *)thunk_176,
    (void *)thunk_177,
    (void *)thunk_178,
    (void *)thunk_179,
    (void *)thunk_180,
    (void *)thunk_181,
    (void *)thunk_182,
    (void *)thunk_183,
    (void *)thunk_184,
    (void *)thunk_185,
    (void *)thunk_186,
    (void *)thunk_187,
    (void *)thunk_188,
    (void *)thunk_189,
    (void *)thunk_190,
    (void *)thunk_191,
    (void *)thunk_192,
    (void *)thunk_193,
    (void *)thunk_194,
    (void *)thunk_195,
    (void *)thunk_196,
    (void *)thunk_197,
    (void *)thunk_198,
    (void *)thunk_199,
    (void *)thunk_200,
    (void *)thunk_201,
    (void *)thunk_202,
    (void *)thunk_203,
    (void *)thunk_204,
    (void *)thunk_205,
    (void *)thunk_206,
    (void *)thunk_207,
    (void *)thunk_208,
    (void *)thunk_209,
    (void *)thunk_210,
    (void *)thunk_211,
    (void *)thunk_212,
    (void *)thunk_213,
    (void *)thunk_214,
    (void *)thunk_215,
    (void *)thunk_216,
    (void *)thunk_217,
    (void *)thunk_218,
    (void *)thunk_219,
    (void *)thunk_220,
    (void *)thunk_221,
    (void *)thunk_222,
    (void *)thunk_223,
    (void *)thunk_224,
    (void *)thunk_225,
    (void *)thunk_226,
    (void *)thunk_227,
    (void *)thunk_228,
    (void *)thunk_229,
    (void *)thunk_230,
    (void *)thunk_231,
    (void *)thunk_232,
    (void *)thunk_233,
    (void *)thunk_234,
    (void *)thunk_235,
    (void *)thunk_236,
    (void *)thunk_237,
    (void *)thunk_238,
    (void *)thunk_239,
    (void *)thunk_240,
    (void *)thunk_241,
    (void *)thunk_242,
    (void *)thunk_243,
    (void *)thunk_244,
    (void *)thunk_245,
    (void *)thunk_246,
    (void *)thunk_247,
    (void *)thunk_248,
    (void *)thunk_249,
    (void *)thunk_250,
    (void *)thunk_251,
    (void *)thunk_252,
    (void *)thunk_253,
    (void *)thunk_254,
    (void *)thunk_255,
    (void *)thunk_256,
    (void *)thunk_257,
    (void *)thunk_258,
    (void *)thunk_259,
    (void *)thunk_260,
    (void *)thunk_261,
    (void *)thunk_262,
    (void *)thunk_263,
    (void *)thunk_264,
    (void *)thunk_265,
    (void *)thunk_266,
    (void *)thunk_267,
    (void *)thunk_268,
    (void *)thunk_269,
    (void *)thunk_270,
    (void *)thunk_271,
    (void *)thunk_272,
    (void *)thunk_273,
    (void *)thunk_274,
    (void *)thunk_275,
    (void *)thunk_276,
    (void *)thunk_277,
    (void *)thunk_278,
    (void *)thunk_279,
    (void *)thunk_280,
    (void *)thunk_281,
    (void *)thunk_282,
    (void *)thunk_283,
    (void *)thunk_284,
    (void *)thunk_285,
    (void *)thunk_286,
    (void *)thunk_287,
    (void *)thunk_288,
    (void *)thunk_289,
    (void *)thunk_290,
    (void *)thunk_291,
    (void *)thunk_292,
    (void *)thunk_293,
    (void *)thunk_294,
    (void *)thunk_295,
    (void *)thunk_296,
    (void *)thunk_297,
    (void *)thunk_298,
    (void *)thunk_299,
    (void *)thunk_300,
    (void *)thunk_301,
    (void *)thunk_302,
    (void *)thunk_303,
    (void *)thunk_304,
    (void *)thunk_305,
    (void *)thunk_306,
    (void *)thunk_307,
    (void *)thunk_308,
    (void *)thunk_309,
    (void *)thunk_310,
    (void *)thunk_311,
    (void *)thunk_312,
    (void *)thunk_313,
    (void *)thunk_314,
    (void *)thunk_315,
    (void *)thunk_316,
    (void *)thunk_317,
    (void *)thunk_318,
    (void *)thunk_319,
    (void *)thunk_320,
    (void *)thunk_321,
    (void *)thunk_322,
    (void *)thunk_323,
    (void *)thunk_324,
    (void *)thunk_325,
    (void *)thunk_326,
    (void *)thunk_327,
    (void *)thunk_328,
    (void *)thunk_329,
    (void *)thunk_330,
    (void *)thunk_331,
    (void *)thunk_332,
    (void *)thunk_333,
    (void *)thunk_334,
    (void *)thunk_335,
    (void *)thunk_336,
    (void *)thunk_337,
    (void *)thunk_338,
    (void *)thunk_339,
    (void *)thunk_340,
    (void *)thunk_341,
    (void *)thunk_342,
    (void *)thunk_343,
    (void *)thunk_344,
    (void *)thunk_345,
    (void *)thunk_346,
    (void *)thunk_347,
    (void *)thunk_348,
    (void *)thunk_349,
    (void *)thunk_350,
    (void *)thunk_351,
    (void *)thunk_352,
    (void *)thunk_353,
    (void *)thunk_354,
    (void *)thunk_355,
    (void *)thunk_356,
    (void *)thunk_357,
    (void *)thunk_358,
    (void *)thunk_359,
    (void *)thunk_360,
    (void *)thunk_361,
    (void *)thunk_362,
    (void *)thunk_363,
    (void *)thunk_364,
    (void *)thunk_365,
    (void *)thunk_366,
    (void *)thunk_367,
    (void *)thunk_368,
    (void *)thunk_369,
    (void *)thunk_370,
    (void *)thunk_371,
    (void *)thunk_372,
    (void *)thunk_373,
    (void *)thunk_374,
    (void *)thunk_375,
    (void *)thunk_376,
    (void *)thunk_377,
    (void *)thunk_378,
    (void *)thunk_379,
    (void *)thunk_380,
    (void *)thunk_381,
    (void *)thunk_382,
    (void *)thunk_383,
    (void *)thunk_384,
    (void *)thunk_385,
    (void *)thunk_386,
    (void *)thunk_387,
    (void *)thunk_388,
    (void *)thunk_389,
    (void *)thunk_390,
    (void *)thunk_391,
    (void *)thunk_392,
    (void *)thunk_393,
    (void *)thunk_394,
    (void *)thunk_395,
    (void *)thunk_396,
    (void *)thunk_397,
    (void *)thunk_398,
    (void *)thunk_399,
    (void *)thunk_400,
    (void *)thunk_401,
    (void *)thunk_402,
    (void *)thunk_403,
    (void *)thunk_404,
    (void *)thunk_405,
    (void *)thunk_406,
    (void *)thunk_407,
    (void *)thunk_408,
    (void *)thunk_409,
    (void *)thunk_410,
    (void *)thunk_411,
    (void *)thunk_412,
    (void *)thunk_413,
    (void *)thunk_414,
    (void *)thunk_415,
    (void *)thunk_416,
    (void *)thunk_417,
    (void *)thunk_418,
    (void *)thunk_419,
    (void *)thunk_420,
    (void *)thunk_421,
    (void *)thunk_422,
    (void *)thunk_423,
    (void *)thunk_424,
    (void *)thunk_425,
    (void *)thunk_426,
    (void *)thunk_427,
    (void *)thunk_428,
    (void *)thunk_429,
    (void *)thunk_430,
    (void *)thunk_431,
    (void *)thunk_432,
    (void *)thunk_433,
    (void *)thunk_434,
    (void *)thunk_435,
    (void *)thunk_436,
    (void *)thunk_437,
    (void *)thunk_438,
    (void *)thunk_439,
    (void *)thunk_440,
    (void *)thunk_441,
    (void *)thunk_442,
    (void *)thunk_443,
    (void *)thunk_444,
    (void *)thunk_445,
    (void *)thunk_446,
    (void *)thunk_447,
    (void *)thunk_448,
    (void *)thunk_449,
    (void *)thunk_450,
    (void *)thunk_451,
    (void *)thunk_452,
    (void *)thunk_453,
    (void *)thunk_454,
    (void *)thunk_455,
    (void *)thunk_456,
    (void *)thunk_457,
    (void *)thunk_458,
    (void *)thunk_459,
    (void *)thunk_460,
    (void *)thunk_461,
    (void *)thunk_462,
    (void *)thunk_463,
    (void *)thunk_464,
    (void *)thunk_465,
    (void *)thunk_466,
    (void *)thunk_467,
    (void *)thunk_468,
    (void *)thunk_469,
    (void *)thunk_470,
    (void *)thunk_471,
    (void *)thunk_472,
    (void *)thunk_473,
    (void *)thunk_474,
    (void *)thunk_475,
    (void *)thunk_476,
    (void *)thunk_477,
    (void *)thunk_478,
    (void *)thunk_479,
    (void *)thunk_480,
    (void *)thunk_481,
    (void *)thunk_482,
    (void *)thunk_483,
    (void *)thunk_484,
    (void *)thunk_485,
    (void *)thunk_486,
    (void *)thunk_487,
    (void *)thunk_488,
    (void *)thunk_489,
    (void *)thunk_490,
    (void *)thunk_491,
    (void *)thunk_492,
    (void *)thunk_493,
    (void *)thunk_494,
    (void *)thunk_495,
    (void *)thunk_496,
    (void *)thunk_497,
    (void *)thunk_498,
    (void *)thunk_499,
    (void *)thunk_500,
    (void *)thunk_501,
    (void *)thunk_502,
    (void *)thunk_503,
    (void *)thunk_504,
    (void *)thunk_505,
    (void *)thunk_506,
    (void *)thunk_507,
    (void *)thunk_508,
    (void *)thunk_509,
    (void *)thunk_510,
    (void *)thunk_511,
    (void *)thunk_512,
    (void *)thunk_513,
    (void *)thunk_514,
    (void *)thunk_515,
    (void *)thunk_516,
    (void *)thunk_517,
    (void *)thunk_518,
    (void *)thunk_519,
    (void *)thunk_520,
    (void *)thunk_521,
    (void *)thunk_522,
    (void *)thunk_523,
    (void *)thunk_524,
    (void *)thunk_525,
    (void *)thunk_526,
    (void *)thunk_527,
    (void *)thunk_528,
    (void *)thunk_529,
    (void *)thunk_530,
    (void *)thunk_531,
    (void *)thunk_532,
    (void *)thunk_533,
    (void *)thunk_534,
    (void *)thunk_535,
    (void *)thunk_536,
};
