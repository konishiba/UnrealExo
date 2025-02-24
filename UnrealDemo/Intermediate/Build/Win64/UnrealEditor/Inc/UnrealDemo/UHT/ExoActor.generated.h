// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExoActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALDEMO_ExoActor_generated_h
#error "ExoActor.generated.h already included, missing '#pragma once' in ExoActor.h"
#endif
#define UNREALDEMO_ExoActor_generated_h

#define FID_UnrealDemo_Source_UnrealDemo_ExoActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExoActor(); \
	friend struct Z_Construct_UClass_AExoActor_Statics; \
public: \
	DECLARE_CLASS(AExoActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealDemo"), NO_API) \
	DECLARE_SERIALIZER(AExoActor)


#define FID_UnrealDemo_Source_UnrealDemo_ExoActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AExoActor(AExoActor&&); \
	AExoActor(const AExoActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExoActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExoActor) \
	NO_API virtual ~AExoActor();


#define FID_UnrealDemo_Source_UnrealDemo_ExoActor_h_9_PROLOG
#define FID_UnrealDemo_Source_UnrealDemo_ExoActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealDemo_Source_UnrealDemo_ExoActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealDemo_Source_UnrealDemo_ExoActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALDEMO_API UClass* StaticClass<class AExoActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealDemo_Source_UnrealDemo_ExoActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
