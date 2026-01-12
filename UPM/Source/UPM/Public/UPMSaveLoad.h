// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UPMSaveLoad.generated.h"

class UUPMCore;
class UUPMSettingsData;
class UUPMExtendedSettings;

/**
 * UPMSaveLoad - Utility class for saving and loading UPM settings
 *
 * Provides static functions to save/load all settings using a dual strategy:
 * - USaveGame for UPM-specific data (FOV, gamma, extended settings)
 * - UGameUserSettings for engine scalability (auto-saves to GameUserSettings.ini)
 */
UCLASS()
class UPM_API UUPMSaveLoad : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Default save slot name */
	static const FString DefaultSaveSlotName;

	/** Default user index */
	static const int32 DefaultUserIndex;

	// ==================== MAIN SAVE/LOAD ====================

	/** Saves all UPM settings */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveLoad", meta = (WorldContext = "WorldContextObject"))
	static bool SaveAllSettings(const UObject* WorldContextObject, const FString& SlotName = TEXT(""));

	/** Loads all UPM settings */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveLoad", meta = (WorldContext = "WorldContextObject"))
	static bool LoadAllSettings(const UObject* WorldContextObject, const FString& SlotName = TEXT(""));

	// ==================== UTILITY ====================

	/** Check if a settings save exists */
	UFUNCTION(BlueprintPure, Category = "UPM|SaveLoad")
	static bool DoesSettingsSaveExist(const FString& SlotName = TEXT(""));

	/** Delete the settings save file */
	UFUNCTION(BlueprintCallable, Category = "UPM|SaveLoad")
	static bool DeleteSettingsSave(const FString& SlotName = TEXT(""));

	/** Get the save slot name (uses default if empty) */
	UFUNCTION(BlueprintPure, Category = "UPM|SaveLoad")
	static FString GetSaveSlotName(const FString& SlotName = TEXT(""));

	// ==================== INTERNAL ====================

	/** Create a new settings data object with current values */
	static UUPMSettingsData* CreateSettingsData(const UObject* WorldContextObject);

	/** Apply loaded settings data to all systems */
	static void ApplySettingsData(const UObject* WorldContextObject, UUPMSettingsData* SettingsData);

protected:
	/** Save extended settings to data object */
	static void SaveExtendedSettings(UUPMExtendedSettings* ExtendedSettings, UUPMSettingsData* SettingsData);

	/** Load extended settings from data object */
	static void LoadExtendedSettings(UUPMExtendedSettings* ExtendedSettings, UUPMSettingsData* SettingsData);
};
