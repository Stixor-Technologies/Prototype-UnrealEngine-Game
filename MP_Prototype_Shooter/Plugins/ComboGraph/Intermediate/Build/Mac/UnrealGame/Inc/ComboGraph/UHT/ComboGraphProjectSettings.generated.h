// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/ComboGraphProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBOGRAPH_ComboGraphProjectSettings_generated_h
#error "ComboGraphProjectSettings.generated.h already included, missing '#pragma once' in ComboGraphProjectSettings.h"
#endif
#define COMBOGRAPH_ComboGraphProjectSettings_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboGraphProjectSettings(); \
	friend struct Z_Construct_UClass_UComboGraphProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UComboGraphProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UComboGraphProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraphProjectSettings(UComboGraphProjectSettings&&); \
	NO_API UComboGraphProjectSettings(const UComboGraphProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraphProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraphProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComboGraphProjectSettings) \
	NO_API virtual ~UComboGraphProjectSettings();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_28_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UComboGraphProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h


#define FOREACH_ENUM_ECOMBOGRAPHDRAWPINTYPES(op) \
	op(EComboGraphDrawPinTypes::Both) \
	op(EComboGraphDrawPinTypes::Horizontal) \
	op(EComboGraphDrawPinTypes::Vertical) 

enum class EComboGraphDrawPinTypes : uint8;
template<> struct TIsUEnumClass<EComboGraphDrawPinTypes> { enum { Value = true }; };
template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphDrawPinTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
