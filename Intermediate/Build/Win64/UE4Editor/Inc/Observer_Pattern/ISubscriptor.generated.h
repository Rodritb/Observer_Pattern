// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_PATTERN_ISubscriptor_generated_h
#error "ISubscriptor.generated.h already included, missing '#pragma once' in ISubscriptor.h"
#endif
#define OBSERVER_PATTERN_ISubscriptor_generated_h

#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_SPARSE_DATA
#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_RPC_WRAPPERS
#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVER_PATTERN_API UISubscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISubscriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVER_PATTERN_API, UISubscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISubscriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVER_PATTERN_API UISubscriptor(UISubscriptor&&); \
	OBSERVER_PATTERN_API UISubscriptor(const UISubscriptor&); \
public:


#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVER_PATTERN_API UISubscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVER_PATTERN_API UISubscriptor(UISubscriptor&&); \
	OBSERVER_PATTERN_API UISubscriptor(const UISubscriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVER_PATTERN_API, UISubscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISubscriptor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISubscriptor)


#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUISubscriptor(); \
	friend struct Z_Construct_UClass_UISubscriptor_Statics; \
public: \
	DECLARE_CLASS(UISubscriptor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Observer_Pattern"), OBSERVER_PATTERN_API) \
	DECLARE_SERIALIZER(UISubscriptor)


#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_GENERATED_UINTERFACE_BODY() \
	Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_GENERATED_UINTERFACE_BODY() \
	Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IISubscriptor() {} \
public: \
	typedef UISubscriptor UClassType; \
	typedef IISubscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IISubscriptor() {} \
public: \
	typedef UISubscriptor UClassType; \
	typedef IISubscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_10_PROLOG
#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_SPARSE_DATA \
	Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_RPC_WRAPPERS \
	Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_SPARSE_DATA \
	Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_PATTERN_API UClass* StaticClass<class UISubscriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Observer_Pattern_Source_Observer_Pattern_ISubscriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
