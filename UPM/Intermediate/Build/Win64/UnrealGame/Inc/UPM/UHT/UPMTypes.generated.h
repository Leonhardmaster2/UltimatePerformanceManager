// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UPMTypes.h"

#ifdef UPM_UPMTypes_generated_h
#error "UPMTypes.generated.h already included, missing '#pragma once' in UPMTypes.h"
#endif
#define UPM_UPMTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FUPMBenchmarkResults;
struct FUPMQualityPreset;

// ********** Begin ScriptStruct FUPMQualityPreset *************************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUPMQualityPreset_Statics; \
	static class UScriptStruct* StaticStruct();


struct FUPMQualityPreset;
// ********** End ScriptStruct FUPMQualityPreset ***************************************************

// ********** Begin ScriptStruct FUPMPerformanceStats **********************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics; \
	static class UScriptStruct* StaticStruct();


struct FUPMPerformanceStats;
// ********** End ScriptStruct FUPMPerformanceStats ************************************************

// ********** Begin ScriptStruct FUPMBenchmarkResults **********************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics; \
	static class UScriptStruct* StaticStruct();


struct FUPMBenchmarkResults;
// ********** End ScriptStruct FUPMBenchmarkResults ************************************************

// ********** Begin Delegate FOnSettingsChanged ****************************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h_180_DELEGATE \
UPM_API void FOnSettingsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSettingsChanged, FUPMQualityPreset NewSettings);


// ********** End Delegate FOnSettingsChanged ******************************************************

// ********** Begin Delegate FOnFPSUpdated *********************************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h_181_DELEGATE \
UPM_API void FOnFPSUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFPSUpdated, float CurrentFPS);


// ********** End Delegate FOnFPSUpdated ***********************************************************

// ********** Begin Delegate FOnBenchmarkComplete **************************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h_182_DELEGATE \
UPM_API void FOnBenchmarkComplete_DelegateWrapper(const FMulticastScriptDelegate& OnBenchmarkComplete, FUPMBenchmarkResults Results);


// ********** End Delegate FOnBenchmarkComplete ****************************************************

// ********** Begin Delegate FOnSettingsApplied ****************************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h_183_DELEGATE \
UPM_API void FOnSettingsApplied_DelegateWrapper(const FMulticastScriptDelegate& OnSettingsApplied);


// ********** End Delegate FOnSettingsApplied ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h

// ********** Begin Enum EUPMSubtitleSize **********************************************************
#define FOREACH_ENUM_EUPMSUBTITLESIZE(op) \
	op(EUPMSubtitleSize::Small) \
	op(EUPMSubtitleSize::Medium) \
	op(EUPMSubtitleSize::Large) \
	op(EUPMSubtitleSize::ExtraLarge) 

enum class EUPMSubtitleSize : uint8;
template<> struct TIsUEnumClass<EUPMSubtitleSize> { enum { Value = true }; };
template<> UPM_API UEnum* StaticEnum<EUPMSubtitleSize>();
// ********** End Enum EUPMSubtitleSize ************************************************************

// ********** Begin Enum EUPMColorblindMode ********************************************************
#define FOREACH_ENUM_EUPMCOLORBLINDMODE(op) \
	op(EUPMColorblindMode::None) \
	op(EUPMColorblindMode::Protanopia) \
	op(EUPMColorblindMode::Deuteranopia) \
	op(EUPMColorblindMode::Tritanopia) 

enum class EUPMColorblindMode : uint8;
template<> struct TIsUEnumClass<EUPMColorblindMode> { enum { Value = true }; };
template<> UPM_API UEnum* StaticEnum<EUPMColorblindMode>();
// ********** End Enum EUPMColorblindMode **********************************************************

// ********** Begin Enum EUPMMonitoringMode ********************************************************
#define FOREACH_ENUM_EUPMMONITORINGMODE(op) \
	op(EUPMMonitoringMode::Disabled) \
	op(EUPMMonitoringMode::Basic) \
	op(EUPMMonitoringMode::Detailed) \
	op(EUPMMonitoringMode::Benchmark) 

enum class EUPMMonitoringMode : uint8;
template<> struct TIsUEnumClass<EUPMMonitoringMode> { enum { Value = true }; };
template<> UPM_API UEnum* StaticEnum<EUPMMonitoringMode>();
// ********** End Enum EUPMMonitoringMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
