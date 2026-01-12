// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UPMCore.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUPMCore() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_UPM();
UPM_API UClass* Z_Construct_UClass_UUPMCore();
UPM_API UClass* Z_Construct_UClass_UUPMCore_NoRegister();
UPM_API UClass* Z_Construct_UClass_UUPMGraphicsManager_NoRegister();
UPM_API UClass* Z_Construct_UClass_UUPMPerformanceMonitor_NoRegister();
UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnSettingsApplied__DelegateSignature();
UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUPMCore Function ApplyAllSettings ***************************************
struct Z_Construct_UFunction_UUPMCore_ApplyAllSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Applies all current settings (graphics + extended) */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies all current settings (graphics + extended)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMCore_ApplyAllSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMCore, nullptr, "ApplyAllSettings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_ApplyAllSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMCore_ApplyAllSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMCore_ApplyAllSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMCore_ApplyAllSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMCore::execApplyAllSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAllSettings();
	P_NATIVE_END;
}
// ********** End Class UUPMCore Function ApplyAllSettings *****************************************

// ********** Begin Class UUPMCore Function AutoDetectSettings *************************************
struct Z_Construct_UFunction_UUPMCore_AutoDetectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Runs hardware benchmark and sets appropriate quality */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runs hardware benchmark and sets appropriate quality" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMCore_AutoDetectSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMCore, nullptr, "AutoDetectSettings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_AutoDetectSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMCore_AutoDetectSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMCore_AutoDetectSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMCore_AutoDetectSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMCore::execAutoDetectSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AutoDetectSettings();
	P_NATIVE_END;
}
// ********** End Class UUPMCore Function AutoDetectSettings ***************************************

// ********** Begin Class UUPMCore Function Get ****************************************************
struct Z_Construct_UFunction_UUPMCore_Get_Statics
{
	struct UPMCore_eventGet_Parms
	{
		const UObject* WorldContextObject;
		UUPMCore* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Static helper to get UPMCore from any world context */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static helper to get UPMCore from any world context" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMCore_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMCore_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMCore_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMCore_eventGet_Parms, ReturnValue), Z_Construct_UClass_UUPMCore_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMCore_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMCore_Get_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMCore_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_Get_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMCore_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMCore, nullptr, "Get", Z_Construct_UFunction_UUPMCore_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMCore_Get_Statics::UPMCore_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMCore_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMCore_Get_Statics::UPMCore_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMCore_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMCore_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMCore::execGet)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUPMCore**)Z_Param__Result=UUPMCore::Get(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UUPMCore Function Get ******************************************************

// ********** Begin Class UUPMCore Function GetGraphicsManager *************************************
struct Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics
{
	struct UPMCore_eventGetGraphicsManager_Parms
	{
		UUPMGraphicsManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Managers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the graphics manager instance for scalability settings */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the graphics manager instance for scalability settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMCore_eventGetGraphicsManager_Parms, ReturnValue), Z_Construct_UClass_UUPMGraphicsManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMCore, nullptr, "GetGraphicsManager", Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::UPMCore_eventGetGraphicsManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::UPMCore_eventGetGraphicsManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMCore_GetGraphicsManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMCore_GetGraphicsManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMCore::execGetGraphicsManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUPMGraphicsManager**)Z_Param__Result=P_THIS->GetGraphicsManager();
	P_NATIVE_END;
}
// ********** End Class UUPMCore Function GetGraphicsManager ***************************************

// ********** Begin Class UUPMCore Function GetPerformanceMonitor **********************************
struct Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics
{
	struct UPMCore_eventGetPerformanceMonitor_Parms
	{
		UUPMPerformanceMonitor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM|Managers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the performance monitor instance */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the performance monitor instance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPMCore_eventGetPerformanceMonitor_Parms, ReturnValue), Z_Construct_UClass_UUPMPerformanceMonitor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMCore, nullptr, "GetPerformanceMonitor", Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::UPMCore_eventGetPerformanceMonitor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::UPMCore_eventGetPerformanceMonitor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMCore::execGetPerformanceMonitor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUPMPerformanceMonitor**)Z_Param__Result=P_THIS->GetPerformanceMonitor();
	P_NATIVE_END;
}
// ********** End Class UUPMCore Function GetPerformanceMonitor ************************************

// ********** Begin Class UUPMCore Function LoadAllSettings ****************************************
struct Z_Construct_UFunction_UUPMCore_LoadAllSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loads all settings from disk */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loads all settings from disk" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMCore_LoadAllSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMCore, nullptr, "LoadAllSettings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_LoadAllSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMCore_LoadAllSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMCore_LoadAllSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMCore_LoadAllSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMCore::execLoadAllSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadAllSettings();
	P_NATIVE_END;
}
// ********** End Class UUPMCore Function LoadAllSettings ******************************************

// ********** Begin Class UUPMCore Function ResetToDefaults ****************************************
struct Z_Construct_UFunction_UUPMCore_ResetToDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resets everything to engine defaults */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets everything to engine defaults" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMCore_ResetToDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMCore, nullptr, "ResetToDefaults", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_ResetToDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMCore_ResetToDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMCore_ResetToDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMCore_ResetToDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMCore::execResetToDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefaults();
	P_NATIVE_END;
}
// ********** End Class UUPMCore Function ResetToDefaults ******************************************

// ********** Begin Class UUPMCore Function SaveAllSettings ****************************************
struct Z_Construct_UFunction_UUPMCore_SaveAllSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UPM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Saves all settings to disk */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves all settings to disk" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUPMCore_SaveAllSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUPMCore, nullptr, "SaveAllSettings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUPMCore_SaveAllSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUPMCore_SaveAllSettings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UUPMCore_SaveAllSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUPMCore_SaveAllSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUPMCore::execSaveAllSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveAllSettings();
	P_NATIVE_END;
}
// ********** End Class UUPMCore Function SaveAllSettings ******************************************

