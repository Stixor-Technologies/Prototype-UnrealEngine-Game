// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GSCCoreComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayAbility;
class UGSCAttributeSetBase;
class UGSCGameplayAbility;
struct FActiveGameplayEffectHandle;
struct FGameplayAttribute;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGSCGameplayEffectExecuteData;
#ifdef GASCOMPANION_GSCCoreComponent_generated_h
#error "GSCCoreComponent.generated.h already included, missing '#pragma once' in GSCCoreComponent.h"
#endif
#define GASCOMPANION_GSCCoreComponent_generated_h

#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSCGameplayEffectExecuteData_Statics; \
	GASCOMPANION_API static class UScriptStruct* StaticStruct();


template<> GASCOMPANION_API UScriptStruct* StaticStruct<struct FGSCGameplayEffectExecuteData>();

#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_43_DELEGATE \
GASCOMPANION_API void FGSCOnDeath_DelegateWrapper(const FMulticastScriptDelegate& GSCOnDeath);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_44_DELEGATE \
GASCOMPANION_API void FGSCOnInitAbilityActorInfoCore_DelegateWrapper(const FMulticastScriptDelegate& GSCOnInitAbilityActorInfoCore);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_45_DELEGATE \
GASCOMPANION_API void FGSCOnDefaultAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnDefaultAttributeChange, float DeltaValue, const FGameplayTagContainer EventTags);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_46_DELEGATE \
GASCOMPANION_API void FGSCOnAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAttributeChange, FGameplayAttribute Attribute, float DeltaValue, const FGameplayTagContainer EventTags);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_47_DELEGATE \
GASCOMPANION_API void FGSCOnPreAttributeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnPreAttributeChange, UGSCAttributeSetBase* AttributeSet, FGameplayAttribute Attribute, float NewValue);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_48_DELEGATE \
GASCOMPANION_API void FGSCOnPostGameplayEffectExecute_DelegateWrapper(const FMulticastScriptDelegate& GSCOnPostGameplayEffectExecute, FGameplayAttribute Attribute, AActor* SourceActor, AActor* TargetActor, FGameplayTagContainer const& SourceTags, const FGSCGameplayEffectExecuteData Payload);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_49_DELEGATE \
GASCOMPANION_API void FGSCOnAbilityActivated_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityActivated, const UGameplayAbility* Ability);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_50_DELEGATE \
GASCOMPANION_API void FGSCOnAbilityEnded_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityEnded, const UGameplayAbility* Ability);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_51_DELEGATE \
GASCOMPANION_API void FGSCOnAbilityFailed_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityFailed, const UGameplayAbility* Ability, FGameplayTagContainer const& ReasonTags);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_52_DELEGATE \
GASCOMPANION_API void FGSCOnGameplayEffectStackChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectStackChange, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, int32 NewStackCount, int32 OldStackCount);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_53_DELEGATE \
GASCOMPANION_API void FGSCOnGameplayEffectAdded_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectAdded, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_54_DELEGATE \
GASCOMPANION_API void FGSCOnGameplayEffectRemoved_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectRemoved, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_55_DELEGATE \
GASCOMPANION_API void FGSCOnGameplayTagStackChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayTagStackChange, FGameplayTag GameplayTag, int32 NewTagCount);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_56_DELEGATE \
GASCOMPANION_API void FGSCOnAbilityCommit_DelegateWrapper(const FMulticastScriptDelegate& GSCOnAbilityCommit, UGameplayAbility* Ability);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_57_DELEGATE \
GASCOMPANION_API void FGSCOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& GSCOnCooldownChanged, UGameplayAbility* Ability, const FGameplayTagContainer CooldownTags, float TimeRemaining, float Duration);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_58_DELEGATE \
GASCOMPANION_API void FGSCOnCooldownEnd_DelegateWrapper(const FMulticastScriptDelegate& GSCOnCooldownEnd, UGameplayAbility* Ability, FGameplayTag CooldownTag, float Duration);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_59_DELEGATE \
GASCOMPANION_API void FGSCOnDamage_DelegateWrapper(const FMulticastScriptDelegate& GSCOnDamage, float DamageAmount, AActor* SourceCharacter, FGameplayTagContainer const& DamageTags);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_60_DELEGATE \
GASCOMPANION_API void FGSCOnGameplayEffectTimeChange_DelegateWrapper(const FMulticastScriptDelegate& GSCOnGameplayEffectTimeChange, FGameplayTagContainer AssetTags, FGameplayTagContainer GrantedTags, FActiveGameplayEffectHandle ActiveHandle, float NewStartTime, float NewDuration);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustAttributeForMaxChange); \
	DECLARE_FUNCTION(execClampAttributeValue); \
	DECLARE_FUNCTION(execSetAttributeValue); \
	DECLARE_FUNCTION(execActivateAbilityByTags); \
	DECLARE_FUNCTION(execActivateAbilityByClass); \
	DECLARE_FUNCTION(execGetActiveAbilitiesByTags); \
	DECLARE_FUNCTION(execGetActiveAbilitiesByClass); \
	DECLARE_FUNCTION(execIsUsingAbilityByTags); \
	DECLARE_FUNCTION(execIsUsingAbilityByClass); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execClearAbilities); \
	DECLARE_FUNCTION(execClearAbility); \
	DECLARE_FUNCTION(execGrantAbility); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetCurrentAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execDie);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCCoreComponent(); \
	friend struct Z_Construct_UClass_UGSCCoreComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCCoreComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCCoreComponent)


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCCoreComponent(UGSCCoreComponent&&); \
	NO_API UGSCCoreComponent(const UGSCCoreComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCCoreComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCCoreComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSCCoreComponent) \
	NO_API virtual ~UGSCCoreComponent();


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_69_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCCoreComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCCoreComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
