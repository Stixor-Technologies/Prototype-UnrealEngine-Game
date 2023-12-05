// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/ComboGraphNodeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UComboGraphEdge;
class UComboGraphNodeBase;
#ifdef COMBOGRAPH_ComboGraphNodeBase_generated_h
#error "ComboGraphNodeBase.generated.h already included, missing '#pragma once' in ComboGraphNodeBase.h"
#endif
#define COMBOGRAPH_ComboGraphNodeBase_generated_h

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLeafNode); \
	DECLARE_FUNCTION(execGetEdge);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboGraphNodeBase(); \
	friend struct Z_Construct_UClass_UComboGraphNodeBase_Statics; \
public: \
	DECLARE_CLASS(UComboGraphNodeBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UComboGraphNodeBase)


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboGraphNodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraphNodeBase(UComboGraphNodeBase&&); \
	NO_API UComboGraphNodeBase(const UComboGraphNodeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraphNodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraphNodeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboGraphNodeBase) \
	NO_API virtual ~UComboGraphNodeBase();


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_26_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UComboGraphNodeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h


#define FOREACH_ENUM_EACENODELIMIT(op) \
	op(EACENodeLimit::Unlimited) \
	op(EACENodeLimit::Limited) 

enum class EACENodeLimit : uint8;
template<> struct TIsUEnumClass<EACENodeLimit> { enum { Value = true }; };
template<> COMBOGRAPH_API UEnum* StaticEnum<EACENodeLimit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
