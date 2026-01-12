// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UPMUITypes.h"
#include "UPMSettingsMenuWidget.generated.h"

class UUPMButtonBase;
class UCommonTextBlock;
class UWidgetSwitcher;
class UScrollBox;
class UVerticalBox;

/**
 * UPMSettingsMenuWidget - Comprehensive settings menu using CommonUI
 *
 * Features:
 * - Category-based organization (Graphics, Display, Audio, Input, Accessibility)
 * - Configurable via UPMSettingsMenuConfig data asset
 * - Apply/Reset/Back buttons
 * - Unsaved changes warning
 * - NVIDIA settings integration
 * - Input rebinding support
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class UPM_API UUPMSettingsMenuWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UUPMSettingsMenuWidget();

	// ==================== CONFIGURATION ====================

	/** Load menu configuration from data asset */
	UFUNCTION(BlueprintCallable, Category = "UPM|Settings")
	void LoadConfiguration(UUPMSettingsMenuConfig* Config);

	/** Set theme */
	UFUNCTION(BlueprintCallable, Category = "UPM|Settings")
	void SetTheme(UUPMUIThemeData* Theme);

	// ==================== CATEGORY NAVIGATION ====================

	/** Show a specific settings category by ID */
	UFUNCTION(BlueprintCallable, Category = "UPM|Settings")
	void ShowCategory(FName CategoryID);

	/** Get the currently active category */
	UFUNCTION(BlueprintPure, Category = "UPM|Settings")
	FName GetCurrentCategory() const { return CurrentCategoryID; }

	// ==================== SETTINGS ACTIONS ====================

	/** Apply all current settings */
	UFUNCTION(BlueprintCallable, Category = "UPM|Settings")
	void ApplySettings();

	/** Reset all settings to defaults */
	UFUNCTION(BlueprintCallable, Category = "UPM|Settings")
	void ResetToDefaults();

	/** Reset current category to defaults */
	UFUNCTION(BlueprintCallable, Category = "UPM|Settings")
	void ResetCategoryToDefaults();

	/** Revert to last applied settings */
	UFUNCTION(BlueprintCallable, Category = "UPM|Settings")
	void RevertChanges();

	/** Close the settings menu */
	UFUNCTION(BlueprintCallable, Category = "UPM|Settings")
	void CloseMenu();

	// ==================== STATE ====================

	/** Check if there are unsaved changes */
	UFUNCTION(BlueprintPure, Category = "UPM|Settings")
	bool HasUnsavedChanges() const;

	/** Mark settings as changed (called by child widgets) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Settings")
	void MarkSettingsChanged();

	// ==================== CATEGORY CONTENT ====================

	/** Called to populate graphics settings - override in Blueprint */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Settings")
	void PopulateGraphicsSettings(UVerticalBox* Container);

	/** Called to populate display settings - override in Blueprint */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Settings")
	void PopulateDisplaySettings(UVerticalBox* Container);

	/** Called to populate audio settings - override in Blueprint */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Settings")
	void PopulateAudioSettings(UVerticalBox* Container);

	/** Called to populate input settings - override in Blueprint */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Settings")
	void PopulateInputSettings(UVerticalBox* Container);

	/** Called to populate accessibility settings - override in Blueprint */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Settings")
	void PopulateAccessibilitySettings(UVerticalBox* Container);

	/** Called to populate NVIDIA settings - override in Blueprint */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Settings")
	void PopulateNvidiaSettings(UVerticalBox* Container);

protected:
	virtual void NativeConstruct() override;
	virtual UWidget* NativeGetDesiredFocusTarget() const override;
	virtual bool NativeOnHandleBackAction() override;

	/** Generate category tabs from configuration */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Settings")
	void GenerateCategoryTabs();

	/** Create settings container for a category */
	UVerticalBox* GetOrCreateCategoryContainer(FName CategoryID);

	/** Handle category tab click */
	UFUNCTION()
	void HandleCategoryClicked(FName CategoryID);

	/** Handle apply button */
	UFUNCTION()
	void HandleApplyClicked();

	/** Handle reset button */
	UFUNCTION()
	void HandleResetClicked();

	/** Handle back button */
	UFUNCTION()
	void HandleBackClicked();

	/** Show unsaved changes confirmation */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Settings")
	void ShowUnsavedChangesWarning();

	/** Called when user confirms they want to discard changes */
	UFUNCTION(BlueprintCallable, Category = "UPM|Settings")
	void ConfirmDiscardChanges();

	/** Refresh all UI from configuration */
	void RefreshUI();

	// Widget bindings
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> TitleText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UVerticalBox> CategoryTabContainer;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UWidgetSwitcher> ContentSwitcher;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UUPMButtonBase> ApplyButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UUPMButtonBase> ResetButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UUPMButtonBase> BackButton;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSoftObjectPtr<UUPMSettingsMenuConfig> DefaultConfig;

	UPROPERTY()
	TObjectPtr<UUPMSettingsMenuConfig> CurrentConfig;

	UPROPERTY()
	TObjectPtr<UUPMUIThemeData> CurrentTheme;

	// Category state
	UPROPERTY()
	TMap<FName, TObjectPtr<UVerticalBox>> CategoryContainers;

	UPROPERTY()
	TMap<FName, TObjectPtr<UUPMButtonBase>> CategoryTabs;

	UPROPERTY()
	FName CurrentCategoryID;

	// Button class
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSubclassOf<UUPMButtonBase> TabButtonClass;

	// State
	bool bHasUnsavedChanges = false;
	bool bWaitingForDiscardConfirmation = false;
};
