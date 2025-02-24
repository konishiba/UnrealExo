// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealDemo/DemoActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UNREALDEMO_API UClass* Z_Construct_UClass_ADemoActor();
UNREALDEMO_API UClass* Z_Construct_UClass_ADemoActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealDemo();
// End Cross Module References

// Begin Class ADemoActor
void ADemoActor::StaticRegisterNativesADemoActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemoActor);
UClass* Z_Construct_UClass_ADemoActor_NoRegister()
{
	return ADemoActor::StaticClass();
}
struct Z_Construct_UClass_ADemoActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DemoActor.h" },
		{ "ModuleRelativePath", "DemoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
		{ "Category", "DemoActor|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DemoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[] = {
		{ "Category", "DemoActor|Values" },
		{ "ClampMax", "20" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "DemoActor.h" },
		{ "UIMax", "20" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isAlived_MetaData[] = {
		{ "Category", "DemoActor|Values" },
		{ "ModuleRelativePath", "DemoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_toto_MetaData[] = {
		{ "Category", "DemoActor|Values" },
		{ "ModuleRelativePath", "DemoActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "DemoActor|Values" },
		{ "ModuleRelativePath", "DemoActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_health;
	static void NewProp_isAlived_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isAlived;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_toto;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemoActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADemoActor_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoActor, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mesh_MetaData), NewProp_mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADemoActor_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoActor, health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_health_MetaData), NewProp_health_MetaData) };
void Z_Construct_UClass_ADemoActor_Statics::NewProp_isAlived_SetBit(void* Obj)
{
	((ADemoActor*)Obj)->isAlived = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADemoActor_Statics::NewProp_isAlived = { "isAlived", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADemoActor), &Z_Construct_UClass_ADemoActor_Statics::NewProp_isAlived_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isAlived_MetaData), NewProp_isAlived_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADemoActor_Statics::NewProp_toto = { "toto", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoActor, toto), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_toto_MetaData), NewProp_toto_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADemoActor_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADemoActor, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADemoActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoActor_Statics::NewProp_mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoActor_Statics::NewProp_health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoActor_Statics::NewProp_isAlived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoActor_Statics::NewProp_toto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADemoActor_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADemoActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealDemo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemoActor_Statics::ClassParams = {
	&ADemoActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADemoActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADemoActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADemoActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADemoActor()
{
	if (!Z_Registration_Info_UClass_ADemoActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemoActor.OuterSingleton, Z_Construct_UClass_ADemoActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADemoActor.OuterSingleton;
}
template<> UNREALDEMO_API UClass* StaticClass<ADemoActor>()
{
	return ADemoActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADemoActor);
ADemoActor::~ADemoActor() {}
// End Class ADemoActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealDemo_Source_UnrealDemo_DemoActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADemoActor, ADemoActor::StaticClass, TEXT("ADemoActor"), &Z_Registration_Info_UClass_ADemoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemoActor), 571288348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealDemo_Source_UnrealDemo_DemoActor_h_2148376555(TEXT("/Script/UnrealDemo"),
	Z_CompiledInDeferFile_FID_UnrealDemo_Source_UnrealDemo_DemoActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealDemo_Source_UnrealDemo_DemoActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
