// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UPMExtendedSettings.h"
#include "Engine/LocalPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUPMExtendedSettings() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UPM();
UPM_API UClass* Z_Construct_UClass_UUPMExtendedSettings();
UPM_API UClass* Z_Construct_UClass_UUPMExtendedSettings_NoRegister();
UPM_API UEnum* Z_Construct_UEnum_UPM_EUPMColorblindMode();
UPM_API UEnum* Z_Construct_UEnum_UPM_EUPMSubtitleSize();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUPMExtendedSettings Function ApplyAllExtendedSettings *******************
struct Z_Construct_UFunction_UUPMExtendedSettings_ApplyAllExtendedSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Extended" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== UTILITY ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== UTILITY ====================" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_ApplyAllExtendedSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "ApplyAllExtendedSettings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_ApplyAllExtendedSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_ApplyAllExtendedSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_ApplyAllExtendedSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_ApplyAllExtendedSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execApplyAllExtendedSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAllExtendedSettings();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function ApplyAllExtendedSettings *********************

// ********** Begin Class UUPMExtendedSettings Function GetAimAssistEnabled ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics
{
	struct UPMExtendedSettings_eventGetAimAssistEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Controller" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventGetAimAssistEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventGetAimAssistEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetAimAssistEnabled", Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::UPMExtendedSettings_eventGetAimAssistEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::UPMExtendedSettings_eventGetAimAssistEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetAimAssistEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAimAssistEnabled();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetAimAssistEnabled **************************

// ********** Begin Class UUPMExtendedSettings Function GetAimSensitivityMultiplier ****************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics
{
	struct UPMExtendedSettings_eventGetAimSensitivityMultiplier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetAimSensitivityMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetAimSensitivityMultiplier", Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::UPMExtendedSettings_eventGetAimSensitivityMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::UPMExtendedSettings_eventGetAimSensitivityMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetAimSensitivityMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAimSensitivityMultiplier();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetAimSensitivityMultiplier ******************

// ********** Begin Class UUPMExtendedSettings Function GetBrightness ******************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics
{
	struct UPMExtendedSettings_eventGetBrightness_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetBrightness_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetBrightness", Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::UPMExtendedSettings_eventGetBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::UPMExtendedSettings_eventGetBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetBrightness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBrightness();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetBrightness ********************************

// ********** Begin Class UUPMExtendedSettings Function GetCameraShakeScale ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics
{
	struct UPMExtendedSettings_eventGetCameraShakeScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Camera" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetCameraShakeScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetCameraShakeScale", Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::UPMExtendedSettings_eventGetCameraShakeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::UPMExtendedSettings_eventGetCameraShakeScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetCameraShakeScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCameraShakeScale();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetCameraShakeScale **************************

// ********** Begin Class UUPMExtendedSettings Function GetColorblindMode **************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics
{
	struct UPMExtendedSettings_eventGetColorblindMode_Parms
	{
		EUPMColorblindMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Accessibility" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetColorblindMode_Parms, ReturnValue), Z_Construct_UEnum_UPM_EUPMColorblindMode, METADATA_PARAMS(0, nullptr) }; // 1317520368
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetColorblindMode", Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::UPMExtendedSettings_eventGetColorblindMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::UPMExtendedSettings_eventGetColorblindMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetColorblindMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EUPMColorblindMode*)Z_Param__Result=P_THIS->GetColorblindMode();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetColorblindMode ****************************

// ********** Begin Class UUPMExtendedSettings Function GetControllerDeadzoneInner *****************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics
{
	struct UPMExtendedSettings_eventGetControllerDeadzoneInner_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Controller" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetControllerDeadzoneInner_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetControllerDeadzoneInner", Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::UPMExtendedSettings_eventGetControllerDeadzoneInner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::UPMExtendedSettings_eventGetControllerDeadzoneInner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetControllerDeadzoneInner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetControllerDeadzoneInner();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetControllerDeadzoneInner *******************

// ********** Begin Class UUPMExtendedSettings Function GetControllerSensitivity *******************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics
{
	struct UPMExtendedSettings_eventGetControllerSensitivity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetControllerSensitivity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetControllerSensitivity", Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::UPMExtendedSettings_eventGetControllerSensitivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::UPMExtendedSettings_eventGetControllerSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetControllerSensitivity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetControllerSensitivity();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetControllerSensitivity *********************

// ********** Begin Class UUPMExtendedSettings Function GetFieldOfView *****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics
{
	struct UPMExtendedSettings_eventGetFieldOfView_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Camera" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetFieldOfView_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetFieldOfView", Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::UPMExtendedSettings_eventGetFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::UPMExtendedSettings_eventGetFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetFieldOfView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFieldOfView();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetFieldOfView *******************************

// ********** Begin Class UUPMExtendedSettings Function GetGamma ***********************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics
{
	struct UPMExtendedSettings_eventGetGamma_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetGamma_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetGamma", Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::UPMExtendedSettings_eventGetGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::UPMExtendedSettings_eventGetGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetGamma)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGamma();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetGamma *************************************

// ********** Begin Class UUPMExtendedSettings Function GetHeadBobEnabled **************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics
{
	struct UPMExtendedSettings_eventGetHeadBobEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Camera" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventGetHeadBobEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventGetHeadBobEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetHeadBobEnabled", Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::UPMExtendedSettings_eventGetHeadBobEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::UPMExtendedSettings_eventGetHeadBobEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetHeadBobEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHeadBobEnabled();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetHeadBobEnabled ****************************

// ********** Begin Class UUPMExtendedSettings Function GetHUDScale ********************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics
{
	struct UPMExtendedSettings_eventGetHUDScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Accessibility" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetHUDScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetHUDScale", Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::UPMExtendedSettings_eventGetHUDScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::UPMExtendedSettings_eventGetHUDScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetHUDScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHUDScale();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetHUDScale **********************************

// ********** Begin Class UUPMExtendedSettings Function GetInvertControllerY ***********************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics
{
	struct UPMExtendedSettings_eventGetInvertControllerY_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventGetInvertControllerY_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventGetInvertControllerY_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetInvertControllerY", Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::UPMExtendedSettings_eventGetInvertControllerY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::UPMExtendedSettings_eventGetInvertControllerY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetInvertControllerY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInvertControllerY();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetInvertControllerY *************************

// ********** Begin Class UUPMExtendedSettings Function GetInvertMouseY ****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics
{
	struct UPMExtendedSettings_eventGetInvertMouseY_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventGetInvertMouseY_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventGetInvertMouseY_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetInvertMouseY", Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::UPMExtendedSettings_eventGetInvertMouseY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::UPMExtendedSettings_eventGetInvertMouseY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetInvertMouseY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInvertMouseY();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetInvertMouseY ******************************

// ********** Begin Class UUPMExtendedSettings Function GetMasterVolume ****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics
{
	struct UPMExtendedSettings_eventGetMasterVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Audio" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetMasterVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetMasterVolume", Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::UPMExtendedSettings_eventGetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::UPMExtendedSettings_eventGetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetMasterVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMasterVolume();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetMasterVolume ******************************

// ********** Begin Class UUPMExtendedSettings Function GetMotionBlurIntensity *********************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics
{
	struct UPMExtendedSettings_eventGetMotionBlurIntensity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetMotionBlurIntensity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetMotionBlurIntensity", Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::UPMExtendedSettings_eventGetMotionBlurIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::UPMExtendedSettings_eventGetMotionBlurIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetMotionBlurIntensity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMotionBlurIntensity();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetMotionBlurIntensity ***********************

// ********** Begin Class UUPMExtendedSettings Function GetMouseAccelerationEnabled ****************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics
{
	struct UPMExtendedSettings_eventGetMouseAccelerationEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventGetMouseAccelerationEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventGetMouseAccelerationEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetMouseAccelerationEnabled", Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::UPMExtendedSettings_eventGetMouseAccelerationEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::UPMExtendedSettings_eventGetMouseAccelerationEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetMouseAccelerationEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetMouseAccelerationEnabled();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetMouseAccelerationEnabled ******************

// ********** Begin Class UUPMExtendedSettings Function GetMouseSensitivity ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics
{
	struct UPMExtendedSettings_eventGetMouseSensitivity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetMouseSensitivity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetMouseSensitivity", Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::UPMExtendedSettings_eventGetMouseSensitivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::UPMExtendedSettings_eventGetMouseSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetMouseSensitivity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMouseSensitivity();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetMouseSensitivity **************************

// ********** Begin Class UUPMExtendedSettings Function GetMouseSmoothingEnabled *******************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics
{
	struct UPMExtendedSettings_eventGetMouseSmoothingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventGetMouseSmoothingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventGetMouseSmoothingEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetMouseSmoothingEnabled", Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::UPMExtendedSettings_eventGetMouseSmoothingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::UPMExtendedSettings_eventGetMouseSmoothingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetMouseSmoothingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetMouseSmoothingEnabled();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetMouseSmoothingEnabled *********************

// ********** Begin Class UUPMExtendedSettings Function GetMusicVolume *****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics
{
	struct UPMExtendedSettings_eventGetMusicVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Audio" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetMusicVolume", Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::UPMExtendedSettings_eventGetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::UPMExtendedSettings_eventGetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetMusicVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetMusicVolume *******************************

// ********** Begin Class UUPMExtendedSettings Function GetSFXVolume *******************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics
{
	struct UPMExtendedSettings_eventGetSFXVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Audio" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetSFXVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetSFXVolume", Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::UPMExtendedSettings_eventGetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::UPMExtendedSettings_eventGetSFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetSFXVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSFXVolume();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetSFXVolume *********************************

// ********** Begin Class UUPMExtendedSettings Function GetSubtitlesEnabled ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics
{
	struct UPMExtendedSettings_eventGetSubtitlesEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Accessibility" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventGetSubtitlesEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventGetSubtitlesEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetSubtitlesEnabled", Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::UPMExtendedSettings_eventGetSubtitlesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::UPMExtendedSettings_eventGetSubtitlesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetSubtitlesEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSubtitlesEnabled();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetSubtitlesEnabled **************************

// ********** Begin Class UUPMExtendedSettings Function GetVibrationEnabled ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics
{
	struct UPMExtendedSettings_eventGetVibrationEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Controller" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventGetVibrationEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventGetVibrationEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetVibrationEnabled", Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::UPMExtendedSettings_eventGetVibrationEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::UPMExtendedSettings_eventGetVibrationEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetVibrationEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetVibrationEnabled();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetVibrationEnabled **************************

// ********** Begin Class UUPMExtendedSettings Function GetVoiceVolume *****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics
{
	struct UPMExtendedSettings_eventGetVoiceVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Audio" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventGetVoiceVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "GetVoiceVolume", Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::UPMExtendedSettings_eventGetVoiceVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::UPMExtendedSettings_eventGetVoiceVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execGetVoiceVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVoiceVolume();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function GetVoiceVolume *******************************

// ********** Begin Class UUPMExtendedSettings Function OnPawnChanged ******************************
struct Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics
{
	struct UPMExtendedSettings_eventOnPawnChanged_Parms
	{
		APawn* OldPawn;
		APawn* NewPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event handlers\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event handlers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventOnPawnChanged_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventOnPawnChanged_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::NewProp_OldPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "OnPawnChanged", Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::UPMExtendedSettings_eventOnPawnChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::UPMExtendedSettings_eventOnPawnChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execOnPawnChanged)
{
	P_GET_OBJECT(APawn,Z_Param_OldPawn);
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPawnChanged(Z_Param_OldPawn,Z_Param_NewPawn);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function OnPawnChanged ********************************

// ********** Begin Class UUPMExtendedSettings Function ResetAudioToDefaults ***********************
struct Z_Construct_UFunction_UUPMExtendedSettings_ResetAudioToDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Extended" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_ResetAudioToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "ResetAudioToDefaults", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_ResetAudioToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_ResetAudioToDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_ResetAudioToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_ResetAudioToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execResetAudioToDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAudioToDefaults();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function ResetAudioToDefaults *************************

// ********** Begin Class UUPMExtendedSettings Function ResetExtendedToDefaults ********************
struct Z_Construct_UFunction_UUPMExtendedSettings_ResetExtendedToDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Extended" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_ResetExtendedToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "ResetExtendedToDefaults", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_ResetExtendedToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_ResetExtendedToDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_ResetExtendedToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_ResetExtendedToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execResetExtendedToDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetExtendedToDefaults();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function ResetExtendedToDefaults **********************

// ********** Begin Class UUPMExtendedSettings Function ResetInputToDefaults ***********************
struct Z_Construct_UFunction_UUPMExtendedSettings_ResetInputToDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Extended" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_ResetInputToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "ResetInputToDefaults", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_ResetInputToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_ResetInputToDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_ResetInputToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_ResetInputToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execResetInputToDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetInputToDefaults();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function ResetInputToDefaults *************************

// ********** Begin Class UUPMExtendedSettings Function ResetVisualToDefaults **********************
struct Z_Construct_UFunction_UUPMExtendedSettings_ResetVisualToDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Extended" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_ResetVisualToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "ResetVisualToDefaults", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_ResetVisualToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_ResetVisualToDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_ResetVisualToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_ResetVisualToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execResetVisualToDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetVisualToDefaults();
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function ResetVisualToDefaults ************************

// ********** Begin Class UUPMExtendedSettings Function SetAimAssistEnabled ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics
{
	struct UPMExtendedSettings_eventSetAimAssistEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Controller" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetAimAssistEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetAimAssistEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetAimAssistEnabled", Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::UPMExtendedSettings_eventSetAimAssistEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::UPMExtendedSettings_eventSetAimAssistEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetAimAssistEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAimAssistEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetAimAssistEnabled **************************

// ********** Begin Class UUPMExtendedSettings Function SetAimAssistStrength ***********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics
{
	struct UPMExtendedSettings_eventSetAimAssistStrength_Parms
	{
		float Strength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Controller" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetAimAssistStrength_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetAimAssistStrength", Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::UPMExtendedSettings_eventSetAimAssistStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::UPMExtendedSettings_eventSetAimAssistStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetAimAssistStrength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAimAssistStrength(Z_Param_Strength);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetAimAssistStrength *************************

// ********** Begin Class UUPMExtendedSettings Function SetAimSensitivityMultiplier ****************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics
{
	struct UPMExtendedSettings_eventSetAimSensitivityMultiplier_Parms
	{
		float Multiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetAimSensitivityMultiplier_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::NewProp_Multiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetAimSensitivityMultiplier", Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::UPMExtendedSettings_eventSetAimSensitivityMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::UPMExtendedSettings_eventSetAimSensitivityMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetAimSensitivityMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAimSensitivityMultiplier(Z_Param_Multiplier);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetAimSensitivityMultiplier ******************

// ********** Begin Class UUPMExtendedSettings Function SetAmbientVolume ***************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics
{
	struct UPMExtendedSettings_eventSetAmbientVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Audio" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetAmbientVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetAmbientVolume", Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::UPMExtendedSettings_eventSetAmbientVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::UPMExtendedSettings_eventSetAmbientVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetAmbientVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmbientVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetAmbientVolume *****************************

// ********** Begin Class UUPMExtendedSettings Function SetBloomIntensity **************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics
{
	struct UPMExtendedSettings_eventSetBloomIntensity_Parms
	{
		float Intensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetBloomIntensity_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetBloomIntensity", Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::UPMExtendedSettings_eventSetBloomIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::UPMExtendedSettings_eventSetBloomIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetBloomIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBloomIntensity(Z_Param_Intensity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetBloomIntensity ****************************

// ********** Begin Class UUPMExtendedSettings Function SetBrightness ******************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics
{
	struct UPMExtendedSettings_eventSetBrightness_Parms
	{
		float NewBrightness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewBrightness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::NewProp_NewBrightness = { "NewBrightness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetBrightness_Parms, NewBrightness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::NewProp_NewBrightness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetBrightness", Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::UPMExtendedSettings_eventSetBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::UPMExtendedSettings_eventSetBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetBrightness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewBrightness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrightness(Z_Param_NewBrightness);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetBrightness ********************************

// ********** Begin Class UUPMExtendedSettings Function SetCameraShakeScale ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics
{
	struct UPMExtendedSettings_eventSetCameraShakeScale_Parms
	{
		float Scale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== CAMERA EFFECTS ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== CAMERA EFFECTS ====================" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetCameraShakeScale_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetCameraShakeScale", Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::UPMExtendedSettings_eventSetCameraShakeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::UPMExtendedSettings_eventSetCameraShakeScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetCameraShakeScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraShakeScale(Z_Param_Scale);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetCameraShakeScale **************************

// ********** Begin Class UUPMExtendedSettings Function SetChromaticAberrationIntensity ************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics
{
	struct UPMExtendedSettings_eventSetChromaticAberrationIntensity_Parms
	{
		float Intensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetChromaticAberrationIntensity_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetChromaticAberrationIntensity", Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::UPMExtendedSettings_eventSetChromaticAberrationIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::UPMExtendedSettings_eventSetChromaticAberrationIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetChromaticAberrationIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChromaticAberrationIntensity(Z_Param_Intensity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetChromaticAberrationIntensity **************

// ********** Begin Class UUPMExtendedSettings Function SetColorblindMode **************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics
{
	struct UPMExtendedSettings_eventSetColorblindMode_Parms
	{
		EUPMColorblindMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Accessibility" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetColorblindMode_Parms, Mode), Z_Construct_UEnum_UPM_EUPMColorblindMode, METADATA_PARAMS(0, nullptr) }; // 1317520368
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetColorblindMode", Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::UPMExtendedSettings_eventSetColorblindMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::UPMExtendedSettings_eventSetColorblindMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetColorblindMode)
{
	P_GET_ENUM(EUPMColorblindMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorblindMode(EUPMColorblindMode(Z_Param_Mode));
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetColorblindMode ****************************

// ********** Begin Class UUPMExtendedSettings Function SetColorblindStrength **********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics
{
	struct UPMExtendedSettings_eventSetColorblindStrength_Parms
	{
		float Strength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Accessibility" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetColorblindStrength_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetColorblindStrength", Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::UPMExtendedSettings_eventSetColorblindStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::UPMExtendedSettings_eventSetColorblindStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetColorblindStrength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorblindStrength(Z_Param_Strength);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetColorblindStrength ************************

// ********** Begin Class UUPMExtendedSettings Function SetContrast ********************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics
{
	struct UPMExtendedSettings_eventSetContrast_Parms
	{
		float NewContrast;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewContrast;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::NewProp_NewContrast = { "NewContrast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetContrast_Parms, NewContrast), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::NewProp_NewContrast,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetContrast", Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::UPMExtendedSettings_eventSetContrast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::UPMExtendedSettings_eventSetContrast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetContrast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetContrast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetContrast)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewContrast);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetContrast(Z_Param_NewContrast);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetContrast **********************************

// ********** Begin Class UUPMExtendedSettings Function SetControllerDeadzoneInner *****************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics
{
	struct UPMExtendedSettings_eventSetControllerDeadzoneInner_Parms
	{
		float Deadzone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== CONTROLLER SETTINGS ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== CONTROLLER SETTINGS ====================" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Deadzone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::NewProp_Deadzone = { "Deadzone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetControllerDeadzoneInner_Parms, Deadzone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::NewProp_Deadzone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetControllerDeadzoneInner", Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::UPMExtendedSettings_eventSetControllerDeadzoneInner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::UPMExtendedSettings_eventSetControllerDeadzoneInner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetControllerDeadzoneInner)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Deadzone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControllerDeadzoneInner(Z_Param_Deadzone);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetControllerDeadzoneInner *******************

// ********** Begin Class UUPMExtendedSettings Function SetControllerDeadzoneOuter *****************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics
{
	struct UPMExtendedSettings_eventSetControllerDeadzoneOuter_Parms
	{
		float Deadzone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Controller" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Deadzone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::NewProp_Deadzone = { "Deadzone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetControllerDeadzoneOuter_Parms, Deadzone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::NewProp_Deadzone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetControllerDeadzoneOuter", Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::UPMExtendedSettings_eventSetControllerDeadzoneOuter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::UPMExtendedSettings_eventSetControllerDeadzoneOuter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetControllerDeadzoneOuter)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Deadzone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControllerDeadzoneOuter(Z_Param_Deadzone);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetControllerDeadzoneOuter *******************

// ********** Begin Class UUPMExtendedSettings Function SetControllerSensitivity *******************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics
{
	struct UPMExtendedSettings_eventSetControllerSensitivity_Parms
	{
		float Sensitivity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== INPUT SENSITIVITY - CONTROLLER ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== INPUT SENSITIVITY - CONTROLLER ====================" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetControllerSensitivity_Parms, Sensitivity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::NewProp_Sensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetControllerSensitivity", Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::UPMExtendedSettings_eventSetControllerSensitivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::UPMExtendedSettings_eventSetControllerSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetControllerSensitivity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControllerSensitivity(Z_Param_Sensitivity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetControllerSensitivity *********************

// ********** Begin Class UUPMExtendedSettings Function SetControllerSensitivityX ******************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics
{
	struct UPMExtendedSettings_eventSetControllerSensitivityX_Parms
	{
		float Sensitivity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetControllerSensitivityX_Parms, Sensitivity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::NewProp_Sensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetControllerSensitivityX", Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::UPMExtendedSettings_eventSetControllerSensitivityX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::UPMExtendedSettings_eventSetControllerSensitivityX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetControllerSensitivityX)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControllerSensitivityX(Z_Param_Sensitivity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetControllerSensitivityX ********************

// ********** Begin Class UUPMExtendedSettings Function SetControllerSensitivityY ******************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics
{
	struct UPMExtendedSettings_eventSetControllerSensitivityY_Parms
	{
		float Sensitivity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetControllerSensitivityY_Parms, Sensitivity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::NewProp_Sensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetControllerSensitivityY", Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::UPMExtendedSettings_eventSetControllerSensitivityY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::UPMExtendedSettings_eventSetControllerSensitivityY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetControllerSensitivityY)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControllerSensitivityY(Z_Param_Sensitivity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetControllerSensitivityY ********************

// ********** Begin Class UUPMExtendedSettings Function SetDepthOfFieldEnabled *********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics
{
	struct UPMExtendedSettings_eventSetDepthOfFieldEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetDepthOfFieldEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetDepthOfFieldEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetDepthOfFieldEnabled", Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::UPMExtendedSettings_eventSetDepthOfFieldEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::UPMExtendedSettings_eventSetDepthOfFieldEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetDepthOfFieldEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDepthOfFieldEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetDepthOfFieldEnabled ***********************

// ********** Begin Class UUPMExtendedSettings Function SetFieldOfView *****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics
{
	struct UPMExtendedSettings_eventSetFieldOfView_Parms
	{
		float NewFOV;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== FIELD OF VIEW ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== FIELD OF VIEW ====================" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::NewProp_NewFOV = { "NewFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetFieldOfView_Parms, NewFOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::NewProp_NewFOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetFieldOfView", Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::UPMExtendedSettings_eventSetFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::UPMExtendedSettings_eventSetFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetFieldOfView)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFOV);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFieldOfView(Z_Param_NewFOV);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetFieldOfView *******************************

// ********** Begin Class UUPMExtendedSettings Function SetFilmGrainIntensity **********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics
{
	struct UPMExtendedSettings_eventSetFilmGrainIntensity_Parms
	{
		float Intensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetFilmGrainIntensity_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetFilmGrainIntensity", Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::UPMExtendedSettings_eventSetFilmGrainIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::UPMExtendedSettings_eventSetFilmGrainIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetFilmGrainIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilmGrainIntensity(Z_Param_Intensity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetFilmGrainIntensity ************************

// ********** Begin Class UUPMExtendedSettings Function SetGamma ***********************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics
{
	struct UPMExtendedSettings_eventSetGamma_Parms
	{
		float NewGamma;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGamma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::NewProp_NewGamma = { "NewGamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetGamma_Parms, NewGamma), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::NewProp_NewGamma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetGamma", Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::UPMExtendedSettings_eventSetGamma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::UPMExtendedSettings_eventSetGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetGamma)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewGamma);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGamma(Z_Param_NewGamma);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetGamma *************************************

// ********** Begin Class UUPMExtendedSettings Function SetHeadBobEnabled **************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics
{
	struct UPMExtendedSettings_eventSetHeadBobEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Camera" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetHeadBobEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetHeadBobEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetHeadBobEnabled", Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::UPMExtendedSettings_eventSetHeadBobEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::UPMExtendedSettings_eventSetHeadBobEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetHeadBobEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeadBobEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetHeadBobEnabled ****************************

// ********** Begin Class UUPMExtendedSettings Function SetHeadBobIntensity ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics
{
	struct UPMExtendedSettings_eventSetHeadBobIntensity_Parms
	{
		float Intensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Camera" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetHeadBobIntensity_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetHeadBobIntensity", Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::UPMExtendedSettings_eventSetHeadBobIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::UPMExtendedSettings_eventSetHeadBobIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetHeadBobIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeadBobIntensity(Z_Param_Intensity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetHeadBobIntensity **************************

// ********** Begin Class UUPMExtendedSettings Function SetHighContrastMode ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics
{
	struct UPMExtendedSettings_eventSetHighContrastMode_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Accessibility" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetHighContrastMode_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetHighContrastMode_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetHighContrastMode", Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::UPMExtendedSettings_eventSetHighContrastMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::UPMExtendedSettings_eventSetHighContrastMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetHighContrastMode)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighContrastMode(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetHighContrastMode **************************

// ********** Begin Class UUPMExtendedSettings Function SetHUDScale ********************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics
{
	struct UPMExtendedSettings_eventSetHUDScale_Parms
	{
		float Scale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Accessibility" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetHUDScale_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetHUDScale", Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::UPMExtendedSettings_eventSetHUDScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::UPMExtendedSettings_eventSetHUDScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetHUDScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHUDScale(Z_Param_Scale);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetHUDScale **********************************

// ********** Begin Class UUPMExtendedSettings Function SetInvertControllerX ***********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics
{
	struct UPMExtendedSettings_eventSetInvertControllerX_Parms
	{
		bool bInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetInvertControllerX_Parms*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetInvertControllerX_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetInvertControllerX", Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::UPMExtendedSettings_eventSetInvertControllerX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::UPMExtendedSettings_eventSetInvertControllerX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetInvertControllerX)
{
	P_GET_UBOOL(Z_Param_bInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInvertControllerX(Z_Param_bInvert);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetInvertControllerX *************************

// ********** Begin Class UUPMExtendedSettings Function SetInvertControllerY ***********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics
{
	struct UPMExtendedSettings_eventSetInvertControllerY_Parms
	{
		bool bInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetInvertControllerY_Parms*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetInvertControllerY_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetInvertControllerY", Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::UPMExtendedSettings_eventSetInvertControllerY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::UPMExtendedSettings_eventSetInvertControllerY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetInvertControllerY)
{
	P_GET_UBOOL(Z_Param_bInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInvertControllerY(Z_Param_bInvert);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetInvertControllerY *************************

// ********** Begin Class UUPMExtendedSettings Function SetInvertMouseX ****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics
{
	struct UPMExtendedSettings_eventSetInvertMouseX_Parms
	{
		bool bInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetInvertMouseX_Parms*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetInvertMouseX_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetInvertMouseX", Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::UPMExtendedSettings_eventSetInvertMouseX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::UPMExtendedSettings_eventSetInvertMouseX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetInvertMouseX)
{
	P_GET_UBOOL(Z_Param_bInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInvertMouseX(Z_Param_bInvert);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetInvertMouseX ******************************

// ********** Begin Class UUPMExtendedSettings Function SetInvertMouseY ****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics
{
	struct UPMExtendedSettings_eventSetInvertMouseY_Parms
	{
		bool bInvert;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== AXIS INVERSION ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== AXIS INVERSION ====================" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetInvertMouseY_Parms*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetInvertMouseY_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetInvertMouseY", Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::UPMExtendedSettings_eventSetInvertMouseY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::UPMExtendedSettings_eventSetInvertMouseY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetInvertMouseY)
{
	P_GET_UBOOL(Z_Param_bInvert);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInvertMouseY(Z_Param_bInvert);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetInvertMouseY ******************************

// ********** Begin Class UUPMExtendedSettings Function SetLensFlareEnabled ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics
{
	struct UPMExtendedSettings_eventSetLensFlareEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetLensFlareEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetLensFlareEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetLensFlareEnabled", Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::UPMExtendedSettings_eventSetLensFlareEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::UPMExtendedSettings_eventSetLensFlareEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetLensFlareEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLensFlareEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetLensFlareEnabled **************************

// ********** Begin Class UUPMExtendedSettings Function SetMasterVolume ****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics
{
	struct UPMExtendedSettings_eventSetMasterVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== AUDIO ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== AUDIO ====================" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetMasterVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetMasterVolume", Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::UPMExtendedSettings_eventSetMasterVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::UPMExtendedSettings_eventSetMasterVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetMasterVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMasterVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetMasterVolume ******************************

// ********** Begin Class UUPMExtendedSettings Function SetMotionBlurEnabled ***********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics
{
	struct UPMExtendedSettings_eventSetMotionBlurEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== POST PROCESS EFFECTS ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== POST PROCESS EFFECTS ====================" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetMotionBlurEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetMotionBlurEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetMotionBlurEnabled", Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::UPMExtendedSettings_eventSetMotionBlurEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::UPMExtendedSettings_eventSetMotionBlurEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetMotionBlurEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMotionBlurEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetMotionBlurEnabled *************************

// ********** Begin Class UUPMExtendedSettings Function SetMotionBlurIntensity *********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics
{
	struct UPMExtendedSettings_eventSetMotionBlurIntensity_Parms
	{
		float Intensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetMotionBlurIntensity_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetMotionBlurIntensity", Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::UPMExtendedSettings_eventSetMotionBlurIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::UPMExtendedSettings_eventSetMotionBlurIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetMotionBlurIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMotionBlurIntensity(Z_Param_Intensity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetMotionBlurIntensity ***********************

// ********** Begin Class UUPMExtendedSettings Function SetMouseAccelerationEnabled ****************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics
{
	struct UPMExtendedSettings_eventSetMouseAccelerationEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetMouseAccelerationEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetMouseAccelerationEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetMouseAccelerationEnabled", Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::UPMExtendedSettings_eventSetMouseAccelerationEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::UPMExtendedSettings_eventSetMouseAccelerationEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetMouseAccelerationEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseAccelerationEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetMouseAccelerationEnabled ******************

// ********** Begin Class UUPMExtendedSettings Function SetMouseSensitivity ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics
{
	struct UPMExtendedSettings_eventSetMouseSensitivity_Parms
	{
		float Sensitivity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== INPUT SENSITIVITY - MOUSE ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== INPUT SENSITIVITY - MOUSE ====================" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetMouseSensitivity_Parms, Sensitivity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::NewProp_Sensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetMouseSensitivity", Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::UPMExtendedSettings_eventSetMouseSensitivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::UPMExtendedSettings_eventSetMouseSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetMouseSensitivity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseSensitivity(Z_Param_Sensitivity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetMouseSensitivity **************************

// ********** Begin Class UUPMExtendedSettings Function SetMouseSensitivityX ***********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics
{
	struct UPMExtendedSettings_eventSetMouseSensitivityX_Parms
	{
		float Sensitivity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetMouseSensitivityX_Parms, Sensitivity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::NewProp_Sensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetMouseSensitivityX", Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::UPMExtendedSettings_eventSetMouseSensitivityX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::UPMExtendedSettings_eventSetMouseSensitivityX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetMouseSensitivityX)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseSensitivityX(Z_Param_Sensitivity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetMouseSensitivityX *************************

// ********** Begin Class UUPMExtendedSettings Function SetMouseSensitivityY ***********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics
{
	struct UPMExtendedSettings_eventSetMouseSensitivityY_Parms
	{
		float Sensitivity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetMouseSensitivityY_Parms, Sensitivity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::NewProp_Sensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetMouseSensitivityY", Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::UPMExtendedSettings_eventSetMouseSensitivityY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::UPMExtendedSettings_eventSetMouseSensitivityY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetMouseSensitivityY)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseSensitivityY(Z_Param_Sensitivity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetMouseSensitivityY *************************

// ********** Begin Class UUPMExtendedSettings Function SetMouseSmoothingEnabled *******************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics
{
	struct UPMExtendedSettings_eventSetMouseSmoothingEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== MOUSE SETTINGS ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== MOUSE SETTINGS ====================" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetMouseSmoothingEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetMouseSmoothingEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetMouseSmoothingEnabled", Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::UPMExtendedSettings_eventSetMouseSmoothingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::UPMExtendedSettings_eventSetMouseSmoothingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetMouseSmoothingEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseSmoothingEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetMouseSmoothingEnabled *********************

// ********** Begin Class UUPMExtendedSettings Function SetMusicVolume *****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics
{
	struct UPMExtendedSettings_eventSetMusicVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Audio" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetMusicVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetMusicVolume", Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::UPMExtendedSettings_eventSetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::UPMExtendedSettings_eventSetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetMusicVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetMusicVolume *******************************

// ********** Begin Class UUPMExtendedSettings Function SetReduceScreenShake ***********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics
{
	struct UPMExtendedSettings_eventSetReduceScreenShake_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Accessibility" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetReduceScreenShake_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetReduceScreenShake_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetReduceScreenShake", Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::UPMExtendedSettings_eventSetReduceScreenShake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::UPMExtendedSettings_eventSetReduceScreenShake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetReduceScreenShake)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetReduceScreenShake(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetReduceScreenShake *************************

// ********** Begin Class UUPMExtendedSettings Function SetSFXVolume *******************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics
{
	struct UPMExtendedSettings_eventSetSFXVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Audio" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetSFXVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetSFXVolume", Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::UPMExtendedSettings_eventSetSFXVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::UPMExtendedSettings_eventSetSFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetSFXVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSFXVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetSFXVolume *********************************

// ********** Begin Class UUPMExtendedSettings Function SetSubtitleBackground **********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics
{
	struct UPMExtendedSettings_eventSetSubtitleBackground_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Accessibility" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetSubtitleBackground_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetSubtitleBackground_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetSubtitleBackground", Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::UPMExtendedSettings_eventSetSubtitleBackground_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::UPMExtendedSettings_eventSetSubtitleBackground_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetSubtitleBackground)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubtitleBackground(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetSubtitleBackground ************************

// ********** Begin Class UUPMExtendedSettings Function SetSubtitlesEnabled ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics
{
	struct UPMExtendedSettings_eventSetSubtitlesEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Accessibility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== ACCESSIBILITY ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== ACCESSIBILITY ====================" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetSubtitlesEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetSubtitlesEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetSubtitlesEnabled", Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::UPMExtendedSettings_eventSetSubtitlesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::UPMExtendedSettings_eventSetSubtitlesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetSubtitlesEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubtitlesEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetSubtitlesEnabled **************************

// ********** Begin Class UUPMExtendedSettings Function SetSubtitleSize ****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics
{
	struct UPMExtendedSettings_eventSetSubtitleSize_Parms
	{
		EUPMSubtitleSize Size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Accessibility" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Size_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::NewProp_Size_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetSubtitleSize_Parms, Size), Z_Construct_UEnum_UPM_EUPMSubtitleSize, METADATA_PARAMS(0, nullptr) }; // 3185697990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::NewProp_Size_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetSubtitleSize", Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::UPMExtendedSettings_eventSetSubtitleSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::UPMExtendedSettings_eventSetSubtitleSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetSubtitleSize)
{
	P_GET_ENUM(EUPMSubtitleSize,Z_Param_Size);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubtitleSize(EUPMSubtitleSize(Z_Param_Size));
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetSubtitleSize ******************************

// ********** Begin Class UUPMExtendedSettings Function SetUIVolume ********************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics
{
	struct UPMExtendedSettings_eventSetUIVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Audio" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetUIVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetUIVolume", Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::UPMExtendedSettings_eventSetUIVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::UPMExtendedSettings_eventSetUIVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetUIVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUIVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetUIVolume **********************************

// ********** Begin Class UUPMExtendedSettings Function SetVibrationEnabled ************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics
{
	struct UPMExtendedSettings_eventSetVibrationEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Controller" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UPMExtendedSettings_eventSetVibrationEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMExtendedSettings_eventSetVibrationEnabled_Parms), &Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetVibrationEnabled", Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::UPMExtendedSettings_eventSetVibrationEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::UPMExtendedSettings_eventSetVibrationEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetVibrationEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVibrationEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetVibrationEnabled **************************

// ********** Begin Class UUPMExtendedSettings Function SetVibrationIntensity **********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics
{
	struct UPMExtendedSettings_eventSetVibrationIntensity_Parms
	{
		float Intensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Controller" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetVibrationIntensity_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetVibrationIntensity", Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::UPMExtendedSettings_eventSetVibrationIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::UPMExtendedSettings_eventSetVibrationIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetVibrationIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVibrationIntensity(Z_Param_Intensity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetVibrationIntensity ************************

// ********** Begin Class UUPMExtendedSettings Function SetVignetteIntensity ***********************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics
{
	struct UPMExtendedSettings_eventSetVignetteIntensity_Parms
	{
		float Intensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|PostProcess" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetVignetteIntensity_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetVignetteIntensity", Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::UPMExtendedSettings_eventSetVignetteIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::UPMExtendedSettings_eventSetVignetteIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetVignetteIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVignetteIntensity(Z_Param_Intensity);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetVignetteIntensity *************************

// ********** Begin Class UUPMExtendedSettings Function SetVoiceVolume *****************************
struct Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics
{
	struct UPMExtendedSettings_eventSetVoiceVolume_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Audio" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMExtendedSettings_eventSetVoiceVolume_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMExtendedSettings, nullptr, "SetVoiceVolume", Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::UPMExtendedSettings_eventSetVoiceVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::UPMExtendedSettings_eventSetVoiceVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMExtendedSettings::execSetVoiceVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVoiceVolume(Z_Param_Volume);
	P_NATIVE_END;
}
// ********** End Class UUPMExtendedSettings Function SetVoiceVolume *******************************

// ********** Begin Class UUPMExtendedSettings *****************************************************
void UUPMExtendedSettings::StaticRegisterNativesUUPMExtendedSettings()
{
	UClass* Class = UUPMExtendedSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyAllExtendedSettings", &UUPMExtendedSettings::execApplyAllExtendedSettings },
		{ "GetAimAssistEnabled", &UUPMExtendedSettings::execGetAimAssistEnabled },
		{ "GetAimSensitivityMultiplier", &UUPMExtendedSettings::execGetAimSensitivityMultiplier },
		{ "GetBrightness", &UUPMExtendedSettings::execGetBrightness },
		{ "GetCameraShakeScale", &UUPMExtendedSettings::execGetCameraShakeScale },
		{ "GetColorblindMode", &UUPMExtendedSettings::execGetColorblindMode },
		{ "GetControllerDeadzoneInner", &UUPMExtendedSettings::execGetControllerDeadzoneInner },
		{ "GetControllerSensitivity", &UUPMExtendedSettings::execGetControllerSensitivity },
		{ "GetFieldOfView", &UUPMExtendedSettings::execGetFieldOfView },
		{ "GetGamma", &UUPMExtendedSettings::execGetGamma },
		{ "GetHeadBobEnabled", &UUPMExtendedSettings::execGetHeadBobEnabled },
		{ "GetHUDScale", &UUPMExtendedSettings::execGetHUDScale },
		{ "GetInvertControllerY", &UUPMExtendedSettings::execGetInvertControllerY },
		{ "GetInvertMouseY", &UUPMExtendedSettings::execGetInvertMouseY },
		{ "GetMasterVolume", &UUPMExtendedSettings::execGetMasterVolume },
		{ "GetMotionBlurIntensity", &UUPMExtendedSettings::execGetMotionBlurIntensity },
		{ "GetMouseAccelerationEnabled", &UUPMExtendedSettings::execGetMouseAccelerationEnabled },
		{ "GetMouseSensitivity", &UUPMExtendedSettings::execGetMouseSensitivity },
		{ "GetMouseSmoothingEnabled", &UUPMExtendedSettings::execGetMouseSmoothingEnabled },
		{ "GetMusicVolume", &UUPMExtendedSettings::execGetMusicVolume },
		{ "GetSFXVolume", &UUPMExtendedSettings::execGetSFXVolume },
		{ "GetSubtitlesEnabled", &UUPMExtendedSettings::execGetSubtitlesEnabled },
		{ "GetVibrationEnabled", &UUPMExtendedSettings::execGetVibrationEnabled },
		{ "GetVoiceVolume", &UUPMExtendedSettings::execGetVoiceVolume },
		{ "OnPawnChanged", &UUPMExtendedSettings::execOnPawnChanged },
		{ "ResetAudioToDefaults", &UUPMExtendedSettings::execResetAudioToDefaults },
		{ "ResetExtendedToDefaults", &UUPMExtendedSettings::execResetExtendedToDefaults },
		{ "ResetInputToDefaults", &UUPMExtendedSettings::execResetInputToDefaults },
		{ "ResetVisualToDefaults", &UUPMExtendedSettings::execResetVisualToDefaults },
		{ "SetAimAssistEnabled", &UUPMExtendedSettings::execSetAimAssistEnabled },
		{ "SetAimAssistStrength", &UUPMExtendedSettings::execSetAimAssistStrength },
		{ "SetAimSensitivityMultiplier", &UUPMExtendedSettings::execSetAimSensitivityMultiplier },
		{ "SetAmbientVolume", &UUPMExtendedSettings::execSetAmbientVolume },
		{ "SetBloomIntensity", &UUPMExtendedSettings::execSetBloomIntensity },
		{ "SetBrightness", &UUPMExtendedSettings::execSetBrightness },
		{ "SetCameraShakeScale", &UUPMExtendedSettings::execSetCameraShakeScale },
		{ "SetChromaticAberrationIntensity", &UUPMExtendedSettings::execSetChromaticAberrationIntensity },
		{ "SetColorblindMode", &UUPMExtendedSettings::execSetColorblindMode },
		{ "SetColorblindStrength", &UUPMExtendedSettings::execSetColorblindStrength },
		{ "SetContrast", &UUPMExtendedSettings::execSetContrast },
		{ "SetControllerDeadzoneInner", &UUPMExtendedSettings::execSetControllerDeadzoneInner },
		{ "SetControllerDeadzoneOuter", &UUPMExtendedSettings::execSetControllerDeadzoneOuter },
		{ "SetControllerSensitivity", &UUPMExtendedSettings::execSetControllerSensitivity },
		{ "SetControllerSensitivityX", &UUPMExtendedSettings::execSetControllerSensitivityX },
		{ "SetControllerSensitivityY", &UUPMExtendedSettings::execSetControllerSensitivityY },
		{ "SetDepthOfFieldEnabled", &UUPMExtendedSettings::execSetDepthOfFieldEnabled },
		{ "SetFieldOfView", &UUPMExtendedSettings::execSetFieldOfView },
		{ "SetFilmGrainIntensity", &UUPMExtendedSettings::execSetFilmGrainIntensity },
		{ "SetGamma", &UUPMExtendedSettings::execSetGamma },
		{ "SetHeadBobEnabled", &UUPMExtendedSettings::execSetHeadBobEnabled },
		{ "SetHeadBobIntensity", &UUPMExtendedSettings::execSetHeadBobIntensity },
		{ "SetHighContrastMode", &UUPMExtendedSettings::execSetHighContrastMode },
		{ "SetHUDScale", &UUPMExtendedSettings::execSetHUDScale },
		{ "SetInvertControllerX", &UUPMExtendedSettings::execSetInvertControllerX },
		{ "SetInvertControllerY", &UUPMExtendedSettings::execSetInvertControllerY },
		{ "SetInvertMouseX", &UUPMExtendedSettings::execSetInvertMouseX },
		{ "SetInvertMouseY", &UUPMExtendedSettings::execSetInvertMouseY },
		{ "SetLensFlareEnabled", &UUPMExtendedSettings::execSetLensFlareEnabled },
		{ "SetMasterVolume", &UUPMExtendedSettings::execSetMasterVolume },
		{ "SetMotionBlurEnabled", &UUPMExtendedSettings::execSetMotionBlurEnabled },
		{ "SetMotionBlurIntensity", &UUPMExtendedSettings::execSetMotionBlurIntensity },
		{ "SetMouseAccelerationEnabled", &UUPMExtendedSettings::execSetMouseAccelerationEnabled },
		{ "SetMouseSensitivity", &UUPMExtendedSettings::execSetMouseSensitivity },
		{ "SetMouseSensitivityX", &UUPMExtendedSettings::execSetMouseSensitivityX },
		{ "SetMouseSensitivityY", &UUPMExtendedSettings::execSetMouseSensitivityY },
		{ "SetMouseSmoothingEnabled", &UUPMExtendedSettings::execSetMouseSmoothingEnabled },
		{ "SetMusicVolume", &UUPMExtendedSettings::execSetMusicVolume },
		{ "SetReduceScreenShake", &UUPMExtendedSettings::execSetReduceScreenShake },
		{ "SetSFXVolume", &UUPMExtendedSettings::execSetSFXVolume },
		{ "SetSubtitleBackground", &UUPMExtendedSettings::execSetSubtitleBackground },
		{ "SetSubtitlesEnabled", &UUPMExtendedSettings::execSetSubtitlesEnabled },
		{ "SetSubtitleSize", &UUPMExtendedSettings::execSetSubtitleSize },
		{ "SetUIVolume", &UUPMExtendedSettings::execSetUIVolume },
		{ "SetVibrationEnabled", &UUPMExtendedSettings::execSetVibrationEnabled },
		{ "SetVibrationIntensity", &UUPMExtendedSettings::execSetVibrationIntensity },
		{ "SetVignetteIntensity", &UUPMExtendedSettings::execSetVignetteIntensity },
		{ "SetVoiceVolume", &UUPMExtendedSettings::execSetVoiceVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUPMExtendedSettings;
UClass* UUPMExtendedSettings::GetPrivateStaticClass()
{
	using TClass = UUPMExtendedSettings;
	if (!Z_Registration_Info_UClass_UUPMExtendedSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UPMExtendedSettings"),
			Z_Registration_Info_UClass_UUPMExtendedSettings.InnerSingleton,
			StaticRegisterNativesUUPMExtendedSettings,
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
	return Z_Registration_Info_UClass_UUPMExtendedSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UUPMExtendedSettings_NoRegister()
{
	return UUPMExtendedSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUPMExtendedSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UPMExtendedSettings - Handles settings not available through UGameUserSettings\n *\n * This LocalPlayerSubsystem manages per-player settings like FOV, input sensitivity,\n * audio volumes, and post-process effects. It automatically re-applies settings\n * on level load and pawn possession.\n */" },
#endif
		{ "IncludePath", "UPMExtendedSettings.h" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPMExtendedSettings - Handles settings not available through UGameUserSettings\n\nThis LocalPlayerSubsystem manages per-player settings like FOV, input sensitivity,\naudio volumes, and post-process effects. It automatically re-applies settings\non level load and pawn possession." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCameraManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached references\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached references" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimePostProcess_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UPMExtendedSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCameraManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimePostProcess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPMExtendedSettings_ApplyAllExtendedSettings, "ApplyAllExtendedSettings" }, // 1945590973
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetAimAssistEnabled, "GetAimAssistEnabled" }, // 1380155281
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetAimSensitivityMultiplier, "GetAimSensitivityMultiplier" }, // 4225540992
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetBrightness, "GetBrightness" }, // 2015901945
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetCameraShakeScale, "GetCameraShakeScale" }, // 2110145378
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetColorblindMode, "GetColorblindMode" }, // 1653964485
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetControllerDeadzoneInner, "GetControllerDeadzoneInner" }, // 3755161536
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetControllerSensitivity, "GetControllerSensitivity" }, // 1296357451
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetFieldOfView, "GetFieldOfView" }, // 2318168968
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetGamma, "GetGamma" }, // 820289158
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetHeadBobEnabled, "GetHeadBobEnabled" }, // 611793772
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetHUDScale, "GetHUDScale" }, // 1442149865
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetInvertControllerY, "GetInvertControllerY" }, // 3332349877
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetInvertMouseY, "GetInvertMouseY" }, // 3209385984
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetMasterVolume, "GetMasterVolume" }, // 929259372
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetMotionBlurIntensity, "GetMotionBlurIntensity" }, // 3818052663
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetMouseAccelerationEnabled, "GetMouseAccelerationEnabled" }, // 1830155192
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSensitivity, "GetMouseSensitivity" }, // 3014163384
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetMouseSmoothingEnabled, "GetMouseSmoothingEnabled" }, // 551763577
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetMusicVolume, "GetMusicVolume" }, // 3996208540
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetSFXVolume, "GetSFXVolume" }, // 4023622193
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetSubtitlesEnabled, "GetSubtitlesEnabled" }, // 1691663024
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetVibrationEnabled, "GetVibrationEnabled" }, // 2404744701
		{ &Z_Construct_UFunction_UUPMExtendedSettings_GetVoiceVolume, "GetVoiceVolume" }, // 229718608
		{ &Z_Construct_UFunction_UUPMExtendedSettings_OnPawnChanged, "OnPawnChanged" }, // 3802988955
		{ &Z_Construct_UFunction_UUPMExtendedSettings_ResetAudioToDefaults, "ResetAudioToDefaults" }, // 2109084178
		{ &Z_Construct_UFunction_UUPMExtendedSettings_ResetExtendedToDefaults, "ResetExtendedToDefaults" }, // 3871472413
		{ &Z_Construct_UFunction_UUPMExtendedSettings_ResetInputToDefaults, "ResetInputToDefaults" }, // 3761611016
		{ &Z_Construct_UFunction_UUPMExtendedSettings_ResetVisualToDefaults, "ResetVisualToDefaults" }, // 1951940551
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistEnabled, "SetAimAssistEnabled" }, // 916450788
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetAimAssistStrength, "SetAimAssistStrength" }, // 1048532542
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetAimSensitivityMultiplier, "SetAimSensitivityMultiplier" }, // 1220595552
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetAmbientVolume, "SetAmbientVolume" }, // 2811527601
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetBloomIntensity, "SetBloomIntensity" }, // 2708223386
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetBrightness, "SetBrightness" }, // 1907418884
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetCameraShakeScale, "SetCameraShakeScale" }, // 848498368
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetChromaticAberrationIntensity, "SetChromaticAberrationIntensity" }, // 3024105188
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindMode, "SetColorblindMode" }, // 1607554010
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetColorblindStrength, "SetColorblindStrength" }, // 792220300
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetContrast, "SetContrast" }, // 488270333
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneInner, "SetControllerDeadzoneInner" }, // 3775101728
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetControllerDeadzoneOuter, "SetControllerDeadzoneOuter" }, // 2505529357
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivity, "SetControllerSensitivity" }, // 2912917943
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityX, "SetControllerSensitivityX" }, // 3453651642
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetControllerSensitivityY, "SetControllerSensitivityY" }, // 3408028645
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetDepthOfFieldEnabled, "SetDepthOfFieldEnabled" }, // 3131167039
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetFieldOfView, "SetFieldOfView" }, // 4251903441
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetFilmGrainIntensity, "SetFilmGrainIntensity" }, // 4057058360
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetGamma, "SetGamma" }, // 3700278684
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobEnabled, "SetHeadBobEnabled" }, // 38319203
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetHeadBobIntensity, "SetHeadBobIntensity" }, // 288741264
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetHighContrastMode, "SetHighContrastMode" }, // 487030994
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetHUDScale, "SetHUDScale" }, // 444306653
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerX, "SetInvertControllerX" }, // 65442438
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetInvertControllerY, "SetInvertControllerY" }, // 3310065362
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseX, "SetInvertMouseX" }, // 243280455
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetInvertMouseY, "SetInvertMouseY" }, // 3368760873
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetLensFlareEnabled, "SetLensFlareEnabled" }, // 3373034009
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetMasterVolume, "SetMasterVolume" }, // 3255354159
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurEnabled, "SetMotionBlurEnabled" }, // 3643927682
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetMotionBlurIntensity, "SetMotionBlurIntensity" }, // 1151474796
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetMouseAccelerationEnabled, "SetMouseAccelerationEnabled" }, // 1923215125
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivity, "SetMouseSensitivity" }, // 2407473705
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityX, "SetMouseSensitivityX" }, // 2621966098
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSensitivityY, "SetMouseSensitivityY" }, // 4024667287
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetMouseSmoothingEnabled, "SetMouseSmoothingEnabled" }, // 2700884483
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetMusicVolume, "SetMusicVolume" }, // 719079096
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetReduceScreenShake, "SetReduceScreenShake" }, // 2881660533
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetSFXVolume, "SetSFXVolume" }, // 3726265943
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleBackground, "SetSubtitleBackground" }, // 1202715999
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitlesEnabled, "SetSubtitlesEnabled" }, // 682181230
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetSubtitleSize, "SetSubtitleSize" }, // 2275326380
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetUIVolume, "SetUIVolume" }, // 1152425967
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationEnabled, "SetVibrationEnabled" }, // 3369164142
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetVibrationIntensity, "SetVibrationIntensity" }, // 237516339
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetVignetteIntensity, "SetVignetteIntensity" }, // 327529051
		{ &Z_Construct_UFunction_UUPMExtendedSettings_SetVoiceVolume, "SetVoiceVolume" }, // 4268655429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPMExtendedSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPMExtendedSettings_Statics::NewProp_CachedCameraManager = { "CachedCameraManager", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMExtendedSettings, CachedCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCameraManager_MetaData), NewProp_CachedCameraManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPMExtendedSettings_Statics::NewProp_RuntimePostProcess = { "RuntimePostProcess", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMExtendedSettings, RuntimePostProcess), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimePostProcess_MetaData), NewProp_RuntimePostProcess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPMExtendedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMExtendedSettings_Statics::NewProp_CachedCameraManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMExtendedSettings_Statics::NewProp_RuntimePostProcess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMExtendedSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUPMExtendedSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UPM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMExtendedSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPMExtendedSettings_Statics::ClassParams = {
	&UUPMExtendedSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUPMExtendedSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUPMExtendedSettings_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMExtendedSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UUPMExtendedSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUPMExtendedSettings()
{
	if (!Z_Registration_Info_UClass_UUPMExtendedSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPMExtendedSettings.OuterSingleton, Z_Construct_UClass_UUPMExtendedSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUPMExtendedSettings.OuterSingleton;
}
UUPMExtendedSettings::UUPMExtendedSettings() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUPMExtendedSettings);
UUPMExtendedSettings::~UUPMExtendedSettings() {}
// ********** End Class UUPMExtendedSettings *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h__Script_UPM_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUPMExtendedSettings, UUPMExtendedSettings::StaticClass, TEXT("UUPMExtendedSettings"), &Z_Registration_Info_UClass_UUPMExtendedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPMExtendedSettings), 1689828937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h__Script_UPM_1495175989(TEXT("/Script/UPM"),
	Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h__Script_UPM_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h__Script_UPM_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
