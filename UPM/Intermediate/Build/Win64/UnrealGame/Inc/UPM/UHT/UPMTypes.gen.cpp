// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UPMTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUPMTypes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_UPM();
UPM_API UEnum* Z_Construct_UEnum_UPM_EUPMColorblindMode();
UPM_API UEnum* Z_Construct_UEnum_UPM_EUPMMonitoringMode();
UPM_API UEnum* Z_Construct_UEnum_UPM_EUPMSubtitleSize();
UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature();
UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature();
UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnSettingsApplied__DelegateSignature();
UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature();
UPM_API UScriptStruct* Z_Construct_UScriptStruct_FUPMBenchmarkResults();
UPM_API UScriptStruct* Z_Construct_UScriptStruct_FUPMPerformanceStats();
UPM_API UScriptStruct* Z_Construct_UScriptStruct_FUPMQualityPreset();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EUPMSubtitleSize **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUPMSubtitleSize;
static UEnum* EUPMSubtitleSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUPMSubtitleSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUPMSubtitleSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UPM_EUPMSubtitleSize, (UObject*)Z_Construct_UPackage__Script_UPM(), TEXT("EUPMSubtitleSize"));
	}
	return Z_Registration_Info_UEnum_EUPMSubtitleSize.OuterSingleton;
}
template<> UPM_API UEnum* StaticEnum<EUPMSubtitleSize>()
{
	return EUPMSubtitleSize_StaticEnum();
}
struct Z_Construct_UEnum_UPM_EUPMSubtitleSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Subtitle size options for accessibility\n */" },
#endif
		{ "ExtraLarge.Name", "EUPMSubtitleSize::ExtraLarge" },
		{ "Large.Name", "EUPMSubtitleSize::Large" },
		{ "Medium.Name", "EUPMSubtitleSize::Medium" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
		{ "Small.Name", "EUPMSubtitleSize::Small" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subtitle size options for accessibility" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUPMSubtitleSize::Small", (int64)EUPMSubtitleSize::Small },
		{ "EUPMSubtitleSize::Medium", (int64)EUPMSubtitleSize::Medium },
		{ "EUPMSubtitleSize::Large", (int64)EUPMSubtitleSize::Large },
		{ "EUPMSubtitleSize::ExtraLarge", (int64)EUPMSubtitleSize::ExtraLarge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UPM_EUPMSubtitleSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UPM,
	nullptr,
	"EUPMSubtitleSize",
	"EUPMSubtitleSize",
	Z_Construct_UEnum_UPM_EUPMSubtitleSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UPM_EUPMSubtitleSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UPM_EUPMSubtitleSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UPM_EUPMSubtitleSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UPM_EUPMSubtitleSize()
{
	if (!Z_Registration_Info_UEnum_EUPMSubtitleSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUPMSubtitleSize.InnerSingleton, Z_Construct_UEnum_UPM_EUPMSubtitleSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUPMSubtitleSize.InnerSingleton;
}
// ********** End Enum EUPMSubtitleSize ************************************************************

// ********** Begin Enum EUPMColorblindMode ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUPMColorblindMode;
static UEnum* EUPMColorblindMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUPMColorblindMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUPMColorblindMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UPM_EUPMColorblindMode, (UObject*)Z_Construct_UPackage__Script_UPM(), TEXT("EUPMColorblindMode"));
	}
	return Z_Registration_Info_UEnum_EUPMColorblindMode.OuterSingleton;
}
template<> UPM_API UEnum* StaticEnum<EUPMColorblindMode>()
{
	return EUPMColorblindMode_StaticEnum();
}
struct Z_Construct_UEnum_UPM_EUPMColorblindMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Colorblind mode options for accessibility\n */" },
#endif
		{ "Deuteranopia.Comment", "// Red-blind\n" },
		{ "Deuteranopia.Name", "EUPMColorblindMode::Deuteranopia" },
		{ "Deuteranopia.ToolTip", "Red-blind" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
		{ "None.Name", "EUPMColorblindMode::None" },
		{ "Protanopia.Name", "EUPMColorblindMode::Protanopia" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Colorblind mode options for accessibility" },
#endif
		{ "Tritanopia.Comment", "// Green-blind\n" },
		{ "Tritanopia.Name", "EUPMColorblindMode::Tritanopia" },
		{ "Tritanopia.ToolTip", "Green-blind" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUPMColorblindMode::None", (int64)EUPMColorblindMode::None },
		{ "EUPMColorblindMode::Protanopia", (int64)EUPMColorblindMode::Protanopia },
		{ "EUPMColorblindMode::Deuteranopia", (int64)EUPMColorblindMode::Deuteranopia },
		{ "EUPMColorblindMode::Tritanopia", (int64)EUPMColorblindMode::Tritanopia },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UPM_EUPMColorblindMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UPM,
	nullptr,
	"EUPMColorblindMode",
	"EUPMColorblindMode",
	Z_Construct_UEnum_UPM_EUPMColorblindMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UPM_EUPMColorblindMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UPM_EUPMColorblindMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UPM_EUPMColorblindMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UPM_EUPMColorblindMode()
{
	if (!Z_Registration_Info_UEnum_EUPMColorblindMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUPMColorblindMode.InnerSingleton, Z_Construct_UEnum_UPM_EUPMColorblindMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUPMColorblindMode.InnerSingleton;
}
// ********** End Enum EUPMColorblindMode **********************************************************

// ********** Begin Enum EUPMMonitoringMode ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUPMMonitoringMode;
static UEnum* EUPMMonitoringMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUPMMonitoringMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUPMMonitoringMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UPM_EUPMMonitoringMode, (UObject*)Z_Construct_UPackage__Script_UPM(), TEXT("EUPMMonitoringMode"));
	}
	return Z_Registration_Info_UEnum_EUPMMonitoringMode.OuterSingleton;
}
template<> UPM_API UEnum* StaticEnum<EUPMMonitoringMode>()
{
	return EUPMMonitoringMode_StaticEnum();
}
struct Z_Construct_UEnum_UPM_EUPMMonitoringMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Basic.Comment", "// No monitoring overhead\n" },
		{ "Basic.Name", "EUPMMonitoringMode::Basic" },
		{ "Basic.ToolTip", "No monitoring overhead" },
		{ "Benchmark.Comment", "// All available metrics\n" },
		{ "Benchmark.Name", "EUPMMonitoringMode::Benchmark" },
		{ "Benchmark.ToolTip", "All available metrics" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Performance monitoring modes\n */" },
#endif
		{ "Detailed.Comment", "// FPS and frame time only\n" },
		{ "Detailed.Name", "EUPMMonitoringMode::Detailed" },
		{ "Detailed.ToolTip", "FPS and frame time only" },
		{ "Disabled.Name", "EUPMMonitoringMode::Disabled" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance monitoring modes" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUPMMonitoringMode::Disabled", (int64)EUPMMonitoringMode::Disabled },
		{ "EUPMMonitoringMode::Basic", (int64)EUPMMonitoringMode::Basic },
		{ "EUPMMonitoringMode::Detailed", (int64)EUPMMonitoringMode::Detailed },
		{ "EUPMMonitoringMode::Benchmark", (int64)EUPMMonitoringMode::Benchmark },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UPM_EUPMMonitoringMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UPM,
	nullptr,
	"EUPMMonitoringMode",
	"EUPMMonitoringMode",
	Z_Construct_UEnum_UPM_EUPMMonitoringMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UPM_EUPMMonitoringMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UPM_EUPMMonitoringMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UPM_EUPMMonitoringMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UPM_EUPMMonitoringMode()
{
	if (!Z_Registration_Info_UEnum_EUPMMonitoringMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUPMMonitoringMode.InnerSingleton, Z_Construct_UEnum_UPM_EUPMMonitoringMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUPMMonitoringMode.InnerSingleton;
}
// ********** End Enum EUPMMonitoringMode **********************************************************

// ********** Begin ScriptStruct FUPMQualityPreset *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUPMQualityPreset;
class UScriptStruct* FUPMQualityPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUPMQualityPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUPMQualityPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUPMQualityPreset, (UObject*)Z_Construct_UPackage__Script_UPM(), TEXT("UPMQualityPreset"));
	}
	return Z_Registration_Info_UScriptStruct_FUPMQualityPreset.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUPMQualityPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Quality preset struct containing all scalability settings\n */" },
#endif
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quality preset struct containing all scalability settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallQuality_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDistance_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasing_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shadows_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIllumination_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reflections_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcess_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Foliage_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shading_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionScale_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVSync_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateLimit_MetaData[] = {
		{ "Category", "UPM|Quality" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverallQuality;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ViewDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AntiAliasing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Shadows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalIllumination;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Reflections;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PostProcess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Effects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Foliage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Shading;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResolutionScale;
	static void NewProp_bVSync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVSync;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUPMQualityPreset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_OverallQuality = { "OverallQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, OverallQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallQuality_MetaData), NewProp_OverallQuality_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_ViewDistance = { "ViewDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, ViewDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDistance_MetaData), NewProp_ViewDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_AntiAliasing = { "AntiAliasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, AntiAliasing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiAliasing_MetaData), NewProp_AntiAliasing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Shadows = { "Shadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, Shadows), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shadows_MetaData), NewProp_Shadows_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_GlobalIllumination = { "GlobalIllumination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, GlobalIllumination), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalIllumination_MetaData), NewProp_GlobalIllumination_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Reflections = { "Reflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, Reflections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reflections_MetaData), NewProp_Reflections_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_PostProcess = { "PostProcess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, PostProcess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcess_MetaData), NewProp_PostProcess_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, Textures), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, Effects), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effects_MetaData), NewProp_Effects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Foliage = { "Foliage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, Foliage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Foliage_MetaData), NewProp_Foliage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Shading = { "Shading", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, Shading), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shading_MetaData), NewProp_Shading_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_ResolutionScale = { "ResolutionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, ResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionScale_MetaData), NewProp_ResolutionScale_MetaData) };
void Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_bVSync_SetBit(void* Obj)
{
	((FUPMQualityPreset*)Obj)->bVSync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_bVSync = { "bVSync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUPMQualityPreset), &Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_bVSync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVSync_MetaData), NewProp_bVSync_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_FrameRateLimit = { "FrameRateLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMQualityPreset, FrameRateLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateLimit_MetaData), NewProp_FrameRateLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_PresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_OverallQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_ViewDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_AntiAliasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Shadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_GlobalIllumination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Reflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_PostProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Textures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Effects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Foliage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_Shading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_ResolutionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_bVSync,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewProp_FrameRateLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UPM,
	nullptr,
	&NewStructOps,
	"UPMQualityPreset",
	Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::PropPointers),
	sizeof(FUPMQualityPreset),
	alignof(FUPMQualityPreset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUPMQualityPreset()
{
	if (!Z_Registration_Info_UScriptStruct_FUPMQualityPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUPMQualityPreset.InnerSingleton, Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUPMQualityPreset.InnerSingleton;
}
// ********** End ScriptStruct FUPMQualityPreset ***************************************************

// ********** Begin ScriptStruct FUPMPerformanceStats **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUPMPerformanceStats;
class UScriptStruct* FUPMPerformanceStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUPMPerformanceStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUPMPerformanceStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUPMPerformanceStats, (UObject*)Z_Construct_UPackage__Script_UPM(), TEXT("UPMPerformanceStats"));
	}
	return Z_Registration_Info_UScriptStruct_FUPMPerformanceStats.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Performance statistics struct\n */" },
#endif
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance statistics struct" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFPS_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageFPS_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFPS_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFPS_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameTimeMs_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameThreadMs_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderThreadMs_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUTimeMs_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsedPhysicalMemoryMB_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailablePhysicalMemoryMB_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPS_1Percentile_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPS_01Percentile_MetaData[] = {
		{ "Category", "UPM|Performance" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFPS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageFPS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFPS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFPS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameTimeMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameThreadMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderThreadMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GPUTimeMs;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_UsedPhysicalMemoryMB;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_AvailablePhysicalMemoryMB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS_1Percentile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS_01Percentile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUPMPerformanceStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_CurrentFPS = { "CurrentFPS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, CurrentFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFPS_MetaData), NewProp_CurrentFPS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_AverageFPS = { "AverageFPS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, AverageFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageFPS_MetaData), NewProp_AverageFPS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_MinFPS = { "MinFPS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, MinFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFPS_MetaData), NewProp_MinFPS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_MaxFPS = { "MaxFPS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, MaxFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFPS_MetaData), NewProp_MaxFPS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_FrameTimeMs = { "FrameTimeMs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, FrameTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameTimeMs_MetaData), NewProp_FrameTimeMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_GameThreadMs = { "GameThreadMs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, GameThreadMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameThreadMs_MetaData), NewProp_GameThreadMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_RenderThreadMs = { "RenderThreadMs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, RenderThreadMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderThreadMs_MetaData), NewProp_RenderThreadMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_GPUTimeMs = { "GPUTimeMs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, GPUTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUTimeMs_MetaData), NewProp_GPUTimeMs_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_UsedPhysicalMemoryMB = { "UsedPhysicalMemoryMB", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, UsedPhysicalMemoryMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsedPhysicalMemoryMB_MetaData), NewProp_UsedPhysicalMemoryMB_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_AvailablePhysicalMemoryMB = { "AvailablePhysicalMemoryMB", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, AvailablePhysicalMemoryMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailablePhysicalMemoryMB_MetaData), NewProp_AvailablePhysicalMemoryMB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_FPS_1Percentile = { "FPS_1Percentile", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, FPS_1Percentile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPS_1Percentile_MetaData), NewProp_FPS_1Percentile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_FPS_01Percentile = { "FPS_01Percentile", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMPerformanceStats, FPS_01Percentile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPS_01Percentile_MetaData), NewProp_FPS_01Percentile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_CurrentFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_AverageFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_MinFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_MaxFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_FrameTimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_GameThreadMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_RenderThreadMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_GPUTimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_UsedPhysicalMemoryMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_AvailablePhysicalMemoryMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_FPS_1Percentile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewProp_FPS_01Percentile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UPM,
	nullptr,
	&NewStructOps,
	"UPMPerformanceStats",
	Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::PropPointers),
	sizeof(FUPMPerformanceStats),
	alignof(FUPMPerformanceStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUPMPerformanceStats()
{
	if (!Z_Registration_Info_UScriptStruct_FUPMPerformanceStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUPMPerformanceStats.InnerSingleton, Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUPMPerformanceStats.InnerSingleton;
}
// ********** End ScriptStruct FUPMPerformanceStats ************************************************

// ********** Begin ScriptStruct FUPMBenchmarkResults **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUPMBenchmarkResults;
class UScriptStruct* FUPMBenchmarkResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUPMBenchmarkResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUPMBenchmarkResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUPMBenchmarkResults, (UObject*)Z_Construct_UPackage__Script_UPM(), TEXT("UPMBenchmarkResults"));
	}
	return Z_Registration_Info_UScriptStruct_FUPMBenchmarkResults.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Benchmark results struct\n */" },
#endif
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Benchmark results struct" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageFPS_MetaData[] = {
		{ "Category", "UPM|Benchmark" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFPS_MetaData[] = {
		{ "Category", "UPM|Benchmark" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFPS_MetaData[] = {
		{ "Category", "UPM|Benchmark" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPS_1Percentile_MetaData[] = {
		{ "Category", "UPM|Benchmark" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPS_01Percentile_MetaData[] = {
		{ "Category", "UPM|Benchmark" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageFrameTimeMs_MetaData[] = {
		{ "Category", "UPM|Benchmark" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "UPM|Benchmark" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalFrames_MetaData[] = {
		{ "Category", "UPM|Benchmark" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecommendedQualityLevel_MetaData[] = {
		{ "Category", "UPM|Benchmark" },
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageFPS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFPS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFPS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS_1Percentile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS_01Percentile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageFrameTimeMs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecommendedQualityLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUPMBenchmarkResults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_AverageFPS = { "AverageFPS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMBenchmarkResults, AverageFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageFPS_MetaData), NewProp_AverageFPS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_MinFPS = { "MinFPS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMBenchmarkResults, MinFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFPS_MetaData), NewProp_MinFPS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_MaxFPS = { "MaxFPS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMBenchmarkResults, MaxFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFPS_MetaData), NewProp_MaxFPS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_FPS_1Percentile = { "FPS_1Percentile", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMBenchmarkResults, FPS_1Percentile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPS_1Percentile_MetaData), NewProp_FPS_1Percentile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_FPS_01Percentile = { "FPS_01Percentile", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMBenchmarkResults, FPS_01Percentile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPS_01Percentile_MetaData), NewProp_FPS_01Percentile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_AverageFrameTimeMs = { "AverageFrameTimeMs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMBenchmarkResults, AverageFrameTimeMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageFrameTimeMs_MetaData), NewProp_AverageFrameTimeMs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMBenchmarkResults, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_TotalFrames = { "TotalFrames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMBenchmarkResults, TotalFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalFrames_MetaData), NewProp_TotalFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_RecommendedQualityLevel = { "RecommendedQualityLevel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUPMBenchmarkResults, RecommendedQualityLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecommendedQualityLevel_MetaData), NewProp_RecommendedQualityLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_AverageFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_MinFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_MaxFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_FPS_1Percentile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_FPS_01Percentile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_AverageFrameTimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_TotalFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewProp_RecommendedQualityLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UPM,
	nullptr,
	&NewStructOps,
	"UPMBenchmarkResults",
	Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::PropPointers),
	sizeof(FUPMBenchmarkResults),
	alignof(FUPMBenchmarkResults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUPMBenchmarkResults()
{
	if (!Z_Registration_Info_UScriptStruct_FUPMBenchmarkResults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUPMBenchmarkResults.InnerSingleton, Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUPMBenchmarkResults.InnerSingleton;
}
// ********** End ScriptStruct FUPMBenchmarkResults ************************************************

// ********** Begin Delegate FOnSettingsChanged ****************************************************
struct Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics
{
	struct _Script_UPM_eventOnSettingsChanged_Parms
	{
		FUPMQualityPreset NewSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::NewProp_NewSettings = { "NewSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UPM_eventOnSettingsChanged_Parms, NewSettings), Z_Construct_UScriptStruct_FUPMQualityPreset, METADATA_PARAMS(0, nullptr) }; // 298657846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::NewProp_NewSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UPM, nullptr, "OnSettingsChanged__DelegateSignature", Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::_Script_UPM_eventOnSettingsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::_Script_UPM_eventOnSettingsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSettingsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSettingsChanged, FUPMQualityPreset NewSettings)
{
	struct _Script_UPM_eventOnSettingsChanged_Parms
	{
		FUPMQualityPreset NewSettings;
	};
	_Script_UPM_eventOnSettingsChanged_Parms Parms;
	Parms.NewSettings=NewSettings;
	OnSettingsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSettingsChanged ******************************************************

// ********** Begin Delegate FOnFPSUpdated *********************************************************
struct Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics
{
	struct _Script_UPM_eventOnFPSUpdated_Parms
	{
		float CurrentFPS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::NewProp_CurrentFPS = { "CurrentFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UPM_eventOnFPSUpdated_Parms, CurrentFPS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::NewProp_CurrentFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UPM, nullptr, "OnFPSUpdated__DelegateSignature", Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::_Script_UPM_eventOnFPSUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::_Script_UPM_eventOnFPSUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFPSUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFPSUpdated, float CurrentFPS)
{
	struct _Script_UPM_eventOnFPSUpdated_Parms
	{
		float CurrentFPS;
	};
	_Script_UPM_eventOnFPSUpdated_Parms Parms;
	Parms.CurrentFPS=CurrentFPS;
	OnFPSUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnFPSUpdated ***********************************************************

// ********** Begin Delegate FOnBenchmarkComplete **************************************************
struct Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics
{
	struct _Script_UPM_eventOnBenchmarkComplete_Parms
	{
		FUPMBenchmarkResults Results;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UPM_eventOnBenchmarkComplete_Parms, Results), Z_Construct_UScriptStruct_FUPMBenchmarkResults, METADATA_PARAMS(0, nullptr) }; // 2573232789
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UPM, nullptr, "OnBenchmarkComplete__DelegateSignature", Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::_Script_UPM_eventOnBenchmarkComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::_Script_UPM_eventOnBenchmarkComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBenchmarkComplete_DelegateWrapper(const FMulticastScriptDelegate& OnBenchmarkComplete, FUPMBenchmarkResults Results)
{
	struct _Script_UPM_eventOnBenchmarkComplete_Parms
	{
		FUPMBenchmarkResults Results;
	};
	_Script_UPM_eventOnBenchmarkComplete_Parms Parms;
	Parms.Results=Results;
	OnBenchmarkComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBenchmarkComplete ****************************************************

// ********** Begin Delegate FOnSettingsApplied ****************************************************
struct Z_Construct_UDelegateFunction_UPM_OnSettingsApplied__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UPMTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UPM_OnSettingsApplied__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_UPM, nullptr, "OnSettingsApplied__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPM_OnSettingsApplied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPM_OnSettingsApplied__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UPM_OnSettingsApplied__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPM_OnSettingsApplied__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSettingsApplied_DelegateWrapper(const FMulticastScriptDelegate& OnSettingsApplied)
{
	OnSettingsApplied.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnSettingsApplied ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h__Script_UPM_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUPMSubtitleSize_StaticEnum, TEXT("EUPMSubtitleSize"), &Z_Registration_Info_UEnum_EUPMSubtitleSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3185697990U) },
		{ EUPMColorblindMode_StaticEnum, TEXT("EUPMColorblindMode"), &Z_Registration_Info_UEnum_EUPMColorblindMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1317520368U) },
		{ EUPMMonitoringMode_StaticEnum, TEXT("EUPMMonitoringMode"), &Z_Registration_Info_UEnum_EUPMMonitoringMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2561663259U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUPMQualityPreset::StaticStruct, Z_Construct_UScriptStruct_FUPMQualityPreset_Statics::NewStructOps, TEXT("UPMQualityPreset"), &Z_Registration_Info_UScriptStruct_FUPMQualityPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUPMQualityPreset), 298657846U) },
		{ FUPMPerformanceStats::StaticStruct, Z_Construct_UScriptStruct_FUPMPerformanceStats_Statics::NewStructOps, TEXT("UPMPerformanceStats"), &Z_Registration_Info_UScriptStruct_FUPMPerformanceStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUPMPerformanceStats), 587567735U) },
		{ FUPMBenchmarkResults::StaticStruct, Z_Construct_UScriptStruct_FUPMBenchmarkResults_Statics::NewStructOps, TEXT("UPMBenchmarkResults"), &Z_Registration_Info_UScriptStruct_FUPMBenchmarkResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUPMBenchmarkResults), 2573232789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h__Script_UPM_4095840522(TEXT("/Script/UPM"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h__Script_UPM_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h__Script_UPM_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h__Script_UPM_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMTypes_h__Script_UPM_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
