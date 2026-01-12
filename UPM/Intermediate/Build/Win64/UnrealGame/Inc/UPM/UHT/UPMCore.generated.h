// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UPMCore.h"

#ifdef UPM_UPMCore_generated_h
#error "UPMCore.generated.h already included, missing '#pragma once' in UPMCore.h"
#endif
#define UPM_UPMCore_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UUPMCore;
class UUPMGraphicsManager;
class UUPMPerformanceMonitor;

// ********** Begin Class UUPMCore *****************************************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadAllSettings); \
	DECLARE_FUNCTION(execSaveAllSettings); \
	DECLARE_FUNCTION(execAutoDetectSettings); \
	DECLARE_FUNCTION(execResetToDefaults); \
	DECLARE_FUNCTION(execApplyAllSettings); \
	DECLARE_FUNCTION(execGetPerformanceMonitor); \
	DECLARE_FUNCTION(execGetGraphicsManager); \
	DECLARE_FUNCTION(execGet);


UPM_API UClass* Z_Construct_UClass_UUPMCore_NoRegister();

#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPMCore(); \
	friend struct Z_Construct_UClass_UUPMCore_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UPM_API UClass* Z_Construct_UClass_UUPMCore_NoRegister(); \
public: \
	DECLARE_CLASS2(UUPMCore, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UPM"), Z_Construct_UClass_UUPMCore_NoRegister) \
	DECLARE_SERIALIZER(UUPMCore)


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUPMCore(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUPMCore(UUPMCore&&) = delete; \
	UUPMCore(const UUPMCore&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPMCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPMCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUPMCore) \
	NO_API virtual ~UUPMCore();


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h_20_PROLOG
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUPMCore;

// ********** End Class UUPMCore *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMCore_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
