// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/ComboGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBOGRAPH_ComboGraph_generated_h
#error "ComboGraph.generated.h already included, missing '#pragma once' in ComboGraph.h"
#endif
#define COMBOGRAPH_ComboGraph_generated_h

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboGraph(); \
	friend struct Z_Construct_UClass_UComboGraph_Statics; \
public: \
	DECLARE_CLASS(UComboGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UComboGraph) \
	virtual UObject* _getUObject() const override { return const_cast<UComboGraph*>(this); }


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraph(UComboGraph&&); \
	NO_API UComboGraph(const UComboGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComboGraph) \
	NO_API virtual ~UComboGraph();


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_39_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UComboGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h


#define FOREACH_ENUM_ECOMBOGRAPHSELECTEDAPPMODE(op) \
	op(EComboGraphSelectedAppMode::Persona) \
	op(EComboGraphSelectedAppMode::Graph) 

enum class EComboGraphSelectedAppMode : uint8;
template<> struct TIsUEnumClass<EComboGraphSelectedAppMode> { enum { Value = true }; };
template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphSelectedAppMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
