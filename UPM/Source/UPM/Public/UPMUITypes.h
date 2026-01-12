// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Fonts/SlateFontInfo.h"
#include "Sound/SoundBase.h"
#include "UPMUITypes.generated.h"

class UTexture2D;
class UMaterialInterface;
class UCommonButtonStyle;

/**
 * Button state colors
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMButtonColors
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colors")
	FLinearColor Normal = FLinearColor(0.1f, 0.1f, 0.1f, 0.8f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colors")
	FLinearColor Hovered = FLinearColor(0.2f, 0.2f, 0.3f, 0.9f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colors")
	FLinearColor Pressed = FLinearColor(0.05f, 0.05f, 0.15f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colors")
	FLinearColor Disabled = FLinearColor(0.1f, 0.1f, 0.1f, 0.4f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colors")
	FLinearColor Selected = FLinearColor(0.3f, 0.4f, 0.6f, 0.9f);
};

/**
 * Text style configuration
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMTextStyle
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text")
	FSlateFontInfo Font;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text")
	FLinearColor Color = FLinearColor::White;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text")
	FLinearColor ShadowColor = FLinearColor(0.0f, 0.0f, 0.0f, 0.5f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text")
	FVector2D ShadowOffset = FVector2D(1.0f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text")
	float OutlineSize = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text")
	FLinearColor OutlineColor = FLinearColor::Black;
};

/**
 * Menu button configuration
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMMenuButtonConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	FText ButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	FName ActionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	bool bEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	int32 SortOrder = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	TSoftObjectPtr<UTexture2D> Icon;
};

/**
 * Settings category configuration
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMSettingsCategoryConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
	FText CategoryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
	FName CategoryID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
	TSoftObjectPtr<UTexture2D> CategoryIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
	int32 SortOrder = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Category")
	FText Description;
};

/**
 * Loading screen tip
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMLoadingTip
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tip")
	FText TipText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tip")
	TSoftObjectPtr<UTexture2D> TipImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tip")
	float Weight = 1.0f;
};

/**
 * UI sound configuration
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMUISounds
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TSoftObjectPtr<USoundBase> ButtonHover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TSoftObjectPtr<USoundBase> ButtonClick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TSoftObjectPtr<USoundBase> ButtonBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TSoftObjectPtr<USoundBase> SliderChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TSoftObjectPtr<USoundBase> ToggleOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TSoftObjectPtr<USoundBase> ToggleOff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TSoftObjectPtr<USoundBase> MenuOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TSoftObjectPtr<USoundBase> MenuClose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TSoftObjectPtr<USoundBase> Error;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sounds")
	TSoftObjectPtr<USoundBase> Success;
};

/**
 * UI Theme Data Asset - Defines the visual style for all UPM UI
 */
