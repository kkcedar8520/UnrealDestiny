// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasisCore/Public/ObjectManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectManager() {}
// Cross Module References
	BASISCORE_API UClass* Z_Construct_UClass_AObjectManager_NoRegister();
	BASISCORE_API UClass* Z_Construct_UClass_AObjectManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BasisCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BASISCORE_API UClass* Z_Construct_UClass_AStaticActor_NoRegister();
// End Cross Module References
	void AObjectManager::StaticRegisterNativesAObjectManager()
	{
	}
	UClass* Z_Construct_UClass_AObjectManager_NoRegister()
	{
		return AObjectManager::StaticClass();
	}
	struct Z_Construct_UClass_AObjectManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectCollector_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectCollector;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectCollector_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BasisCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectManager.h" },
		{ "ModuleRelativePath", "Public/ObjectManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectManager_Statics::NewProp_ObjectCollector_MetaData[] = {
		{ "Category", "Collector" },
		{ "ModuleRelativePath", "Public/ObjectManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObjectManager_Statics::NewProp_ObjectCollector = { "ObjectCollector", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectManager, ObjectCollector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AObjectManager_Statics::NewProp_ObjectCollector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectManager_Statics::NewProp_ObjectCollector_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AObjectManager_Statics::NewProp_ObjectCollector_Inner = { "ObjectCollector", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStaticActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjectManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectManager_Statics::NewProp_ObjectCollector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectManager_Statics::NewProp_ObjectCollector_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjectManager_Statics::ClassParams = {
		&AObjectManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObjectManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjectManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjectManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjectManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjectManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjectManager, 72047626);
	template<> BASISCORE_API UClass* StaticClass<AObjectManager>()
	{
		return AObjectManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjectManager(Z_Construct_UClass_AObjectManager, &AObjectManager::StaticClass, TEXT("/Script/BasisCore"), TEXT("AObjectManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
