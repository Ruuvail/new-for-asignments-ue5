// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject_init() {}
	MYPROJECT_API UFunction* Z_Construct_UDelegateFunction_MyProject_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyProject()
	{
		if (!Z_Registration_Info_UPackage__Script_MyProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MyProject_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFF0391B1,
				0xCDE07C78,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyProject(Z_Construct_UPackage__Script_MyProject, TEXT("/Script/MyProject"), Z_Registration_Info_UPackage__Script_MyProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFF0391B1, 0xCDE07C78));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
