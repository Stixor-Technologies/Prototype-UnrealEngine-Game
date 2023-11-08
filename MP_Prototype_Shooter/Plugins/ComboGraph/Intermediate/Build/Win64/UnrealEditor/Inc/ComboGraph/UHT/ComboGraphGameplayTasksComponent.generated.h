// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ComboGraphGameplayTasksComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayEventData;
struct FGameplayTag;
#ifdef COMBOGRAPH_ComboGraphGameplayTasksComponent_generated_h
#error "ComboGraphGameplayTasksComponent.generated.h already included, missing '#pragma once' in ComboGraphGameplayTasksComponent.h"
#endif
#define COMBOGRAPH_ComboGraphGameplayTasksComponent_generated_h

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSendGameplayEvent_Implementation(FGameplayTag EventTag, FGameplayEventData Payload); \
 \
	DECLARE_FUNCTION(execServerSendGameplayEvent); \
	DECLARE_FUNCTION(execSendGameplayEventReplicated);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_CALLBACK_WRAPPERS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboGraphGameplayTasksComponent(); \
	friend struct Z_Construct_UClass_UComboGraphGameplayTasksComponent_Statics; \
public: \
	DECLARE_CLASS(UComboGraphGameplayTasksComponent, UGameplayTasksComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UComboGraphGameplayTasksComponent)


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboGraphGameplayTasksComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraphGameplayTasksComponent(UComboGraphGameplayTasksComponent&&); \
	NO_API UComboGraphGameplayTasksComponent(const UComboGraphGameplayTasksComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraphGameplayTasksComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraphGameplayTasksComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboGraphGameplayTasksComponent) \
	NO_API virtual ~UComboGraphGameplayTasksComponent();


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_17_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_CALLBACK_WRAPPERS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UComboGraphGameplayTasksComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphGameplayTasksComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
