// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GSCGameplayAbility_MeleeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FGameplayEventData;
struct FGameplayTag;
#ifdef GASCOMPANION_GSCGameplayAbility_MeleeBase_generated_h
#error "GSCGameplayAbility_MeleeBase.generated.h already included, missing '#pragma once' in GSCGameplayAbility_MeleeBase.h"
#endif
#define GASCOMPANION_GSCGameplayAbility_MeleeBase_generated_h

#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNextComboMontage); \
	DECLARE_FUNCTION(execOnEventReceived); \
	DECLARE_FUNCTION(execOnMontageCompleted); \
	DECLARE_FUNCTION(execOnMontageCancelled);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCGameplayAbility_MeleeBase(); \
	friend struct Z_Construct_UClass_UGSCGameplayAbility_MeleeBase_Statics; \
public: \
	DECLARE_CLASS(UGSCGameplayAbility_MeleeBase, UGSCGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCGameplayAbility_MeleeBase)


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCGameplayAbility_MeleeBase(UGSCGameplayAbility_MeleeBase&&); \
	NO_API UGSCGameplayAbility_MeleeBase(const UGSCGameplayAbility_MeleeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCGameplayAbility_MeleeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCGameplayAbility_MeleeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSCGameplayAbility_MeleeBase) \
	NO_API virtual ~UGSCGameplayAbility_MeleeBase();


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_13_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCGameplayAbility_MeleeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCGameplayAbility_MeleeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
