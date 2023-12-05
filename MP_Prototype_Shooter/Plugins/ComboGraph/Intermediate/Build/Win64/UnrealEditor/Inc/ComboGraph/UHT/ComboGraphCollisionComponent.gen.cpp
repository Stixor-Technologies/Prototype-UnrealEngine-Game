// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Components/ComboGraphCollisionComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphCollisionComponent() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphCollisionComponent();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphCollisionComponent_NoRegister();
	COMBOGRAPH_API UFunction* Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature();
	COMBOGRAPH_API UFunction* Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphSimpleDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphSimpleDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphSimpleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphCollisionComponent, nullptr, "ComboGraphSimpleDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphSimpleDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphSimpleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphSimpleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UComboGraphCollisionComponent::FComboGraphSimpleDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphSimpleDelegate)
{
	ComboGraphSimpleDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics
	{
		struct ComboGraphCollisionComponent_eventComboGraphOnHitRegisteredDelegate_Parms
		{
			FHitResult HitResult;
			UPrimitiveComponent* Mesh;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphCollisionComponent_eventComboGraphOnHitRegisteredDelegate_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphCollisionComponent_eventComboGraphOnHitRegisteredDelegate_Parms, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::NewProp_Mesh_MetaData), Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphCollisionComponent, nullptr, "ComboGraphOnHitRegisteredDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::ComboGraphCollisionComponent_eventComboGraphOnHitRegisteredDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::ComboGraphCollisionComponent_eventComboGraphOnHitRegisteredDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UComboGraphCollisionComponent::FComboGraphOnHitRegisteredDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboGraphOnHitRegisteredDelegate, FHitResult HitResult, UPrimitiveComponent* Mesh)
{
	struct ComboGraphCollisionComponent_eventComboGraphOnHitRegisteredDelegate_Parms
	{
		FHitResult HitResult;
		UPrimitiveComponent* Mesh;
	};
	ComboGraphCollisionComponent_eventComboGraphOnHitRegisteredDelegate_Parms Parms;
	Parms.HitResult=HitResult;
	Parms.Mesh=Mesh;
	ComboGraphOnHitRegisteredDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UComboGraphCollisionComponent::execUnregisterCollisionMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterCollisionMesh(Z_Param_InMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphCollisionComponent::execRegisterCollisionMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterCollisionMesh(Z_Param_InMesh);
		P_NATIVE_END;
	}
	void UComboGraphCollisionComponent::StaticRegisterNativesUComboGraphCollisionComponent()
	{
		UClass* Class = UComboGraphCollisionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterCollisionMesh", &UComboGraphCollisionComponent::execRegisterCollisionMesh },
			{ "UnregisterCollisionMesh", &UComboGraphCollisionComponent::execUnregisterCollisionMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics
	{
		struct ComboGraphCollisionComponent_eventRegisterCollisionMesh_Parms
		{
			UPrimitiveComponent* InMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::NewProp_InMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphCollisionComponent_eventRegisterCollisionMesh_Parms, InMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::NewProp_InMesh_MetaData), Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::NewProp_InMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::NewProp_InMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Use this method to push a Static or Skeletal mesh into the registered meshes to consider for collision checks.\n\x09 *\n\x09 * Meant to be called at least once either on Owner's Actor BeginPlay or with this component OnComponentActivated event.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this method to push a Static or Skeletal mesh into the registered meshes to consider for collision checks.\n\nMeant to be called at least once either on Owner's Actor BeginPlay or with this component OnComponentActivated event." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphCollisionComponent, nullptr, "RegisterCollisionMesh", nullptr, nullptr, Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::ComboGraphCollisionComponent_eventRegisterCollisionMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::ComboGraphCollisionComponent_eventRegisterCollisionMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics
	{
		struct ComboGraphCollisionComponent_eventUnregisterCollisionMesh_Parms
		{
			UPrimitiveComponent* InMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::NewProp_InMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphCollisionComponent_eventUnregisterCollisionMesh_Parms, InMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::NewProp_InMesh_MetaData), Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::NewProp_InMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::NewProp_InMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use this method to remove a Static or Skeletal mesh from the registered meshes */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this method to remove a Static or Skeletal mesh from the registered meshes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphCollisionComponent, nullptr, "UnregisterCollisionMesh", nullptr, nullptr, Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::ComboGraphCollisionComponent_eventUnregisterCollisionMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::ComboGraphCollisionComponent_eventUnregisterCollisionMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphCollisionComponent);
	UClass* Z_Construct_UClass_UComboGraphCollisionComponent_NoRegister()
	{
		return UComboGraphCollisionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphCollisionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldLogHits_MetaData[];
#endif
		static void NewProp_bShouldLogHits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldLogHits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDrawTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[];
#endif
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionTraceChannel;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorTypesToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTypesToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorTypesToIgnore;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfilesToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfilesToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionProfilesToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHitRegistered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitRegistered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTraceEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTraceEnd;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HitActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitActors;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RegisteredMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphCollisionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphCollisionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature, "ComboGraphOnHitRegisteredDelegate__DelegateSignature" }, // 2279854581
		{ &Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphSimpleDelegate__DelegateSignature, "ComboGraphSimpleDelegate__DelegateSignature" }, // 712141345
		{ &Z_Construct_UFunction_UComboGraphCollisionComponent_RegisterCollisionMesh, "RegisterCollisionMesh" }, // 1793569238
		{ &Z_Construct_UFunction_UComboGraphCollisionComponent_UnregisterCollisionMesh, "UnregisterCollisionMesh" }, // 2718005183
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "ComboGraph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor Component providing basic collision detection mechanism for registered meshes using traces.\n *\n * It implements simple logic for hit detection not meant to replace more robust solutions such as Combat Components or AGR Pro (Combat Manager in v4).\n *\n * Rather to provide a quick and easy way to handle collision for those not having or not willing to use aforementioned plugins, or not having a game-specific custom collision system already in place.\n *\n * Registered meshes can be Static or Skeletal meshes, this component relies on Sockets attached to those primitives to draw traces for each socket.\n *\n * No sub-stepping is involved, we simply draw traces for each frame checking for collisions between last frame position and current frame position for a given socket.\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Components/ComboGraphCollisionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor Component providing basic collision detection mechanism for registered meshes using traces.\n\nIt implements simple logic for hit detection not meant to replace more robust solutions such as Combat Components or AGR Pro (Combat Manager in v4).\n\nRather to provide a quick and easy way to handle collision for those not having or not willing to use aforementioned plugins, or not having a game-specific custom collision system already in place.\n\nRegistered meshes can be Static or Skeletal meshes, this component relies on Sockets attached to those primitives to draw traces for each socket.\n\nNo sub-stepping is involved, we simply draw traces for each frame checking for collisions between last frame position and current frame position for a given socket." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Combo Graph|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If set to true, traces will be rendered on screen for a duration */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true, traces will be rendered on screen for a duration" },
#endif
	};
#endif
	void Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UComboGraphCollisionComponent*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboGraphCollisionComponent), &Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bDebug_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bShouldLogHits_MetaData[] = {
		{ "Category", "Combo Graph|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If set to true, registered hits will be logged to console (successful hits or ignored ones due to configuration)  */" },
#endif
		{ "EditCondition", "bDebug" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true, registered hits will be logged to console (successful hits or ignored ones due to configuration)" },
#endif
	};
#endif
	void Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bShouldLogHits_SetBit(void* Obj)
	{
		((UComboGraphCollisionComponent*)Obj)->bShouldLogHits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bShouldLogHits = { "bShouldLogHits", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboGraphCollisionComponent), &Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bShouldLogHits_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bShouldLogHits_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bShouldLogHits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceColor_MetaData[] = {
		{ "Category", "Combo Graph|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In debug mode, traces will be rendered on screen using this color */" },
#endif
		{ "EditCondition", "bDebug" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In debug mode, traces will be rendered on screen using this color" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceColor_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceHitColor_MetaData[] = {
		{ "Category", "Combo Graph|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In debug mode, registered hits will be rendered on screen using this color */" },
#endif
		{ "EditCondition", "bDebug" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In debug mode, registered hits will be rendered on screen using this color" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceHitColor_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceHitColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_DebugDrawTime_MetaData[] = {
		{ "Category", "Combo Graph|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** In debug mode, this is the amount in seconds that visual debug traces will persist on screen */" },
#endif
		{ "EditCondition", "bDebug" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In debug mode, this is the amount in seconds that visual debug traces will persist on screen" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_DebugDrawTime = { "DebugDrawTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, DebugDrawTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_DebugDrawTime_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_DebugDrawTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Combo Graph|Traces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radius of the sphere to sweep during collision traces */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius of the sphere to sweep during collision traces" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceRadius_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "Combo Graph|Traces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True to test against complex collision, false to test against simplified collision */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True to test against complex collision, false to test against simplified collision" },
#endif
	};
#endif
	void Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((UComboGraphCollisionComponent*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboGraphCollisionComponent), &Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bTraceComplex_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bTraceComplex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionTraceChannel_MetaData[] = {
		{ "Category", "Combo Graph|Traces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trace channel to use when we perform collision traces (Default set to \"Camera\" for ease of use, but custom collision profiles can be used for further tuning) */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trace channel to use when we perform collision traces (Default set to \"Camera\" for ease of use, but custom collision profiles can be used for further tuning)" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionTraceChannel = { "CollisionTraceChannel", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, CollisionTraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionTraceChannel_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionTraceChannel_MetaData) }; // 2725057287
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_ActorTypesToIgnore_Inner = { "ActorTypesToIgnore", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_ActorTypesToIgnore_MetaData[] = {
		{ "Category", "Combo Graph|Traces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of Actor classes to ignore during hit collisions */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Actor classes to ignore during hit collisions" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_ActorTypesToIgnore = { "ActorTypesToIgnore", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, ActorTypesToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_ActorTypesToIgnore_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_ActorTypesToIgnore_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionProfilesToIgnore_Inner = { "CollisionProfilesToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionProfilesToIgnore_MetaData[] = {
		{ "Category", "Combo Graph|Traces" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of collision profile names to ignore during hit collision. Can be useful to ignore profile for capsule component and ensure hits only register against character meshes */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of collision profile names to ignore during hit collision. Can be useful to ignore profile for capsule component and ensure hits only register against character meshes" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionProfilesToIgnore = { "CollisionProfilesToIgnore", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, CollisionProfilesToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionProfilesToIgnore_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionProfilesToIgnore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnHitRegistered_MetaData[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate invoked when a successful hit is registered, only on server */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate invoked when a successful hit is registered, only on server" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnHitRegistered = { "OnHitRegistered", nullptr, (EPropertyFlags)0x0010200010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, OnHitRegistered), Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphOnHitRegisteredDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnHitRegistered_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnHitRegistered_MetaData) }; // 2279854581
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnTraceStart_MetaData[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate invoked when we start to check for collision traces on registered meshes */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate invoked when we start to check for collision traces on registered meshes" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnTraceStart = { "OnTraceStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, OnTraceStart), Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphSimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnTraceStart_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnTraceStart_MetaData) }; // 712141345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnTraceEnd_MetaData[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate invoked when we end the collision tracing process on registered meshes */" },
#endif
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate invoked when we end the collision tracing process on registered meshes" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnTraceEnd = { "OnTraceEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, OnTraceEnd), Z_Construct_UDelegateFunction_UComboGraphCollisionComponent_ComboGraphSimpleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnTraceEnd_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnTraceEnd_MetaData) }; // 712141345
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_HitActors_Inner = { "HitActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_HitActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_HitActors = { "HitActors", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, HitActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_HitActors_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_HitActors_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_RegisteredMeshes_Inner = { "RegisteredMeshes", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_RegisteredMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ComboGraphCollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_RegisteredMeshes = { "RegisteredMeshes", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphCollisionComponent, RegisteredMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_RegisteredMeshes_MetaData), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_RegisteredMeshes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphCollisionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bShouldLogHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_DebugDrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_TraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_ActorTypesToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_ActorTypesToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionProfilesToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_CollisionProfilesToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnHitRegistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnTraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_OnTraceEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_HitActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_HitActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_RegisteredMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphCollisionComponent_Statics::NewProp_RegisteredMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphCollisionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphCollisionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphCollisionComponent_Statics::ClassParams = {
		&UComboGraphCollisionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboGraphCollisionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphCollisionComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphCollisionComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphCollisionComponent()
	{
		if (!Z_Registration_Info_UClass_UComboGraphCollisionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphCollisionComponent.OuterSingleton, Z_Construct_UClass_UComboGraphCollisionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphCollisionComponent.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphCollisionComponent>()
	{
		return UComboGraphCollisionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphCollisionComponent);
	UComboGraphCollisionComponent::~UComboGraphCollisionComponent() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphCollisionComponent, UComboGraphCollisionComponent::StaticClass, TEXT("UComboGraphCollisionComponent"), &Z_Registration_Info_UClass_UComboGraphCollisionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphCollisionComponent), 1023438055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_4201117607(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphCollisionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
