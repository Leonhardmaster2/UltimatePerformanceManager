// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UPMPerformanceMonitor.h"

#ifdef UPM_UPMPerformanceMonitor_generated_h
#error "UPMPerformanceMonitor.generated.h already included, missing '#pragma once' in UPMPerformanceMonitor.h"
#endif
#define UPM_UPMPerformanceMonitor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EUPMMonitoringMode : uint8;
struct FUPMBenchmarkResults;
struct FUPMPerformanceStats;

// ********** Begin Class UUPMPerformanceMonitor ***************************************************
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFPSHistory); \
	DECLARE_FUNCTION(execSetSampleHistorySize); \
	DECLARE_FUNCTION(execGetBenchmarkResults); \
	DECLARE_FUNCTION(execIsBenchmarkRunning); \
	DECLARE_FUNCTION(execStopBenchmark); \
	DECLARE_FUNCTION(execStartBenchmark); \
	DECLARE_FUNCTION(execGetCurrentStats); \
	DECLARE_FUNCTION(execGetAvailableMemoryMB); \
	DECLARE_FUNCTION(execGetUsedMemoryMB); \
	DECLARE_FUNCTION(execGetGPUTimeMs); \
	DECLARE_FUNCTION(execGetRenderThreadMs); \
	DECLARE_FUNCTION(execGetGameThreadMs); \
	DECLARE_FUNCTION(execGetFrameTimeMs); \
	DECLARE_FUNCTION(execGetMaxFPS); \
	DECLARE_FUNCTION(execGetMinFPS); \
	DECLARE_FUNCTION(execGetAverageFPS); \
	DECLARE_FUNCTION(execGetCurrentFPS); \
	DECLARE_FUNCTION(execGetMonitoringMode); \
	DECLARE_FUNCTION(execSetMonitoringMode); \
	DECLARE_FUNCTION(execIsMonitoringEnabled); \
	DECLARE_FUNCTION(execSetMonitoringEnabled);


UPM_API UClass* Z_Construct_UClass_UUPMPerformanceMonitor_NoRegister();

#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUPMPerformanceMonitor(); \
	friend struct Z_Construct_UClass_UUPMPerformanceMonitor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UPM_API UClass* Z_Construct_UClass_UUPMPerformanceMonitor_NoRegister(); \
public: \
	DECLARE_CLASS2(UUPMPerformanceMonitor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UPM"), Z_Construct_UClass_UUPMPerformanceMonitor_NoRegister) \
	DECLARE_SERIALIZER(UUPMPerformanceMonitor)


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUPMPerformanceMonitor(UUPMPerformanceMonitor&&) = delete; \
	UUPMPerformanceMonitor(const UUPMPerformanceMonitor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUPMPerformanceMonitor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUPMPerformanceMonitor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUPMPerformanceMonitor) \
	NO_API virtual ~UUPMPerformanceMonitor();


#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h_17_PROLOG
#define FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUPMPerformanceMonitor;

// ********** End Class UUPMPerformanceMonitor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_leonh_Documents_Unreal_Projects_StatSysFinalEnv_Plugins_UPM_Source_UPM_Public_UPMPerformanceMonitor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
