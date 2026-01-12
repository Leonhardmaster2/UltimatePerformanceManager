// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UPMUITypes.h"
#include "UPMPauseMenuWidget.generated.h"

class UUPMButtonBase;
class UCommonTextBlock;
class UImage;
class UVerticalBox;
class UBackgroundBlur;
class UOverlay;

/**
 * Pause Menu Button Action Types
 */
UENUM(BlueprintType)
enum class EUPMPauseMenuAction : uint8
{
	Resume,
	Settings,
	SaveGame,
	LoadGame,
	MainMenu,
	RestartCheckpoint,
	RestartLevel,
	Photo,
	Quit,
	Custom
};

/**
 * Pause Menu Button Configuration
 */
USTRUCT(BlueprintType)
struct UPM_API FUPMPauseButtonConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	FText ButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	EUPMPauseMenuAction Action = EUPMPauseMenuAction::Custom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button", meta = (EditCondition = "Action == EUPMPauseMenuAction::Custom"))
	FName CustomActionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	bool bEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	bool bRequiresSaveExists = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	bool bShowConfirmation = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button", meta = (EditCondition = "bShowConfirmation"))
	FText ConfirmationMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Button")
	int32 SortOrder = 0;
};

/**
 * Pause Menu Configuration Data Asset
 */
UCLASS(BlueprintType)
class UPM_API UUPMPauseMenuConfig : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// ==================== GENERAL ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|General")
	FText MenuTitle = NSLOCTEXT("UPM", "PauseTitle", "PAUSED");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|General")
	bool bShowGameTime = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|General")
	bool bShowCurrentObjective = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|General")
	bool bPauseGame = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|General")
	bool bShowOnPauseInput = true;

	// ==================== BUTTONS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Buttons")
	TArray<FUPMPauseButtonConfig> MenuButtons;

	// ==================== BACKGROUND ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Background")
	bool bBlurBackground = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Background")
	float BackgroundBlurStrength = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Background")
	bool bDarkenBackground = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Background")
	float BackgroundDarkenAmount = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Background")
	TSoftObjectPtr<UTexture2D> BackgroundOverlay;

	// ==================== ANIMATION ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Animation")
	float FadeInDuration = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Animation")
	float FadeOutDuration = 0.15f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Animation")
	bool bAnimateButtons = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Animation")
	float ButtonStaggerDelay = 0.05f;

	// ==================== NAVIGATION ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Navigation")
	bool bCloseOnResume = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Navigation")
	bool bConfirmMainMenu = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Navigation")
	FText MainMenuConfirmMessage = NSLOCTEXT("UPM", "MainMenuConfirm", "Return to main menu? Unsaved progress will be lost.");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Navigation")
	bool bConfirmQuit = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Navigation")
	FText QuitConfirmMessage = NSLOCTEXT("UPM", "QuitConfirm", "Are you sure you want to quit? Unsaved progress will be lost.");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Navigation")
	FName MainMenuLevelName = FName("MainMenu");

	// ==================== THEME ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PauseMenu|Theme")
	TSoftObjectPtr<UUPMUIThemeData> ThemeOverride;
};

