// Copyright UPM Team. All Rights Reserved.

#include "UPMGameSaveData.h"

UUPMGameSaveData::UUPMGameSaveData()
{
	// Set default values
	RealWorldSaveTime = FDateTime::Now();
	InGameDateTime = FDateTime::Now();
}

FString UUPMGameSaveData::GetCustomString(const FString& Key) const
{
	if (const FString* Value = CustomStringData.Find(Key))
	{
		return *Value;
	}
	return FString();
}

int32 UUPMGameSaveData::GetCustomInt(const FString& Key, int32 DefaultValue) const
{
	if (const int32* Value = CustomIntData.Find(Key))
	{
		return *Value;
	}
	return DefaultValue;
}

float UUPMGameSaveData::GetCustomFloat(const FString& Key, float DefaultValue) const
{
	if (const float* Value = CustomFloatData.Find(Key))
	{
		return *Value;
	}
	return DefaultValue;
}

bool UUPMGameSaveData::GetCustomBool(const FString& Key, bool DefaultValue) const
{
	if (const bool* Value = CustomBoolData.Find(Key))
	{
		return *Value;
	}
	return DefaultValue;
}

FVector UUPMGameSaveData::GetCustomVector(const FString& Key) const
{
	if (const FVector* Value = CustomVectorData.Find(Key))
	{
		return *Value;
	}
	return FVector::ZeroVector;
}

FTransform UUPMGameSaveData::GetCustomTransform(const FString& Key) const
{
	if (const FTransform* Value = CustomTransformData.Find(Key))
	{
		return *Value;
	}
	return FTransform::Identity;
}

bool UUPMGameSaveData::IsActorDestroyed(const FString& ActorIdentifier) const
{
	return DestroyedActors.Contains(ActorIdentifier);
}

void UUPMGameSaveData::MarkActorDestroyed(const FString& ActorIdentifier)
{
	DestroyedActors.AddUnique(ActorIdentifier);
}

bool UUPMGameSaveData::IsObjectiveCompleted(const FString& ObjectiveID) const
{
	return CompletedObjectives.Contains(ObjectiveID);
}

void UUPMGameSaveData::MarkObjectiveCompleted(const FString& ObjectiveID)
{
	CompletedObjectives.AddUnique(ObjectiveID);
	ActiveObjectives.Remove(ObjectiveID);
}

bool UUPMGameSaveData::IsAbilityUnlocked(const FString& AbilityID) const
{
	return UnlockedAbilities.Contains(AbilityID);
}

void UUPMGameSaveData::UnlockAbility(const FString& AbilityID)
{
	UnlockedAbilities.AddUnique(AbilityID);
}
