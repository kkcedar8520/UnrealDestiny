// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASISCORE_CharacterInterface_generated_h
#error "CharacterInterface.generated.h already included, missing '#pragma once' in CharacterInterface.h"
#endif
#define BASISCORE_CharacterInterface_generated_h

#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_SPARSE_DATA
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_RPC_WRAPPERS \
	virtual void AttackEffect_Implementation() {}; \
	virtual void AttackSound_Implementation() {}; \
	virtual void footStep_Implementation() {}; \
 \
	DECLARE_FUNCTION(execAttackEffect); \
	DECLARE_FUNCTION(execAttackSound); \
	DECLARE_FUNCTION(execfootStep);


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AttackEffect_Implementation() {}; \
	virtual void AttackSound_Implementation() {}; \
	virtual void footStep_Implementation() {}; \
 \
	DECLARE_FUNCTION(execAttackEffect); \
	DECLARE_FUNCTION(execAttackSound); \
	DECLARE_FUNCTION(execfootStep);


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_EVENT_PARMS
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_CALLBACK_WRAPPERS
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BASISCORE_API UCharacterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BASISCORE_API, UCharacterInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BASISCORE_API UCharacterInterface(UCharacterInterface&&); \
	BASISCORE_API UCharacterInterface(const UCharacterInterface&); \
public:


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BASISCORE_API UCharacterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BASISCORE_API UCharacterInterface(UCharacterInterface&&); \
	BASISCORE_API UCharacterInterface(const UCharacterInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BASISCORE_API, UCharacterInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterInterface)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCharacterInterface(); \
	friend struct Z_Construct_UClass_UCharacterInterface_Statics; \
public: \
	DECLARE_CLASS(UCharacterInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BasisCore"), BASISCORE_API) \
	DECLARE_SERIALIZER(UCharacterInterface)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_GENERATED_UINTERFACE_BODY() \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_GENERATED_UINTERFACE_BODY() \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICharacterInterface() {} \
public: \
	typedef UCharacterInterface UClassType; \
	typedef ICharacterInterface ThisClass; \
	static void Execute_AttackEffect(UObject* O); \
	static void Execute_AttackSound(UObject* O); \
	static void Execute_footStep(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~ICharacterInterface() {} \
public: \
	typedef UCharacterInterface UClassType; \
	typedef ICharacterInterface ThisClass; \
	static void Execute_AttackEffect(UObject* O); \
	static void Execute_AttackSound(UObject* O); \
	static void Execute_footStep(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_9_PROLOG \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_EVENT_PARMS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_RPC_WRAPPERS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_CALLBACK_WRAPPERS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_CALLBACK_WRAPPERS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASISCORE_API UClass* StaticClass<class UCharacterInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Destiny_Plugins_BasisCore_Source_BasisCore_Public_CharacterInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
