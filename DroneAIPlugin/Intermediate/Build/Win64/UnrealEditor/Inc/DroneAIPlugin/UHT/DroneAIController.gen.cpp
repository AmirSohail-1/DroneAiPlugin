// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneAIPlugin/DroneAIController.h"
#include "AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_ADroneAIController();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_ADroneAIController_NoRegister();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_ADroneNPC_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneAIPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ADroneAIController::execGetControlledDrone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADroneNPC**)Z_Param__Result=P_THIS->GetControlledDrone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADroneAIController::execOnTargetPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void ADroneAIController::StaticRegisterNativesADroneAIController()
	{
		UClass* Class = ADroneAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControlledDrone", &ADroneAIController::execGetControlledDrone },
			{ "OnTargetPerceptionUpdated", &ADroneAIController::execOnTargetPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics
	{
		struct DroneAIController_eventGetControlledDrone_Parms
		{
			ADroneNPC* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DroneAIController_eventGetControlledDrone_Parms, ReturnValue), Z_Construct_UClass_ADroneNPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "DroneAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADroneAIController, nullptr, "GetControlledDrone", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics::DroneAIController_eventGetControlledDrone_Parms), Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADroneAIController_GetControlledDrone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADroneAIController_GetControlledDrone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics
	{
		struct DroneAIController_eventOnTargetPerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DroneAIController_eventOnTargetPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DroneAIController_eventOnTargetPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) }; // 576118341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DroneAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADroneAIController, nullptr, "OnTargetPerceptionUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::DroneAIController_eventOnTargetPerceptionUpdated_Parms), Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADroneAIController);
	UClass* Z_Construct_UClass_ADroneAIController_NoRegister()
	{
		return ADroneAIController::StaticClass();
	}
	struct Z_Construct_UClass_ADroneAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADroneAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADroneAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADroneAIController_GetControlledDrone, "GetControlledDrone" }, // 3352146419
		{ &Z_Construct_UFunction_ADroneAIController_OnTargetPerceptionUpdated, "OnTargetPerceptionUpdated" }, // 2938194916
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DroneAIController.h" },
		{ "ModuleRelativePath", "DroneAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneAIController_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "DroneAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADroneAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADroneAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADroneAIController_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADroneAIController_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneAIController_Statics::NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DroneAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADroneAIController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADroneAIController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADroneAIController_Statics::NewProp_AIPerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADroneAIController_Statics::NewProp_AIPerceptionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADroneAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADroneAIController_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADroneAIController_Statics::NewProp_AIPerceptionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADroneAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADroneAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADroneAIController_Statics::ClassParams = {
		&ADroneAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADroneAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADroneAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADroneAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADroneAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADroneAIController()
	{
		if (!Z_Registration_Info_UClass_ADroneAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADroneAIController.OuterSingleton, Z_Construct_UClass_ADroneAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADroneAIController.OuterSingleton;
	}
	template<> DRONEAIPLUGIN_API UClass* StaticClass<ADroneAIController>()
	{
		return ADroneAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADroneAIController);
	ADroneAIController::~ADroneAIController() {}
	struct Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADroneAIController, ADroneAIController::StaticClass, TEXT("ADroneAIController"), &Z_Registration_Info_UClass_ADroneAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADroneAIController), 480301504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_4175541837(TEXT("/Script/DroneAIPlugin"),
		Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
