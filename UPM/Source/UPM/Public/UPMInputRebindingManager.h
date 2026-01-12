// Copyright UPM Team. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "UPMTypes.h"
#include "InputCoreTypes.h"
#include "UPMInputRebindingManager.generated.h"

class UInputMappingContext;
class UInputAction;
class UEnhancedInputLocalPlayerSubsystem;
class UPlayerMappableInputConfig;

/**
 * UPMInputRebindingManager - Enhanced Input System rebinding support
 *
 * Provides:
 * - Runtime input rebinding for Enhanced Input actions
 * - Multiple key bindings per action (primary, secondary, gamepad)
 * - Conflict detection and resolution
 * - Save/load of custom bindings
 * - Reset to defaults functionality
 * - Binding UI support with key listening
 */
UCLASS(BlueprintType)
class UPM_API UUPMInputRebindingManager : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	/** Static helper to get the manager from any world context */
	UFUNCTION(BlueprintPure, Category = "UPM|Input", meta = (WorldContext = "WorldContextObject"))
	static UUPMInputRebindingManager* Get(const UObject* WorldContextObject, int32 PlayerIndex = 0);

	// ==================== BINDING INFO ====================

	/**
	 * Get all rebindable input actions
	 * @return Array of binding info for all rebindable actions
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	TArray<FUPMInputBindingInfo> GetAllBindings() const;

	/**
	 * Get bindings for a specific category
	 * @param CategoryName - The category to filter by (e.g., "Movement", "Combat")
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	TArray<FUPMInputBindingInfo> GetBindingsByCategory(const FText& CategoryName) const;

	/**
	 * Get binding info for a specific action
	 * @param ActionName - The name of the input action
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	FUPMInputBindingInfo GetBindingInfo(FName ActionName) const;

	/**
	 * Get all unique category names
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	TArray<FText> GetAllCategories() const;

	// ==================== REBINDING ====================

	/**
	 * Start listening for a new key binding
	 * @param ActionName - The action to rebind
	 * @param bIsPrimary - True for primary binding, false for secondary
	 * @param bIsGamepad - True if listening for gamepad input
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void StartRebinding(FName ActionName, bool bIsPrimary = true, bool bIsGamepad = false);

	/**
	 * Cancel the current rebinding operation
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void CancelRebinding();

	/**
	 * Check if currently listening for input
	 */
	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	bool IsRebindingActive() const { return bIsRebinding; }

	/**
	 * Get the action currently being rebound
	 */
	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	FName GetRebindingAction() const { return RebindingActionName; }

	/**
	 * Directly set a binding for an action
	 * @param ActionName - The action to rebind
	 * @param NewKey - The new key to bind
	 * @param bIsPrimary - True for primary binding
	 * @param bIsGamepad - True for gamepad binding
	 * @return True if rebinding was successful
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	bool SetBinding(FName ActionName, FKey NewKey, bool bIsPrimary = true, bool bIsGamepad = false);

	/**
	 * Clear a specific binding
	 * @param ActionName - The action to clear
	 * @param bIsPrimary - True for primary, false for secondary
	 * @param bIsGamepad - True for gamepad binding
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void ClearBinding(FName ActionName, bool bIsPrimary = true, bool bIsGamepad = false);

	// ==================== CONFLICT DETECTION ====================

	/**
	 * Check if a key is already bound to another action
	 * @param Key - The key to check
	 * @param OutConflictingAction - The action that has this key bound
	 * @return True if there's a conflict
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	bool HasKeyConflict(FKey Key, FName& OutConflictingAction) const;

	/**
	 * Get all actions that use a specific key
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	TArray<FName> GetActionsUsingKey(FKey Key) const;

	/**
	 * Set whether to allow duplicate key bindings
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void SetAllowDuplicateBindings(bool bAllow) { bAllowDuplicateBindings = bAllow; }

	// ==================== SAVE/LOAD ====================

	/**
	 * Save current bindings to a named profile
	 * @param ProfileName - Name of the profile to save
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	bool SaveBindings(const FString& ProfileName = TEXT("Default"));

	/**
	 * Load bindings from a named profile
	 * @param ProfileName - Name of the profile to load
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	bool LoadBindings(const FString& ProfileName = TEXT("Default"));

	/**
	 * Reset all bindings to their default values
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void ResetToDefaults();

	/**
	 * Reset a specific action to its default binding
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void ResetActionToDefault(FName ActionName);

	/**
	 * Check if there are unsaved binding changes
	 */
	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	bool HasUnsavedChanges() const { return bHasUnsavedChanges; }

	// ==================== MAPPING CONTEXT ====================

	/**
	 * Register an input mapping context for rebinding
	 * @param MappingContext - The context to register
	 * @param CategoryName - Category name for organization
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void RegisterMappingContext(UInputMappingContext* MappingContext, const FText& CategoryName);

	/**
	 * Register a player mappable input config
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void RegisterPlayerMappableConfig(UPlayerMappableInputConfig* Config);

	/**
	 * Apply all current bindings to the Enhanced Input system
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void ApplyBindings();

	// ==================== UTILITY ====================

	/**
	 * Get a display-friendly name for a key
	 */
	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	static FText GetKeyDisplayName(FKey Key);

	/**
	 * Check if a key is a gamepad key
	 */
	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	static bool IsGamepadKey(FKey Key);

	/**
	 * Check if a key is a modifier key (Shift, Ctrl, Alt)
	 */
	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	static bool IsModifierKey(FKey Key);

	/**
	 * Get list of keys that cannot be rebound
	 */
	UFUNCTION(BlueprintPure, Category = "UPM|Input")
	TArray<FKey> GetBlockedKeys() const { return BlockedKeys; }

	/**
	 * Add a key to the blocked list
	 */
	UFUNCTION(BlueprintCallable, Category = "UPM|Input")
	void AddBlockedKey(FKey Key) { BlockedKeys.AddUnique(Key); }

	// ==================== DELEGATES ====================

	/** Called when rebinding completes successfully */
	UPROPERTY(BlueprintAssignable, Category = "UPM|Input|Events")
	FOnInputRebindComplete OnRebindComplete;

	/** Called when rebinding starts */
	UPROPERTY(BlueprintAssignable, Category = "UPM|Input|Events")
	FOnInputRebindStarted OnRebindStarted;

	/** Called when rebinding is cancelled */
	UPROPERTY(BlueprintAssignable, Category = "UPM|Input|Events")
	FOnInputRebindCancelled OnRebindCancelled;

