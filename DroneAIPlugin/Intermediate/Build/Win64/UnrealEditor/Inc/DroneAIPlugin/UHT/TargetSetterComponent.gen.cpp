// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneAIPlugin/TargetSetterComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetSetterComponent() {}
// Cross Module References
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UTargetSetterComponent();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UTargetSetterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DroneAIPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UTargetSetterComponent::execSetTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_NewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTarget(Z_Param_NewTarget);
		P_NATIVE_END;
	}
	void UTargetSetterComponent::StaticRegisterNativesUTargetSetterComponent()
	{
		UClass* Class = UTargetSetterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTarget", &UTargetSetterComponent::execSetTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics
	{
		struct TargetSetterComponent_eventSetTarget_Parms
		{
			AActor* NewTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetSetterComponent_eventSetTarget_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics::NewProp_NewTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TargetSetterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSetterComponent, nullptr, "SetTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics::TargetSetterComponent_eventSetTarget_Parms), Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSetterComponent_SetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetSetterComponent_SetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetSetterComponent);
	UClass* Z_Construct_UClass_UTargetSetterComponent_NoRegister()
	{
		return UTargetSetterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTargetSetterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetSetterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetSetterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetSetterComponent_SetTarget, "SetTarget" }, // 2771768388
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSetterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TargetSetterComponent.h" },
		{ "ModuleRelativePath", "TargetSetterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSetterComponent_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "ModuleRelativePath", "TargetSetterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetSetterComponent_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetSetterComponent, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTargetSetterComponent_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSetterComponent_Statics::NewProp_CurrentTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetSetterComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSetterComponent_Statics::NewProp_CurrentTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetSetterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetSetterComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetSetterComponent_Statics::ClassParams = {
		&UTargetSetterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetSetterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSetterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetSetterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSetterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetSetterComponent()
	{
		if (!Z_Registration_Info_UClass_UTargetSetterComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetSetterComponent.OuterSingleton, Z_Construct_UClass_UTargetSetterComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetSetterComponent.OuterSingleton;
	}
	template<> DRONEAIPLUGIN_API UClass* StaticClass<UTargetSetterComponent>()
	{
		return UTargetSetterComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetSetterComponent);
	UTargetSetterComponent::~UTargetSetterComponent() {}
	struct Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_TargetSetterComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_TargetSetterComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetSetterComponent, UTargetSetterComponent::StaticClass, TEXT("UTargetSetterComponent"), &Z_Registration_Info_UClass_UTargetSetterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetSetterComponent), 2080170667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_TargetSetterComponent_h_3022293059(TEXT("/Script/DroneAIPlugin"),
		Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_TargetSetterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_TargetSetterComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
