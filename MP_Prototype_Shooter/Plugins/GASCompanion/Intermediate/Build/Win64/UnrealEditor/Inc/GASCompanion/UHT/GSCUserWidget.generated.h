// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/GSCUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilitySystemComponent;
class UGameplayAbility;
class UGSCCoreComponent;
struct FActiveGameplayEffectHandle;
struct FGameplayAttribute;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGSCGameplayEffectUIData;
#ifdef GASCOMPANION_GSCUserWidget_generated_h
#error "GSCUserWidget.generated.h already included, missing '#pragma once' in GSCUserWidget.h"
#endif
#define GASCOMPANION_GSCUserWidget_generated_h

#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSCGameplayEffectUIData_Statics; \
	GASCOMPANION_API static class UScriptStruct* StaticStruct();


template<> GASCOMPANION_API UScriptStruct* StaticStruct<struct FGSCGameplayEffectUIData>();

#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_SPARSE_DATA
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttributeValue); \
	DECLARE_FUNCTION(execGetPercentForAttributes); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execGetOwningAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetOwningCoreComponent); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execSetOwnerActor);


#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_ACCESSORS
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_CALLBACK_WRAPPERS
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCUserWidget(); \
	friend struct Z_Construct_UClass_UGSCUserWidget_Statics; \
public: \
	DECLARE_CLASS(UGSCUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCUserWidget)


#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCUserWidget(UGSCUserWidget&&); \
	NO_API UGSCUserWidget(const UGSCUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCUserWidget) \
	NO_API virtual ~UGSCUserWidget();


#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_60_PROLOG
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_SPARSE_DATA \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_ACCESSORS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_CALLBACK_WRAPPERS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_INCLASS_NO_PURE_DECLS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
