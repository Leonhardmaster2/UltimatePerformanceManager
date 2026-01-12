// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "UPMSavingIndicatorWidget.generated.h"

class UCommonTextBlock;
class UImage;
class UProgressBar;
class UWidgetAnimation;

/**
 * Saving Indicator Style
 */
UENUM(BlueprintType)
enum class EUPMSavingIndicatorStyle : uint8
{
	Spinner,
	ProgressBar,
	Icon,
	IconWithProgress,
	Custom
};

/**
 * Saving Indicator Position
 */
UENUM(BlueprintType)
enum class EUPMSavingIndicatorPosition : uint8
{
	TopLeft,
	TopRight,
	BottomLeft,
	BottomRight,
	Center,
	Custom
};

/**
 * Saving Indicator Configuration Data Asset
 */
UCLASS(BlueprintType)
class UPM_API UUPMSavingIndicatorConfig : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// ==================== GENERAL ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|General")
	FText SavingText = NSLOCTEXT("UPM", "Saving", "Saving...");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|General")
	FText SaveCompleteText = NSLOCTEXT("UPM", "SaveComplete", "Saved!");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|General")
	FText SaveFailedText = NSLOCTEXT("UPM", "SaveFailed", "Save Failed!");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|General")
	FText AutoSavingText = NSLOCTEXT("UPM", "AutoSaving", "Auto-saving...");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|General")
	EUPMSavingIndicatorStyle Style = EUPMSavingIndicatorStyle::IconWithProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|General")
	EUPMSavingIndicatorPosition Position = EUPMSavingIndicatorPosition::BottomRight;

	// ==================== DISPLAY ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Display")
	float MinimumDisplayTime = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Display")
	float FadeInDuration = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Display")
	float FadeOutDuration = 0.3f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Display")
	float SuccessDisplayDuration = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Display")
	float FailureDisplayDuration = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Display")
	bool bBlockInput = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Display")
	bool bDarkenBackground = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Display", meta = (EditCondition = "bDarkenBackground"))
	float BackgroundDarkenAmount = 0.3f;

	// ==================== VISUALS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Visuals")
	TSoftObjectPtr<UTexture2D> SavingIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Visuals")
	TSoftObjectPtr<UTexture2D> SuccessIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Visuals")
	TSoftObjectPtr<UTexture2D> FailureIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Visuals")
	TSoftObjectPtr<UTexture2D> SpinnerImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Visuals")
	float SpinnerRotationSpeed = 360.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Visuals")
	float IconSize = 48.0f;

	// ==================== PROGRESS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Progress")
	bool bShowProgress = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Progress")
	FLinearColor ProgressBackgroundColor = FLinearColor(0.1f, 0.1f, 0.1f, 0.8f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Progress")
	FLinearColor ProgressFillColor = FLinearColor(0.3f, 0.7f, 1.0f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Progress")
	FLinearColor SuccessColor = FLinearColor(0.2f, 0.8f, 0.3f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Progress")
	FLinearColor FailureColor = FLinearColor(0.9f, 0.2f, 0.2f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Progress")
	float ProgressBarWidth = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Progress")
	float ProgressBarHeight = 6.0f;

	// ==================== SOUNDS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Sounds")
	TSoftObjectPtr<USoundBase> SavingSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Sounds")
	TSoftObjectPtr<USoundBase> SuccessSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Sounds")
	TSoftObjectPtr<USoundBase> FailureSound;

	// ==================== POSITIONING ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Positioning")
	FMargin ScreenMargin = FMargin(20.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saving|Positioning", meta = (EditCondition = "Position == EUPMSavingIndicatorPosition::Custom"))
	FVector2D CustomPosition = FVector2D(0.9f, 0.9f);
};

/**
 * UPMSavingIndicatorWidget - Visual feedback during save operations
 *
 * Features:
 * - Configurable via UPMSavingIndicatorConfig data asset
 * - Multiple display styles (spinner, progress, icon)
 * - Auto-hide after save completes
 * - Success/failure states
 * - Screen position options
 * - Themeable styling
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class UPM_API UUPMSavingIndicatorWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UUPMSavingIndicatorWidget();

	// ==================== CONFIGURATION ====================

	/** Load configuration from data asset */
	UFUNCTION(BlueprintCallable, Category = "UPM|Saving")
	void LoadConfiguration(UUPMSavingIndicatorConfig* Config);

	/** Get current configuration */
	UFUNCTION(BlueprintPure, Category = "UPM|Saving")
	UUPMSavingIndicatorConfig* GetConfiguration() const { return CurrentConfig; }

	// ==================== SAVE DISPLAY ====================

	/** Show saving indicator */
	UFUNCTION(BlueprintCallable, Category = "UPM|Saving")
	void ShowSaving(bool bIsAutoSave = false);

	/** Update save progress (0.0 - 1.0) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Saving")
	void UpdateProgress(float Progress);

	/** Show save complete */
	UFUNCTION(BlueprintCallable, Category = "UPM|Saving")
	void ShowSuccess();

	/** Show save failed */
	UFUNCTION(BlueprintCallable, Category = "UPM|Saving")
	void ShowFailure(const FText& ErrorMessage = FText::GetEmpty());

	/** Hide the indicator immediately */
	UFUNCTION(BlueprintCallable, Category = "UPM|Saving")
	void HideIndicator();

	/** Check if indicator is currently showing */
	UFUNCTION(BlueprintPure, Category = "UPM|Saving")
	bool IsShowing() const { return bIsShowing; }

	// ==================== DELEGATES ====================

	/** Delegate broadcast when save indicator is shown */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSaveIndicatorShown);
	UPROPERTY(BlueprintAssignable, Category = "UPM|Saving")
	FOnSaveIndicatorShown OnSaveIndicatorShown;

	/** Delegate broadcast when save indicator is hidden */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSaveIndicatorHidden);
	UPROPERTY(BlueprintAssignable, Category = "UPM|Saving")
	FOnSaveIndicatorHidden OnSaveIndicatorHidden;

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	/** Apply screen position from configuration */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Saving")
	void ApplyPosition();

	/** Update visual state */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|Saving")
	void UpdateVisuals();

	/** Play fade animation */
	void PlayFadeAnimation(bool bFadeIn);

	/** Schedule auto-hide */
	void ScheduleAutoHide(float Delay);

	/** Cancel pending hide */
	void CancelPendingHide();

	// Widget bindings
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> StatusText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> IconImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> SpinnerImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UProgressBar> SaveProgressBar;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> BackgroundImage;

	// Animations
	UPROPERTY(BlueprintReadOnly, Transient, meta = (BindWidgetAnimOptional))
	TObjectPtr<UWidgetAnimation> FadeInAnimation;

	UPROPERTY(BlueprintReadOnly, Transient, meta = (BindWidgetAnimOptional))
	TObjectPtr<UWidgetAnimation> FadeOutAnimation;

	UPROPERTY(BlueprintReadOnly, Transient, meta = (BindWidgetAnimOptional))
	TObjectPtr<UWidgetAnimation> SpinAnimation;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSoftObjectPtr<UUPMSavingIndicatorConfig> DefaultConfig;

	UPROPERTY()
	TObjectPtr<UUPMSavingIndicatorConfig> CurrentConfig;

	// State
	UPROPERTY()
	bool bIsShowing = false;

	UPROPERTY()
	bool bIsSaving = false;

	UPROPERTY()
	bool bShowSuccess = false;

	UPROPERTY()
	bool bShowFailure = false;

	UPROPERTY()
	float CurrentProgress = 0.0f;

	UPROPERTY()
	float SpinnerRotation = 0.0f;

	UPROPERTY()
	float ShowStartTime = 0.0f;

	UPROPERTY()
	FTimerHandle HideTimerHandle;
};
