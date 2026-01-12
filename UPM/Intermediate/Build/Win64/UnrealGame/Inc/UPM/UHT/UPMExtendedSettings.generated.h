// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UPMExtendedSettings.h"

#ifdef UPM_UPMExtendedSettings_generated_h
#error "UPMExtendedSettings.generated.h already included, missing '#pragma once' in UPMExtendedSettings.h"
#endif
#define UPM_UPMExtendedSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;
enum class EUPMColorblindMode : uint8;
enum class EUPMSubtitleSize : uint8;

// ********** Begin Class UUPMExtendedSettings *****************************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPawnChanged); \
	DECLARE_FUNCTION(execResetVisualToDefaults); \
	DECLARE_FUNCTION(execResetAudioToDefaults); \
	DECLARE_FUNCTION(execResetInputToDefaults); \
	DECLARE_FUNCTION(execResetExtendedToDefaults); \
	DECLARE_FUNCTION(execApplyAllExtendedSettings); \
	DECLARE_FUNCTION(execSetReduceScreenShake); \
	DECLARE_FUNCTION(execSetHighContrastMode); \
	DECLARE_FUNCTION(execGetHUDScale); \
	DECLARE_FUNCTION(execSetHUDScale); \
	DECLARE_FUNCTION(execSetColorblindStrength); \
	DECLARE_FUNCTION(execGetColorblindMode); \
	DECLARE_FUNCTION(execSetColorblindMode); \
	DECLARE_FUNCTION(execSetSubtitleBackground); \
	DECLARE_FUNCTION(execSetSubtitleSize); \
	DECLARE_FUNCTION(execGetSubtitlesEnabled); \
	DECLARE_FUNCTION(execSetSubtitlesEnabled); \
	DECLARE_FUNCTION(execSetUIVolume); \
	DECLARE_FUNCTION(execSetAmbientVolume); \
	DECLARE_FUNCTION(execGetVoiceVolume); \
	DECLARE_FUNCTION(execSetVoiceVolume); \
	DECLARE_FUNCTION(execGetSFXVolume); \
	DECLARE_FUNCTION(execSetSFXVolume); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execGetMasterVolume); \
	DECLARE_FUNCTION(execSetMasterVolume); \
	DECLARE_FUNCTION(execSetBloomIntensity); \
	DECLARE_FUNCTION(execSetLensFlareEnabled); \
	DECLARE_FUNCTION(execSetDepthOfFieldEnabled); \
	DECLARE_FUNCTION(execSetFilmGrainIntensity); \
	DECLARE_FUNCTION(execSetChromaticAberrationIntensity); \
	DECLARE_FUNCTION(execSetVignetteIntensity); \
	DECLARE_FUNCTION(execSetContrast); \
	DECLARE_FUNCTION(execGetBrightness); \
	DECLARE_FUNCTION(execSetBrightness); \
	DECLARE_FUNCTION(execGetGamma); \
	DECLARE_FUNCTION(execSetGamma); \
	DECLARE_FUNCTION(execGetMotionBlurIntensity); \
	DECLARE_FUNCTION(execSetMotionBlurIntensity); \
	DECLARE_FUNCTION(execSetMotionBlurEnabled); \
	DECLARE_FUNCTION(execSetHeadBobIntensity); \
	DECLARE_FUNCTION(execGetHeadBobEnabled); \
	DECLARE_FUNCTION(execSetHeadBobEnabled); \
	DECLARE_FUNCTION(execGetCameraShakeScale); \
	DECLARE_FUNCTION(execSetCameraShakeScale); \
	DECLARE_FUNCTION(execGetMouseAccelerationEnabled); \
	DECLARE_FUNCTION(execSetMouseAccelerationEnabled); \
	DECLARE_FUNCTION(execGetMouseSmoothingEnabled); \
	DECLARE_FUNCTION(execSetMouseSmoothingEnabled); \
	DECLARE_FUNCTION(execSetAimAssistStrength); \
	DECLARE_FUNCTION(execGetAimAssistEnabled); \
	DECLARE_FUNCTION(execSetAimAssistEnabled); \
	DECLARE_FUNCTION(execSetVibrationIntensity); \
	DECLARE_FUNCTION(execGetVibrationEnabled); \
	DECLARE_FUNCTION(execSetVibrationEnabled); \
	DECLARE_FUNCTION(execSetControllerDeadzoneOuter); \
	DECLARE_FUNCTION(execGetControllerDeadzoneInner); \
	DECLARE_FUNCTION(execSetControllerDeadzoneInner); \
	DECLARE_FUNCTION(execSetInvertControllerX); \
	DECLARE_FUNCTION(execGetInvertControllerY); \
	DECLARE_FUNCTION(execSetInvertControllerY); \
	DECLARE_FUNCTION(execSetInvertMouseX); \
	DECLARE_FUNCTION(execGetInvertMouseY); \
	DECLARE_FUNCTION(execSetInvertMouseY); \
	DECLARE_FUNCTION(execGetAimSensitivityMultiplier); \
	DECLARE_FUNCTION(execSetAimSensitivityMultiplier); \
	DECLARE_FUNCTION(execSetControllerSensitivityY); \
	DECLARE_FUNCTION(execSetControllerSensitivityX); \
	DECLARE_FUNCTION(execGetControllerSensitivity); \
	DECLARE_FUNCTION(execSetControllerSensitivity); \
	DECLARE_FUNCTION(execSetMouseSensitivityY); \
	DECLARE_FUNCTION(execSetMouseSensitivityX); \
	DECLARE_FUNCTION(execGetMouseSensitivity); \
	DECLARE_FUNCTION(execSetMouseSensitivity); \
	DECLARE_FUNCTION(execGetFieldOfView); \
	DECLARE_FUNCTION(execSetFieldOfView);


UPM_API UClass* Z_Construct_UClass_UUPMExtendedSettings_NoRegister();

#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPMExtendedSettings(); \
	friend struct Z_Construct_UClass_UUPMExtendedSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UPM_API UClass* Z_Construct_UClass_UUPMExtendedSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UUPMExtendedSettings, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UPM"), Z_Construct_UClass_UUPMExtendedSettings_NoRegister) \
	DECLARE_SERIALIZER(UUPMExtendedSettings)


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPMExtendedSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUPMExtendedSettings(UUPMExtendedSettings&&) = delete; \
	UUPMExtendedSettings(const UUPMExtendedSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPMExtendedSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPMExtendedSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUPMExtendedSettings) \
	NO_API virtual ~UUPMExtendedSettings();


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h_20_PROLOG
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUPMExtendedSettings;

// ********** End Class UUPMExtendedSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMExtendedSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
