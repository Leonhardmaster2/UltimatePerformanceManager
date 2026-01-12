// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UPMSettingsData.h"
#include "UPMTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUPMSettingsData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
UPackage* Z_Construct_UPackage__Script_UPM();
UPM_API UClass* Z_Construct_UClass_UUPMSettingsData();
UPM_API UClass* Z_Construct_UClass_UUPMSettingsData_NoRegister();
UPM_API UEnum* Z_Construct_UEnum_UPM_EUPMColorblindMode();
UPM_API UEnum* Z_Construct_UEnum_UPM_EUPMMonitoringMode();
UPM_API UEnum* Z_Construct_UEnum_UPM_EUPMSubtitleSize();
UPM_API UScriptStruct* Z_Construct_UScriptStruct_FUPMQualityPreset();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUPMSettingsData *********************************************************
void UUPMSettingsData::StaticRegisterNativesUUPMSettingsData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUPMSettingsData;
UClass* UUPMSettingsData::GetPrivateStaticClass()
{
	using TClass = UUPMSettingsData;
	if (!Z_Registration_Info_UClass_UUPMSettingsData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UPMSettingsData"),
			Z_Registration_Info_UClass_UUPMSettingsData.InnerSingleton,
			StaticRegisterNativesUUPMSettingsData,
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
	return Z_Registration_Info_UClass_UUPMSettingsData.InnerSingleton;
}
UClass* Z_Construct_UClass_UUPMSettingsData_NoRegister()
{
	return UUPMSettingsData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUPMSettingsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UPMSettingsData - Save game class for all UPM settings\n *\n * Stores all user settings including graphics, extended settings,\n * and performance monitor preferences for persistence.\n */" },
#endif
		{ "IncludePath", "UPMSettingsData.h" },
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPMSettingsData - Save game class for all UPM settings\n\nStores all user settings including graphics, extended settings,\nand performance monitor preferences for persistence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveVersion_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Save version for migration support */" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save version for migration support" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentQualitySettings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== GRAPHICS (Scalability) ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== GRAPHICS (Scalability) ====================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== DISPLAY ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== DISPLAY ====================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== CAMERA ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== CAMERA ====================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeadBobEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadBobIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== INPUT - MOUSE ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== INPUT - MOUSE ====================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityX_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivityY_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertMouseY_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertMouseX_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMouseSmoothing_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMouseAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerSensitivity_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== INPUT - CONTROLLER ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== INPUT - CONTROLLER ====================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerSensitivityX_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerSensitivityY_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertControllerY_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertControllerX_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadzoneInner_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadzoneOuter_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimSensitivityMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVibrationEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== CONTROLLER FEATURES ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== CONTROLLER FEATURES ====================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VibrationIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAimAssistEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimAssistStrength_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMotionBlurEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== POST PROCESS ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== POST PROCESS ====================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VignetteIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChromaticAberration_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrain_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDepthOfFieldEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLensFlareEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloomIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterVolume_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== AUDIO ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== AUDIO ====================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFXVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubtitlesEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== ACCESSIBILITY ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== ACCESSIBILITY ====================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitleSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubtitleBackground_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorblindMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorblindStrength_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighContrastMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReduceScreenShake_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFPSCounter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== PERFORMANCE MONITOR ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== PERFORMANCE MONITOR ====================" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonitoringMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredMonitor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==================== MISC ====================\n" },
#endif
		{ "ModuleRelativePath", "Public/UPMSettingsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "==================== MISC ====================" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SaveVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentQualitySettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WindowMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResolutionScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraShakeScale;
	static void NewProp_bHeadBobEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeadBobEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadBobIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivityX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivityY;
	static void NewProp_bInvertMouseY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertMouseY;
	static void NewProp_bInvertMouseX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertMouseX;
	static void NewProp_bMouseSmoothing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMouseSmoothing;
	static void NewProp_bMouseAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMouseAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ControllerSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ControllerSensitivityX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ControllerSensitivityY;
	static void NewProp_bInvertControllerY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertControllerY;
	static void NewProp_bInvertControllerX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertControllerX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadzoneInner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadzoneOuter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimSensitivityMultiplier;
	static void NewProp_bVibrationEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVibrationEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VibrationIntensity;
	static void NewProp_bAimAssistEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimAssistEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimAssistStrength;
	static void NewProp_bMotionBlurEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMotionBlurEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionBlurIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gamma;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Contrast;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VignetteIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaticAberration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrain;
	static void NewProp_bDepthOfFieldEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDepthOfFieldEnabled;
	static void NewProp_bLensFlareEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLensFlareEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MasterVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SFXVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UIVolume;
	static void NewProp_bSubtitlesEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtitlesEnabled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubtitleSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubtitleSize;
	static void NewProp_bSubtitleBackground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtitleBackground;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorblindMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorblindMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorblindStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HUDScale;
	static void NewProp_bHighContrastMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighContrastMode;
	static void NewProp_bReduceScreenShake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReduceScreenShake;
	static void NewProp_bShowFPSCounter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFPSCounter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MonitoringMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MonitoringMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreferredMonitor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPMSettingsData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_SaveVersion = { "SaveVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, SaveVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveVersion_MetaData), NewProp_SaveVersion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_CurrentQualitySettings = { "CurrentQualitySettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, CurrentQualitySettings), Z_Construct_UScriptStruct_FUPMQualityPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentQualitySettings_MetaData), NewProp_CurrentQualitySettings_MetaData) }; // 298657846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_WindowMode = { "WindowMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, WindowMode), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowMode_MetaData), NewProp_WindowMode_MetaData) }; // 3411615937
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ResolutionScale = { "ResolutionScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, ResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionScale_MetaData), NewProp_ResolutionScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_CameraShakeScale = { "CameraShakeScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, CameraShakeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShakeScale_MetaData), NewProp_CameraShakeScale_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bHeadBobEnabled_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bHeadBobEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bHeadBobEnabled = { "bHeadBobEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bHeadBobEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeadBobEnabled_MetaData), NewProp_bHeadBobEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_HeadBobIntensity = { "HeadBobIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, HeadBobIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadBobIntensity_MetaData), NewProp_HeadBobIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivity_MetaData), NewProp_MouseSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MouseSensitivityX = { "MouseSensitivityX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, MouseSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivityX_MetaData), NewProp_MouseSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MouseSensitivityY = { "MouseSensitivityY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, MouseSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivityY_MetaData), NewProp_MouseSensitivityY_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertMouseY_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bInvertMouseY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertMouseY = { "bInvertMouseY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertMouseY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertMouseY_MetaData), NewProp_bInvertMouseY_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertMouseX_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bInvertMouseX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertMouseX = { "bInvertMouseX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertMouseX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertMouseX_MetaData), NewProp_bInvertMouseX_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMouseSmoothing_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bMouseSmoothing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMouseSmoothing = { "bMouseSmoothing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMouseSmoothing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMouseSmoothing_MetaData), NewProp_bMouseSmoothing_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMouseAcceleration_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bMouseAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMouseAcceleration = { "bMouseAcceleration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMouseAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMouseAcceleration_MetaData), NewProp_bMouseAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ControllerSensitivity = { "ControllerSensitivity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, ControllerSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerSensitivity_MetaData), NewProp_ControllerSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ControllerSensitivityX = { "ControllerSensitivityX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, ControllerSensitivityX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerSensitivityX_MetaData), NewProp_ControllerSensitivityX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ControllerSensitivityY = { "ControllerSensitivityY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, ControllerSensitivityY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerSensitivityY_MetaData), NewProp_ControllerSensitivityY_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertControllerY_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bInvertControllerY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertControllerY = { "bInvertControllerY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertControllerY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertControllerY_MetaData), NewProp_bInvertControllerY_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertControllerX_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bInvertControllerX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertControllerX = { "bInvertControllerX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertControllerX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertControllerX_MetaData), NewProp_bInvertControllerX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_DeadzoneInner = { "DeadzoneInner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, DeadzoneInner), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadzoneInner_MetaData), NewProp_DeadzoneInner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_DeadzoneOuter = { "DeadzoneOuter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, DeadzoneOuter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadzoneOuter_MetaData), NewProp_DeadzoneOuter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_AimSensitivityMultiplier = { "AimSensitivityMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, AimSensitivityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimSensitivityMultiplier_MetaData), NewProp_AimSensitivityMultiplier_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bVibrationEnabled_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bVibrationEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bVibrationEnabled = { "bVibrationEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bVibrationEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVibrationEnabled_MetaData), NewProp_bVibrationEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_VibrationIntensity = { "VibrationIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, VibrationIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VibrationIntensity_MetaData), NewProp_VibrationIntensity_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bAimAssistEnabled_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bAimAssistEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bAimAssistEnabled = { "bAimAssistEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bAimAssistEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAimAssistEnabled_MetaData), NewProp_bAimAssistEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_AimAssistStrength = { "AimAssistStrength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, AimAssistStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimAssistStrength_MetaData), NewProp_AimAssistStrength_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMotionBlurEnabled_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bMotionBlurEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMotionBlurEnabled = { "bMotionBlurEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMotionBlurEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMotionBlurEnabled_MetaData), NewProp_bMotionBlurEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MotionBlurIntensity = { "MotionBlurIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, MotionBlurIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionBlurIntensity_MetaData), NewProp_MotionBlurIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, Gamma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gamma_MetaData), NewProp_Gamma_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, Contrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_VignetteIntensity = { "VignetteIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, VignetteIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VignetteIntensity_MetaData), NewProp_VignetteIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ChromaticAberration = { "ChromaticAberration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, ChromaticAberration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChromaticAberration_MetaData), NewProp_ChromaticAberration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_FilmGrain = { "FilmGrain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, FilmGrain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrain_MetaData), NewProp_FilmGrain_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bDepthOfFieldEnabled_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bDepthOfFieldEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bDepthOfFieldEnabled = { "bDepthOfFieldEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bDepthOfFieldEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDepthOfFieldEnabled_MetaData), NewProp_bDepthOfFieldEnabled_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bLensFlareEnabled_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bLensFlareEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bLensFlareEnabled = { "bLensFlareEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bLensFlareEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLensFlareEnabled_MetaData), NewProp_bLensFlareEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_BloomIntensity = { "BloomIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, BloomIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloomIntensity_MetaData), NewProp_BloomIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MasterVolume = { "MasterVolume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, MasterVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterVolume_MetaData), NewProp_MasterVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, MusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolume_MetaData), NewProp_MusicVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_SFXVolume = { "SFXVolume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, SFXVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFXVolume_MetaData), NewProp_SFXVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_VoiceVolume = { "VoiceVolume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, VoiceVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceVolume_MetaData), NewProp_VoiceVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_AmbientVolume = { "AmbientVolume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, AmbientVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientVolume_MetaData), NewProp_AmbientVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_UIVolume = { "UIVolume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, UIVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIVolume_MetaData), NewProp_UIVolume_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bSubtitlesEnabled_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bSubtitlesEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bSubtitlesEnabled = { "bSubtitlesEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bSubtitlesEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubtitlesEnabled_MetaData), NewProp_bSubtitlesEnabled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_SubtitleSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_SubtitleSize = { "SubtitleSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, SubtitleSize), Z_Construct_UEnum_UPM_EUPMSubtitleSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitleSize_MetaData), NewProp_SubtitleSize_MetaData) }; // 3185697990
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bSubtitleBackground_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bSubtitleBackground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bSubtitleBackground = { "bSubtitleBackground", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bSubtitleBackground_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubtitleBackground_MetaData), NewProp_bSubtitleBackground_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ColorblindMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ColorblindMode = { "ColorblindMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, ColorblindMode), Z_Construct_UEnum_UPM_EUPMColorblindMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorblindMode_MetaData), NewProp_ColorblindMode_MetaData) }; // 1317520368
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ColorblindStrength = { "ColorblindStrength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, ColorblindStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorblindStrength_MetaData), NewProp_ColorblindStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_HUDScale = { "HUDScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, HUDScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDScale_MetaData), NewProp_HUDScale_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bHighContrastMode_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bHighContrastMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bHighContrastMode = { "bHighContrastMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bHighContrastMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighContrastMode_MetaData), NewProp_bHighContrastMode_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bReduceScreenShake_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bReduceScreenShake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bReduceScreenShake = { "bReduceScreenShake", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bReduceScreenShake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReduceScreenShake_MetaData), NewProp_bReduceScreenShake_MetaData) };
void Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bShowFPSCounter_SetBit(void* Obj)
{
	((UUPMSettingsData*)Obj)->bShowFPSCounter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bShowFPSCounter = { "bShowFPSCounter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUPMSettingsData), &Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bShowFPSCounter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFPSCounter_MetaData), NewProp_bShowFPSCounter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MonitoringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MonitoringMode = { "MonitoringMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, MonitoringMode), Z_Construct_UEnum_UPM_EUPMMonitoringMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonitoringMode_MetaData), NewProp_MonitoringMode_MetaData) }; // 2561663259
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_PreferredMonitor = { "PreferredMonitor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMSettingsData, PreferredMonitor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredMonitor_MetaData), NewProp_PreferredMonitor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPMSettingsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_SaveVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_CurrentQualitySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_WindowMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ResolutionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_CameraShakeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bHeadBobEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_HeadBobIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MouseSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MouseSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertMouseY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertMouseX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMouseSmoothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMouseAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ControllerSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ControllerSensitivityX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ControllerSensitivityY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertControllerY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bInvertControllerX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_DeadzoneInner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_DeadzoneOuter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_AimSensitivityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bVibrationEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_VibrationIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bAimAssistEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_AimAssistStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bMotionBlurEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MotionBlurIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_Gamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_VignetteIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ChromaticAberration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_FilmGrain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bDepthOfFieldEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bLensFlareEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_BloomIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MasterVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MusicVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_SFXVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_VoiceVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_AmbientVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_UIVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bSubtitlesEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_SubtitleSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_SubtitleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bSubtitleBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ColorblindMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ColorblindMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_ColorblindStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_HUDScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bHighContrastMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bReduceScreenShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_bShowFPSCounter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MonitoringMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_MonitoringMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMSettingsData_Statics::NewProp_PreferredMonitor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMSettingsData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUPMSettingsData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_UPM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMSettingsData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPMSettingsData_Statics::ClassParams = {
	&UUPMSettingsData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUPMSettingsData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUPMSettingsData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMSettingsData_Statics::Class_MetaDataParams), Z_Construct_UClass_UUPMSettingsData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUPMSettingsData()
{
	if (!Z_Registration_Info_UClass_UUPMSettingsData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPMSettingsData.OuterSingleton, Z_Construct_UClass_UUPMSettingsData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUPMSettingsData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUPMSettingsData);
UUPMSettingsData::~UUPMSettingsData() {}
// ********** End Class UUPMSettingsData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSettingsData_h__Script_UPM_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUPMSettingsData, UUPMSettingsData::StaticClass, TEXT("UUPMSettingsData"), &Z_Registration_Info_UClass_UUPMSettingsData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPMSettingsData), 3713757109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSettingsData_h__Script_UPM_3594559835(TEXT("/Script/UPM"),
	Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSettingsData_h__Script_UPM_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSettingsData_h__Script_UPM_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
