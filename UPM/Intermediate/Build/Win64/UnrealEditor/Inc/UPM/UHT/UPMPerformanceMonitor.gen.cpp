// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UPMPerformanceMonitor.h"
#include "UPMTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUPMPerformanceMonitor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_UPM();
UPM_API UClass* Z_Construct_UClass_UUPMPerformanceMonitor();
UPM_API UClass* Z_Construct_UClass_UUPMPerformanceMonitor_NoRegister();
UPM_API UEnum* Z_Construct_UEnum_UPM_EUPMMonitoringMode();
UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature();
UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature();
UPM_API UScriptStruct* Z_Construct_UScriptStruct_FUPMBenchmarkResults();
UPM_API UScriptStruct* Z_Construct_UScriptStruct_FUPMPerformanceStats();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUPMPerformanceMonitor Function GetAvailableMemoryMB *********************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics
{
	struct UPMPerformanceMonitor_eventGetAvailableMemoryMB_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get available physical memory in MB */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get available physical memory in MB" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetAvailableMemoryMB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetAvailableMemoryMB", Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::UPMPerformanceMonitor_eventGetAvailableMemoryMB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::UPMPerformanceMonitor_eventGetAvailableMemoryMB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetAvailableMemoryMB)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetAvailableMemoryMB();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetAvailableMemoryMB ***********************