/**
 * UPMPauseMenuWidget - In-game pause menu using CommonUI
 *
 * Features:
 * - Configurable via UPMPauseMenuConfig data asset
 * - Dynamic button generation
 * - Background blur/darken effects
 * - Main menu navigation with confirmation
 * - Save/Load integration
 * - Fully themeable
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class UPM_API UUPMPauseMenuWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UUPMPauseMenuWidget();

	// ==================== CONFIGURATION ====================

	/** Load pause menu configuration from data asset */
	UFUNCTION(BlueprintCallable, Category = "UPM|PauseMenu")
	void LoadConfiguration(UUPMPauseMenuConfig* Config);

	/** Get current configuration */
	UFUNCTION(BlueprintPure, Category = "UPM|PauseMenu")
	UUPMPauseMenuConfig* GetConfiguration() const { return CurrentConfig; }

	/** Set theme */
	UFUNCTION(BlueprintCallable, Category = "UPM|PauseMenu")
	void SetTheme(UUPMUIThemeData* Theme);

	// ==================== PAUSE STATE ====================

	/** Check if game is currently paused by this menu */
	UFUNCTION(BlueprintPure, Category = "UPM|PauseMenu")
	bool IsGamePaused() const { return bIsGamePaused; }

	/** Toggle pause state */
	UFUNCTION(BlueprintCallable, Category = "UPM|PauseMenu")
	void TogglePause();

	/** Show the pause menu */
	UFUNCTION(BlueprintCallable, Category = "UPM|PauseMenu")
	void ShowPauseMenu();

	/** Hide the pause menu */
	UFUNCTION(BlueprintCallable, Category = "UPM|PauseMenu")
	void HidePauseMenu();

	// ==================== MENU ACTIONS ====================

	/** Called when Resume button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void OnResumePressed();

	/** Called when Settings button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void OnSettingsPressed();

	/** Called when Save Game button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void OnSaveGamePressed();

	/** Called when Load Game button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void OnLoadGamePressed();

	/** Called when Main Menu button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void OnMainMenuPressed();

	/** Called when Restart Checkpoint button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void OnRestartCheckpointPressed();

	/** Called when Restart Level button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void OnRestartLevelPressed();

	/** Called when Photo Mode button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void OnPhotoModePressed();

	/** Called when Quit button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void OnQuitPressed();

	/** Called when any custom button is pressed */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void OnCustomButtonPressed(FName ActionName);

	// ==================== CONFIRMATION ====================

	/** Show confirmation dialog */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void ShowConfirmation(FText Message, EUPMPauseMenuAction PendingAction);

	/** Handle confirmation result */
	UFUNCTION(BlueprintCallable, Category = "UPM|PauseMenu")
	void HandleConfirmationResult(bool bConfirmed, EUPMPauseMenuAction Action);

	// ==================== DELEGATES ====================

	/** Delegate broadcast when pause menu is shown */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPauseMenuShown);
	UPROPERTY(BlueprintAssignable, Category = "UPM|PauseMenu")
	FOnPauseMenuShown OnPauseMenuShown;

	/** Delegate broadcast when pause menu is hidden */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPauseMenuHidden);
	UPROPERTY(BlueprintAssignable, Category = "UPM|PauseMenu")
	FOnPauseMenuHidden OnPauseMenuHidden;

	/** Delegate broadcast when returning to main menu */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReturnToMainMenu);
	UPROPERTY(BlueprintAssignable, Category = "UPM|PauseMenu")
	FOnReturnToMainMenu OnReturnToMainMenu;

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual UWidget* NativeGetDesiredFocusTarget() const override;
	virtual bool NativeOnHandleBackAction() override;

	/** Generate menu buttons from configuration */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	void GenerateMenuButtons();

	/** Create a single menu button */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|PauseMenu")
	UUPMButtonBase* CreateMenuButton(const FUPMPauseButtonConfig& ButtonConfig);

	/** Handle button click by action */
	UFUNCTION()
	void HandleButtonClicked(EUPMPauseMenuAction Action, FName CustomActionName);

	/** Apply pause state to game */
	void ApplyPauseState(bool bPause);

	/** Update UI from current configuration */
	void RefreshUI();

	/** Update button visibility based on save existence */
	void UpdateButtonStates();

	/** Animate buttons on show */
	void PlayButtonAnimations();

	// Widget bindings
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> TitleText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> GameTimeText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> ObjectiveText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UVerticalBox> ButtonContainer;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UBackgroundBlur> BackgroundBlurWidget;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> BackgroundDarkenImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> BackgroundOverlayImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UOverlay> ConfirmationOverlay;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> ConfirmationText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UUPMButtonBase> ConfirmYesButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UUPMButtonBase> ConfirmNoButton;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSoftObjectPtr<UUPMPauseMenuConfig> DefaultConfig;

	UPROPERTY()
	TObjectPtr<UUPMPauseMenuConfig> CurrentConfig;

	UPROPERTY()
	TObjectPtr<UUPMUIThemeData> CurrentTheme;

	// Generated buttons
	UPROPERTY()
	TArray<TObjectPtr<UUPMButtonBase>> MenuButtons;

	// Button class to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSubclassOf<UUPMButtonBase> ButtonClass;

	// State
	UPROPERTY()
	bool bIsGamePaused = false;

	UPROPERTY()
	EUPMPauseMenuAction PendingConfirmAction;
};
