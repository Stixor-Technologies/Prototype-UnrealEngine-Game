// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/ComboGraphAbilityTask_NetworkSyncPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UComboGraphAbilityTask_NetworkSyncPoint;
class UGameplayAbility;
enum class EComboGraphAbilityTaskNetSyncType : uint8;
#ifdef COMBOGRAPH_ComboGraphAbilityTask_NetworkSyncPoint_generated_h
#error "ComboGraphAbilityTask_NetworkSyncPoint.generated.h already included, missing '#pragma once' in ComboGraphAbilityTask_NetworkSyncPoint.h"
#endif
#define COMBOGRAPH_ComboGraphAbilityTask_NetworkSyncPoint_generated_h

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_10_DELEGATE \
COMBOGRAPH_API void FComboGraphNetworkSyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphNetworkSyncDelegate);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitNetSync); \
	DECLARE_FUNCTION(execOnSignalCallback);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUComboGraphAbilityTask_NetworkSyncPoint(); \
	friend struct Z_Construct_UClass_UComboGraphAbilityTask_NetworkSyncPoint_Statics; \
public: \
	DECLARE_CLASS(UComboGraphAbilityTask_NetworkSyncPoint, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UComboGraphAbilityTask_NetworkSyncPoint)


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboGraphAbilityTask_NetworkSyncPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboGraphAbilityTask_NetworkSyncPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraphAbilityTask_NetworkSyncPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraphAbilityTask_NetworkSyncPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraphAbilityTask_NetworkSyncPoint(UComboGraphAbilityTask_NetworkSyncPoint&&); \
	NO_API UComboGraphAbilityTask_NetworkSyncPoint(const UComboGraphAbilityTask_NetworkSyncPoint&); \
public: \
	NO_API virtual ~UComboGraphAbilityTask_NetworkSyncPoint();


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_33_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_RPC_WRAPPERS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_INCLASS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UComboGraphAbilityTask_NetworkSyncPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Tasks_ComboGraphAbilityTask_NetworkSyncPoint_h


#define FOREACH_ENUM_ECOMBOGRAPHABILITYTASKNETSYNCTYPE(op) \
	op(EComboGraphAbilityTaskNetSyncType::BothWait) \
	op(EComboGraphAbilityTaskNetSyncType::OnlyServerWait) \
	op(EComboGraphAbilityTaskNetSyncType::OnlyClientWait) 

enum class EComboGraphAbilityTaskNetSyncType : uint8;
template<> struct TIsUEnumClass<EComboGraphAbilityTaskNetSyncType> { enum { Value = true }; };
template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphAbilityTaskNetSyncType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
