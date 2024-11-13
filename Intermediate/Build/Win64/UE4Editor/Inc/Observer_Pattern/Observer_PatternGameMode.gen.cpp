// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observer_Pattern/Observer_PatternGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObserver_PatternGameMode() {}
// Cross Module References
	OBSERVER_PATTERN_API UClass* Z_Construct_UClass_AObserver_PatternGameMode_NoRegister();
	OBSERVER_PATTERN_API UClass* Z_Construct_UClass_AObserver_PatternGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Observer_Pattern();
// End Cross Module References
	void AObserver_PatternGameMode::StaticRegisterNativesAObserver_PatternGameMode()
	{
	}
	UClass* Z_Construct_UClass_AObserver_PatternGameMode_NoRegister()
	{
		return AObserver_PatternGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AObserver_PatternGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObserver_PatternGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Observer_Pattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserver_PatternGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Observer_PatternGameMode.h" },
		{ "ModuleRelativePath", "Observer_PatternGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObserver_PatternGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObserver_PatternGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObserver_PatternGameMode_Statics::ClassParams = {
		&AObserver_PatternGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AObserver_PatternGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObserver_PatternGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObserver_PatternGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObserver_PatternGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObserver_PatternGameMode, 3603192570);
	template<> OBSERVER_PATTERN_API UClass* StaticClass<AObserver_PatternGameMode>()
	{
		return AObserver_PatternGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObserver_PatternGameMode(Z_Construct_UClass_AObserver_PatternGameMode, &AObserver_PatternGameMode::StaticClass, TEXT("/Script/Observer_Pattern"), TEXT("AObserver_PatternGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObserver_PatternGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