protected:
	/** Handle input for rebinding */
	void ProcessKeyForRebinding(FKey Key);

	/** Handle any key input */
	bool HandleKeyDown(FKey Key);

	/** Store default bindings from a context */
	void CacheDefaultBindings(UInputMappingContext* Context);

	/** Get Enhanced Input subsystem */
	UEnhancedInputLocalPlayerSubsystem* GetEnhancedInputSubsystem() const;

	/** Build binding info from mapping context */
	void BuildBindingInfo();

	// Registered mapping contexts
	UPROPERTY()
	TMap<TObjectPtr<UInputMappingContext>, FText> RegisteredContexts;

	// Current bindings
	UPROPERTY()
	TMap<FName, FUPMInputBindingInfo> CurrentBindings;

	// Default bindings (for reset)
	UPROPERTY()
	TMap<FName, FUPMInputBindingInfo> DefaultBindings;

	// Keys that cannot be bound
	UPROPERTY()
	TArray<FKey> BlockedKeys;

	// Rebinding state
	bool bIsRebinding = false;
	FName RebindingActionName;
	bool bRebindingPrimary = true;
	bool bRebindingGamepad = false;
	bool bHasUnsavedChanges = false;
	bool bAllowDuplicateBindings = false;

	// Input delegate handle
	FDelegateHandle InputDelegateHandle;
};
