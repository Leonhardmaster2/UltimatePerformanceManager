// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UPMGraphicsManager.h"
#include "UPMTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUPMGraphicsManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
UPackage* Z_Construct_UPackage__Script_UPM();
UPM_API UClass* Z_Construct_UClass_UUPMGraphicsManager();
UPM_API UClass* Z_Construct_UClass_UUPMGraphicsManager_NoRegister();
UPM_API UScriptStruct* Z_Construct_UScriptStruct_FUPMQualityPreset();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUPMGraphicsManager Function ApplyPreset *********************************
struct Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics
{
	struct UPMGraphicsManager_eventApplyPreset_Parms
	{
		FUPMQualityPreset Preset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Presets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies a quality preset */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies a quality preset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventApplyPreset_Parms, Preset), Z_Construct_UScriptStruct_FUPMQualityPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) }; // 298657846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::NewProp_Preset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "ApplyPreset", Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::UPMGraphicsManager_eventApplyPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::UPMGraphicsManager_eventApplyPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execApplyPreset)
{
	P_GET_STRUCT_REF(FUPMQualityPreset,Z_Param_Out_Preset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyPreset(Z_Param_Out_Preset);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function ApplyPreset ***********************************

// ********** Begin Class UUPMGraphicsManager Function ApplySettings *******************************
struct Z_Construct_UFunction_UUPMGraphicsManager_ApplySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Apply all pending settings changes */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply all pending settings changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_ApplySettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "ApplySettings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_ApplySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_ApplySettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_ApplySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_ApplySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execApplySettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySettings();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function ApplySettings *********************************

// ********** Begin Class UUPMGraphicsManager Function AutoDetectQuality ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_AutoDetectQuality_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto-detect optimal quality based on hardware */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto-detect optimal quality based on hardware" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_AutoDetectQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "AutoDetectQuality", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_AutoDetectQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_AutoDetectQuality_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_AutoDetectQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_AutoDetectQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execAutoDetectQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AutoDetectQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function AutoDetectQuality *****************************

// ********** Begin Class UUPMGraphicsManager Function GetAntiAliasingQuality **********************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics
{
	struct UPMGraphicsManager_eventGetAntiAliasingQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetAntiAliasingQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetAntiAliasingQuality", Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::UPMGraphicsManager_eventGetAntiAliasingQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::UPMGraphicsManager_eventGetAntiAliasingQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetAntiAliasingQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAntiAliasingQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetAntiAliasingQuality ************************

// ********** Begin Class UUPMGraphicsManager Function GetCurrentSettingsAsPreset ******************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics
{
	struct UPMGraphicsManager_eventGetCurrentSettingsAsPreset_Parms
	{
		FUPMQualityPreset ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Presets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current settings as a preset */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current settings as a preset" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetCurrentSettingsAsPreset_Parms, ReturnValue), Z_Construct_UScriptStruct_FUPMQualityPreset, METADATA_PARAMS(0, nullptr) }; // 298657846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetCurrentSettingsAsPreset", Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::UPMGraphicsManager_eventGetCurrentSettingsAsPreset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::UPMGraphicsManager_eventGetCurrentSettingsAsPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetCurrentSettingsAsPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUPMQualityPreset*)Z_Param__Result=P_THIS->GetCurrentSettingsAsPreset();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetCurrentSettingsAsPreset ********************

// ********** Begin Class UUPMGraphicsManager Function GetEffectsQuality ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics
{
	struct UPMGraphicsManager_eventGetEffectsQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetEffectsQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetEffectsQuality", Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::UPMGraphicsManager_eventGetEffectsQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::UPMGraphicsManager_eventGetEffectsQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetEffectsQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetEffectsQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetEffectsQuality *****************************

// ********** Begin Class UUPMGraphicsManager Function GetFoliageQuality ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics
{
	struct UPMGraphicsManager_eventGetFoliageQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetFoliageQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetFoliageQuality", Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::UPMGraphicsManager_eventGetFoliageQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::UPMGraphicsManager_eventGetFoliageQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetFoliageQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFoliageQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetFoliageQuality *****************************

// ********** Begin Class UUPMGraphicsManager Function GetFrameRateLimit ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics
{
	struct UPMGraphicsManager_eventGetFrameRateLimit_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetFrameRateLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetFrameRateLimit", Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::UPMGraphicsManager_eventGetFrameRateLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::UPMGraphicsManager_eventGetFrameRateLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetFrameRateLimit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetFrameRateLimit *****************************

// ********** Begin Class UUPMGraphicsManager Function GetFullscreenMode ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics
{
	struct UPMGraphicsManager_eventGetFullscreenMode_Parms
	{
		TEnumAsByte<EWindowMode::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetFullscreenMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(0, nullptr) }; // 3411615937
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetFullscreenMode", Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::UPMGraphicsManager_eventGetFullscreenMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::UPMGraphicsManager_eventGetFullscreenMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetFullscreenMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=P_THIS->GetFullscreenMode();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetFullscreenMode *****************************

// ********** Begin Class UUPMGraphicsManager Function GetGlobalIlluminationQuality ****************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics
{
	struct UPMGraphicsManager_eventGetGlobalIlluminationQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetGlobalIlluminationQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetGlobalIlluminationQuality", Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::UPMGraphicsManager_eventGetGlobalIlluminationQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::UPMGraphicsManager_eventGetGlobalIlluminationQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetGlobalIlluminationQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGlobalIlluminationQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetGlobalIlluminationQuality ******************

// ********** Begin Class UUPMGraphicsManager Function GetOverallQuality ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics
{
	struct UPMGraphicsManager_eventGetOverallQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current overall quality level */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current overall quality level" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetOverallQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetOverallQuality", Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::UPMGraphicsManager_eventGetOverallQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::UPMGraphicsManager_eventGetOverallQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetOverallQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetOverallQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetOverallQuality *****************************

// ********** Begin Class UUPMGraphicsManager Function GetPostProcessQuality ***********************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics
{
	struct UPMGraphicsManager_eventGetPostProcessQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetPostProcessQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetPostProcessQuality", Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::UPMGraphicsManager_eventGetPostProcessQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::UPMGraphicsManager_eventGetPostProcessQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetPostProcessQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPostProcessQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetPostProcessQuality *************************

// ********** Begin Class UUPMGraphicsManager Function GetPresetByLevel ****************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics
{
	struct UPMGraphicsManager_eventGetPresetByLevel_Parms
	{
		int32 Level;
		FUPMQualityPreset ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Presets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets a preset by quality level (0=Low, 1=Medium, 2=High, 3=Ultra, 4=Cinematic) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a preset by quality level (0=Low, 1=Medium, 2=High, 3=Ultra, 4=Cinematic)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetPresetByLevel_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetPresetByLevel_Parms, ReturnValue), Z_Construct_UScriptStruct_FUPMQualityPreset, METADATA_PARAMS(0, nullptr) }; // 298657846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetPresetByLevel", Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::UPMGraphicsManager_eventGetPresetByLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::UPMGraphicsManager_eventGetPresetByLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetPresetByLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FUPMQualityPreset*)Z_Param__Result=P_THIS->GetPresetByLevel(Z_Param_Level);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetPresetByLevel ******************************

// ********** Begin Class UUPMGraphicsManager Function GetReflectionQuality ************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics
{
	struct UPMGraphicsManager_eventGetReflectionQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetReflectionQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetReflectionQuality", Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::UPMGraphicsManager_eventGetReflectionQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::UPMGraphicsManager_eventGetReflectionQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetReflectionQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetReflectionQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetReflectionQuality **************************

// ********** Begin Class UUPMGraphicsManager Function GetResolutionScale **************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics
{
	struct UPMGraphicsManager_eventGetResolutionScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetResolutionScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetResolutionScale", Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::UPMGraphicsManager_eventGetResolutionScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::UPMGraphicsManager_eventGetResolutionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetResolutionScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetResolutionScale();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetResolutionScale ****************************

// ********** Begin Class UUPMGraphicsManager Function GetScreenResolution *************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics
{
	struct UPMGraphicsManager_eventGetScreenResolution_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetScreenResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetScreenResolution", Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::UPMGraphicsManager_eventGetScreenResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::UPMGraphicsManager_eventGetScreenResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetScreenResolution)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetScreenResolution();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetScreenResolution ***************************

// ********** Begin Class UUPMGraphicsManager Function GetShadingQuality ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics
{
	struct UPMGraphicsManager_eventGetShadingQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetShadingQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetShadingQuality", Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::UPMGraphicsManager_eventGetShadingQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::UPMGraphicsManager_eventGetShadingQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetShadingQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetShadingQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetShadingQuality *****************************

// ********** Begin Class UUPMGraphicsManager Function GetShadowQuality ****************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics
{
	struct UPMGraphicsManager_eventGetShadowQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetShadowQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetShadowQuality", Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::UPMGraphicsManager_eventGetShadowQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::UPMGraphicsManager_eventGetShadowQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetShadowQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetShadowQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetShadowQuality ******************************

// ********** Begin Class UUPMGraphicsManager Function GetSupportedResolutions *********************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics
{
	struct UPMGraphicsManager_eventGetSupportedResolutions_Parms
	{
		TArray<FIntPoint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets all supported fullscreen resolutions */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets all supported fullscreen resolutions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetSupportedResolutions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetSupportedResolutions", Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::UPMGraphicsManager_eventGetSupportedResolutions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::UPMGraphicsManager_eventGetSupportedResolutions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetSupportedResolutions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntPoint>*)Z_Param__Result=P_THIS->GetSupportedResolutions();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetSupportedResolutions ***********************

// ********** Begin Class UUPMGraphicsManager Function GetTextureQuality ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics
{
	struct UPMGraphicsManager_eventGetTextureQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetTextureQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetTextureQuality", Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::UPMGraphicsManager_eventGetTextureQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::UPMGraphicsManager_eventGetTextureQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetTextureQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTextureQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetTextureQuality *****************************

// ********** Begin Class UUPMGraphicsManager Function GetViewDistanceQuality **********************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics
{
	struct UPMGraphicsManager_eventGetViewDistanceQuality_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventGetViewDistanceQuality_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetViewDistanceQuality", Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::UPMGraphicsManager_eventGetViewDistanceQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::UPMGraphicsManager_eventGetViewDistanceQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetViewDistanceQuality)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetViewDistanceQuality();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetViewDistanceQuality ************************

// ********** Begin Class UUPMGraphicsManager Function GetVSyncEnabled *****************************
struct Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics
{
	struct UPMGraphicsManager_eventGetVSyncEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMGraphicsManager_eventGetVSyncEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMGraphicsManager_eventGetVSyncEnabled_Parms), &Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "GetVSyncEnabled", Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::UPMGraphicsManager_eventGetVSyncEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::UPMGraphicsManager_eventGetVSyncEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execGetVSyncEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetVSyncEnabled();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function GetVSyncEnabled *******************************

// ********** Begin Class UUPMGraphicsManager Function HasPendingChanges ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics
{
	struct UPMGraphicsManager_eventHasPendingChanges_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if settings have been modified but not applied */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if settings have been modified but not applied" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMGraphicsManager_eventHasPendingChanges_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMGraphicsManager_eventHasPendingChanges_Parms), &Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "HasPendingChanges", Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::UPMGraphicsManager_eventHasPendingChanges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::UPMGraphicsManager_eventHasPendingChanges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execHasPendingChanges)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasPendingChanges();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function HasPendingChanges *****************************

// ********** Begin Class UUPMGraphicsManager Function ResetToDefaults *****************************
struct Z_Construct_UFunction_UUPMGraphicsManager_ResetToDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset to engine defaults */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset to engine defaults" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_ResetToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "ResetToDefaults", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_ResetToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_ResetToDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_ResetToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_ResetToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execResetToDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefaults();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function ResetToDefaults *******************************

// ********** Begin Class UUPMGraphicsManager Function SaveSettings ********************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SaveSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Save settings to disk */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save settings to disk" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SaveSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SaveSettings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SaveSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SaveSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SaveSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SaveSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSaveSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveSettings();
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SaveSettings **********************************

// ********** Begin Class UUPMGraphicsManager Function SetAntiAliasingQuality **********************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics
{
	struct UPMGraphicsManager_eventSetAntiAliasingQuality_Parms
	{
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets anti-aliasing quality (0-4) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets anti-aliasing quality (0-4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetAntiAliasingQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetAntiAliasingQuality", Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::UPMGraphicsManager_eventSetAntiAliasingQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::UPMGraphicsManager_eventSetAntiAliasingQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetAntiAliasingQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAntiAliasingQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetAntiAliasingQuality ************************

// ********** Begin Class UUPMGraphicsManager Function SetEffectsQuality ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics
{
	struct UPMGraphicsManager_eventSetEffectsQuality_Parms
	{
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets visual effects quality (0-4) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets visual effects quality (0-4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetEffectsQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetEffectsQuality", Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::UPMGraphicsManager_eventSetEffectsQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::UPMGraphicsManager_eventSetEffectsQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetEffectsQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEffectsQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetEffectsQuality *****************************

// ********** Begin Class UUPMGraphicsManager Function SetFoliageQuality ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics
{
	struct UPMGraphicsManager_eventSetFoliageQuality_Parms
	{
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets foliage quality (0-4) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets foliage quality (0-4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetFoliageQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetFoliageQuality", Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::UPMGraphicsManager_eventSetFoliageQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::UPMGraphicsManager_eventSetFoliageQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetFoliageQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFoliageQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetFoliageQuality *****************************

// ********** Begin Class UUPMGraphicsManager Function SetFrameRateLimit ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics
{
	struct UPMGraphicsManager_eventSetFrameRateLimit_Parms
	{
		float Limit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the frame rate limit (0 = unlimited) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the frame rate limit (0 = unlimited)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetFrameRateLimit_Parms, Limit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetFrameRateLimit", Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::UPMGraphicsManager_eventSetFrameRateLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::UPMGraphicsManager_eventSetFrameRateLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetFrameRateLimit)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Limit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRateLimit(Z_Param_Limit);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetFrameRateLimit *****************************

// ********** Begin Class UUPMGraphicsManager Function SetFullscreenMode ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics
{
	struct UPMGraphicsManager_eventSetFullscreenMode_Parms
	{
		TEnumAsByte<EWindowMode::Type> Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the fullscreen mode */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the fullscreen mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetFullscreenMode_Parms, Mode), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(0, nullptr) }; // 3411615937
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetFullscreenMode", Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::UPMGraphicsManager_eventSetFullscreenMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::UPMGraphicsManager_eventSetFullscreenMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetFullscreenMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFullscreenMode(EWindowMode::Type(Z_Param_Mode));
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetFullscreenMode *****************************

// ********** Begin Class UUPMGraphicsManager Function SetGlobalIlluminationQuality ****************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics
{
	struct UPMGraphicsManager_eventSetGlobalIlluminationQuality_Parms
	{
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets global illumination quality (0-4) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets global illumination quality (0-4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetGlobalIlluminationQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetGlobalIlluminationQuality", Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::UPMGraphicsManager_eventSetGlobalIlluminationQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::UPMGraphicsManager_eventSetGlobalIlluminationQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetGlobalIlluminationQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGlobalIlluminationQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetGlobalIlluminationQuality ******************

// ********** Begin Class UUPMGraphicsManager Function SetOverallQuality ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics
{
	struct UPMGraphicsManager_eventSetOverallQuality_Parms
	{
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the overall scalability level (0-4: Low to Cinematic) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the overall scalability level (0-4: Low to Cinematic)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetOverallQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetOverallQuality", Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::UPMGraphicsManager_eventSetOverallQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::UPMGraphicsManager_eventSetOverallQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetOverallQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverallQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetOverallQuality *****************************

// ********** Begin Class UUPMGraphicsManager Function SetPostProcessQuality ***********************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics
{
	struct UPMGraphicsManager_eventSetPostProcessQuality_Parms
	{
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets post-processing quality (0-4) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets post-processing quality (0-4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetPostProcessQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetPostProcessQuality", Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::UPMGraphicsManager_eventSetPostProcessQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::UPMGraphicsManager_eventSetPostProcessQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetPostProcessQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPostProcessQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetPostProcessQuality *************************

// ********** Begin Class UUPMGraphicsManager Function SetReflectionQuality ************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics
{
	struct UPMGraphicsManager_eventSetReflectionQuality_Parms
	{
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets reflection quality (0-4) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets reflection quality (0-4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetReflectionQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetReflectionQuality", Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::UPMGraphicsManager_eventSetReflectionQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::UPMGraphicsManager_eventSetReflectionQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetReflectionQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReflectionQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetReflectionQuality **************************

// ********** Begin Class UUPMGraphicsManager Function SetResolutionScale **************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics
{
	struct UPMGraphicsManager_eventSetResolutionScale_Parms
	{
		float Percentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the resolution scale (0-100%) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the resolution scale (0-100%)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetResolutionScale_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::NewProp_Percentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetResolutionScale", Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::UPMGraphicsManager_eventSetResolutionScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::UPMGraphicsManager_eventSetResolutionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetResolutionScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Percentage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetResolutionScale(Z_Param_Percentage);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetResolutionScale ****************************

// ********** Begin Class UUPMGraphicsManager Function SetScreenResolution *************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics
{
	struct UPMGraphicsManager_eventSetScreenResolution_Parms
	{
		FIntPoint Resolution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the screen resolution */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the screen resolution" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetScreenResolution_Parms, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::NewProp_Resolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetScreenResolution", Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::UPMGraphicsManager_eventSetScreenResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::UPMGraphicsManager_eventSetScreenResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetScreenResolution)
{
	P_GET_STRUCT(FIntPoint,Z_Param_Resolution);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScreenResolution(Z_Param_Resolution);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetScreenResolution ***************************

// ********** Begin Class UUPMGraphicsManager Function SetShadingQuality ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics
{
	struct UPMGraphicsManager_eventSetShadingQuality_Parms
	{
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets shading quality (0-4) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets shading quality (0-4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetShadingQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetShadingQuality", Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::UPMGraphicsManager_eventSetShadingQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::UPMGraphicsManager_eventSetShadingQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetShadingQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadingQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetShadingQuality *****************************

// ********** Begin Class UUPMGraphicsManager Function SetShadowQuality ****************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics
{
	struct UPMGraphicsManager_eventSetShadowQuality_Parms
	{
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets shadow quality (0-4) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets shadow quality (0-4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetShadowQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetShadowQuality", Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::UPMGraphicsManager_eventSetShadowQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::UPMGraphicsManager_eventSetShadowQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetShadowQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetShadowQuality ******************************

// ********** Begin Class UUPMGraphicsManager Function SetTextureQuality ***************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics
{
	struct UPMGraphicsManager_eventSetTextureQuality_Parms
	{
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets texture quality (0-4) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets texture quality (0-4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetTextureQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetTextureQuality", Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::UPMGraphicsManager_eventSetTextureQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::UPMGraphicsManager_eventSetTextureQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetTextureQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextureQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetTextureQuality *****************************

// ********** Begin Class UUPMGraphicsManager Function SetViewDistanceQuality **********************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics
{
	struct UPMGraphicsManager_eventSetViewDistanceQuality_Parms
	{
		int32 Quality;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Graphics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets view distance quality (0-4) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets view distance quality (0-4)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMGraphicsManager_eventSetViewDistanceQuality_Parms, Quality), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::NewProp_Quality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetViewDistanceQuality", Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::UPMGraphicsManager_eventSetViewDistanceQuality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::UPMGraphicsManager_eventSetViewDistanceQuality_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetViewDistanceQuality)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewDistanceQuality(Z_Param_Quality);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetViewDistanceQuality ************************

// ********** Begin Class UUPMGraphicsManager Function SetVSyncEnabled *****************************
struct Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics
{
	struct UPMGraphicsManager_eventSetVSyncEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Display" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets VSync enabled/disabled */" },
#endif
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets VSync enabled/disabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMGraphicsManager_eventSetVSyncEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMGraphicsManager_eventSetVSyncEnabled_Parms), &Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMGraphicsManager, nullptr, "SetVSyncEnabled", Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::UPMGraphicsManager_eventSetVSyncEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::UPMGraphicsManager_eventSetVSyncEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMGraphicsManager::execSetVSyncEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVSyncEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMGraphicsManager Function SetVSyncEnabled *******************************

// ********** Begin Class UUPMGraphicsManager ******************************************************
void UUPMGraphicsManager::StaticRegisterNativesUUPMGraphicsManager()
{
	UClass* Class = UUPMGraphicsManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyPreset", &UUPMGraphicsManager::execApplyPreset },
		{ "ApplySettings", &UUPMGraphicsManager::execApplySettings },
		{ "AutoDetectQuality", &UUPMGraphicsManager::execAutoDetectQuality },
		{ "GetAntiAliasingQuality", &UUPMGraphicsManager::execGetAntiAliasingQuality },
		{ "GetCurrentSettingsAsPreset", &UUPMGraphicsManager::execGetCurrentSettingsAsPreset },
		{ "GetEffectsQuality", &UUPMGraphicsManager::execGetEffectsQuality },
		{ "GetFoliageQuality", &UUPMGraphicsManager::execGetFoliageQuality },
		{ "GetFrameRateLimit", &UUPMGraphicsManager::execGetFrameRateLimit },
		{ "GetFullscreenMode", &UUPMGraphicsManager::execGetFullscreenMode },
		{ "GetGlobalIlluminationQuality", &UUPMGraphicsManager::execGetGlobalIlluminationQuality },
		{ "GetOverallQuality", &UUPMGraphicsManager::execGetOverallQuality },
		{ "GetPostProcessQuality", &UUPMGraphicsManager::execGetPostProcessQuality },
		{ "GetPresetByLevel", &UUPMGraphicsManager::execGetPresetByLevel },
		{ "GetReflectionQuality", &UUPMGraphicsManager::execGetReflectionQuality },
		{ "GetResolutionScale", &UUPMGraphicsManager::execGetResolutionScale },
		{ "GetScreenResolution", &UUPMGraphicsManager::execGetScreenResolution },
		{ "GetShadingQuality", &UUPMGraphicsManager::execGetShadingQuality },
		{ "GetShadowQuality", &UUPMGraphicsManager::execGetShadowQuality },
		{ "GetSupportedResolutions", &UUPMGraphicsManager::execGetSupportedResolutions },
		{ "GetTextureQuality", &UUPMGraphicsManager::execGetTextureQuality },
		{ "GetViewDistanceQuality", &UUPMGraphicsManager::execGetViewDistanceQuality },
		{ "GetVSyncEnabled", &UUPMGraphicsManager::execGetVSyncEnabled },
		{ "HasPendingChanges", &UUPMGraphicsManager::execHasPendingChanges },
		{ "ResetToDefaults", &UUPMGraphicsManager::execResetToDefaults },
		{ "SaveSettings", &UUPMGraphicsManager::execSaveSettings },
		{ "SetAntiAliasingQuality", &UUPMGraphicsManager::execSetAntiAliasingQuality },
		{ "SetEffectsQuality", &UUPMGraphicsManager::execSetEffectsQuality },
		{ "SetFoliageQuality", &UUPMGraphicsManager::execSetFoliageQuality },
		{ "SetFrameRateLimit", &UUPMGraphicsManager::execSetFrameRateLimit },
		{ "SetFullscreenMode", &UUPMGraphicsManager::execSetFullscreenMode },
		{ "SetGlobalIlluminationQuality", &UUPMGraphicsManager::execSetGlobalIlluminationQuality },
		{ "SetOverallQuality", &UUPMGraphicsManager::execSetOverallQuality },
		{ "SetPostProcessQuality", &UUPMGraphicsManager::execSetPostProcessQuality },
		{ "SetReflectionQuality", &UUPMGraphicsManager::execSetReflectionQuality },
		{ "SetResolutionScale", &UUPMGraphicsManager::execSetResolutionScale },
		{ "SetScreenResolution", &UUPMGraphicsManager::execSetScreenResolution },
		{ "SetShadingQuality", &UUPMGraphicsManager::execSetShadingQuality },
		{ "SetShadowQuality", &UUPMGraphicsManager::execSetShadowQuality },
		{ "SetTextureQuality", &UUPMGraphicsManager::execSetTextureQuality },
		{ "SetViewDistanceQuality", &UUPMGraphicsManager::execSetViewDistanceQuality },
		{ "SetVSyncEnabled", &UUPMGraphicsManager::execSetVSyncEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUPMGraphicsManager;
UClass* UUPMGraphicsManager::GetPrivateStaticClass()
{
	using TClass = UUPMGraphicsManager;
	if (!Z_Registration_Info_UClass_UUPMGraphicsManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UPMGraphicsManager"),
			Z_Registration_Info_UClass_UUPMGraphicsManager.InnerSingleton,
			StaticRegisterNativesUUPMGraphicsManager,
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
	return Z_Registration_Info_UClass_UUPMGraphicsManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UUPMGraphicsManager_NoRegister()
{
	return UUPMGraphicsManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUPMGraphicsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UPMGraphicsManager - Handles all graphics and scalability settings\n *\n * This class provides shipping-safe APIs for managing graphics quality settings\n * using UGameUserSettings. All settings work in packaged builds.\n */" },
#endif
		{ "IncludePath", "UPMGraphicsManager.h" },
		{ "ModuleRelativePath", "Public/UPMGraphicsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPMGraphicsManager - Handles all graphics and scalability settings\n\nThis class provides shipping-safe APIs for managing graphics quality settings\nusing UGameUserSettings. All settings work in packaged builds." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPMGraphicsManager_ApplyPreset, "ApplyPreset" }, // 1673484062
		{ &Z_Construct_UFunction_UUPMGraphicsManager_ApplySettings, "ApplySettings" }, // 3702653619
		{ &Z_Construct_UFunction_UUPMGraphicsManager_AutoDetectQuality, "AutoDetectQuality" }, // 396295138
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetAntiAliasingQuality, "GetAntiAliasingQuality" }, // 1242409082
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetCurrentSettingsAsPreset, "GetCurrentSettingsAsPreset" }, // 2085971432
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetEffectsQuality, "GetEffectsQuality" }, // 1679103315
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetFoliageQuality, "GetFoliageQuality" }, // 4136834849
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetFrameRateLimit, "GetFrameRateLimit" }, // 2419201679
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetFullscreenMode, "GetFullscreenMode" }, // 2008216585
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetGlobalIlluminationQuality, "GetGlobalIlluminationQuality" }, // 836806785
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetOverallQuality, "GetOverallQuality" }, // 2682607134
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetPostProcessQuality, "GetPostProcessQuality" }, // 1870787055
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetPresetByLevel, "GetPresetByLevel" }, // 1332173341
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetReflectionQuality, "GetReflectionQuality" }, // 1286468324
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetResolutionScale, "GetResolutionScale" }, // 1274410919
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetScreenResolution, "GetScreenResolution" }, // 2562945914
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetShadingQuality, "GetShadingQuality" }, // 1205536875
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetShadowQuality, "GetShadowQuality" }, // 751665949
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetSupportedResolutions, "GetSupportedResolutions" }, // 1378790365
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetTextureQuality, "GetTextureQuality" }, // 4065188304
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetViewDistanceQuality, "GetViewDistanceQuality" }, // 1730761613
		{ &Z_Construct_UFunction_UUPMGraphicsManager_GetVSyncEnabled, "GetVSyncEnabled" }, // 2052574353
		{ &Z_Construct_UFunction_UUPMGraphicsManager_HasPendingChanges, "HasPendingChanges" }, // 1962690821
		{ &Z_Construct_UFunction_UUPMGraphicsManager_ResetToDefaults, "ResetToDefaults" }, // 3247926073
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SaveSettings, "SaveSettings" }, // 1494644597
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetAntiAliasingQuality, "SetAntiAliasingQuality" }, // 459797419
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetEffectsQuality, "SetEffectsQuality" }, // 3231270508
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetFoliageQuality, "SetFoliageQuality" }, // 2822316418
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetFrameRateLimit, "SetFrameRateLimit" }, // 1558201438
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetFullscreenMode, "SetFullscreenMode" }, // 4225011064
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetGlobalIlluminationQuality, "SetGlobalIlluminationQuality" }, // 3242627152
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetOverallQuality, "SetOverallQuality" }, // 1252339483
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetPostProcessQuality, "SetPostProcessQuality" }, // 3302960945
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetReflectionQuality, "SetReflectionQuality" }, // 4283645563
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetResolutionScale, "SetResolutionScale" }, // 2466434328
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetScreenResolution, "SetScreenResolution" }, // 2608054942
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetShadingQuality, "SetShadingQuality" }, // 1966336123
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetShadowQuality, "SetShadowQuality" }, // 108153968
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetTextureQuality, "SetTextureQuality" }, // 1874155845
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetViewDistanceQuality, "SetViewDistanceQuality" }, // 1948271529
		{ &Z_Construct_UFunction_UUPMGraphicsManager_SetVSyncEnabled, "SetVSyncEnabled" }, // 2350124406
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPMGraphicsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUPMGraphicsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UPM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMGraphicsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPMGraphicsManager_Statics::ClassParams = {
	&UUPMGraphicsManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMGraphicsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UUPMGraphicsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUPMGraphicsManager()
{
	if (!Z_Registration_Info_UClass_UUPMGraphicsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPMGraphicsManager.OuterSingleton, Z_Construct_UClass_UUPMGraphicsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUPMGraphicsManager.OuterSingleton;
}
UUPMGraphicsManager::UUPMGraphicsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUPMGraphicsManager);
UUPMGraphicsManager::~UUPMGraphicsManager() {}
// ********** End Class UUPMGraphicsManager ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h__Script_UPM_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUPMGraphicsManager, UUPMGraphicsManager::StaticClass, TEXT("UUPMGraphicsManager"), &Z_Registration_Info_UClass_UUPMGraphicsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPMGraphicsManager), 1652432504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h__Script_UPM_1228145789(TEXT("/Script/UPM"),
	Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h__Script_UPM_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMGraphicsManager_h__Script_UPM_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
