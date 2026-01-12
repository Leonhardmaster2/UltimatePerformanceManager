// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UPMTypes.h"
#include "UPMSaveSubsystem.generated.h"

class UUPMGameSaveData;

/**
 * UPMSaveSubsystem - Extended save system for singleplayer games
 *
 * Provides:
 * - Multiple save slots with metadata
 * - Auto-save functionality with configurable intervals
 * - Quick save/quick load
 * - Async save/load operations
 * - Save slot management (create, delete, copy)
 * - Screenshot thumbnails for save slots
 * - Play time tracking
 * - Custom data serialization support
 */
UCLASS()
class UPM_API UUPMSaveSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	/** Static helper to get save subsystem from any world context */
	UFUNCTION(BlueprintPure, Category = "UPM|Save", meta = (WorldContext = "WorldContextObject"))
	static UUPMSaveSubsystem* Get(const UObject* WorldContextObject);

	// ==================== SAVE OPERATIONS ====================

	/**
	 * Save game to a specific slot
	 * @param SlotName - Name of the save slot
	 * @param DisplayName - User-friendly name for the save
	 * @param bAsync - Whether to save asynchronously
	 * @return True if save operation started successfully
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	bool SaveGame(const FString& SlotName, const FString& DisplayName = TEXT(""), bool bAsync = true);

	/**
	 * Load game from a specific slot
	 * @param SlotName - Name of the save slot to load
	 * @param bAsync - Whether to load asynchronously
	 * @return True if load operation started successfully
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	bool LoadGame(const FString& SlotName, bool bAsync = true);

	/** Quick save to the designated quick save slot */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	bool QuickSave();

	/** Quick load from the designated quick save slot */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	bool QuickLoad();

	// ==================== AUTO SAVE ====================

	/** Enable or disable auto-save */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	void SetAutoSaveEnabled(bool bEnabled);

	/** Check if auto-save is enabled */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	bool IsAutoSaveEnabled() const { return bAutoSaveEnabled; }

	/** Set auto-save interval in seconds */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	void SetAutoSaveInterval(float IntervalSeconds);

	/** Get current auto-save interval */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	float GetAutoSaveInterval() const { return AutoSaveInterval; }

	/** Trigger an auto-save manually (respects auto-save enabled state) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	void TriggerAutoSave();

	/** Set maximum number of auto-save slots to rotate through */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	void SetMaxAutoSaveSlots(int32 MaxSlots);

	// ==================== SLOT MANAGEMENT ====================

	/** Get list of all available save slots */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	TArray<FUPMSaveSlotInfo> GetAllSaveSlots() const;

	/** Get info for a specific save slot */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	FUPMSaveSlotInfo GetSaveSlotInfo(const FString& SlotName) const;

	/** Check if a save slot exists */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	bool DoesSaveSlotExist(const FString& SlotName) const;

	/** Delete a save slot */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	bool DeleteSaveSlot(const FString& SlotName);

	/** Copy a save slot to a new slot */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	bool CopySaveSlot(const FString& SourceSlot, const FString& DestSlot);

	/** Rename a save slot's display name */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	bool RenameSaveSlot(const FString& SlotName, const FString& NewDisplayName);

	/** Get the most recent save slot */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	FUPMSaveSlotInfo GetMostRecentSave() const;

	/** Get a unique slot name for a new save */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	FString GenerateUniqueSlotName(const FString& Prefix = TEXT("Save")) const;

	// ==================== PLAY TIME ====================

	/** Get total play time in seconds */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	float GetTotalPlayTime() const { return TotalPlayTime; }

	/** Get current session play time in seconds */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	float GetSessionPlayTime() const;

	/** Reset session play time (called on new game) */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	void ResetPlayTime();

	// ==================== CUSTOM DATA ====================

	/**
	 * Set custom save data that will be included in saves
	 * @param Key - Unique key for the data
	 * @param Value - String value (use JSON for complex data)
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	void SetCustomSaveData(const FString& Key, const FString& Value);

	/** Get custom save data by key */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	FString GetCustomSaveData(const FString& Key) const;

	/** Remove custom save data by key */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	void RemoveCustomSaveData(const FString& Key);

	/** Clear all custom save data */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	void ClearCustomSaveData();

	// ==================== CONFIGURATION ====================

	/** Set the quick save slot name */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	void SetQuickSaveSlotName(const FString& SlotName) { QuickSaveSlotName = SlotName; }

	/** Get the quick save slot name */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	FString GetQuickSaveSlotName() const { return QuickSaveSlotName; }

	/** Set whether to capture screenshots for save thumbnails */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save")
	void SetCaptureScreenshots(bool bCapture) { bCaptureScreenshots = bCapture; }

	/** Check if an operation is currently in progress */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	bool IsSaveOrLoadInProgress() const { return bOperationInProgress; }

	// ==================== DELEGATES ====================

	/** Called when a save operation completes */
	UPROPERTY(BlueprintAssignable, Category = "UPM|Save|Events")
	FOnSaveGameComplete OnSaveComplete;

	/** Called when a load operation completes */
	UPROPERTY(BlueprintAssignable, Category = "UPM|Save|Events")
	FOnLoadGameComplete OnLoadComplete;

	/** Called when auto-save triggers */
	UPROPERTY(BlueprintAssignable, Category = "UPM|Save|Events")
	FOnAutoSaveTriggered OnAutoSaveTriggered;

	// ==================== CURRENT SAVE DATA ACCESS ====================

	/** Get the currently loaded save data (may be null) */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	UUPMGameSaveData* GetCurrentSaveData() const { return CurrentSaveData; }

	/** Get the current save slot name (empty if no save loaded) */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	FString GetCurrentSlotName() const { return CurrentSlotName; }

	/** Check if we're in a new game state (no save loaded) */
	UFUNCTION(BlueprintPure, Category = "UPM|Save")
	bool IsNewGame() const { return CurrentSlotName.IsEmpty(); }

protected:
	/** Handle auto-save timer */
	void OnAutoSaveTimer();

	/** Internal save implementation */
	bool SaveGameInternal(const FString& SlotName, EUPMSaveSlotType SlotType, const FString& DisplayName);

	/** Internal load implementation */
	bool LoadGameInternal(const FString& SlotName);

	/** Update slot metadata cache */
	void RefreshSlotCache();

	/** Capture screenshot for save thumbnail */
	void CaptureScreenshotForSave(const FString& SlotName);

	/** Get the next auto-save slot name */
	FString GetNextAutoSaveSlotName();

	/** Update play time tracking */
	void UpdatePlayTime();

	// Configuration
	UPROPERTY()
	FString QuickSaveSlotName = TEXT("QuickSave");

	UPROPERTY()
	float AutoSaveInterval = 300.0f; // 5 minutes default

	UPROPERTY()
	int32 MaxAutoSaveSlots = 3;

	UPROPERTY()
	bool bAutoSaveEnabled = true;

	UPROPERTY()
	bool bCaptureScreenshots = true;

	// State
	UPROPERTY()
	TObjectPtr<UUPMGameSaveData> CurrentSaveData;

	UPROPERTY()
	FString CurrentSlotName;

	UPROPERTY()
	TMap<FString, FUPMSaveSlotInfo> SlotInfoCache;

	UPROPERTY()
	TMap<FString, FString> CustomSaveData;

	// Play time tracking
	float TotalPlayTime = 0.0f;
	float SessionStartTime = 0.0f;
	float LastPlayTimeUpdate = 0.0f;

	// Auto-save state
	int32 CurrentAutoSaveIndex = 0;
	FTimerHandle AutoSaveTimerHandle;

	// Operation state
	bool bOperationInProgress = false;
};
