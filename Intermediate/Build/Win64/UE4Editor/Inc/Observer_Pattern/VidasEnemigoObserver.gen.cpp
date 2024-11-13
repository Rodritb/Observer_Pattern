// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer_Pattern/VidasEnemigoObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVidasEnemigoObserver() {}
// Cross Module References
	OBSERVER_PATTERN_API UClass* Z_Construct_UClass_AVidasEnemigoObserver_NoRegister();
	OBSERVER_PATTERN_API UClass* Z_Construct_UClass_AVidasEnemigoObserver();
	OBSERVER_PATTERN_API UClass* Z_Construct_UClass_APublicador();
	UPackage* Z_Construct_UPackage__Script_Observer_Pattern();
// End Cross Module References
	void AVidasEnemigoObserver::StaticRegisterNativesAVidasEnemigoObserver()
	{
	}
	UClass* Z_Construct_UClass_AVidasEnemigoObserver_NoRegister()
	{
		return AVidasEnemigoObserver::StaticClass();
	}
	struct Z_Construct_UClass_AVidasEnemigoObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVidasEnemigoObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APublicador,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer_Pattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVidasEnemigoObserver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VidasEnemigoObserver.h" },
		{ "ModuleRelativePath", "VidasEnemigoObserver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVidasEnemigoObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVidasEnemigoObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVidasEnemigoObserver_Statics::ClassParams = {
		&AVidasEnemigoObserver::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVidasEnemigoObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVidasEnemigoObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVidasEnemigoObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVidasEnemigoObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVidasEnemigoObserver, 3735259001);
	template<> OBSERVER_PATTERN_API UClass* StaticClass<AVidasEnemigoObserver>()
	{
		return AVidasEnemigoObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVidasEnemigoObserver(Z_Construct_UClass_AVidasEnemigoObserver, &AVidasEnemigoObserver::StaticClass, TEXT("/Script/Observer_Pattern"), TEXT("AVidasEnemigoObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVidasEnemigoObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
