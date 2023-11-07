// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GSCComboManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGSCGameplayAbility;
#ifdef GASCOMPANION_GSCComboManagerComponent_generated_h
#error "GSCComboManagerComponent.generated.h already included, missing '#pragma once' in GSCComboManagerComponent.h"
#endif
#define GASCOMPANION_GSCComboManagerComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSetComboIndex_Implementation(int32 InComboIndex); \
	virtual void ServerSetComboIndex_Implementation(int32 InComboIndex); \
	virtual void MulticastActivateComboAbility_Implementation(TSubclassOf<UGSCGameplayAbility>  AbilityClass, bool bAllowRemoteActivation); \
	virtual void ServerActivateComboAbility_Implementation(TSubclassOf<UGSCGameplayAbility>  AbilityClass, bool bAllowRemoteActivation); \
 \
	DECLARE_FUNCTION(execMulticastSetComboIndex); \
	DECLARE_FUNCTION(execServerSetComboIndex); \
	DECLARE_FUNCTION(execMulticastActivateComboAbility); \
	DECLARE_FUNCTION(execServerActivateComboAbility); \
	DECLARE_FUNCTION(execActivateComboAbility); \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execIncrementCombo);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCComboManagerComponent(); \
	friend struct Z_Construct_UClass_UGSCComboManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UGSCComboManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GASCompanion"), NO_API) \
	DECLARE_SERIALIZER(UGSCComboManagerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ComboIndex=NETFIELD_REP_START, \
		bComboWindowOpened, \
		bShouldTriggerCombo, \
		bRequestTriggerCombo, \
		bNextComboAbilityActivated, \
		NETFIELD_REP_END=bNextComboAbilityActivated	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCComboManagerComponent(UGSCComboManagerComponent&&); \
	NO_API UGSCComboManagerComponent(const UGSCComboManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCComboManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCComboManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGSCComboManagerComponent) \
	NO_API virtual ~UGSCComboManagerComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_15_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GASCOMPANION_API UClass* StaticClass<class UGSCComboManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCComboManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
