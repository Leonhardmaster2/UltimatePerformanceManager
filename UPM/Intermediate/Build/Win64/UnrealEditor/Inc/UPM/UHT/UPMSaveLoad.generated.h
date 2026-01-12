// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UPMSaveLoad.h"

#ifdef UPM_UPMSaveLoad_generated_h
#error "UPMSaveLoad.generated.h already included, missing '#pragma once' in UPMSaveLoad.h"
#endif
#define UPM_UPMSaveLoad_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin Class UUPMSaveLoad *************************************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSaveSlotName); \
	DECLARE_FUNCTION(execDeleteSettingsSave); \
	DECLARE_FUNCTION(execDoesSettingsSaveExist); \
	DECLARE_FUNCTION(execLoadAllSettings); \
	DECLARE_FUNCTION(execSaveAllSettings);


UPM_API UClass* Z_Construct_UClass_UUPMSaveLoad_NoRegister();

#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPMSaveLoad(); \
	friend struct Z_Construct_UClass_UUPMSaveLoad_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UPM_API UClass* Z_Construct_UClass_UUPMSaveLoad_NoRegister(); \
public: \
	DECLARE_CLASS2(UUPMSaveLoad, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UPM"), Z_Construct_UClass_UUPMSaveLoad_NoRegister) \
	DECLARE_SERIALIZER(UUPMSaveLoad)


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPMSaveLoad(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUPMSaveLoad(UUPMSaveLoad&&) = delete; \
	UUPMSaveLoad(const UUPMSaveLoad&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPMSaveLoad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPMSaveLoad); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUPMSaveLoad) \
	NO_API virtual ~UUPMSaveLoad();


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h_20_PROLOG
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUPMSaveLoad;

// ********** End Class UUPMSaveLoad ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMSaveLoad_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
