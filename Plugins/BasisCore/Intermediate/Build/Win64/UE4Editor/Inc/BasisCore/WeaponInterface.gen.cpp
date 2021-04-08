// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasisCore/Public/WeaponInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponInterface() {}
// Cross Module References
	BASISCORE_API UClass* Z_Construct_UClass_UWeaponInterface_NoRegister();
	BASISCORE_API UClass* Z_Construct_UClass_UWeaponInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BasisCore();
// End Cross Module References
	void UWeaponInterface::StaticRegisterNativesUWeaponInterface()
	{
	}
	UClass* Z_Construct_UClass_UWeaponInterface_NoRegister()
	{
		return UWeaponInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BasisCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWeaponInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponInterface_Statics::ClassParams = {
		&UWeaponInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWeaponInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponInterface, 170623293);
	template<> BASISCORE_API UClass* StaticClass<UWeaponInterface>()
	{
		return UWeaponInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponInterface(Z_Construct_UClass_UWeaponInterface, &UWeaponInterface::StaticClass, TEXT("/Script/BasisCore"), TEXT("UWeaponInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
