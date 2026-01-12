// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UPMUITypes.h"
#include "UPMLoadingScreenWidget.generated.h"

class UCommonTextBlock;
class UImage;
class UProgressBar;
class UThrobber;
class UCanvasPanel;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadingComplete);

/**
 * UPMLoadingScreenWidget - Loading screen with progress and tips
 *
 * Features:
 * - Configurable via UPMLoadingScreenConfig data asset
 * - Progress bar with optional percentage
 * - Rotating loading tips
 * - Random or sequential backgrounds
 * - Animated spinner
 * - Minimum display time support
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class UPM_API UUPMLoadingScreenWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UUPMLoadingScreenWidget(const FObjectInitializer& ObjectInitializer);

	// ==================== CONFIGURATION ====================

	/** Load configuration from data asset */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void LoadConfiguration(UUPMLoadingScreenConfig* Config);

	/** Get current configuration */
	UFUNCTION(BlueprintPure, Category = "UPM|Loading")
	UUPMLoadingScreenConfig* GetConfiguration() const { return CurrentConfig; }

	/** Set theme */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void SetTheme(UUPMUIThemeData* Theme);

	// ==================== LOADING CONTROL ====================

	/** Start the loading screen */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void StartLoading();

	/** Set loading progress (0.0 - 1.0) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void SetProgress(float Progress);

	/** Get current progress */
	UFUNCTION(BlueprintPure, Category = "UPM|Loading")
	float GetProgress() const { return CurrentProgress; }

	/** Set the loading status text */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void SetStatusText(const FText& Text);

	/** Signal that loading is complete */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void FinishLoading();

	/** Check if loading is complete and minimum time has passed */
	UFUNCTION(BlueprintPure, Category = "UPM|Loading")
	bool IsReadyToHide() const;

	/** Force immediate hide (ignores minimum display time) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void ForceHide();

	// ==================== TIPS ====================

	/** Show the next tip in rotation */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void ShowNextTip();

	/** Show a random tip */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void ShowRandomTip();

	/** Set a specific tip */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void SetTip(const FUPMLoadingTip& Tip);

	// ==================== BACKGROUND ====================

	/** Set the background image */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void SetBackgroundImage(UTexture2D* Image);

	/** Show a random background from the config */
	UFUNCTION(BlueprintCallable, Category = "UPM|Loading")
	void ShowRandomBackground();

	// ==================== EVENTS ====================

	/** Called when loading is complete and ready to hide */
	UPROPERTY(BlueprintAssignable, Category = "UPM|Loading|Events")
	FOnLoadingComplete OnLoadingComplete;

protected:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	/** Update the spinner rotation */
	void UpdateSpinner(float DeltaTime);

	/** Update tip rotation timer */
	void UpdateTipRotation(float DeltaTime);

	/** Apply fade animation */
	void UpdateFade(float DeltaTime);

	/** Refresh all UI from configuration */
	void RefreshUI();

	// Widget bindings
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> BackgroundImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UProgressBar> ProgressBar;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> ProgressText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> StatusText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> TipText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> TipImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> SpinnerImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCanvasPanel> RootPanel;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSoftObjectPtr<UUPMLoadingScreenConfig> DefaultConfig;

	UPROPERTY()
	TObjectPtr<UUPMLoadingScreenConfig> CurrentConfig;

	UPROPERTY()
	TObjectPtr<UUPMUIThemeData> CurrentTheme;

	// State
	float CurrentProgress = 0.0f;
	float DisplayStartTime = 0.0f;
	float TipRotationTimer = 0.0f;
	float SpinnerRotation = 0.0f;
	float CurrentFadeAlpha = 0.0f;
	int32 CurrentTipIndex = 0;
	bool bLoadingComplete = false;
	bool bIsFadingOut = false;
	bool bIsVisible = false;
};
