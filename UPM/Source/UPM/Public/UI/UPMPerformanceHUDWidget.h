// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UPMPerformanceHUDWidget.generated.h"

class UCommonTextBlock;
class UVerticalBox;
class UProgressBar;
class UImage;
class UUPMPerformanceMonitor;

/**
 * HUD Display Mode
 */
UENUM(BlueprintType)
enum class EUPMHUDDisplayMode : uint8
{
	Disabled,
	FPSOnly,
	Basic,          // FPS, Frame Time
	Detailed,       // FPS, Frame Time, GPU, Memory
	Full,           // Everything including percentiles
	Custom
};

/**
 * HUD Position
 */
UENUM(BlueprintType)
enum class EUPMHUDPosition : uint8
{
	TopLeft,
	TopRight,
	BottomLeft,
	BottomRight,
	Custom
};

/**
 * Performance HUD Configuration Data Asset
 */
UCLASS(BlueprintType)
class UPM_API UUPMPerformanceHUDConfig : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// ==================== GENERAL ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|General")
	EUPMHUDDisplayMode DefaultMode = EUPMHUDDisplayMode::Basic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|General")
	EUPMHUDPosition Position = EUPMHUDPosition::TopLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|General")
	float UpdateInterval = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|General")
	bool bShowBackground = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|General")
	float BackgroundOpacity = 0.7f;

	// ==================== DISPLAY ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Display")
	bool bShowFPS = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Display")
	bool bShowFrameTime = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Display")
	bool bShowGPUTime = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Display")
	bool bShowGameThreadTime = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Display")
	bool bShowRenderThreadTime = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Display")
	bool bShowMemoryUsage = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Display")
	bool bShowVRAMUsage = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Display")
	bool bShowPercentiles = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Display")
	bool bShowMinMaxFPS = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Display")
	bool bShowAverageFPS = true;

	// ==================== FPS THRESHOLDS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Thresholds")
	float GoodFPSThreshold = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Thresholds")
	float WarningFPSThreshold = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Thresholds")
	FLinearColor GoodColor = FLinearColor(0.2f, 0.9f, 0.3f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Thresholds")
	FLinearColor WarningColor = FLinearColor(0.9f, 0.8f, 0.2f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Thresholds")
	FLinearColor BadColor = FLinearColor(0.9f, 0.2f, 0.2f, 1.0f);

	// ==================== STYLING ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Styling")
	FLinearColor BackgroundColor = FLinearColor(0.0f, 0.0f, 0.0f, 0.7f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Styling")
	FLinearColor TextColor = FLinearColor::White;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Styling")
	FLinearColor LabelColor = FLinearColor(0.7f, 0.7f, 0.7f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Styling")
	float FontSize = 12.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Styling")
	FMargin Padding = FMargin(8.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Styling")
	FMargin ScreenMargin = FMargin(10.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Styling")
	float CornerRadius = 4.0f;

	// ==================== GRAPHS ====================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Graphs")
	bool bShowFPSGraph = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Graphs")
	float GraphWidth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Graphs")
	float GraphHeight = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD|Graphs")
	int32 GraphSampleCount = 60;
};

/**
 * UPMPerformanceHUDWidget - Real-time performance metrics overlay
 *
 * Features:
 * - Configurable via UPMPerformanceHUDConfig data asset
 * - Multiple display modes
 * - FPS color coding based on thresholds
 * - Memory and GPU stats
 * - Optional FPS graph
 * - Screen position options
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class UPM_API UUPMPerformanceHUDWidget : public UCommonUserWidget
{
	GENERATED_BODY()

public:
	UUPMPerformanceHUDWidget();

	// ==================== CONFIGURATION ====================

	/** Load configuration from data asset */
	UFUNCTION(BlueprintCallable, Category = "UPM|HUD")
	void LoadConfiguration(UUPMPerformanceHUDConfig* Config);

	/** Get current configuration */
	UFUNCTION(BlueprintPure, Category = "UPM|HUD")
	UUPMPerformanceHUDConfig* GetConfiguration() const { return CurrentConfig; }

	// ==================== DISPLAY MODE ====================

	/** Set the display mode */
	UFUNCTION(BlueprintCallable, Category = "UPM|HUD")
	void SetDisplayMode(EUPMHUDDisplayMode Mode);

	/** Get current display mode */
	UFUNCTION(BlueprintPure, Category = "UPM|HUD")
	EUPMHUDDisplayMode GetDisplayMode() const { return CurrentMode; }

	/** Cycle through display modes */
	UFUNCTION(BlueprintCallable, Category = "UPM|HUD")
	void CycleDisplayMode();

	/** Toggle HUD visibility */
	UFUNCTION(BlueprintCallable, Category = "UPM|HUD")
	void ToggleVisibility();

	// ==================== STATS ====================

	/** Get current FPS */
	UFUNCTION(BlueprintPure, Category = "UPM|HUD")
	float GetCurrentFPS() const { return CachedFPS; }

	/** Get current frame time in milliseconds */
	UFUNCTION(BlueprintPure, Category = "UPM|HUD")
	float GetCurrentFrameTime() const { return CachedFrameTime; }

	/** Get color for current FPS */
	UFUNCTION(BlueprintPure, Category = "UPM|HUD")
	FLinearColor GetFPSColor() const;

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	/** Update all displayed stats */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|HUD")
	void UpdateStats();

	/** Apply position from configuration */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|HUD")
	void ApplyPosition();

	/** Configure visible elements based on mode */
	UFUNCTION(BlueprintNativeEvent, Category = "UPM|HUD")
	void ConfigureVisibleElements();

	/** Format FPS value for display */
	UFUNCTION(BlueprintPure, Category = "UPM|HUD")
	FText FormatFPS(float FPS) const;

	/** Format time in milliseconds */
	UFUNCTION(BlueprintPure, Category = "UPM|HUD")
	FText FormatTime(float TimeMs) const;

	/** Format memory in MB/GB */
	UFUNCTION(BlueprintPure, Category = "UPM|HUD")
	FText FormatMemory(int64 Bytes) const;

	// Widget bindings
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UVerticalBox> StatsContainer;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UImage> BackgroundImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> FPSText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> FrameTimeText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> GPUTimeText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> GameThreadText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> RenderThreadText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> MemoryText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> VRAMText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> AverageFPSText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> MinMaxFPSText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> PercentilesText;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuration")
	TSoftObjectPtr<UUPMPerformanceHUDConfig> DefaultConfig;

	UPROPERTY()
	TObjectPtr<UUPMPerformanceHUDConfig> CurrentConfig;

	UPROPERTY()
	EUPMHUDDisplayMode CurrentMode = EUPMHUDDisplayMode::Basic;

	// Cached values
	UPROPERTY()
	float CachedFPS = 0.0f;

	UPROPERTY()
	float CachedFrameTime = 0.0f;

	UPROPERTY()
	float CachedGPUTime = 0.0f;

	UPROPERTY()
	float CachedGameThreadTime = 0.0f;

	UPROPERTY()
	float CachedRenderThreadTime = 0.0f;

	UPROPERTY()
	int64 CachedMemoryUsed = 0;

	UPROPERTY()
	float TimeSinceLastUpdate = 0.0f;

	// Performance monitor reference
	UPROPERTY()
	TWeakObjectPtr<UUPMPerformanceMonitor> PerformanceMonitor;
};
