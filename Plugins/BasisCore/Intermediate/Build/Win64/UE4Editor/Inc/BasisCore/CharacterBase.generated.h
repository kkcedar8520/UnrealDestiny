// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASISCORE_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define BASISCORE_CharacterBase_generated_h

#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_SPARSE_DATA
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_RPC_WRAPPERS \
	virtual void AttackEffect_Implementation(); \
	virtual void AttackSound_Implementation(); \
	virtual void footStep_Implementation(); \
 \
	DECLARE_FUNCTION(execAttackEffect); \
	DECLARE_FUNCTION(execAttackSound); \
	DECLARE_FUNCTION(execfootStep);


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttackEffect); \
	DECLARE_FUNCTION(execAttackSound); \
	DECLARE_FUNCTION(execfootStep);


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_EVENT_PARMS
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_CALLBACK_WRAPPERS
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasisCore"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterBase*>(this); }


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasisCore"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterBase*>(this); }


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public:


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_PRIVATE_PROPERTY_OFFSET
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_15_PROLOG \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_EVENT_PARMS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_PRIVATE_PROPERTY_OFFSET \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_RPC_WRAPPERS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_CALLBACK_WRAPPERS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_INCLASS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_PRIVATE_PROPERTY_OFFSET \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_CALLBACK_WRAPPERS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_INCLASS_NO_PURE_DECLS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASISCORE_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
