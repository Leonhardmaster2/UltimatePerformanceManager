// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UPMTypes.h"
#include "UPMCore.generated.h"

class UUPMGraphicsManager;
class UUPMPerformanceMonitor;

/**
 * UPMCore - Central access point for all UPM functionality
 *
 * This GameInstanceSubsystem provides global access to graphics settings,
 * performance monitoring, and serves as the coordination layer for all UPM systems.
 * It persists across level loads and is accessible globally via GetSubsystem.
 */
UCLASS()
class UPM_API UUPMCore : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	/** Initialize the subsystem */
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	/** Cleanup on shutdown */
	virtual void Deinitialize() override;

	/** Static helper to get UPMCore from any world context */
	UFUNCTION(BlueprintPure, Category = "UPM", meta = (WorldContext = "WorldContextObject"))
	static UUPMCore* Get(const UObject* WorldContextObject);

	// ==================== MANAGER ACCESS ====================

	/** Returns the graphics manager instance for scalability settings */
	UFUNCTION(BlueprintPure, Category = "UPM|Managers")
	UUPMGraphicsManager* GetGraphicsManager() const { return GraphicsManager; }

	/** Returns the performance monitor instance */
	UFUNCTION(BlueprintPure, Category = "UPM|Managers")
	UUPMPerformanceMonitor* GetPerformanceMonitor() const { return PerformanceMonitor; }

	// ==================== GLOBAL OPERATIONS ====================

	/** Applies all current settings (graphics + extended) */
	UFUNCTION(BlueprintCallable, Category = "UPM")
	void ApplyAllSettings();

	/** Resets everything to engine defaults */
	UFUNCTION(BlueprintCallable, Category = "UPM")
	void ResetToDefaults();

	/** Runs hardware benchmark and sets appropriate quality */
	UFUNCTION(BlueprintCallable, Category = "UPM")
	void AutoDetectSettings();

	/** Saves all settings to disk */
	UFUNCTION(BlueprintCallable, Category = "UPM")
	void SaveAllSettings();

	/** Loads all settings from disk */
	UFUNCTION(BlueprintCallable, Category = "UPM")
	void LoadAllSettings();

	// ==================== UNSAVED CHANGES TRACKING ====================

	/**
	 * Check if there are unsaved changes
	 * Returns true if any setting has been modified since the last save
	 */
	UFUNCTION(BlueprintPure, Category = "UPM")
	bool HasUnsavedChanges() const { return bHasUnsavedChanges; }

	/**
	 * Mark that settings have been changed (called internally by managers)
	 * You can also call this manually if implementing custom settings
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM")
	void MarkSettingsChanged();

	/**
	 * Clear the unsaved changes flag without saving
	 * Use with caution - typically you should call SaveAllSettings() instead
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM")
	void ClearUnsavedChangesFlag() { bHasUnsavedChanges = false; }

	// ==================== DELEGATES ====================

	/** Called when any settings are changed */
	UPROPERTY(BlueprintAssignable, Category = "UPM|Events")
	FOnSettingsChanged OnSettingsChanged;

	/** Called when settings are applied */
	UPROPERTY(BlueprintAssignable, Category = "UPM|Events")
	FOnSettingsApplied OnSettingsApplied;

protected:
	/** Graphics settings manager */
	UPROPERTY()
	TObjectPtr<UUPMGraphicsManager> GraphicsManager;

	/** Performance monitoring system */
	UPROPERTY()
	TObjectPtr<UUPMPerformanceMonitor> PerformanceMonitor;

private:
	/** Initialize all child managers */
	void InitializeManagers();

	/** Tracks whether any settings have been modified since last save */
	bool bHasUnsavedChanges = false;
};
