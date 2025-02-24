// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealDemo_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealDemo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealDemo()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealDemo.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealDemo",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x21C59353,
				0x7343C394,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealDemo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealDemo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealDemo(Z_Construct_UPackage__Script_UnrealDemo, TEXT("/Script/UnrealDemo"), Z_Registration_Info_UPackage__Script_UnrealDemo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x21C59353, 0x7343C394));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
