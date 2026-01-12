// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UPMGraphicsManager.h"

#ifdef UPM_UPMGraphicsManager_generated_h
#error "UPMGraphicsManager.generated.h already included, missing '#pragma once' in UPMGraphicsManager.h"
#endif
#define UPM_UPMGraphicsManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FUPMQualityPreset;

// ********** Begin Class UUPMGraphicsManager ******************************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasPendingChanges); \
	DECLARE_FUNCTION(execAutoDetectQuality); \
	DECLARE_FUNCTION(execResetToDefaults); \
	DECLARE_FUNCTION(execSaveSettings); \
	DECLARE_FUNCTION(execApplySettings); \
	DECLARE_FUNCTION(execGetCurrentSettingsAsPreset); \
	DECLARE_FUNCTION(execApplyPreset); \
	DECLARE_FUNCTION(execGetPresetByLevel); \
	DECLARE_FUNCTION(execGetResolutionScale); \
	DECLARE_FUNCTION(execSetResolutionScale); \
	DECLARE_FUNCTION(execGetFrameRateLimit); \
	DECLARE_FUNCTION(execSetFrameRateLimit); \
	DECLARE_FUNCTION(execGetVSyncEnabled); \
	DECLARE_FUNCTION(execSetVSyncEnabled); \
	DECLARE_FUNCTION(execGetFullscreenMode); \
	DECLARE_FUNCTION(execSetFullscreenMode); \
	DECLARE_FUNCTION(execGetSupportedResolutions); \
	DECLARE_FUNCTION(execGetScreenResolution); \
	DECLARE_FUNCTION(execSetScreenResolution); \
	DECLARE_FUNCTION(execGetShadingQuality); \
	DECLARE_FUNCTION(execSetShadingQuality); \
	DECLARE_FUNCTION(execGetFoliageQuality); \
	DECLARE_FUNCTION(execSetFoliageQuality); \
	DECLARE_FUNCTION(execGetEffectsQuality); \
	DECLARE_FUNCTION(execSetEffectsQuality); \
	DECLARE_FUNCTION(execGetTextureQuality); \
	DECLARE_FUNCTION(execSetTextureQuality); \
	DECLARE_FUNCTION(execGetPostProcessQuality); \
	DECLARE_FUNCTION(execSetPostProcessQuality); \
	DECLARE_FUNCTION(execGetReflectionQuality); \
	DECLARE_FUNCTION(execSetReflectionQuality); \
	DECLARE_FUNCTION(execGetGlobalIlluminationQuality); \
	DECLARE_FUNCTION(execSetGlobalIlluminationQuality); \
	DECLARE_FUNCTION(execGetShadowQuality); \
	DECLARE_FUNCTION(execSetShadowQuality); \
	DECLARE_FUNCTION(execGetAntiAliasingQuality); \
	DECLARE_FUNCTION(execSetAntiAliasingQuality); \
	DECLARE_FUNCTION(execGetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetViewDistanceQuality); \
	DECLARE_FUNCTION(execGetOverallQuality); \
	DECLARE_FUNCTION(execSetOverallQuality);


UPM_API UClass* Z_Construct_UClass_UUPMGraphicsManager_NoRegister();

#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPMGraphicsManager(); \
	friend struct Z_Construct_UClass_UUPMGraphicsManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UPM_API UClass* Z_Construct_UClass_UUPMGraphicsManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UUPMGraphicsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UPM"), Z_Construct_UClass_UUPMGraphicsManager_NoRegister) \
	DECLARE_SERIALIZER(UUPMGraphicsManager)


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPMGraphicsManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUPMGraphicsManager(UUPMGraphicsManager&&) = delete; \
	UUPMGraphicsManager(const UUPMGraphicsManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPMGraphicsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPMGraphicsManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPMGraphicsManager) \
	NO_API virtual ~UUPMGraphicsManager();


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h_16_PROLOG
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUPMGraphicsManager;

// ********** End Class UUPMGraphicsManager ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
