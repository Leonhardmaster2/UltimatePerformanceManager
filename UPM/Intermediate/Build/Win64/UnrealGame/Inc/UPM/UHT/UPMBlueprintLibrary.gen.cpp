// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UPMBlueprintLibrary.h"
#include "UPMTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUPMBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
UPackage* Z_Construct_UPackage__Script_UPM();
UPM_API UClass* Z_Construct_UClass_UUPMBlueprintLibrary();
UPM_API UClass* Z_Construct_UClass_UUPMBlueprintLibrary_NoRegister();
UPM_API UEnum* Z_Construct_UEnum_UPM_EUPMMonitoringMode();
UPM_API UScriptStruct* Z_Construct_UScriptStruct_FUPMBenchmarkResults();
UPM_API UScriptStruct* Z_Construct_UScriptStruct_FUPMPerformanceStats();
UPM_API UScriptStruct* Z_Construct_UScriptStruct_FUPMQualityPreset();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUPMBlueprintLibrary Function ApplyGraphicsSettings **********************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics
{
	struct UPMBlueprintLibrary_eventApplyGraphicsSettings_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Apply all pending graphics settings changes */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply all pending graphics settings changes" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventApplyGraphicsSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "ApplyGraphicsSettings", Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::UPMBlueprintLibrary_eventApplyGraphicsSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::UPMBlueprintLibrary_eventApplyGraphicsSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execApplyGraphicsSettings)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::ApplyGraphicsSettings(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function ApplyGraphicsSettings ************************

// ********** Begin Class UUPMBlueprintLibrary Function AutoDetectQualitySettings ******************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics
{
	struct UPMBlueprintLibrary_eventAutoDetectQualitySettings_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto-detect optimal quality settings based on hardware */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-detect optimal quality settings based on hardware" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventAutoDetectQualitySettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "AutoDetectQualitySettings", Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::UPMBlueprintLibrary_eventAutoDetectQualitySettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::UPMBlueprintLibrary_eventAutoDetectQualitySettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execAutoDetectQualitySettings)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::AutoDetectQualitySettings(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function AutoDetectQualitySettings ********************

// ********** Begin Class UUPMBlueprintLibrary Function EnablePerformanceMonitoring ****************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics
{
	struct UPMBlueprintLibrary_eventEnablePerformanceMonitoring_Parms
	{
		const UObject* WorldContextObject;
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable performance monitoring */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable performance monitoring" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventEnablePerformanceMonitoring_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((UPMBlueprintLibrary_eventEnablePerformanceMonitoring_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMBlueprintLibrary_eventEnablePerformanceMonitoring_Parms), &Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "EnablePerformanceMonitoring", Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::UPMBlueprintLibrary_eventEnablePerformanceMonitoring_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::UPMBlueprintLibrary_eventEnablePerformanceMonitoring_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execEnablePerformanceMonitoring)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::EnablePerformanceMonitoring(Z_Param_WorldContextObject,Z_Param_bEnable);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function EnablePerformanceMonitoring ******************

// ********** Begin Class UUPMBlueprintLibrary Function GetAverageFPS ******************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics
{
	struct UPMBlueprintLibrary_eventGetAverageFPS_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get average FPS */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get average FPS" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetAverageFPS_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetAverageFPS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "GetAverageFPS", Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::UPMBlueprintLibrary_eventGetAverageFPS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::UPMBlueprintLibrary_eventGetAverageFPS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execGetAverageFPS)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UUPMBlueprintLibrary::GetAverageFPS(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function GetAverageFPS ********************************

// ********** Begin Class UUPMBlueprintLibrary Function GetBenchmarkResults ************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics
{
	struct UPMBlueprintLibrary_eventGetBenchmarkResults_Parms
	{
		const UObject* WorldContextObject;
		FUPMBenchmarkResults ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Benchmark" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get benchmark results */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get benchmark results" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetBenchmarkResults_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetBenchmarkResults_Parms, ReturnValue), Z_Construct_UScriptStruct_FUPMBenchmarkResults, METADATA_PARAMS(0, nullptr) }; // 2573232789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "GetBenchmarkResults", Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::UPMBlueprintLibrary_eventGetBenchmarkResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::UPMBlueprintLibrary_eventGetBenchmarkResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execGetBenchmarkResults)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUPMBenchmarkResults*)Z_Param__Result=UUPMBlueprintLibrary::GetBenchmarkResults(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function GetBenchmarkResults **************************

// ********** Begin Class UUPMBlueprintLibrary Function GetCurrentFPS ******************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics
{
	struct UPMBlueprintLibrary_eventGetCurrentFPS_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get current FPS */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get current FPS" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetCurrentFPS_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetCurrentFPS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "GetCurrentFPS", Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::UPMBlueprintLibrary_eventGetCurrentFPS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::UPMBlueprintLibrary_eventGetCurrentFPS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execGetCurrentFPS)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UUPMBlueprintLibrary::GetCurrentFPS(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function GetCurrentFPS ********************************

// ********** Begin Class UUPMBlueprintLibrary Function GetCurrentQualitySettings ******************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics
{
	struct UPMBlueprintLibrary_eventGetCurrentQualitySettings_Parms
	{
		const UObject* WorldContextObject;
		FUPMQualityPreset ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current settings as a preset struct */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current settings as a preset struct" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetCurrentQualitySettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetCurrentQualitySettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FUPMQualityPreset, METADATA_PARAMS(0, nullptr) }; // 298657846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "GetCurrentQualitySettings", Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::UPMBlueprintLibrary_eventGetCurrentQualitySettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::UPMBlueprintLibrary_eventGetCurrentQualitySettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execGetCurrentQualitySettings)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUPMQualityPreset*)Z_Param__Result=UUPMBlueprintLibrary::GetCurrentQualitySettings(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function GetCurrentQualitySettings ********************

// ********** Begin Class UUPMBlueprintLibrary Function GetCurrentResolution ***********************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics
{
	struct UPMBlueprintLibrary_eventGetCurrentResolution_Parms
	{
		const UObject* WorldContextObject;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current resolution */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current resolution" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetCurrentResolution_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetCurrentResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "GetCurrentResolution", Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::UPMBlueprintLibrary_eventGetCurrentResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::UPMBlueprintLibrary_eventGetCurrentResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execGetCurrentResolution)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=UUPMBlueprintLibrary::GetCurrentResolution(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function GetCurrentResolution *************************

// ********** Begin Class UUPMBlueprintLibrary Function GetFrameTimeMs *****************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics
{
	struct UPMBlueprintLibrary_eventGetFrameTimeMs_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get current frame time in milliseconds */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get current frame time in milliseconds" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetFrameTimeMs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetFrameTimeMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "GetFrameTimeMs", Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::UPMBlueprintLibrary_eventGetFrameTimeMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::UPMBlueprintLibrary_eventGetFrameTimeMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execGetFrameTimeMs)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UUPMBlueprintLibrary::GetFrameTimeMs(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function GetFrameTimeMs *******************************

// ********** Begin Class UUPMBlueprintLibrary Function GetOverallQuality **************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics
{
	struct UPMBlueprintLibrary_eventGetOverallQuality_Parms
	{
		const UObject* WorldContextObject;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current overall quality level */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current overall quality level" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetOverallQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetOverallQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "GetOverallQuality", Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::UPMBlueprintLibrary_eventGetOverallQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::UPMBlueprintLibrary_eventGetOverallQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execGetOverallQuality)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UUPMBlueprintLibrary::GetOverallQuality(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function GetOverallQuality ****************************

// ********** Begin Class UUPMBlueprintLibrary Function GetPerformanceStats ************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics
{
	struct UPMBlueprintLibrary_eventGetPerformanceStats_Parms
	{
		const UObject* WorldContextObject;
		FUPMPerformanceStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get all current performance stats */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all current performance stats" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetPerformanceStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetPerformanceStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FUPMPerformanceStats, METADATA_PARAMS(0, nullptr) }; // 587567735
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "GetPerformanceStats", Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::UPMBlueprintLibrary_eventGetPerformanceStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::UPMBlueprintLibrary_eventGetPerformanceStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execGetPerformanceStats)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUPMPerformanceStats*)Z_Param__Result=UUPMBlueprintLibrary::GetPerformanceStats(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function GetPerformanceStats **************************

// ********** Begin Class UUPMBlueprintLibrary Function GetRecommendedSettings *********************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics
{
	struct UPMBlueprintLibrary_eventGetRecommendedSettings_Parms
	{
		const UObject* WorldContextObject;
		FUPMQualityPreset ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Run a hardware benchmark and get recommended settings */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run a hardware benchmark and get recommended settings" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetRecommendedSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetRecommendedSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FUPMQualityPreset, METADATA_PARAMS(0, nullptr) }; // 298657846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "GetRecommendedSettings", Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::UPMBlueprintLibrary_eventGetRecommendedSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::UPMBlueprintLibrary_eventGetRecommendedSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execGetRecommendedSettings)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUPMQualityPreset*)Z_Param__Result=UUPMBlueprintLibrary::GetRecommendedSettings(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function GetRecommendedSettings ***********************

// ********** Begin Class UUPMBlueprintLibrary Function GetSupportedResolutions ********************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics
{
	struct UPMBlueprintLibrary_eventGetSupportedResolutions_Parms
	{
		const UObject* WorldContextObject;
		TArray<FIntPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets all supported fullscreen resolutions */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all supported fullscreen resolutions" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetSupportedResolutions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventGetSupportedResolutions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "GetSupportedResolutions", Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::UPMBlueprintLibrary_eventGetSupportedResolutions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::UPMBlueprintLibrary_eventGetSupportedResolutions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execGetSupportedResolutions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntPoint>*)Z_Param__Result=UUPMBlueprintLibrary::GetSupportedResolutions(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function GetSupportedResolutions **********************

// ********** Begin Class UUPMBlueprintLibrary Function LoadGraphicsSettings ***********************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics
{
	struct UPMBlueprintLibrary_eventLoadGraphicsSettings_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Load all settings from disk */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load all settings from disk" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventLoadGraphicsSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "LoadGraphicsSettings", Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::UPMBlueprintLibrary_eventLoadGraphicsSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::UPMBlueprintLibrary_eventLoadGraphicsSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execLoadGraphicsSettings)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::LoadGraphicsSettings(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function LoadGraphicsSettings *************************

// ********** Begin Class UUPMBlueprintLibrary Function ResetToDefaults ****************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics
{
	struct UPMBlueprintLibrary_eventResetToDefaults_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset all settings to defaults */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset all settings to defaults" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventResetToDefaults_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "ResetToDefaults", Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::UPMBlueprintLibrary_eventResetToDefaults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::UPMBlueprintLibrary_eventResetToDefaults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execResetToDefaults)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::ResetToDefaults(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function ResetToDefaults ******************************

// ********** Begin Class UUPMBlueprintLibrary Function SaveGraphicsSettings ***********************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics
{
	struct UPMBlueprintLibrary_eventSaveGraphicsSettings_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Save all settings to disk */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save all settings to disk" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSaveGraphicsSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SaveGraphicsSettings", Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::UPMBlueprintLibrary_eventSaveGraphicsSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::UPMBlueprintLibrary_eventSaveGraphicsSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSaveGraphicsSettings)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SaveGraphicsSettings(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SaveGraphicsSettings *************************

// ********** Begin Class UUPMBlueprintLibrary Function SetAntiAliasingQuality *********************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics
{
	struct UPMBlueprintLibrary_eventSetAntiAliasingQuality_Parms
	{
		const UObject* WorldContextObject;
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetAntiAliasingQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetAntiAliasingQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetAntiAliasingQuality", Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::UPMBlueprintLibrary_eventSetAntiAliasingQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::UPMBlueprintLibrary_eventSetAntiAliasingQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetAntiAliasingQuality)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetAntiAliasingQuality(Z_Param_WorldContextObject,Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetAntiAliasingQuality ***********************

// ********** Begin Class UUPMBlueprintLibrary Function SetEffectsQuality **************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics
{
	struct UPMBlueprintLibrary_eventSetEffectsQuality_Parms
	{
		const UObject* WorldContextObject;
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetEffectsQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetEffectsQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetEffectsQuality", Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::UPMBlueprintLibrary_eventSetEffectsQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::UPMBlueprintLibrary_eventSetEffectsQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetEffectsQuality)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetEffectsQuality(Z_Param_WorldContextObject,Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetEffectsQuality ****************************

// ********** Begin Class UUPMBlueprintLibrary Function SetFrameRateLimit **************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics
{
	struct UPMBlueprintLibrary_eventSetFrameRateLimit_Parms
	{
		const UObject* WorldContextObject;
		float Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the frame rate limit (0 = unlimited) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the frame rate limit (0 = unlimited)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetFrameRateLimit_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetFrameRateLimit_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetFrameRateLimit", Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::UPMBlueprintLibrary_eventSetFrameRateLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::UPMBlueprintLibrary_eventSetFrameRateLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetFrameRateLimit)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetFrameRateLimit(Z_Param_WorldContextObject,Z_Param_Limit);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetFrameRateLimit ****************************

// ********** Begin Class UUPMBlueprintLibrary Function SetFullscreenMode **************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics
{
	struct UPMBlueprintLibrary_eventSetFullscreenMode_Parms
	{
		const UObject* WorldContextObject;
		TEnumAsByte<EWindowMode::Type> Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the fullscreen mode */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the fullscreen mode" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetFullscreenMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetFullscreenMode_Parms, Mode), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(0, nullptr) }; // 3411615937
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetFullscreenMode", Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::UPMBlueprintLibrary_eventSetFullscreenMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::UPMBlueprintLibrary_eventSetFullscreenMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetFullscreenMode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FByteProperty,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetFullscreenMode(Z_Param_WorldContextObject,EWindowMode::Type(Z_Param_Mode));
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetFullscreenMode ****************************

// ********** Begin Class UUPMBlueprintLibrary Function SetMonitoringMode **************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics
{
	struct UPMBlueprintLibrary_eventSetMonitoringMode_Parms
	{
		const UObject* WorldContextObject;
		EUPMMonitoringMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the performance monitoring mode */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the performance monitoring mode" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetMonitoringMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetMonitoringMode_Parms, Mode), Z_Construct_UEnum_UPM_EUPMMonitoringMode, METADATA_PARAMS(0, nullptr) }; // 2561663259
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetMonitoringMode", Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::UPMBlueprintLibrary_eventSetMonitoringMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::UPMBlueprintLibrary_eventSetMonitoringMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetMonitoringMode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EUPMMonitoringMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetMonitoringMode(Z_Param_WorldContextObject,EUPMMonitoringMode(Z_Param_Mode));
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetMonitoringMode ****************************

// ********** Begin Class UUPMBlueprintLibrary Function SetOverallQuality **************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics
{
	struct UPMBlueprintLibrary_eventSetOverallQuality_Parms
	{
		const UObject* WorldContextObject;
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the overall scalability level (0=Low, 1=Medium, 2=High, 3=Ultra, 4=Cinematic) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the overall scalability level (0=Low, 1=Medium, 2=High, 3=Ultra, 4=Cinematic)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetOverallQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetOverallQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetOverallQuality", Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::UPMBlueprintLibrary_eventSetOverallQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::UPMBlueprintLibrary_eventSetOverallQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetOverallQuality)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetOverallQuality(Z_Param_WorldContextObject,Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetOverallQuality ****************************

// ********** Begin Class UUPMBlueprintLibrary Function SetPostProcessQuality **********************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics
{
	struct UPMBlueprintLibrary_eventSetPostProcessQuality_Parms
	{
		const UObject* WorldContextObject;
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetPostProcessQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetPostProcessQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetPostProcessQuality", Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::UPMBlueprintLibrary_eventSetPostProcessQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::UPMBlueprintLibrary_eventSetPostProcessQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetPostProcessQuality)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetPostProcessQuality(Z_Param_WorldContextObject,Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetPostProcessQuality ************************

// ********** Begin Class UUPMBlueprintLibrary Function SetResolution ******************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics
{
	struct UPMBlueprintLibrary_eventSetResolution_Parms
	{
		const UObject* WorldContextObject;
		int32 Width;
		int32 Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the screen resolution */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the screen resolution" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetResolution_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetResolution_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetResolution_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetResolution", Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::UPMBlueprintLibrary_eventSetResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::UPMBlueprintLibrary_eventSetResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetResolution)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetResolution(Z_Param_WorldContextObject,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetResolution ********************************

// ********** Begin Class UUPMBlueprintLibrary Function SetResolutionScale *************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics
{
	struct UPMBlueprintLibrary_eventSetResolutionScale_Parms
	{
		const UObject* WorldContextObject;
		float Percentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the resolution scale percentage */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the resolution scale percentage" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetResolutionScale_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetResolutionScale_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::NewProp_Percentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetResolutionScale", Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::UPMBlueprintLibrary_eventSetResolutionScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::UPMBlueprintLibrary_eventSetResolutionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetResolutionScale)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Percentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetResolutionScale(Z_Param_WorldContextObject,Z_Param_Percentage);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetResolutionScale ***************************

// ********** Begin Class UUPMBlueprintLibrary Function SetShadowQuality ***************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics
{
	struct UPMBlueprintLibrary_eventSetShadowQuality_Parms
	{
		const UObject* WorldContextObject;
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetShadowQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetShadowQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetShadowQuality", Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::UPMBlueprintLibrary_eventSetShadowQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::UPMBlueprintLibrary_eventSetShadowQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetShadowQuality)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetShadowQuality(Z_Param_WorldContextObject,Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetShadowQuality *****************************

// ********** Begin Class UUPMBlueprintLibrary Function SetTextureQuality **************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics
{
	struct UPMBlueprintLibrary_eventSetTextureQuality_Parms
	{
		const UObject* WorldContextObject;
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== GRAPHICS - INDIVIDUAL ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== GRAPHICS - INDIVIDUAL ====================" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetTextureQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetTextureQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetTextureQuality", Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::UPMBlueprintLibrary_eventSetTextureQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::UPMBlueprintLibrary_eventSetTextureQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetTextureQuality)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetTextureQuality(Z_Param_WorldContextObject,Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetTextureQuality ****************************

// ********** Begin Class UUPMBlueprintLibrary Function SetViewDistanceQuality *********************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics
{
	struct UPMBlueprintLibrary_eventSetViewDistanceQuality_Parms
	{
		const UObject* WorldContextObject;
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetViewDistanceQuality_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetViewDistanceQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetViewDistanceQuality", Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::UPMBlueprintLibrary_eventSetViewDistanceQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::UPMBlueprintLibrary_eventSetViewDistanceQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetViewDistanceQuality)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetViewDistanceQuality(Z_Param_WorldContextObject,Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetViewDistanceQuality ***********************

// ********** Begin Class UUPMBlueprintLibrary Function SetVSync ***********************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics
{
	struct UPMBlueprintLibrary_eventSetVSync_Parms
	{
		const UObject* WorldContextObject;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets VSync enabled/disabled */" },
#endif
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets VSync enabled/disabled" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventSetVSync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMBlueprintLibrary_eventSetVSync_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMBlueprintLibrary_eventSetVSync_Parms), &Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "SetVSync", Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::UPMBlueprintLibrary_eventSetVSync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::UPMBlueprintLibrary_eventSetVSync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execSetVSync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::SetVSync(Z_Param_WorldContextObject,Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function SetVSync *************************************

// ********** Begin Class UUPMBlueprintLibrary Function StartBenchmark *****************************
struct Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics
{
	struct UPMBlueprintLibrary_eventStartBenchmark_Parms
	{
		const UObject* WorldContextObject;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Benchmark" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start a benchmark recording */" },
#endif
		{ "CPP_Default_Duration", "10.000000" },
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start a benchmark recording" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventStartBenchmark_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMBlueprintLibrary_eventStartBenchmark_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMBlueprintLibrary, nullptr, "StartBenchmark", Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::UPMBlueprintLibrary_eventStartBenchmark_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::UPMBlueprintLibrary_eventStartBenchmark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMBlueprintLibrary::execStartBenchmark)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUPMBlueprintLibrary::StartBenchmark(Z_Param_WorldContextObject,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UUPMBlueprintLibrary Function StartBenchmark *******************************

// ********** Begin Class UUPMBlueprintLibrary *****************************************************
void UUPMBlueprintLibrary::StaticRegisterNativesUUPMBlueprintLibrary()
{
	UClass* Class = UUPMBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyGraphicsSettings", &UUPMBlueprintLibrary::execApplyGraphicsSettings },
		{ "AutoDetectQualitySettings", &UUPMBlueprintLibrary::execAutoDetectQualitySettings },
		{ "EnablePerformanceMonitoring", &UUPMBlueprintLibrary::execEnablePerformanceMonitoring },
		{ "GetAverageFPS", &UUPMBlueprintLibrary::execGetAverageFPS },
		{ "GetBenchmarkResults", &UUPMBlueprintLibrary::execGetBenchmarkResults },
		{ "GetCurrentFPS", &UUPMBlueprintLibrary::execGetCurrentFPS },
		{ "GetCurrentQualitySettings", &UUPMBlueprintLibrary::execGetCurrentQualitySettings },
		{ "GetCurrentResolution", &UUPMBlueprintLibrary::execGetCurrentResolution },
		{ "GetFrameTimeMs", &UUPMBlueprintLibrary::execGetFrameTimeMs },
		{ "GetOverallQuality", &UUPMBlueprintLibrary::execGetOverallQuality },
		{ "GetPerformanceStats", &UUPMBlueprintLibrary::execGetPerformanceStats },
		{ "GetRecommendedSettings", &UUPMBlueprintLibrary::execGetRecommendedSettings },
		{ "GetSupportedResolutions", &UUPMBlueprintLibrary::execGetSupportedResolutions },
		{ "LoadGraphicsSettings", &UUPMBlueprintLibrary::execLoadGraphicsSettings },
		{ "ResetToDefaults", &UUPMBlueprintLibrary::execResetToDefaults },
		{ "SaveGraphicsSettings", &UUPMBlueprintLibrary::execSaveGraphicsSettings },
		{ "SetAntiAliasingQuality", &UUPMBlueprintLibrary::execSetAntiAliasingQuality },
		{ "SetEffectsQuality", &UUPMBlueprintLibrary::execSetEffectsQuality },
		{ "SetFrameRateLimit", &UUPMBlueprintLibrary::execSetFrameRateLimit },
		{ "SetFullscreenMode", &UUPMBlueprintLibrary::execSetFullscreenMode },
		{ "SetMonitoringMode", &UUPMBlueprintLibrary::execSetMonitoringMode },
		{ "SetOverallQuality", &UUPMBlueprintLibrary::execSetOverallQuality },
		{ "SetPostProcessQuality", &UUPMBlueprintLibrary::execSetPostProcessQuality },
		{ "SetResolution", &UUPMBlueprintLibrary::execSetResolution },
		{ "SetResolutionScale", &UUPMBlueprintLibrary::execSetResolutionScale },
		{ "SetShadowQuality", &UUPMBlueprintLibrary::execSetShadowQuality },
		{ "SetTextureQuality", &UUPMBlueprintLibrary::execSetTextureQuality },
		{ "SetViewDistanceQuality", &UUPMBlueprintLibrary::execSetViewDistanceQuality },
		{ "SetVSync", &UUPMBlueprintLibrary::execSetVSync },
		{ "StartBenchmark", &UUPMBlueprintLibrary::execStartBenchmark },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUPMBlueprintLibrary;
UClass* UUPMBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UUPMBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UUPMBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UPMBlueprintLibrary"),
			Z_Registration_Info_UClass_UUPMBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUUPMBlueprintLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UUPMBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UUPMBlueprintLibrary_NoRegister()
{
	return UUPMBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUPMBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UPMBlueprintLibrary - Static Blueprint-callable functions for all UPM functionality\n *\n * Provides convenient access to UPM features without needing to manually\n * get subsystem references in Blueprints.\n */" },
#endif
		{ "IncludePath", "UPMBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/UPMBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPMBlueprintLibrary - Static Blueprint-callable functions for all UPM functionality\n\nProvides convenient access to UPM features without needing to manually\nget subsystem references in Blueprints." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_ApplyGraphicsSettings, "ApplyGraphicsSettings" }, // 3302595621
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_AutoDetectQualitySettings, "AutoDetectQualitySettings" }, // 947402598
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_EnablePerformanceMonitoring, "EnablePerformanceMonitoring" }, // 2988288967
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_GetAverageFPS, "GetAverageFPS" }, // 2255910250
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_GetBenchmarkResults, "GetBenchmarkResults" }, // 3146094284
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentFPS, "GetCurrentFPS" }, // 2743210734
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentQualitySettings, "GetCurrentQualitySettings" }, // 1667174116
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_GetCurrentResolution, "GetCurrentResolution" }, // 1368052879
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_GetFrameTimeMs, "GetFrameTimeMs" }, // 1940082751
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_GetOverallQuality, "GetOverallQuality" }, // 243758300
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_GetPerformanceStats, "GetPerformanceStats" }, // 2842787446
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_GetRecommendedSettings, "GetRecommendedSettings" }, // 243412948
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_GetSupportedResolutions, "GetSupportedResolutions" }, // 3089263058
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_LoadGraphicsSettings, "LoadGraphicsSettings" }, // 2466839422
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_ResetToDefaults, "ResetToDefaults" }, // 742643100
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SaveGraphicsSettings, "SaveGraphicsSettings" }, // 1467567141
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetAntiAliasingQuality, "SetAntiAliasingQuality" }, // 3617050820
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetEffectsQuality, "SetEffectsQuality" }, // 1795863986
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetFrameRateLimit, "SetFrameRateLimit" }, // 3961120360
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetFullscreenMode, "SetFullscreenMode" }, // 1376288956
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetMonitoringMode, "SetMonitoringMode" }, // 2799045059
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetOverallQuality, "SetOverallQuality" }, // 2398979222
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetPostProcessQuality, "SetPostProcessQuality" }, // 2500118885
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolution, "SetResolution" }, // 3740834753
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetResolutionScale, "SetResolutionScale" }, // 2883633107
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetShadowQuality, "SetShadowQuality" }, // 2157890067
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetTextureQuality, "SetTextureQuality" }, // 3703102144
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetViewDistanceQuality, "SetViewDistanceQuality" }, // 969278941
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_SetVSync, "SetVSync" }, // 1334439020
		{ &Z_Construct_UFunction_UUPMBlueprintLibrary_StartBenchmark, "StartBenchmark" }, // 643868856
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPMBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUPMBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UPM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPMBlueprintLibrary_Statics::ClassParams = {
	&UUPMBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUPMBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUPMBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UUPMBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPMBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UUPMBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUPMBlueprintLibrary.OuterSingleton;
}
UUPMBlueprintLibrary::UUPMBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUPMBlueprintLibrary);
UUPMBlueprintLibrary::~UUPMBlueprintLibrary() {}
// ********** End Class UUPMBlueprintLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h__Script_UPM_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUPMBlueprintLibrary, UUPMBlueprintLibrary::StaticClass, TEXT("UUPMBlueprintLibrary"), &Z_Registration_Info_UClass_UUPMBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPMBlueprintLibrary), 3540004439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h__Script_UPM_1723687342(TEXT("/Script/UPM"),
	Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h__Script_UPM_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMBlueprintLibrary_h__Script_UPM_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
