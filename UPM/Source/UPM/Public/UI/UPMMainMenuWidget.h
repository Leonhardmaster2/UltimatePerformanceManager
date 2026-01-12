// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UPMUITypes.h"
#include "UPMMainMenuWidget.generated.h"

class UUPMButtonBase;
class UCommonTextBlock;
class UImage;
class UVerticalBox;
class UPanelWidget;
class UAudioComponent;

/**
 * UPMMainMenuWidget - Main menu screen using CommonUI
 *
 * Features:
 * - Configurable via UPMMainMenuConfig data asset
 * - Dynamic button generation from config
 * - Background image/video support
 * - Menu music playback
 * - Themeable styling
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class UPM_API UUPMMainMenuWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UUPMMainMenuWidget();

	// ==================== CONFIGURATION ====================

	/** Load menu configuration from data asset */
	UFUNCTION(BlueprintCallable, Category = "UPM|MainMenu")
	void LoadConfiguration(UUPMMainMenuConfig* Config);

	/** Get current configuration */
	UFUNCTION(BlueprintPure, Category = "UPM|MainMenu")
	UUPMMainMenuConfig* GetConfiguration() const { return CurrentConfig; }

	/** Set theme */
	UFUNCTION(BlueprintCallable, Category = "UPM|MainMenu")
	void SetTheme(UUPMUIThemeData* Theme);

	// ==================== MENU ACTIONS ====================

	/** Called when Continue button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|MainMenu")
	void OnContinuePressed();

	/** Called when New Game button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|MainMenu")
	void OnNewGamePressed();

	/** Called when Load Game button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|MainMenu")
	void OnLoadGamePressed();

	/** Called when Settings button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|MainMenu")
	void OnSettingsPressed();

	/** Called when Quit button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|MainMenu")
	void OnQuitPressed();

	/** Called when any custom button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|MainMenu")
	void OnCustomButtonPressed(FName ActionName);

	// ==================== MUSIC ====================

	/** Start playing menu music */
	UFUNCTION(BlueprintCallable, Category = "UPM|MainMenu")
	void PlayMenuMusic();

	/** Stop menu music */
	UFUNCTION(BlueprintCallable, Category = "UPM|MainMenu")
	void StopMenuMusic();

	/** Set menu music volume */
	UFUNCTION(BlueprintCallable, Category = "UPM|MainMenu")
	void SetMusicVolume(float Volume);

	// ==================== VISIBILITY ====================

	/** Show/hide continue button based on save existence */
	UFUNCTION(BlueprintCallable, Category = "UPM|MainMenu")
	void UpdateContinueButtonVisibility();

	/** Check if a save exists for continue */
	UFUNCTION(BlueprintPure, Category = "UPM|MainMenu")
	bool HasSaveForContinue() const;

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual UWidget* NativeGetDesiredFocusTarget() const override;

	/** Generate menu buttons from configuration */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|MainMenu")
	void GenerateMenuButtons();

	/** Create a single menu button */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|MainMenu")
	UUPMButtonBase* CreateMenuButton(const FUPMMenuButtonConfig& ButtonConfig);

	/** Handle button click by action name */
	UFUNCTION()
	void HandleButtonClicked(FName ActionName);

	/** Update all UI elements from current configuration */
	void RefreshUI();

	// Widget bindings
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> TitleText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> SubtitleText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> LogoImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> BackgroundImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UVerticalBox> ButtonContainer;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> VersionText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> CopyrightText;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSoftObjectPtr<UUPMMainMenuConfig> DefaultConfig;

	UPROPERTY()
	TObjectPtr<UUPMMainMenuConfig> CurrentConfig;

	UPROPERTY()
	TObjectPtr<UUPMUIThemeData> CurrentTheme;

	// Generated buttons
	UPROPERTY()
	TArray<TObjectPtr<UUPMButtonBase>> MenuButtons;

	// Audio
	UPROPERTY()
	TObjectPtr<UAudioComponent> MusicComponent;

	// Button class to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSubclassOf<UUPMButtonBase> ButtonClass;
};
