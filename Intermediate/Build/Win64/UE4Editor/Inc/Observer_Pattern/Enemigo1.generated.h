// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef OBSERVER_PATTERN_Enemigo1_generated_h
#error "Enemigo1.generated.h already included, missing '#pragma once' in Enemigo1.h"
#endif
#define OBSERVER_PATTERN_Enemigo1_generated_h

#define Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_SPARSE_DATA
#define Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo1(); \
	friend struct Z_Construct_UClass_AEnemigo1_Statics; \
public: \
	DECLARE_CLASS(AEnemigo1, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer_Pattern"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo1) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemigo1*>(this); }


#define Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemigo1(); \
	friend struct Z_Construct_UClass_AEnemigo1_Statics; \
public: \
	DECLARE_CLASS(AEnemigo1, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Observer_Pattern"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo1) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemigo1*>(this); }


#define Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemigo1(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemigo1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo1(AEnemigo1&&); \
	NO_API AEnemigo1(const AEnemigo1&); \
public:


#define Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo1(AEnemigo1&&); \
	NO_API AEnemigo1(const AEnemigo1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigo1)


#define Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_PRIVATE_PROPERTY_OFFSET
#define Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_9_PROLOG
#define Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_PRIVATE_PROPERTY_OFFSET \
	Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_SPARSE_DATA \
	Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_RPC_WRAPPERS \
	Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_INCLASS \
	Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_PRIVATE_PROPERTY_OFFSET \
	Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_SPARSE_DATA \
	Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_INCLASS_NO_PURE_DECLS \
	Observer_Pattern_Source_Observer_Pattern_Enemigo1_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_PATTERN_API UClass* StaticClass<class AEnemigo1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Pattern_Source_Observer_Pattern_Enemigo1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
