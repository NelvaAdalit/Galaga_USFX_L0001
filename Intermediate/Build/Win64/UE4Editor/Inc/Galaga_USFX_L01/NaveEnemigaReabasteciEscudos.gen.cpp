// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaReabasteciEscudos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaReabasteciEscudos() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaReabasteciEscudos_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaReabasteciEscudos();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaReabastecimiento();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveEnemigaReabasteciEscudos::StaticRegisterNativesANaveEnemigaReabasteciEscudos()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaReabasteciEscudos_NoRegister()
	{
		return ANaveEnemigaReabasteciEscudos::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaReabasteciEscudos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaReabasteciEscudos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaReabastecimiento,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaReabasteciEscudos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaReabasteciEscudos.h" },
		{ "ModuleRelativePath", "NaveEnemigaReabasteciEscudos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaReabasteciEscudos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaReabasteciEscudos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaReabasteciEscudos_Statics::ClassParams = {
		&ANaveEnemigaReabasteciEscudos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaReabasteciEscudos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaReabasteciEscudos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaReabasteciEscudos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaReabasteciEscudos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaReabasteciEscudos, 94620727);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaReabasteciEscudos>()
	{
		return ANaveEnemigaReabasteciEscudos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaReabasteciEscudos(Z_Construct_UClass_ANaveEnemigaReabasteciEscudos, &ANaveEnemigaReabasteciEscudos::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveEnemigaReabasteciEscudos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaReabasteciEscudos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
