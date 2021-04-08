// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASISCORE_GunWeaponInterface_generated_h
#error "GunWeaponInterface.generated.h already included, missing '#pragma once' in GunWeaponInterface.h"
#endif
#define BASISCORE_GunWeaponInterface_generated_h

#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_SPARSE_DATA
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_RPC_WRAPPERS
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BASISCORE_API UGunWeaponInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGunWeaponInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BASISCORE_API, UGunWeaponInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGunWeaponInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BASISCORE_API UGunWeaponInterface(UGunWeaponInterface&&); \
	BASISCORE_API UGunWeaponInterface(const UGunWeaponInterface&); \
public:


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BASISCORE_API UGunWeaponInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BASISCORE_API UGunWeaponInterface(UGunWeaponInterface&&); \
	BASISCORE_API UGunWeaponInterface(const UGunWeaponInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BASISCORE_API, UGunWeaponInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGunWeaponInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGunWeaponInterface)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGunWeaponInterface(); \
	friend struct Z_Construct_UClass_UGunWeaponInterface_Statics; \
public: \
	DECLARE_CLASS(UGunWeaponInterface, UWeaponInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BasisCore"), BASISCORE_API) \
	DECLARE_SERIALIZER(UGunWeaponInterface)


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGunWeaponInterface() {} \
public: \
	typedef UGunWeaponInterface UClassType; \
	typedef IGunWeaponInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IGunWeaponInterface() {} \
public: \
	typedef UGunWeaponInterface UClassType; \
	typedef IGunWeaponInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_10_PROLOG
#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_RPC_WRAPPERS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_SPARSE_DATA \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASISCORE_API UClass* StaticClass<class UGunWeaponInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Destiny_Plugins_BasisCore_Source_BasisCore_Public_GunWeaponInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
