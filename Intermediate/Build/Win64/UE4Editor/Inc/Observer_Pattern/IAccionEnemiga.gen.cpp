// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer_Pattern/IAccionEnemiga.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAccionEnemiga() {}
// Cross Module References
	OBSERVER_PATTERN_API UClass* Z_Construct_UClass_UIAccionEnemiga_NoRegister();
	OBSERVER_PATTERN_API UClass* Z_Construct_UClass_UIAccionEnemiga();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Observer_Pattern();
// End Cross Module References
	void UIAccionEnemiga::StaticRegisterNativesUIAccionEnemiga()
	{
	}
	UClass* Z_Construct_UClass_UIAccionEnemiga_NoRegister()
	{
		return UIAccionEnemiga::StaticClass();
	}
	struct Z_Construct_UClass_UIAccionEnemiga_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAccionEnemiga_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer_Pattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAccionEnemiga_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IAccionEnemiga.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAccionEnemiga_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIAccionEnemiga>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIAccionEnemiga_Statics::ClassParams = {
		&UIAccionEnemiga::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIAccionEnemiga_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAccionEnemiga_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAccionEnemiga()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIAccionEnemiga_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIAccionEnemiga, 3376835307);
	template<> OBSERVER_PATTERN_API UClass* StaticClass<UIAccionEnemiga>()
	{
		return UIAccionEnemiga::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIAccionEnemiga(Z_Construct_UClass_UIAccionEnemiga, &UIAccionEnemiga::StaticClass, TEXT("/Script/Observer_Pattern"), TEXT("UIAccionEnemiga"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAccionEnemiga);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
