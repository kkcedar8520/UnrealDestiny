// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASISCORE_CharacterAnimInstance_generated_h
#error "CharacterAnimInstance.generated.h already included, missing '#pragma once' in CharacterAnimInstance.h"
#endif
#define BASISCORE_CharacterAnimInstance_generated_h

#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_SPARSE_DATA
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_RPC_WRAPPERS
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BasisCore"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAnimInstance)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BasisCore"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAnimInstance)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAnimInstance(UCharacterAnimInstance&&); \
	NO_API UCharacterAnimInstance(const UCharacterAnimInstance&); \
public:


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAnimInstance(UCharacterAnimInstance&&); \
	NO_API UCharacterAnimInstance(const UCharacterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterAnimInstance)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UCharacterAnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__Direction() { return STRUCT_OFFSET(UCharacterAnimInstance, Direction); } \
	FORCEINLINE static uint32 __PPO__Yaw() { return STRUCT_OFFSET(UCharacterAnimInstance, Yaw); } \
	FORCEINLINE static uint32 __PPO__Pitch() { return STRUCT_OFFSET(UCharacterAnimInstance, Pitch); } \
	FORCEINLINE static uint32 __PPO__Roll() { return STRUCT_OFFSET(UCharacterAnimInstance, Roll); } \
	FORCEINLINE static uint32 __PPO__IsInAir() { return STRUCT_OFFSET(UCharacterAnimInstance, IsInAir); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(UCharacterAnimInstance, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__Character() { return STRUCT_OFFSET(UCharacterAnimInstance, Character); } \
	FORCEINLINE static uint32 __PPO__AttackMontage() { return STRUCT_OFFSET(UCharacterAnimInstance, AttackMontage); }


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_13_PROLOG
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_RPC_WRAPPERS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_INCLASS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASISCORE_API UClass* StaticClass<class UCharacterAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
