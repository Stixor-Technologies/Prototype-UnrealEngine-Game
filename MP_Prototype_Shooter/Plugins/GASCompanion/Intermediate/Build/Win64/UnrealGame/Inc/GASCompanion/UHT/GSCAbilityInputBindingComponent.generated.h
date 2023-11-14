// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GSCAbilityInputBindingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UInputAction;
enum class EGSCAbilityTriggerEvent : uint8;
struct FGameplayAbilitySpecHandle;
#ifdef GASCOMPANION_GSCAbilityInputBindingComponent_generated_h
#error "GSCAbilityInputBindingComponent.generated.h already included, missing '#pragma once' in GSCAbilityInputBindingComponent.h"
#endif
#define GASCOMPANION_GSCAbilityInputBindingComponent_generated_h

#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSCAbilityInputBinding_Statics; \
	GASCOMPANION_API static class UScriptStruct* StaticStruct();


template<> GASCOMPANION_API UScriptStruct* StaticStruct<struct FGSCAbilityInputBinding>();

#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientBindInput_Implementation(UInputAction* InInputAction, const EGSCAbilityTriggerEvent InTriggerEvent, FGameplayAbilitySpecHandle const& InAbilityHandle); \
 \
	DECLARE_FUNCTION(execGetBoundInputActionForAbility); \
	DECLARE_FUNCTION(execClearAbilityBindings); \
	DECLARE_FUNCTION(execClearInputBinding); \
	DECLARE_FUNCTION(execSetInputBinding); \
	DECLARE_FUNCTION(execClientBindInput); \
	DECLARE_FUNCTION(execGiveAbilityWithInput);


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_CALLBACK_WRAPPERS
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCAbilityInputBindingComponent(); \
	friend struct Z_Construct_UClass_UGSCAbilityInputBindingComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCAbilityInputBindingComponent, UGSCPlayerControlsComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCAbilityInputBindingComponent)


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCAbilityInputBindingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCAbilityInputBindingComponent(UGSCAbilityInputBindingComponent&&); \
	NO_API UGSCAbilityInputBindingComponent(const UGSCAbilityInputBindingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCAbilityInputBindingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCAbilityInputBindingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCAbilityInputBindingComponent) \
	NO_API virtual ~UGSCAbilityInputBindingComponent();


#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_29_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_CALLBACK_WRAPPERS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCAbilityInputBindingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCAbilityInputBindingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
