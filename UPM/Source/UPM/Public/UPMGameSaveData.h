// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "UPMTypes.h"
#include "UPMGameSaveData.generated.h"

/**
 * UPMGameSaveData - Extended save game class for game state
 *
 * Stores game state including:
 * - Player location and rotation
 * - Level/map information
 * - Play time
 * - Custom serializable data
 * - Actor states
 * - Inventory data
 */
UCLASS(BlueprintType)
class UPM_API UUPMGameSaveData : public USaveGame
{
	GENERATED_BODY()

public:
	UUPMGameSaveData();

	// ==================== METADATA ====================

	/** Save format version for migration support */
	UPROPERTY(BlueprintReadOnly, Category = "UPM|Save")
	int32 SaveVersion = 1;

	/** Slot information */
	UPROPERTY(BlueprintReadOnly, Category = "UPM|Save")
	FUPMSaveSlotInfo SlotInfo;

	// ==================== PLAYER STATE ====================

	/** Player transform (location, rotation, scale) */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Player")
	FTransform PlayerTransform;

	/** Player health (0-1 normalized) */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Player")
	float PlayerHealth = 1.0f;

	/** Player velocity at save time */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Player")
	FVector PlayerVelocity;

	/** Controller rotation */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Player")
	FRotator ControlRotation;

	// ==================== WORLD STATE ====================

	/** Current level/map name */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|World")
	FString CurrentLevelName;

	/** Level streaming states (sublevel name -> loaded state) */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|World")
	TMap<FString, bool> StreamingLevelStates;

	/** Game mode class path */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|World")
	FString GameModeClass;

	// ==================== TIME ====================

	/** Total accumulated play time in seconds */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Time")
	float PlayTimeSeconds = 0.0f;

	/** In-game time/date if applicable */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Time")
	FDateTime InGameDateTime;

	/** Real-world save timestamp */
	UPROPERTY(BlueprintReadOnly, Category = "UPM|Save|Time")
	FDateTime RealWorldSaveTime;

	// ==================== CUSTOM DATA ====================

	/**
	 * Generic string storage for custom data
	 * Use JSON serialization for complex objects
	 */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Custom")
	TMap<FString, FString> CustomStringData;

	/** Integer storage for simple values */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Custom")
	TMap<FString, int32> CustomIntData;

	/** Float storage for simple values */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Custom")
	TMap<FString, float> CustomFloatData;

	/** Boolean storage for flags */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Custom")
	TMap<FString, bool> CustomBoolData;

	/** Vector storage */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Custom")
	TMap<FString, FVector> CustomVectorData;

	/** Transform storage for actors */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Custom")
	TMap<FString, FTransform> CustomTransformData;

	// ==================== ACTOR STATE ====================

	/**
	 * Destroyed actor identifiers
	 * Actors with these tags/names should not respawn
	 */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Actors")
	TArray<FString> DestroyedActors;

	/**
	 * Actor state data (actor identifier -> serialized state)
	 * Format depends on game implementation
	 */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Actors")
	TMap<FString, FString> ActorStates;

	// ==================== INVENTORY ====================

	/**
	 * Inventory data as serialized JSON
	 * Flexible format for any inventory system
	 */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Inventory")
	FString InventoryData;

	/** Currently equipped items (slot name -> item ID) */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Inventory")
	TMap<FString, FString> EquippedItems;

	// ==================== QUEST/PROGRESS ====================

	/** Completed objectives/quests */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Progress")
	TArray<FString> CompletedObjectives;

	/** Active objectives with progress (objective ID -> progress JSON) */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Progress")
	TMap<FString, FString> ActiveObjectives;

	/** Unlocked abilities/skills */
	UPROPERTY(BlueprintReadWrite, Category = "UPM|Save|Progress")
	TArray<FString> UnlockedAbilities;

	// ==================== BLUEPRINT HELPERS ====================

	/** Set a custom string value */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save|Custom")
	void SetCustomString(const FString& Key, const FString& Value) { CustomStringData.Add(Key, Value); }

	/** Get a custom string value */
	UFUNCTION(BlueprintPure, Category = "UPM|Save|Custom")
	FString GetCustomString(const FString& Key) const;

	/** Set a custom int value */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save|Custom")
	void SetCustomInt(const FString& Key, int32 Value) { CustomIntData.Add(Key, Value); }

	/** Get a custom int value */
	UFUNCTION(BlueprintPure, Category = "UPM|Save|Custom")
	int32 GetCustomInt(const FString& Key, int32 DefaultValue = 0) const;

	/** Set a custom float value */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save|Custom")
	void SetCustomFloat(const FString& Key, float Value) { CustomFloatData.Add(Key, Value); }

	/** Get a custom float value */
	UFUNCTION(BlueprintPure, Category = "UPM|Save|Custom")
	float GetCustomFloat(const FString& Key, float DefaultValue = 0.0f) const;

	/** Set a custom bool value */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save|Custom")
	void SetCustomBool(const FString& Key, bool Value) { CustomBoolData.Add(Key, Value); }

	/** Get a custom bool value */
	UFUNCTION(BlueprintPure, Category = "UPM|Save|Custom")
	bool GetCustomBool(const FString& Key, bool DefaultValue = false) const;

	/** Set a custom vector value */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save|Custom")
	void SetCustomVector(const FString& Key, FVector Value) { CustomVectorData.Add(Key, Value); }

	/** Get a custom vector value */
	UFUNCTION(BlueprintPure, Category = "UPM|Save|Custom")
	FVector GetCustomVector(const FString& Key) const;

	/** Set a custom transform value */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save|Custom")
	void SetCustomTransform(const FString& Key, FTransform Value) { CustomTransformData.Add(Key, Value); }

	/** Get a custom transform value */
	UFUNCTION(BlueprintPure, Category = "UPM|Save|Custom")
	FTransform GetCustomTransform(const FString& Key) const;

	/** Check if actor is marked as destroyed */
	UFUNCTION(BlueprintPure, Category = "UPM|Save|Actors")
	bool IsActorDestroyed(const FString& ActorIdentifier) const;

	/** Mark an actor as destroyed */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save|Actors")
	void MarkActorDestroyed(const FString& ActorIdentifier);

	/** Check if an objective is completed */
	UFUNCTION(BlueprintPure, Category = "UPM|Save|Progress")
	bool IsObjectiveCompleted(const FString& ObjectiveID) const;

	/** Mark an objective as completed */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save|Progress")
	void MarkObjectiveCompleted(const FString& ObjectiveID);

	/** Check if ability is unlocked */
	UFUNCTION(BlueprintPure, Category = "UPM|Save|Progress")
	bool IsAbilityUnlocked(const FString& AbilityID) const;

	/** Unlock an ability */
	UFUNCTION(BlueprintCallable, Category = "UPM|Save|Progress")
	void UnlockAbility(const FString& AbilityID);
};