// ********** Begin Class UUPMPerformanceMonitor Function GetAverageFPS ****************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics
{
	struct UPMPerformanceMonitor_eventGetAverageFPS_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get average FPS over the sample window */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get average FPS over the sample window" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetAverageFPS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetAverageFPS", Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::UPMPerformanceMonitor_eventGetAverageFPS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::UPMPerformanceMonitor_eventGetAverageFPS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetAverageFPS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAverageFPS();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetAverageFPS ******************************

// ********** Begin Class UUPMPerformanceMonitor Function GetBenchmarkResults **********************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics
{
	struct UPMPerformanceMonitor_eventGetBenchmarkResults_Parms
	{
		FUPMBenchmarkResults ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Benchmark" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get benchmark results (valid after benchmark completes) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get benchmark results (valid after benchmark completes)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetBenchmarkResults_Parms, ReturnValue), Z_Construct_UScriptStruct_FUPMBenchmarkResults, METADATA_PARAMS(0, nullptr) }; // 2573232789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetBenchmarkResults", Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::UPMPerformanceMonitor_eventGetBenchmarkResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::UPMPerformanceMonitor_eventGetBenchmarkResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetBenchmarkResults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUPMBenchmarkResults*)Z_Param__Result=P_THIS->GetBenchmarkResults();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetBenchmarkResults ************************

// ********** Begin Class UUPMPerformanceMonitor Function GetCurrentFPS ****************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics
{
	struct UPMPerformanceMonitor_eventGetCurrentFPS_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get current FPS */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get current FPS" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetCurrentFPS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetCurrentFPS", Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::UPMPerformanceMonitor_eventGetCurrentFPS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::UPMPerformanceMonitor_eventGetCurrentFPS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetCurrentFPS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentFPS();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetCurrentFPS ******************************

// ********** Begin Class UUPMPerformanceMonitor Function GetCurrentStats **************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics
{
	struct UPMPerformanceMonitor_eventGetCurrentStats_Parms
	{
		FUPMPerformanceStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get all current performance stats */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all current performance stats" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetCurrentStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FUPMPerformanceStats, METADATA_PARAMS(0, nullptr) }; // 587567735
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetCurrentStats", Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::UPMPerformanceMonitor_eventGetCurrentStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::UPMPerformanceMonitor_eventGetCurrentStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetCurrentStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUPMPerformanceStats*)Z_Param__Result=P_THIS->GetCurrentStats();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetCurrentStats ****************************

// ********** Begin Class UUPMPerformanceMonitor Function GetFPSHistory ****************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics
{
	struct UPMPerformanceMonitor_eventGetFPSHistory_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the FPS history for graphing */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the FPS history for graphing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetFPSHistory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetFPSHistory", Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::UPMPerformanceMonitor_eventGetFPSHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::UPMPerformanceMonitor_eventGetFPSHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetFPSHistory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetFPSHistory();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetFPSHistory ******************************

// ********** Begin Class UUPMPerformanceMonitor Function GetFrameTimeMs ***************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics
{
	struct UPMPerformanceMonitor_eventGetFrameTimeMs_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get current frame time in milliseconds */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get current frame time in milliseconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetFrameTimeMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetFrameTimeMs", Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::UPMPerformanceMonitor_eventGetFrameTimeMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::UPMPerformanceMonitor_eventGetFrameTimeMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetFrameTimeMs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFrameTimeMs();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetFrameTimeMs *****************************

// ********** Begin Class UUPMPerformanceMonitor Function GetGameThreadMs **************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics
{
	struct UPMPerformanceMonitor_eventGetGameThreadMs_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get game thread time in milliseconds */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get game thread time in milliseconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetGameThreadMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetGameThreadMs", Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::UPMPerformanceMonitor_eventGetGameThreadMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::UPMPerformanceMonitor_eventGetGameThreadMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetGameThreadMs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGameThreadMs();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetGameThreadMs ****************************

// ********** Begin Class UUPMPerformanceMonitor Function GetGPUTimeMs *****************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics
{
	struct UPMPerformanceMonitor_eventGetGPUTimeMs_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get GPU time in milliseconds (if available) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get GPU time in milliseconds (if available)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetGPUTimeMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetGPUTimeMs", Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::UPMPerformanceMonitor_eventGetGPUTimeMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::UPMPerformanceMonitor_eventGetGPUTimeMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetGPUTimeMs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGPUTimeMs();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetGPUTimeMs *******************************

// ********** Begin Class UUPMPerformanceMonitor Function GetMaxFPS ********************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics
{
	struct UPMPerformanceMonitor_eventGetMaxFPS_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get maximum FPS in the sample window */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get maximum FPS in the sample window" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetMaxFPS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetMaxFPS", Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::UPMPerformanceMonitor_eventGetMaxFPS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::UPMPerformanceMonitor_eventGetMaxFPS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetMaxFPS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxFPS();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetMaxFPS **********************************

// ********** Begin Class UUPMPerformanceMonitor Function GetMinFPS ********************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics
{
	struct UPMPerformanceMonitor_eventGetMinFPS_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get minimum FPS in the sample window */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get minimum FPS in the sample window" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetMinFPS_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetMinFPS", Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::UPMPerformanceMonitor_eventGetMinFPS_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::UPMPerformanceMonitor_eventGetMinFPS_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetMinFPS)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMinFPS();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetMinFPS **********************************

// ********** Begin Class UUPMPerformanceMonitor Function GetMonitoringMode ************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics
{
	struct UPMPerformanceMonitor_eventGetMonitoringMode_Parms
	{
		EUPMMonitoringMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetMonitoringMode_Parms, ReturnValue), Z_Construct_UEnum_UPM_EUPMMonitoringMode, METADATA_PARAMS(0, nullptr) }; // 2561663259
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetMonitoringMode", Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::UPMPerformanceMonitor_eventGetMonitoringMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::UPMPerformanceMonitor_eventGetMonitoringMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetMonitoringMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EUPMMonitoringMode*)Z_Param__Result=P_THIS->GetMonitoringMode();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetMonitoringMode **************************

// ********** Begin Class UUPMPerformanceMonitor Function GetRenderThreadMs ************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics
{
	struct UPMPerformanceMonitor_eventGetRenderThreadMs_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get render thread time in milliseconds */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get render thread time in milliseconds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetRenderThreadMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetRenderThreadMs", Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::UPMPerformanceMonitor_eventGetRenderThreadMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::UPMPerformanceMonitor_eventGetRenderThreadMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetRenderThreadMs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRenderThreadMs();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetRenderThreadMs **************************

// ********** Begin Class UUPMPerformanceMonitor Function GetUsedMemoryMB **************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics
{
	struct UPMPerformanceMonitor_eventGetUsedMemoryMB_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get used physical memory in MB */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get used physical memory in MB" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventGetUsedMemoryMB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "GetUsedMemoryMB", Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::UPMPerformanceMonitor_eventGetUsedMemoryMB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::UPMPerformanceMonitor_eventGetUsedMemoryMB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execGetUsedMemoryMB)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetUsedMemoryMB();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function GetUsedMemoryMB ****************************

// ********** Begin Class UUPMPerformanceMonitor Function IsBenchmarkRunning ***********************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics
{
	struct UPMPerformanceMonitor_eventIsBenchmarkRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Benchmark" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if benchmark is running */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if benchmark is running" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMPerformanceMonitor_eventIsBenchmarkRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMPerformanceMonitor_eventIsBenchmarkRunning_Parms), &Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "IsBenchmarkRunning", Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::UPMPerformanceMonitor_eventIsBenchmarkRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::UPMPerformanceMonitor_eventIsBenchmarkRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execIsBenchmarkRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBenchmarkRunning();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function IsBenchmarkRunning *************************

// ********** Begin Class UUPMPerformanceMonitor Function IsMonitoringEnabled **********************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics
{
	struct UPMPerformanceMonitor_eventIsMonitoringEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMPerformanceMonitor_eventIsMonitoringEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMPerformanceMonitor_eventIsMonitoringEnabled_Parms), &Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "IsMonitoringEnabled", Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::UPMPerformanceMonitor_eventIsMonitoringEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::UPMPerformanceMonitor_eventIsMonitoringEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execIsMonitoringEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMonitoringEnabled();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function IsMonitoringEnabled ************************

// ********** Begin Class UUPMPerformanceMonitor Function SetMonitoringEnabled *********************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics
{
	struct UPMPerformanceMonitor_eventSetMonitoringEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable performance monitoring */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable performance monitoring" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMPerformanceMonitor_eventSetMonitoringEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMPerformanceMonitor_eventSetMonitoringEnabled_Parms), &Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "SetMonitoringEnabled", Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::UPMPerformanceMonitor_eventSetMonitoringEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::UPMPerformanceMonitor_eventSetMonitoringEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execSetMonitoringEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMonitoringEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function SetMonitoringEnabled ***********************

// ********** Begin Class UUPMPerformanceMonitor Function SetMonitoringMode ************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics
{
	struct UPMPerformanceMonitor_eventSetMonitoringMode_Parms
	{
		EUPMMonitoringMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the monitoring mode */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the monitoring mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventSetMonitoringMode_Parms, Mode), Z_Construct_UEnum_UPM_EUPMMonitoringMode, METADATA_PARAMS(0, nullptr) }; // 2561663259
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "SetMonitoringMode", Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::UPMPerformanceMonitor_eventSetMonitoringMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::UPMPerformanceMonitor_eventSetMonitoringMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execSetMonitoringMode)
{
	P_GET_ENUM(EUPMMonitoringMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMonitoringMode(EUPMMonitoringMode(Z_Param_Mode));
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function SetMonitoringMode **************************

// ********** Begin Class UUPMPerformanceMonitor Function SetSampleHistorySize *********************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics
{
	struct UPMPerformanceMonitor_eventSetSampleHistorySize_Parms
	{
		int32 Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the sample history size (default 300 = ~5 seconds at 60fps) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the sample history size (default 300 = ~5 seconds at 60fps)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventSetSampleHistorySize_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "SetSampleHistorySize", Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::UPMPerformanceMonitor_eventSetSampleHistorySize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::UPMPerformanceMonitor_eventSetSampleHistorySize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execSetSampleHistorySize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSampleHistorySize(Z_Param_Size);
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function SetSampleHistorySize ***********************

// ********** Begin Class UUPMPerformanceMonitor Function StartBenchmark ***************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics
{
	struct UPMPerformanceMonitor_eventStartBenchmark_Parms
	{
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Benchmark" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start a benchmark recording for specified duration */" },
#endif
		{ "CPP_Default_Duration", "10.000000" },
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start a benchmark recording for specified duration" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMPerformanceMonitor_eventStartBenchmark_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "StartBenchmark", Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::UPMPerformanceMonitor_eventStartBenchmark_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::UPMPerformanceMonitor_eventStartBenchmark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execStartBenchmark)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartBenchmark(Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function StartBenchmark *****************************

// ********** Begin Class UUPMPerformanceMonitor Function StopBenchmark ****************************
struct Z_Construct_UFunction_UUPMPerformanceMonitor_StopBenchmark_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Benchmark" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop the benchmark early */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop the benchmark early" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMPerformanceMonitor_StopBenchmark_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMPerformanceMonitor, nullptr, "StopBenchmark", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMPerformanceMonitor_StopBenchmark_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMPerformanceMonitor_StopBenchmark_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMPerformanceMonitor_StopBenchmark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMPerformanceMonitor_StopBenchmark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMPerformanceMonitor::execStopBenchmark)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopBenchmark();
	P_NATIVE_END;
}
// ********** End Class UUPMPerformanceMonitor Function StopBenchmark ******************************

// ********** Begin Class UUPMPerformanceMonitor ***************************************************
void UUPMPerformanceMonitor::StaticRegisterNativesUUPMPerformanceMonitor()
{
	UClass* Class = UUPMPerformanceMonitor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvailableMemoryMB", &UUPMPerformanceMonitor::execGetAvailableMemoryMB },
		{ "GetAverageFPS", &UUPMPerformanceMonitor::execGetAverageFPS },
		{ "GetBenchmarkResults", &UUPMPerformanceMonitor::execGetBenchmarkResults },
		{ "GetCurrentFPS", &UUPMPerformanceMonitor::execGetCurrentFPS },
		{ "GetCurrentStats", &UUPMPerformanceMonitor::execGetCurrentStats },
		{ "GetFPSHistory", &UUPMPerformanceMonitor::execGetFPSHistory },
		{ "GetFrameTimeMs", &UUPMPerformanceMonitor::execGetFrameTimeMs },
		{ "GetGameThreadMs", &UUPMPerformanceMonitor::execGetGameThreadMs },
		{ "GetGPUTimeMs", &UUPMPerformanceMonitor::execGetGPUTimeMs },
		{ "GetMaxFPS", &UUPMPerformanceMonitor::execGetMaxFPS },
		{ "GetMinFPS", &UUPMPerformanceMonitor::execGetMinFPS },
		{ "GetMonitoringMode", &UUPMPerformanceMonitor::execGetMonitoringMode },
		{ "GetRenderThreadMs", &UUPMPerformanceMonitor::execGetRenderThreadMs },
		{ "GetUsedMemoryMB", &UUPMPerformanceMonitor::execGetUsedMemoryMB },
		{ "IsBenchmarkRunning", &UUPMPerformanceMonitor::execIsBenchmarkRunning },
		{ "IsMonitoringEnabled", &UUPMPerformanceMonitor::execIsMonitoringEnabled },
		{ "SetMonitoringEnabled", &UUPMPerformanceMonitor::execSetMonitoringEnabled },
		{ "SetMonitoringMode", &UUPMPerformanceMonitor::execSetMonitoringMode },
		{ "SetSampleHistorySize", &UUPMPerformanceMonitor::execSetSampleHistorySize },
		{ "StartBenchmark", &UUPMPerformanceMonitor::execStartBenchmark },
		{ "StopBenchmark", &UUPMPerformanceMonitor::execStopBenchmark },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUPMPerformanceMonitor;
UClass* UUPMPerformanceMonitor::GetPrivateStaticClass()
{
	using TClass = UUPMPerformanceMonitor;
	if (!Z_Registration_Info_UClass_UUPMPerformanceMonitor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UPMPerformanceMonitor"),
			Z_Registration_Info_UClass_UUPMPerformanceMonitor.InnerSingleton,
			StaticRegisterNativesUUPMPerformanceMonitor,
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
	return Z_Registration_Info_UClass_UUPMPerformanceMonitor.InnerSingleton;
}
UClass* Z_Construct_UClass_UUPMPerformanceMonitor_NoRegister()
{
	return UUPMPerformanceMonitor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUPMPerformanceMonitor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UPMPerformanceMonitor - Real-time performance statistics\n *\n * Provides shipping-safe performance metrics including FPS, frame times,\n * thread times, and memory usage. Supports different monitoring modes\n * and optional benchmark recording.\n */" },
#endif
		{ "IncludePath", "UPMPerformanceMonitor.h" },
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPMPerformanceMonitor - Real-time performance statistics\n\nProvides shipping-safe performance metrics including FPS, frame times,\nthread times, and memory usage. Supports different monitoring modes\nand optional benchmark recording." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFPSUpdated_MetaData[] = {
		{ "Category", "UPM|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called every frame when monitoring (for UI updates) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every frame when monitoring (for UI updates)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBenchmarkComplete_MetaData[] = {
		{ "Category", "UPM|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when benchmark completes */" },
#endif
		{ "ModuleRelativePath", "Public/UPMPerformanceMonitor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when benchmark completes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFPSUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBenchmarkComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetAvailableMemoryMB, "GetAvailableMemoryMB" }, // 2333747000
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetAverageFPS, "GetAverageFPS" }, // 674401206
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetBenchmarkResults, "GetBenchmarkResults" }, // 1189802181
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentFPS, "GetCurrentFPS" }, // 217952111
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetCurrentStats, "GetCurrentStats" }, // 2327107695
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetFPSHistory, "GetFPSHistory" }, // 2974999999
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetFrameTimeMs, "GetFrameTimeMs" }, // 493548753
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetGameThreadMs, "GetGameThreadMs" }, // 2961513451
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetGPUTimeMs, "GetGPUTimeMs" }, // 2005657781
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetMaxFPS, "GetMaxFPS" }, // 4215045001
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetMinFPS, "GetMinFPS" }, // 165357918
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetMonitoringMode, "GetMonitoringMode" }, // 2796188713
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetRenderThreadMs, "GetRenderThreadMs" }, // 2694580086
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_GetUsedMemoryMB, "GetUsedMemoryMB" }, // 2038841299
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_IsBenchmarkRunning, "IsBenchmarkRunning" }, // 3557112702
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_IsMonitoringEnabled, "IsMonitoringEnabled" }, // 1611223188
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringEnabled, "SetMonitoringEnabled" }, // 131739417
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_SetMonitoringMode, "SetMonitoringMode" }, // 838576109
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_SetSampleHistorySize, "SetSampleHistorySize" }, // 2115780958
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_StartBenchmark, "StartBenchmark" }, // 96972839
		{ &Z_Construct_UFunction_UUPMPerformanceMonitor_StopBenchmark, "StopBenchmark" }, // 3716146587
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPMPerformanceMonitor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUPMPerformanceMonitor_Statics::NewProp_OnFPSUpdated = { "OnFPSUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMPerformanceMonitor, OnFPSUpdated), Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFPSUpdated_MetaData), NewProp_OnFPSUpdated_MetaData) }; // 398109949
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUPMPerformanceMonitor_Statics::NewProp_OnBenchmarkComplete = { "OnBenchmarkComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMPerformanceMonitor, OnBenchmarkComplete), Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBenchmarkComplete_MetaData), NewProp_OnBenchmarkComplete_MetaData) }; // 1867545874
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPMPerformanceMonitor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMPerformanceMonitor_Statics::NewProp_OnFPSUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMPerformanceMonitor_Statics::NewProp_OnBenchmarkComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMPerformanceMonitor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUPMPerformanceMonitor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UPM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMPerformanceMonitor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPMPerformanceMonitor_Statics::ClassParams = {
	&UUPMPerformanceMonitor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUPMPerformanceMonitor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUPMPerformanceMonitor_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMPerformanceMonitor_Statics::Class_MetaDataParams), Z_Construct_UClass_UUPMPerformanceMonitor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUPMPerformanceMonitor()
{
	if (!Z_Registration_Info_UClass_UUPMPerformanceMonitor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPMPerformanceMonitor.OuterSingleton, Z_Construct_UClass_UUPMPerformanceMonitor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUPMPerformanceMonitor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUPMPerformanceMonitor);
UUPMPerformanceMonitor::~UUPMPerformanceMonitor() {}
// ********** End Class UUPMPerformanceMonitor *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h__Script_UPM_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUPMPerformanceMonitor, UUPMPerformanceMonitor::StaticClass, TEXT("UUPMPerformanceMonitor"), &Z_Registration_Info_UClass_UUPMPerformanceMonitor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPMPerformanceMonitor), 1449368331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h__Script_UPM_2598401562(TEXT("/Script/UPM"),
	Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h__Script_UPM_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h__Script_UPM_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
