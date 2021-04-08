// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASISCORE_StaticActor_generated_h
#error "StaticActor.generated.h already included, missing '#pragma once' in StaticActor.h"
#endif
#define BASISCORE_StaticActor_generated_h

#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_SPARSE_DATA
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_RPC_WRAPPERS
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStaticActor(); \
	friend struct Z_Construct_UClass_AStaticActor_Statics; \
public: \
	DECLARE_CLASS(AStaticActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasisCore"), NO_API) \
	DECLARE_SERIALIZER(AStaticActor)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAStaticActor(); \
	friend struct Z_Construct_UClass_AStaticActor_Statics; \
public: \
	DECLARE_CLASS(AStaticActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasisCore"), NO_API) \
	DECLARE_SERIALIZER(AStaticActor)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStaticActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStaticActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStaticActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStaticActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStaticActor(AStaticActor&&); \
	NO_API AStaticActor(const AStaticActor&); \
public:


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStaticActor(AStaticActor&&); \
	NO_API AStaticActor(const AStaticActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStaticActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStaticActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStaticActor)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AStaticActor, Mesh); } \
	FORCEINLINE static uint32 __PPO__ChunkMesh() { return STRUCT_OFFSET(AStaticActor, ChunkMesh); }


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_11_PROLOG
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_RPC_WRAPPERS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_INCLASS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_INCLASS_NO_PURE_DECLS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASISCORE_API UClass* StaticClass<class AStaticActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Destiny_Plugins_BasisCore_Source_BasisCore_Public_StaticActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
