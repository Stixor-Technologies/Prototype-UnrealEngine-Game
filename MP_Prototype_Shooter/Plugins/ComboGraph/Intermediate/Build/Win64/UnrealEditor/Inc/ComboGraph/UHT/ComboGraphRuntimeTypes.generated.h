// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ComboGraphRuntimeTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayEventData;
struct FHitResult;
#ifdef COMBOGRAPH_ComboGraphRuntimeTypes_generated_h
#error "ComboGraphRuntimeTypes.generated.h already included, missing '#pragma once' in ComboGraphRuntimeTypes.h"
#endif
#define COMBOGRAPH_ComboGraphRuntimeTypes_generated_h

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup_Statics; \
	COMBOGRAPH_API static class UScriptStruct* StaticStruct();


template<> COMBOGRAPH_API UScriptStruct* StaticStruct<struct FComboGraphNotifyStateAutoSetup>();

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetTargets_Implementation(AActor* TargetingActor, FGameplayEventData EventData, TArray<FHitResult>& OutHitResults, TArray<AActor*>& OutActors) const; \
 \
	DECLARE_FUNCTION(execGetTargets);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_CALLBACK_WRAPPERS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboGraphTargetType(); \
	friend struct Z_Construct_UClass_UComboGraphTargetType_Statics; \
public: \
	DECLARE_CLASS(UComboGraphTargetType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UComboGraphTargetType)


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraphTargetType(UComboGraphTargetType&&); \
	NO_API UComboGraphTargetType(const UComboGraphTargetType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraphTargetType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraphTargetType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComboGraphTargetType) \
	NO_API virtual ~UComboGraphTargetType();


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_111_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_CALLBACK_WRAPPERS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UComboGraphTargetType>();

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMBOGRAPH_API UScriptStruct* StaticStruct<struct FComboGraphGameplayEffectContainer>();

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainerSpec_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMBOGRAPH_API UScriptStruct* StaticStruct<struct FComboGraphGameplayEffectContainerSpec>();

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h_210_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMBOGRAPH_API UScriptStruct* StaticStruct<struct FComboGraphDamageSystemContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_ComboGraphRuntimeTypes_h


#define FOREACH_ENUM_ECOMBOGRAPHICONTYPE(op) \
	op(EComboGraphIconType::PS4) \
	op(EComboGraphIconType::PS5) \
	op(EComboGraphIconType::XboxOne) \
	op(EComboGraphIconType::XboxSeries) \
	op(EComboGraphIconType::Keyboard) 

enum class EComboGraphIconType : uint8;
template<> struct TIsUEnumClass<EComboGraphIconType> { enum { Value = true }; };
template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphIconType>();

#define FOREACH_ENUM_ECOMBOGRAPHTRANSITIONBEHAVIOR(op) \
	op(EComboGraphTransitionBehavior::Immediately) \
	op(EComboGraphTransitionBehavior::OnAnimNotifyClass) \
	op(EComboGraphTransitionBehavior::OnAnimNotifyName) \
	op(EComboGraphTransitionBehavior::OnComboWindowEnd) 

enum class EComboGraphTransitionBehavior : uint8;
template<> struct TIsUEnumClass<EComboGraphTransitionBehavior> { enum { Value = true }; };
template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphTransitionBehavior>();

#define FOREACH_ENUM_ECOMBOGRAPHTRANSITIONINPUTEVENT(op) \
	op(EComboGraphTransitionInputEvent::Started) \
	op(EComboGraphTransitionInputEvent::Triggered) \
	op(EComboGraphTransitionInputEvent::Canceled) 

enum class EComboGraphTransitionInputEvent : uint8;
template<> struct TIsUEnumClass<EComboGraphTransitionInputEvent> { enum { Value = true }; };
template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphTransitionInputEvent>();

#define FOREACH_ENUM_ECOMBOGRAPHCUESOURCEOBJECTTYPE(op) \
	op(EComboGraphCueSourceObjectType::None) \
	op(EComboGraphCueSourceObjectType::Niagara) \
	op(EComboGraphCueSourceObjectType::Cascade) \
	op(EComboGraphCueSourceObjectType::Sound) 

enum class EComboGraphCueSourceObjectType : uint8;
template<> struct TIsUEnumClass<EComboGraphCueSourceObjectType> { enum { Value = true }; };
template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphCueSourceObjectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
