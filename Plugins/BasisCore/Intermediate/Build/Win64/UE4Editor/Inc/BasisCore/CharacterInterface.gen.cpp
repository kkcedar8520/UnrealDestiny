// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasisCore/Public/CharacterInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterInterface() {}
// Cross Module References
	BASISCORE_API UClass* Z_Construct_UClass_UCharacterInterface_NoRegister();
	BASISCORE_API UClass* Z_Construct_UClass_UCharacterInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BasisCore();
// End Cross Module References
	DEFINE_FUNCTION(ICharacterInterface::execAttackEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackEffect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterInterface::execAttackSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackSound_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICharacterInterface::execfootStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->footStep_Implementation();
		P_NATIVE_END;
	}
	void ICharacterInterface::AttackEffect()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AttackEffect instead.");
	}
	void ICharacterInterface::AttackSound()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AttackSound instead.");
	}
	void ICharacterInterface::footStep()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_footStep instead.");
	}
	void UCharacterInterface::StaticRegisterNativesUCharacterInterface()
	{
		UClass* Class = UCharacterInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackEffect", &ICharacterInterface::execAttackEffect },
			{ "AttackSound", &ICharacterInterface::execAttackSound },
			{ "footStep", &ICharacterInterface::execfootStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterInterface_AttackEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInterface_AttackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttackEffect" },
		{ "ModuleRelativePath", "Public/CharacterInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInterface_AttackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInterface, nullptr, "AttackEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInterface_AttackEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInterface_AttackEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInterface_AttackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInterface_AttackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInterface_AttackSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInterface_AttackSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttackSound" },
		{ "ModuleRelativePath", "Public/CharacterInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInterface_AttackSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInterface, nullptr, "AttackSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInterface_AttackSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInterface_AttackSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInterface_AttackSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInterface_AttackSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterInterface_footStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterInterface_footStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "footStep" },
		{ "ModuleRelativePath", "Public/CharacterInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterInterface_footStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterInterface, nullptr, "footStep", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterInterface_footStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterInterface_footStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterInterface_footStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterInterface_footStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterInterface_NoRegister()
	{
		return UCharacterInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BasisCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterInterface_AttackEffect, "AttackEffect" }, // 1179169546
		{ &Z_Construct_UFunction_UCharacterInterface_AttackSound, "AttackSound" }, // 778769806
		{ &Z_Construct_UFunction_UCharacterInterface_footStep, "footStep" }, // 3064218000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICharacterInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterInterface_Statics::ClassParams = {
		&UCharacterInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterInterface, 350323771);
	template<> BASISCORE_API UClass* StaticClass<UCharacterInterface>()
	{
		return UCharacterInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterInterface(Z_Construct_UClass_UCharacterInterface, &UCharacterInterface::StaticClass, TEXT("/Script/BasisCore"), TEXT("UCharacterInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterInterface);
	static FName NAME_UCharacterInterface_AttackEffect = FName(TEXT("AttackEffect"));
	void ICharacterInterface::Execute_AttackEffect(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCharacterInterface_AttackEffect);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICharacterInterface*)(O->GetNativeInterfaceAddress(UCharacterInterface::StaticClass())))
		{
			I->AttackEffect_Implementation();
		}
	}
	static FName NAME_UCharacterInterface_AttackSound = FName(TEXT("AttackSound"));
	void ICharacterInterface::Execute_AttackSound(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCharacterInterface_AttackSound);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICharacterInterface*)(O->GetNativeInterfaceAddress(UCharacterInterface::StaticClass())))
		{
			I->AttackSound_Implementation();
		}
	}
	static FName NAME_UCharacterInterface_footStep = FName(TEXT("footStep"));
	void ICharacterInterface::Execute_footStep(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCharacterInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCharacterInterface_footStep);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICharacterInterface*)(O->GetNativeInterfaceAddress(UCharacterInterface::StaticClass())))
		{
			I->footStep_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
