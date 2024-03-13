// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEnemigaAcorazadodeBatalla.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaAcorazadodeBatalla() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEnemigaAcorazado();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveEnemigaAcorazadodeBatalla::StaticRegisterNativesANaveEnemigaAcorazadodeBatalla()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla_NoRegister()
	{
		return ANaveEnemigaAcorazadodeBatalla::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemigaAcorazado,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaAcorazadodeBatalla.h" },
		{ "ModuleRelativePath", "NaveEnemigaAcorazadodeBatalla.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaAcorazadodeBatalla>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla_Statics::ClassParams = {
		&ANaveEnemigaAcorazadodeBatalla::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaAcorazadodeBatalla, 1750356659);
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEnemigaAcorazadodeBatalla>()
	{
		return ANaveEnemigaAcorazadodeBatalla::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaAcorazadodeBatalla(Z_Construct_UClass_ANaveEnemigaAcorazadodeBatalla, &ANaveEnemigaAcorazadodeBatalla::StaticClass, TEXT("/Script/Galaga_USFX_L01"), TEXT("ANaveEnemigaAcorazadodeBatalla"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaAcorazadodeBatalla);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
