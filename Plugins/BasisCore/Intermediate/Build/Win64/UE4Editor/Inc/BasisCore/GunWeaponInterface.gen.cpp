// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasisCore/Public/GunWeaponInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunWeaponInterface() {}
// Cross Module References
	BASISCORE_API UClass* Z_Construct_UClass_UGunWeaponInterface_NoRegister();
	BASISCORE_API UClass* Z_Construct_UClass_UGunWeaponInterface();
	BASISCORE_API UClass* Z_Construct_UClass_UWeaponInterface();
	UPackage* Z_Construct_UPackage__Script_BasisCore();
// End Cross Module References
	void UGunWeaponInterface::StaticRegisterNativesUGunWeaponInterface()
	{
	}
	UClass* Z_Construct_UClass_UGunWeaponInterface_NoRegister()
	{
		return UGunWeaponInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGunWeaponInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGunWeaponInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWeaponInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BasisCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGunWeaponInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GunWeaponInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGunWeaponInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGunWeaponInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGunWeaponInterface_Statics::ClassParams = {
		&UGunWeaponInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGunWeaponInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGunWeaponInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGunWeaponInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGunWeaponInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGunWeaponInterface, 3272465734);
	template<> BASISCORE_API UClass* StaticClass<UGunWeaponInterface>()
	{
		return UGunWeaponInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGunWeaponInterface(Z_Construct_UClass_UGunWeaponInterface, &UGunWeaponInterface::StaticClass, TEXT("/Script/BasisCore"), TEXT("UGunWeaponInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGunWeaponInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
