// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/GameplayTask_StartComboGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IGameplayTaskOwnerInterface;
class UComboGraph;
class UGameplayTask_StartComboGraph;
class UInputAction;
struct FGameplayEventData;
struct FGameplayTag;
#ifdef COMBOGRAPH_GameplayTask_StartComboGraph_generated_h
#error "GameplayTask_StartComboGraph.generated.h already included, missing '#pragma once' in GameplayTask_StartComboGraph.h"
#endif
#define COMBOGRAPH_GameplayTask_StartComboGraph_generated_h

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_24_DELEGATE \
static void FComboGraphTaskEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphTaskEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTaskStartComboGraph);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTask_StartComboGraph(); \
	friend struct Z_Construct_UClass_UGameplayTask_StartComboGraph_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_StartComboGraph, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTask_StartComboGraph)


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTask_StartComboGraph(UGameplayTask_StartComboGraph&&); \
	NO_API UGameplayTask_StartComboGraph(const UGameplayTask_StartComboGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask_StartComboGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_StartComboGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_StartComboGraph) \
	NO_API virtual ~UGameplayTask_StartComboGraph();


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_19_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UGameplayTask_StartComboGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_GameplayTask_StartComboGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
