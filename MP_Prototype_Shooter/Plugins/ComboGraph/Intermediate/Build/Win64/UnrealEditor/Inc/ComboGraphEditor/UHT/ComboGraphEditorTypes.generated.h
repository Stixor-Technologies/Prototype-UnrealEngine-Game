// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComboGraphEditorTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBOGRAPHEDITOR_ComboGraphEditorTypes_generated_h
#error "ComboGraphEditorTypes.generated.h already included, missing '#pragma once' in ComboGraphEditorTypes.h"
#endif
#define COMBOGRAPHEDITOR_ComboGraphEditorTypes_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> COMBOGRAPHEDITOR_API UScriptStruct* StaticStruct<struct FComboGraphInputsMetaData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_RPC_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUComboGraphPinNames(); \
	friend struct Z_Construct_UClass_UComboGraphPinNames_Statics; \
public: \
	DECLARE_CLASS(UComboGraphPinNames, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComboGraphEditor"), NO_API) \
	DECLARE_SERIALIZER(UComboGraphPinNames)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboGraphPinNames(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboGraphPinNames) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraphPinNames); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraphPinNames); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraphPinNames(UComboGraphPinNames&&); \
	NO_API UComboGraphPinNames(const UComboGraphPinNames&); \
public: \
	NO_API virtual ~UComboGraphPinNames();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_26_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPHEDITOR_API UClass* StaticClass<class UComboGraphPinNames>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h


#define FOREACH_ENUM_ECOMBOGRAPHAUTOARRANGESTRATEGY(op) \
	op(EComboGraphAutoArrangeStrategy::Vertical) \
	op(EComboGraphAutoArrangeStrategy::Horizontal) \
	op(EComboGraphAutoArrangeStrategy::None) 

enum class EComboGraphAutoArrangeStrategy : uint8;
template<> struct TIsUEnumClass<EComboGraphAutoArrangeStrategy> { enum { Value = true }; };
template<> COMBOGRAPHEDITOR_API UEnum* StaticEnum<EComboGraphAutoArrangeStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
