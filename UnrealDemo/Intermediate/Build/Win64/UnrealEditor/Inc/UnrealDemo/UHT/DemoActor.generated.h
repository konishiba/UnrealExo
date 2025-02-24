// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DemoActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALDEMO_DemoActor_generated_h
#error "DemoActor.generated.h already included, missing '#pragma once' in DemoActor.h"
#endif
#define UNREALDEMO_DemoActor_generated_h

#define FID_UnrealDemo_Source_UnrealDemo_DemoActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemoActor(); \
	friend struct Z_Construct_UClass_ADemoActor_Statics; \
public: \
	DECLARE_CLASS(ADemoActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealDemo"), NO_API) \
	DECLARE_SERIALIZER(ADemoActor)


#define FID_UnrealDemo_Source_UnrealDemo_DemoActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADemoActor(ADemoActor&&); \
	ADemoActor(const ADemoActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemoActor) \
	NO_API virtual ~ADemoActor();


#define FID_UnrealDemo_Source_UnrealDemo_DemoActor_h_9_PROLOG
#define FID_UnrealDemo_Source_UnrealDemo_DemoActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealDemo_Source_UnrealDemo_DemoActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealDemo_Source_UnrealDemo_DemoActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALDEMO_API UClass* StaticClass<class ADemoActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealDemo_Source_UnrealDemo_DemoActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
