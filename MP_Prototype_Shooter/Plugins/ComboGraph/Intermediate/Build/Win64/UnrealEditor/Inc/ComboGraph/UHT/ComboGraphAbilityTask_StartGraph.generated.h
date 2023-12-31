// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/ComboGraphAbilityTask_StartGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UComboGraph;
class UComboGraphAbilityTask_StartGraph;
class UComboGraphNodeAnimBase;
class UGameplayAbility;
class UInputAction;
struct FGameplayEventData;
struct FGameplayTag;
#ifdef COMBOGRAPH_ComboGraphAbilityTask_StartGraph_generated_h
#error "ComboGraphAbilityTask_StartGraph.generated.h already included, missing '#pragma once' in ComboGraphAbilityTask_StartGraph.h"
#endif
#define COMBOGRAPH_ComboGraphAbilityTask_StartGraph_generated_h

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_19_DELEGATE \
COMBOGRAPH_API void FComboGraphAbilityTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphAbilityTaskDelegate, FGameplayTag EventTag, FGameplayEventData EventData);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnServerSyncAdvanceNextNode); \
	DECLARE_FUNCTION(execHandleEventReceived); \
	DECLARE_FUNCTION(execOnMontageInterrupted); \
	DECLARE_FUNCTION(execOnMontageCancelled); \
	DECLARE_FUNCTION(execOnMontageBlendOut); \
	DECLARE_FUNCTION(execOnMontageCompleted); \
	DECLARE_FUNCTION(execOnEventInputReceived); \
	DECLARE_FUNCTION(execGetPreviousNode); \
	DECLARE_FUNCTION(execGetCurrentNode); \
	DECLARE_FUNCTION(execCreateStartComboGraph);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboGraphAbilityTask_StartGraph(); \
	friend struct Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_Statics; \
public: \
	DECLARE_CLASS(UComboGraphAbilityTask_StartGraph, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UComboGraphAbilityTask_StartGraph)


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboGraphAbilityTask_StartGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraphAbilityTask_StartGraph(UComboGraphAbilityTask_StartGraph&&); \
	NO_API UComboGraphAbilityTask_StartGraph(const UComboGraphAbilityTask_StartGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraphAbilityTask_StartGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraphAbilityTask_StartGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboGraphAbilityTask_StartGraph) \
	NO_API virtual ~UComboGraphAbilityTask_StartGraph();


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_24_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UComboGraphAbilityTask_StartGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_StartGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
