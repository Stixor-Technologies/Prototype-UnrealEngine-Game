// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GSCTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GASCOMPANION_GSCTypes_generated_h
#error "GSCTypes.generated.h already included, missing '#pragma once' in GSCTypes.h"
#endif
#define GASCOMPANION_GSCTypes_generated_h

#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTypes_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics; \
	GASCOMPANION_API static class UScriptStruct* StaticStruct();


template<> GASCOMPANION_API UScriptStruct* StaticStruct<struct FGSCGameplayEffectContainer>();

#define FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTypes_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GASCOMPANION_API UScriptStruct* StaticStruct<struct FGSCGameplayEffectContainerSpec>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTypes_h


#define FOREACH_ENUM_EGSCABILITYTRIGGEREVENT(op) \
	op(EGSCAbilityTriggerEvent::Started) \
	op(EGSCAbilityTriggerEvent::Triggered) 

enum class EGSCAbilityTriggerEvent : uint8;
template<> struct TIsUEnumClass<EGSCAbilityTriggerEvent> { enum { Value = true }; };
template<> GASCOMPANION_API UEnum* StaticEnum<EGSCAbilityTriggerEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
