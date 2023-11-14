// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GSCBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAttributeSet;
class UGSCAbilityInputBindingComponent;
class UGSCAbilityQueueComponent;
class UGSCAbilitySystemComponent;
class UGSCComboManagerComponent;
class UGSCCoreComponent;
struct FGameplayAttribute;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGSCAbilitySetHandle;
#ifdef GASCOMPANION_GSCBlueprintFunctionLibrary_generated_h
#error "GSCBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in GSCBlueprintFunctionLibrary.h"
#endif
#define GASCOMPANION_GSCBlueprintFunctionLibrary_generated_h

#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebugAbilitySetHandle); \
	DECLARE_FUNCTION(execRemoveAllGameplayCues); \
	DECLARE_FUNCTION(execRemoveGameplayCue); \
	DECLARE_FUNCTION(execAddGameplayCueWithParams); \
	DECLARE_FUNCTION(execAddGameplayCue); \
	DECLARE_FUNCTION(execExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execExecuteGameplayCueForActor); \
	DECLARE_FUNCTION(execNotEqual_GameplayAttributeGameplayAttribute); \
	DECLARE_FUNCTION(execGetAllAttributes); \
	DECLARE_FUNCTION(execGetDebugStringFromAttribute); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTag); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTagsFromActor); \
	DECLARE_FUNCTION(execAddLooseGameplayTagsToActor); \
	DECLARE_FUNCTION(execGetAbilityInputBindingComponent); \
	DECLARE_FUNCTION(execGetAbilityQueueComponent); \
	DECLARE_FUNCTION(execGetCompanionCoreComponent); \
	DECLARE_FUNCTION(execGetComboManagerComponent); \
	DECLARE_FUNCTION(execGetCompanionAbilitySystemComponent);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGSCBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGSCBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCBlueprintFunctionLibrary)


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCBlueprintFunctionLibrary(UGSCBlueprintFunctionLibrary&&); \
	NO_API UGSCBlueprintFunctionLibrary(const UGSCBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCBlueprintFunctionLibrary) \
	NO_API virtual ~UGSCBlueprintFunctionLibrary();


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_22_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
