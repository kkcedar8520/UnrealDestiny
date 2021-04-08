// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef BASISCORE_TPSCharacterBase_generated_h
#error "TPSCharacterBase.generated.h already included, missing '#pragma once' in TPSCharacterBase.h"
#endif
#define BASISCORE_TPSCharacterBase_generated_h

#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_SPARSE_DATA
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded);


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded);


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSCharacter(); \
	friend struct Z_Construct_UClass_ATPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPSCharacter, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasisCore"), NO_API) \
	DECLARE_SERIALIZER(ATPSCharacter)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATPSCharacter(); \
	friend struct Z_Construct_UClass_ATPSCharacter_Statics; \
public: \
	DECLARE_CLASS(ATPSCharacter, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasisCore"), NO_API) \
	DECLARE_SERIALIZER(ATPSCharacter)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCharacter(ATPSCharacter&&); \
	NO_API ATPSCharacter(const ATPSCharacter&); \
public:


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATPSCharacter(ATPSCharacter&&); \
	NO_API ATPSCharacter(const ATPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSCharacter)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_PRIVATE_PROPERTY_OFFSET
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_10_PROLOG
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_RPC_WRAPPERS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_INCLASS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_INCLASS_NO_PURE_DECLS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASISCORE_API UClass* StaticClass<class ATPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Destiny_Plugins_BasisCore_Source_BasisCore_Public_TPSCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
