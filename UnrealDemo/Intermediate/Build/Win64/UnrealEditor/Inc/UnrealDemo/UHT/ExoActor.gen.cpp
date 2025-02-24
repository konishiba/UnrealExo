// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealDemo/ExoActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExoActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UNREALDEMO_API UClass* Z_Construct_UClass_AExoActor();
UNREALDEMO_API UClass* Z_Construct_UClass_AExoActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealDemo();
// End Cross Module References

// Begin Class AExoActor
void AExoActor::StaticRegisterNativesAExoActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExoActor);
UClass* Z_Construct_UClass_AExoActor_NoRegister()
{
	return AExoActor::StaticClass();
}
struct Z_Construct_UClass_AExoActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExoActor.h" },
		{ "ModuleRelativePath", "ExoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
		{ "Category", "DemoActor|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "DemoActor|Values" },
		{ "ModuleRelativePath", "ExoActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExoActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExoActor_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExoActor, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mesh_MetaData), NewProp_mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExoActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExoActor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExoActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExoActor_Statics::NewProp_mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExoActor_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExoActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AExoActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExoActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExoActor_Statics::ClassParams = {
	&AExoActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AExoActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AExoActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExoActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AExoActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AExoActor()
{
	if (!Z_Registration_Info_UClass_AExoActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExoActor.OuterSingleton, Z_Construct_UClass_AExoActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExoActor.OuterSingleton;
}
template<> UNREALDEMO_API UClass* StaticClass<AExoActor>()
{
	return AExoActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AExoActor);
AExoActor::~AExoActor() {}
// End Class AExoActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealDemo_Source_UnrealDemo_ExoActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExoActor, AExoActor::StaticClass, TEXT("AExoActor"), &Z_Registration_Info_UClass_AExoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExoActor), 97247502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealDemo_Source_UnrealDemo_ExoActor_h_3892459627(TEXT("/Script/UnrealDemo"),
	Z_CompiledInDeferFile_FID_UnrealDemo_Source_UnrealDemo_ExoActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealDemo_Source_UnrealDemo_ExoActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
