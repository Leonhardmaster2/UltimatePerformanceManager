// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPM_init() {}
	UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature();
	UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature();
	UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnSettingsApplied__DelegateSignature();
	UPM_API UFunction* Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UPM;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UPM()
	{
		if (!Z_Registration_Info_UPackage__Script_UPM.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UPM_OnBenchmarkComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPM_OnFPSUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPM_OnSettingsApplied__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPM_OnSettingsChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UPM",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6CCEB8CC,
				0x157D9094,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UPM.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UPM.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UPM(Z_Construct_UPackage__Script_UPM, TEXT("/Script/UPM"), Z_Registration_Info_UPackage__Script_UPM, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6CCEB8CC, 0x157D9094));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
