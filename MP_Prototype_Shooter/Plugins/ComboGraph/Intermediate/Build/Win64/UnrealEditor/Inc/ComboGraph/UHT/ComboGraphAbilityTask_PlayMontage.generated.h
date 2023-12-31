// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/ComboGraphAbilityTask_PlayMontage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UAnimNotifyState; struct FComboGraphNotifyStateAutoSetup;
class UComboGraphAbilityTask_PlayMontage;
class UGameplayAbility;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef COMBOGRAPH_ComboGraphAbilityTask_PlayMontage_generated_h
#error "ComboGraphAbilityTask_PlayMontage.generated.h already included, missing '#pragma once' in ComboGraphAbilityTask_PlayMontage.h"
#endif
#define COMBOGRAPH_ComboGraphAbilityTask_PlayMontage_generated_h

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_11_DELEGATE \
COMBOGRAPH_API void FComboGraphPlayMontageEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphPlayMontageEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboGraphMontageNotifyAutoSetupData_Statics; \
	COMBOGRAPH_API static class UScriptStruct* StaticStruct();


template<> COMBOGRAPH_API UScriptStruct* StaticStruct<struct FComboGraphMontageNotifyAutoSetupData>();

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboGraphRegisteredNotifyData_Statics; \
	COMBOGRAPH_API static class UScriptStruct* StaticStruct();


template<> COMBOGRAPH_API UScriptStruct* StaticStruct<struct FComboGraphRegisteredNotifyData>();

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayComboGraphMontage); \
	DECLARE_FUNCTION(execUnbindAllDelegate);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboGraphAbilityTask_PlayMontage(); \
	friend struct Z_Construct_UClass_UComboGraphAbilityTask_PlayMontage_Statics; \
public: \
	DECLARE_CLASS(UComboGraphAbilityTask_PlayMontage, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UComboGraphAbilityTask_PlayMontage)


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraphAbilityTask_PlayMontage(UComboGraphAbilityTask_PlayMontage&&); \
	NO_API UComboGraphAbilityTask_PlayMontage(const UComboGraphAbilityTask_PlayMontage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraphAbilityTask_PlayMontage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraphAbilityTask_PlayMontage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboGraphAbilityTask_PlayMontage) \
	NO_API virtual ~UComboGraphAbilityTask_PlayMontage();


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_54_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UComboGraphAbilityTask_PlayMontage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_PlayMontage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
