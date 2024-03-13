// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaReabasteciCombustible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaReabasteciCombustible() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaReabasteciCombustible_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaReabasteciCombustible();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaReabastecimiento();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveEnemigaReabasteciCombustible::StaticRegisterNativesANaveEnemigaReabasteciCombustible()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaReabasteciCombustible_NoRegister()
	{
		return ANaveEnemigaReabasteciCombustible::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaReabasteciCombustible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaReabasteciCombustible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaReabastecimiento,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaReabasteciCombustible_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaReabasteciCombustible.h" },
		{ "ModuleRelativePath", "NaveEnemigaReabasteciCombustible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaReabasteciCombustible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaReabasteciCombustible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaReabasteciCombustible_Statics::ClassParams = {
		&ANaveEnemigaReabasteciCombustible::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaReabasteciCombustible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaReabasteciCombustible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaReabasteciCombustible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaReabasteciCombustible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaReabasteciCombustible, 1300311283);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaReabasteciCombustible>()
	{
		return ANaveEnemigaReabasteciCombustible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaReabasteciCombustible(Z_Construct_UClass_ANaveEnemigaReabasteciCombustible, &ANaveEnemigaReabasteciCombustible::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveEnemigaReabasteciCombustible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaReabasteciCombustible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
