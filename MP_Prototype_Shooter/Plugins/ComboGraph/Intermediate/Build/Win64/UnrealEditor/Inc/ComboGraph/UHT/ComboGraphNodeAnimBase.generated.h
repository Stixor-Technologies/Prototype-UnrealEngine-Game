// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/ComboGraphNodeAnimBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class APawn;
class UAnimMontage;
class UAnimSequenceBase;
class UComboGraph;
class UComboGraphAbilityTask_StartGraph;
class UComboGraphNodeAnimBase;
class UGameplayAbility;
class UObject;
struct FGameplayEventData;
struct FGameplayTag;
#ifdef COMBOGRAPH_ComboGraphNodeAnimBase_generated_h
#error "ComboGraphNodeAnimBase.generated.h already included, missing '#pragma once' in ComboGraphNodeAnimBase.h"
#endif
#define COMBOGRAPH_ComboGraphNodeAnimBase_generated_h

#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMBOGRAPH_API UScriptStruct* StaticStruct<struct FComboGraphCueContainerDefinition>();

#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMBOGRAPH_API UScriptStruct* StaticStruct<struct FComboGraphCueContainer>();

#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_SPARSE_DATA
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool K2_CanActivateNode_Implementation() const; \
	virtual float GetMagnitudeForContainer_Implementation(float OriginalMagnitude, float ElapsedSeconds, float TriggeredSeconds, float AnimationLength, float MontagePlayTime, float InputMagnitude, FGameplayTag ContainerTag) const; \
 \
	DECLARE_FUNCTION(execK2_CanActivateNode); \
	DECLARE_FUNCTION(execGetMagnitudeForContainer); \
	DECLARE_FUNCTION(execGetAvatarAsCharacter); \
	DECLARE_FUNCTION(execGetAvatarAsPawn); \
	DECLARE_FUNCTION(execGetAvatarActor); \
	DECLARE_FUNCTION(execGetOwnerActor); \
	DECLARE_FUNCTION(execK2_GetPreviousNode); \
	DECLARE_FUNCTION(execK2_GetOwningAbility); \
	DECLARE_FUNCTION(execK2_GetOwningTask); \
	DECLARE_FUNCTION(execK2_GetOwningGraph); \
	DECLARE_FUNCTION(execK2_GetChildren); \
	DECLARE_FUNCTION(execK2_GetAnimationClass); \
	DECLARE_FUNCTION(execK2_GetAnimationAsset); \
	DECLARE_FUNCTION(execK2_GetNodeTitle);


#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_ACCESSORS
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_CALLBACK_WRAPPERS
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboGraphNodeAnimBase(); \
	friend struct Z_Construct_UClass_UComboGraphNodeAnimBase_Statics; \
public: \
	DECLARE_CLASS(UComboGraphNodeAnimBase, UComboGraphNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UComboGraphNodeAnimBase) \
	virtual UObject* _getUObject() const override { return const_cast<UComboGraphNodeAnimBase*>(this); }


#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboGraphNodeAnimBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraphNodeAnimBase(UComboGraphNodeAnimBase&&); \
	NO_API UComboGraphNodeAnimBase(const UComboGraphNodeAnimBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraphNodeAnimBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraphNodeAnimBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboGraphNodeAnimBase) \
	NO_API virtual ~UComboGraphNodeAnimBase();


#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_184_PROLOG
#define FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_SPARSE_DATA \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_ACCESSORS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_CALLBACK_WRAPPERS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_INCLASS_NO_PURE_DECLS \
	FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UComboGraphNodeAnimBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h


#define FOREACH_ENUM_ECOMBOGRAPHASYNCHANDLINGMETHOD(op) \
	op(EComboGraphAsyncHandlingMethod::ResolvedObjects) \
	op(EComboGraphAsyncHandlingMethod::SoftObjectPaths) 

enum class EComboGraphAsyncHandlingMethod : uint8;
template<> struct TIsUEnumClass<EComboGraphAsyncHandlingMethod> { enum { Value = true }; };
template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphAsyncHandlingMethod>();

#define FOREACH_ENUM_ECOMBOGRAPHDAMAGEHANDLINGMETHOD(op) \
	op(EComboGraphDamageHandlingMethod::AbilitySystem) \
	op(EComboGraphDamageHandlingMethod::DamageSystem) 

enum class EComboGraphDamageHandlingMethod : uint8;
template<> struct TIsUEnumClass<EComboGraphDamageHandlingMethod> { enum { Value = true }; };
template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphDamageHandlingMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