UCLASS(BlueprintType)
class UPM_API UUPMUIThemeData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// ==================== GENERAL ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|General")
	FString ThemeName = TEXT("Default");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|General")
	FLinearColor PrimaryColor = FLinearColor(0.2f, 0.4f, 0.8f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|General")
	FLinearColor SecondaryColor = FLinearColor(0.4f, 0.5f, 0.6f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|General")
	FLinearColor AccentColor = FLinearColor(0.9f, 0.7f, 0.2f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|General")
	FLinearColor BackgroundColor = FLinearColor(0.02f, 0.02f, 0.05f, 0.95f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|General")
	FLinearColor PanelColor = FLinearColor(0.05f, 0.05f, 0.1f, 0.9f);

	// ==================== BUTTONS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Buttons")
	FUPMButtonColors PrimaryButtonColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Buttons")
	FUPMButtonColors SecondaryButtonColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Buttons")
	float ButtonCornerRadius = 4.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Buttons")
	FVector2D ButtonPadding = FVector2D(20.0f, 10.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Buttons")
	float ButtonBorderWidth = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Buttons")
	FLinearColor ButtonBorderColor = FLinearColor(0.3f, 0.3f, 0.4f, 0.5f);

	// ==================== TEXT ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Text")
	FUPMTextStyle TitleTextStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Text")
	FUPMTextStyle HeaderTextStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Text")
	FUPMTextStyle BodyTextStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Text")
	FUPMTextStyle ButtonTextStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Text")
	FUPMTextStyle SmallTextStyle;

	// ==================== SLIDERS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Sliders")
	FLinearColor SliderTrackColor = FLinearColor(0.1f, 0.1f, 0.15f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Sliders")
	FLinearColor SliderFillColor = FLinearColor(0.3f, 0.5f, 0.9f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Sliders")
	FLinearColor SliderHandleColor = FLinearColor::White;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Sliders")
	float SliderHeight = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Sliders")
	float SliderHandleSize = 20.0f;

	// ==================== TOGGLES ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Toggles")
	FLinearColor ToggleOffColor = FLinearColor(0.2f, 0.2f, 0.25f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Toggles")
	FLinearColor ToggleOnColor = FLinearColor(0.2f, 0.6f, 0.3f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Toggles")
	FLinearColor ToggleHandleColor = FLinearColor::White;

	// ==================== BACKGROUNDS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Backgrounds")
	TSoftObjectPtr<UTexture2D> MenuBackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Backgrounds")
	TSoftObjectPtr<UMaterialInterface> BackgroundMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Backgrounds")
	float BackgroundBlur = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Backgrounds")
	float BackgroundDarken = 0.5f;

	// ==================== SOUNDS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Sounds")
	FUPMUISounds UISounds;

	// ==================== ANIMATIONS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Animations")
	float FadeInDuration = 0.3f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Animations")
	float FadeOutDuration = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Animations")
	float ButtonHoverScale = 1.05f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Theme|Animations")
	float TransitionDuration = 0.25f;
};

/**
 * Main Menu Configuration Data Asset
 */
UCLASS(BlueprintType)
class UPM_API UUPMMainMenuConfig : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// ==================== GENERAL ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|General")
	FText GameTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|General")
	FText GameSubtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|General")
	TSoftObjectPtr<UTexture2D> GameLogo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|General")
	FText VersionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|General")
	FText CopyrightText;

	// ==================== BUTTONS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|Buttons")
	TArray<FUPMMenuButtonConfig> MenuButtons;

	// ==================== BACKGROUND ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|Background")
	TSoftObjectPtr<UTexture2D> BackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|Background")
	TSoftObjectPtr<UMaterialInterface> BackgroundMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|Background")
	bool bPlayBackgroundVideo = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|Background")
	FString BackgroundVideoPath;

	// ==================== MUSIC ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|Music")
	TSoftObjectPtr<USoundBase> MenuMusic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|Music")
	float MusicFadeInDuration = 2.0f;

	// ==================== THEME ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainMenu|Theme")
	TSoftObjectPtr<UUPMUIThemeData> ThemeOverride;
};

/**
 * Loading Screen Configuration Data Asset
 */
UCLASS(BlueprintType)
class UPM_API UUPMLoadingScreenConfig : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// ==================== GENERAL ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|General")
	float MinimumDisplayTime = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|General")
	bool bShowProgressBar = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|General")
	bool bShowPercentage = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|General")
	bool bShowTips = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|General")
	float TipRotationInterval = 5.0f;

	// ==================== BACKGROUNDS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|Backgrounds")
	TArray<TSoftObjectPtr<UTexture2D>> BackgroundImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|Backgrounds")
	bool bRandomizeBackground = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|Backgrounds")
	float BackgroundFadeDuration = 0.5f;

	// ==================== TIPS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|Tips")
	TArray<FUPMLoadingTip> LoadingTips;

	// ==================== PROGRESS BAR ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|ProgressBar")
	FLinearColor ProgressBarBackgroundColor = FLinearColor(0.1f, 0.1f, 0.1f, 0.8f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|ProgressBar")
	FLinearColor ProgressBarFillColor = FLinearColor(0.3f, 0.6f, 1.0f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|ProgressBar")
	float ProgressBarHeight = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|ProgressBar")
	float ProgressBarWidth = 400.0f;

	// ==================== SPINNER ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|Spinner")
	bool bShowSpinner = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|Spinner")
	TSoftObjectPtr<UTexture2D> SpinnerImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|Spinner")
	float SpinnerSize = 64.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|Spinner")
	float SpinnerRotationSpeed = 360.0f;

	// ==================== THEME ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loading|Theme")
	TSoftObjectPtr<UUPMUIThemeData> ThemeOverride;
};

/**
 * Settings Menu Configuration Data Asset
 */
UCLASS(BlueprintType)
class UPM_API UUPMSettingsMenuConfig : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// ==================== GENERAL ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
	FText MenuTitle = NSLOCTEXT("UPM", "SettingsTitle", "Settings");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
	bool bShowApplyButton = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
	bool bShowResetButton = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
	bool bConfirmOnReset = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|General")
	bool bWarnOnUnsavedChanges = true;

	// ==================== CATEGORIES ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Categories")
	TArray<FUPMSettingsCategoryConfig> Categories;

	// ==================== VISIBILITY ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Visibility")
	bool bShowGraphicsSettings = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Visibility")
	bool bShowDisplaySettings = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Visibility")
	bool bShowAudioSettings = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Visibility")
	bool bShowInputSettings = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Visibility")
	bool bShowAccessibilitySettings = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Visibility")
	bool bShowNvidiaSettings = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Visibility")
	bool bShowPerformanceSettings = true;

	// ==================== ADVANCED ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Advanced")
	bool bShowAdvancedOptions = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Advanced")
	FText AdvancedOptionsToggleText = NSLOCTEXT("UPM", "ShowAdvanced", "Show Advanced Options");

	// ==================== THEME ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings|Theme")
	TSoftObjectPtr<UUPMUIThemeData> ThemeOverride;
};