// ********** Begin Class UUPMCore *****************************************************************
void UUPMCore::StaticRegisterNativesUUPMCore()
{
	UClass* Class = UUPMCore::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyAllSettings", &UUPMCore::execApplyAllSettings },
		{ "AutoDetectSettings", &UUPMCore::execAutoDetectSettings },
		{ "Get", &UUPMCore::execGet },
		{ "GetGraphicsManager", &UUPMCore::execGetGraphicsManager },
		{ "GetPerformanceMonitor", &UUPMCore::execGetPerformanceMonitor },
		{ "LoadAllSettings", &UUPMCore::execLoadAllSettings },
		{ "ResetToDefaults", &UUPMCore::execResetToDefaults },
		{ "SaveAllSettings", &UUPMCore::execSaveAllSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUPMCore;
UClass* UUPMCore::GetPrivateStaticClass()
{
	using TClass = UUPMCore;
	if (!Z_Registration_Info_UClass_UUPMCore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UPMCore"),
			Z_Registration_Info_UClass_UUPMCore.InnerSingleton,
			StaticRegisterNativesUUPMCore,
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
	return Z_Registration_Info_UClass_UUPMCore.InnerSingleton;
}
UClass* Z_Construct_UClass_UUPMCore_NoRegister()
{
	return UUPMCore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUPMCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UPMCore - Central access point for all UPM functionality\n *\n * This GameInstanceSubsystem provides global access to graphics settings,\n * performance monitoring, and serves as the coordination layer for all UPM systems.\n * It persists across level loads and is accessible globally via GetSubsystem.\n */" },
#endif
		{ "IncludePath", "UPMCore.h" },
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPMCore - Central access point for all UPM functionality\n\nThis GameInstanceSubsystem provides global access to graphics settings,\nperformance monitoring, and serves as the coordination layer for all UPM systems.\nIt persists across level loads and is accessible globally via GetSubsystem." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSettingsChanged_MetaData[] = {
		{ "Category", "UPM|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when any settings are changed */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when any settings are changed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSettingsApplied_MetaData[] = {
		{ "Category", "UPM|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when settings are applied */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when settings are applied" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphicsManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Graphics settings manager */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Graphics settings manager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceMonitor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Performance monitoring system */" },
#endif
		{ "ModuleRelativePath", "Public/UPMCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Performance monitoring system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSettingsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSettingsApplied;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphicsManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerformanceMonitor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUPMCore_ApplyAllSettings, "ApplyAllSettings" }, // 176251677
		{ &Z_Construct_UFunction_UUPMCore_AutoDetectSettings, "AutoDetectSettings" }, // 2663825948
		{ &Z_Construct_UFunction_UUPMCore_Get, "Get" }, // 914413534
		{ &Z_Construct_UFunction_UUPMCore_GetGraphicsManager, "GetGraphicsManager" }, // 3390901698
		{ &Z_Construct_UFunction_UUPMCore_GetPerformanceMonitor, "GetPerformanceMonitor" }, // 2678039432
		{ &Z_Construct_UFunction_UUPMCore_LoadAllSettings, "LoadAllSettings" }, // 2035513156
		{ &Z_Construct_UFunction_UUPMCore_ResetToDefaults, "ResetToDefaults" }, // 1939130247
		{ &Z_Construct_UFunction_UUPMCore_SaveAllSettings, "SaveAllSettings" }, // 3445342314
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUPMCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUPMCore_Statics::NewProp_OnSettingsChanged = { "OnSettingsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMCore, OnSettingsChanged), Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSettingsChanged_MetaData), NewProp_OnSettingsChanged_MetaData) }; // 3388101245
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUPMCore_Statics::NewProp_OnSettingsApplied = { "OnSettingsApplied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMCore, OnSettingsApplied), Z_Construct_UDelegateFunction_UPM_OnSettingsApplied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSettingsApplied_MetaData), NewProp_OnSettingsApplied_MetaData) }; // 4149173364
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPMCore_Statics::NewProp_GraphicsManager = { "GraphicsManager", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMCore, GraphicsManager), Z_Construct_UClass_UUPMGraphicsManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphicsManager_MetaData), NewProp_GraphicsManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUPMCore_Statics::NewProp_PerformanceMonitor = { "PerformanceMonitor", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUPMCore, PerformanceMonitor), Z_Construct_UClass_UUPMPerformanceMonitor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformanceMonitor_MetaData), NewProp_PerformanceMonitor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUPMCore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMCore_Statics::NewProp_OnSettingsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMCore_Statics::NewProp_OnSettingsApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMCore_Statics::NewProp_GraphicsManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUPMCore_Statics::NewProp_PerformanceMonitor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMCore_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUPMCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_UPM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUPMCore_Statics::ClassParams = {
	&UUPMCore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUPMCore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUPMCore_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUPMCore_Statics::Class_MetaDataParams), Z_Construct_UClass_UUPMCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUPMCore()
{
	if (!Z_Registration_Info_UClass_UUPMCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUPMCore.OuterSingleton, Z_Construct_UClass_UUPMCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUPMCore.OuterSingleton;
}
UUPMCore::UUPMCore() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUPMCore);
UUPMCore::~UUPMCore() {}
// ********** End Class UUPMCore *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h__Script_UPM_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUPMCore, UUPMCore::StaticClass, TEXT("UUPMCore"), &Z_Registration_Info_UClass_UUPMCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUPMCore), 1307341962U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h__Script_UPM_3049929962(TEXT("/Script/UPM"),
	Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h__Script_UPM_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h__Script_UPM_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
