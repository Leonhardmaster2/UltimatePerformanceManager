// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UPMSaveLoad.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUPMSaveLoad() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_UPM();
UPM_API UClass* Z_Construct_UClass_UUPMSaveLoad();
UPM_API UClass* Z_Construct_UClass_UUPMSaveLoad_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUPMSaveLoad Function DeleteSettingsSave *********************************
struct Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics
{
	struct UPMSaveLoad_eventDeleteSettingsSave_Parms
	{
		FString SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|SaveLoad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delete the settings save file */" },
#endif
		{ "CPP_Default_SlotName", "" },
		{ "ModuleRelativePath", "Public/UPMSaveLoad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delete the settings save file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMSaveLoad_eventDeleteSettingsSave_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMSaveLoad_eventDeleteSettingsSave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMSaveLoad_eventDeleteSettingsSave_Parms), &Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMSaveLoad, nullptr, "DeleteSettingsSave", Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::UPMSaveLoad_eventDeleteSettingsSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::UPMSaveLoad_eventDeleteSettingsSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMSaveLoad::execDeleteSettingsSave)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUPMSaveLoad::DeleteSettingsSave(Z_Param_SlotName);
	P_NATIVE_END;
}
// ********** End Class UUPMSaveLoad Function DeleteSettingsSave ***********************************

// ********** Begin Class UUPMSaveLoad Function DoesSettingsSaveExist ******************************
struct Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics
{
	struct UPMSaveLoad_eventDoesSettingsSaveExist_Parms
	{
		FString SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|SaveLoad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if a settings save exists */" },
#endif
		{ "CPP_Default_SlotName", "" },
		{ "ModuleRelativePath", "Public/UPMSaveLoad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a settings save exists" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMSaveLoad_eventDoesSettingsSaveExist_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMSaveLoad_eventDoesSettingsSaveExist_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMSaveLoad_eventDoesSettingsSaveExist_Parms), &Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMSaveLoad, nullptr, "DoesSettingsSaveExist", Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::UPMSaveLoad_eventDoesSettingsSaveExist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::UPMSaveLoad_eventDoesSettingsSaveExist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMSaveLoad::execDoesSettingsSaveExist)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUPMSaveLoad::DoesSettingsSaveExist(Z_Param_SlotName);
	P_NATIVE_END;
}
// ********** End Class UUPMSaveLoad Function DoesSettingsSaveExist ********************************

// ********** Begin Class UUPMSaveLoad Function GetSaveSlotName ************************************
struct Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics
{
	struct UPMSaveLoad_eventGetSaveSlotName_Parms
	{
		FString SlotName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|SaveLoad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the save slot name (uses default if empty) */" },
#endif
		{ "CPP_Default_SlotName", "" },
		{ "ModuleRelativePath", "Public/UPMSaveLoad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the save slot name (uses default if empty)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMSaveLoad_eventGetSaveSlotName_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMSaveLoad_eventGetSaveSlotName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMSaveLoad, nullptr, "GetSaveSlotName", Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::UPMSaveLoad_eventGetSaveSlotName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::UPMSaveLoad_eventGetSaveSlotName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMSaveLoad::execGetSaveSlotName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UUPMSaveLoad::GetSaveSlotName(Z_Param_SlotName);
	P_NATIVE_END;
}
// ********** End Class UUPMSaveLoad Function GetSaveSlotName **************************************

// ********** Begin Class UUPMSaveLoad Function LoadAllSettings ************************************
struct Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics
{
	struct UPMSaveLoad_eventLoadAllSettings_Parms
	{
		const UObject* WorldContextObject;
		FString SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|SaveLoad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loads all UPM settings */" },
#endif
		{ "CPP_Default_SlotName", "" },
		{ "ModuleRelativePath", "Public/UPMSaveLoad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads all UPM settings" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMSaveLoad_eventLoadAllSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMSaveLoad_eventLoadAllSettings_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMSaveLoad_eventLoadAllSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMSaveLoad_eventLoadAllSettings_Parms), &Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMSaveLoad, nullptr, "LoadAllSettings", Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::UPMSaveLoad_eventLoadAllSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::UPMSaveLoad_eventLoadAllSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMSaveLoad::execLoadAllSettings)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUPMSaveLoad::LoadAllSettings(Z_Param_WorldContextObject,Z_Param_SlotName);
	P_NATIVE_END;
}
// ********** End Class UUPMSaveLoad Function LoadAllSettings **************************************

// ********** Begin Class UUPMSaveLoad Function SaveAllSettings ************************************
struct Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics
{
	struct UPMSaveLoad_eventSaveAllSettings_Parms
	{
		const UObject* WorldContextObject;
		FString SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|SaveLoad" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Saves all UPM settings */" },
#endif
		{ "CPP_Default_SlotName", "" },
		{ "ModuleRelativePath", "Public/UPMSaveLoad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves all UPM settings" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMSaveLoad_eventSaveAllSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMSaveLoad_eventSaveAllSettings_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UPMSaveLoad_eventSaveAllSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPMSaveLoad_eventSaveAllSettings_Parms), &Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMSaveLoad, nullptr, "SaveAllSettings", Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::UPMSaveLoad_eventSaveAllSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::UPMSaveLoad_eventSaveAllSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMSaveLoad::execSaveAllSettings)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UUPMSaveLoad::SaveAllSettings(Z_Param_WorldContextObject,Z_Param_SlotName);
	P_NATIVE_END;
}
// ********** End Class UUPMSaveLoad Function SaveAllSettings **************************************

// ********** Begin Class UUPMSaveLoad *************************************************************
void UUPMSaveLoad::StaticRegisterNativesUUPMSaveLoad()
{
	UClass* Class = UUPMSaveLoad::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteSettingsSave", &UUPMSaveLoad::execDeleteSettingsSave },
		{ "DoesSettingsSaveExist", &UUPMSaveLoad::execDoesSettingsSaveExist },
		{ "GetSaveSlotName", &UUPMSaveLoad::execGetSaveSlotName },
		{ "LoadAllSettings", &UUPMSaveLoad::execLoadAllSettings },
		{ "SaveAllSettings", &UUPMSaveLoad::execSaveAllSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUPMSaveLoad;
UClass* UUPMSaveLoad::GetPrivateStaticClass()
{
	using TClass = UUPMSaveLoad;
	if (!Z_Registration_Info_UClass_UUPMSaveLoad.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UPMSaveLoad"),
			Z_Registration_Info_UClass_UUPMSaveLoad.InnerSingleton,
			StaticRegisterNativesUUPMSaveLoad,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UUPMSaveLoad.InnerSingleton;
}
UClass* Z_Construct_UClass_UUPMSaveLoad_NoRegister()
{
	return UUPMSaveLoad::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUPMSaveLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UPMSaveLoad - Utility class for saving and loading UPM settings\n *\n * Provides static functions to save/load all settings using a dual strategy:\n * - USaveGame for UPM-specific data (FOV, gamma, extended settings)\n * - UGameUserSettings for engine scalability (auto-saves to GameUserSettings.ini)\n */" },
#endif
		{ "IncludePath", "UPMSaveLoad.h" },
		{ "ModuleRelativePath", "Public/UPMSaveLoad.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPMSaveLoad - Utility class for saving and loading UPM settings\n\nProvides static functions to save/load all settings using a dual strategy:\n- USaveGame for UPM-specific data (FOV, gamma, extended settings)\n- UGameUserSettings for engine scalability (auto-saves to GameUserSettings.ini)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPMSaveLoad_DeleteSettingsSave, "DeleteSettingsSave" }, // 1653278793
		{ &Z_Construct_UFunction_UUPMSaveLoad_DoesSettingsSaveExist, "DoesSettingsSaveExist" }, // 945959576
		{ &Z_Construct_UFunction_UUPMSaveLoad_GetSaveSlotName, "GetSaveSlotName" }, // 1176236571
		{ &Z_Construct_UFunction_UUPMSaveLoad_LoadAllSettings, "LoadAllSettings" }, // 3547712765
		{ &Z_Construct_UFunction_UUPMSaveLoad_SaveAllSettings, "SaveAllSettings" }, // 862675733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPMSaveLoad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUPMSaveLoad_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UPM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMSaveLoad_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPMSaveLoad_Statics::ClassParams = {
	&UUPMSaveLoad::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMSaveLoad_Statics::Class_MetaDataParams), Z_Construct_UClass_UUPMSaveLoad_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUPMSaveLoad()
{
	if (!Z_Registration_Info_UClass_UUPMSaveLoad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPMSaveLoad.OuterSingleton, Z_Construct_UClass_UUPMSaveLoad_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUPMSaveLoad.OuterSingleton;
}
UUPMSaveLoad::UUPMSaveLoad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUPMSaveLoad);
UUPMSaveLoad::~UUPMSaveLoad() {}
// ********** End Class UUPMSaveLoad ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h__Script_UPM_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUPMSaveLoad, UUPMSaveLoad::StaticClass, TEXT("UUPMSaveLoad"), &Z_Registration_Info_UClass_UUPMSaveLoad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPMSaveLoad), 1260295986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h__Script_UPM_3589681723(TEXT("/Script/UPM"),
	Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h__Script_UPM_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h__Script_UPM_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
