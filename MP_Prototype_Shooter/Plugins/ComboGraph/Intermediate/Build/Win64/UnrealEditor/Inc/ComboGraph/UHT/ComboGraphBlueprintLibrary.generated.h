// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utils/ComboGraphBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UComboGraphGameplayTasksComponent;
class UInputAction;
class UObject;
struct FGameplayEffectContextHandle;
struct FGameplayEventData;
struct FGameplayTag;
struct FSoftObjectPath;
#ifdef COMBOGRAPH_ComboGraphBlueprintLibrary_generated_h
#error "ComboGraphBlueprintLibrary.generated.h already included, missing '#pragma once' in ComboGraphBlueprintLibrary.h"
#endif
#define COMBOGRAPH_ComboGraphBlueprintLibrary_generated_h

#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_SPARSE_DATA
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSimulateComboInput); \
	DECLARE_FUNCTION(execHasCueParamsObjectsPathsFromContext); \
	DECLARE_FUNCTION(execGetCueParamsObjectsPathsFromContext); \
	DECLARE_FUNCTION(execHasCueParamsObjectsFromContext); \
	DECLARE_FUNCTION(execGetCueParamsObjectsFromContext); \
	DECLARE_FUNCTION(execGetComboGraphGameplayTasksComponent); \
	DECLARE_FUNCTION(execSendGameplayEventToActor);


#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_ACCESSORS
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboGraphBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UComboGraphBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UComboGraphBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UComboGraphBlueprintLibrary)


#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboGraphBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraphBlueprintLibrary(UComboGraphBlueprintLibrary&&); \
	NO_API UComboGraphBlueprintLibrary(const UComboGraphBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraphBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraphBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboGraphBlueprintLibrary) \
	NO_API virtual ~UComboGraphBlueprintLibrary();


#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_18_PROLOG
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_SPARSE_DATA \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_ACCESSORS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UComboGraphBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Utils_ComboGraphBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
