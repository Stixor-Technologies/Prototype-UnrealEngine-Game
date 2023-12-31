// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ComboGraphCollisionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FHitResult;
#ifdef COMBOGRAPH_ComboGraphCollisionComponent_generated_h
#error "ComboGraphCollisionComponent.generated.h already included, missing '#pragma once' in ComboGraphCollisionComponent.h"
#endif
#define COMBOGRAPH_ComboGraphCollisionComponent_generated_h

#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_26_DELEGATE \
static void FComboGraphSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphSimpleDelegate);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_27_DELEGATE \
static void FComboGraphOnHitRegisteredDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphOnHitRegisteredDelegate, FHitResult HitResult, UPrimitiveComponent* Mesh);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_SPARSE_DATA
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterCollisionMesh); \
	DECLARE_FUNCTION(execRegisterCollisionMesh);


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_ACCESSORS
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboGraphCollisionComponent(); \
	friend struct Z_Construct_UClass_UComboGraphCollisionComponent_Statics; \
public: \
	DECLARE_CLASS(UComboGraphCollisionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComboGraph"), NO_API) \
	DECLARE_SERIALIZER(UComboGraphCollisionComponent)


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboGraphCollisionComponent(UComboGraphCollisionComponent&&); \
	NO_API UComboGraphCollisionComponent(const UComboGraphCollisionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboGraphCollisionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboGraphCollisionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComboGraphCollisionComponent) \
	NO_API virtual ~UComboGraphCollisionComponent();


#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_21_PROLOG
#define FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_SPARSE_DATA \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_ACCESSORS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBOGRAPH_API UClass* StaticClass<class UComboGraphCollisionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
