// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UPMBlueprintLibrary.h"

#ifdef UPM_UPMBlueprintLibrary_generated_h
#error "UPMBlueprintLibrary.generated.h already included, missing '#pragma once' in UPMBlueprintLibrary.h"
#endif
#define UPM_UPMBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
enum class EUPMMonitoringMode : uint8;
struct FUPMBenchmarkResults;
struct FUPMPerformanceStats;
struct FUPMQualityPreset;

// ********** Begin Class UUPMBlueprintLibrary *****************************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRecommendedSettings); \
	DECLARE_FUNCTION(execAutoDetectQualitySettings); \
	DECLARE_FUNCTION(execGetBenchmarkResults); \
	DECLARE_FUNCTION(execStartBenchmark); \
	DECLARE_FUNCTION(execSetMonitoringMode); \
	DECLARE_FUNCTION(execEnablePerformanceMonitoring); \
	DECLARE_FUNCTION(execGetPerformanceStats); \
	DECLARE_FUNCTION(execGetFrameTimeMs); \
	DECLARE_FUNCTION(execGetAverageFPS); \
	DECLARE_FUNCTION(execGetCurrentFPS); \
	DECLARE_FUNCTION(execGetCurrentQualitySettings); \
	DECLARE_FUNCTION(execResetToDefaults); \
	DECLARE_FUNCTION(execLoadGraphicsSettings); \
	DECLARE_FUNCTION(execSaveGraphicsSettings); \
	DECLARE_FUNCTION(execApplyGraphicsSettings); \
	DECLARE_FUNCTION(execSetResolutionScale); \
	DECLARE_FUNCTION(execSetFrameRateLimit); \
	DECLARE_FUNCTION(execSetVSync); \
	DECLARE_FUNCTION(execSetFullscreenMode); \
	DECLARE_FUNCTION(execGetSupportedResolutions); \
	DECLARE_FUNCTION(execGetCurrentResolution); \
	DECLARE_FUNCTION(execSetResolution); \
	DECLARE_FUNCTION(execSetEffectsQuality); \
	DECLARE_FUNCTION(execSetPostProcessQuality); \
	DECLARE_FUNCTION(execSetAntiAliasingQuality); \
	DECLARE_FUNCTION(execSetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetShadowQuality); \
	DECLARE_FUNCTION(execSetTextureQuality); \
	DECLARE_FUNCTION(execGetOverallQuality); \
	DECLARE_FUNCTION(execSetOverallQuality);


UPM_API UClass* Z_Construct_UClass_UUPMBlueprintLibrary_NoRegister();

#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPMBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UUPMBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UPM_API UClass* Z_Construct_UClass_UUPMBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UUPMBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UPM"), Z_Construct_UClass_UUPMBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UUPMBlueprintLibrary)


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPMBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUPMBlueprintLibrary(UUPMBlueprintLibrary&&) = delete; \
	UUPMBlueprintLibrary(const UUPMBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPMBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPMBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPMBlueprintLibrary) \
	NO_API virtual ~UUPMBlueprintLibrary();


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h_16_PROLOG
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUPMBlueprintLibrary;

// ********** End Class UUPMBlueprintLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
