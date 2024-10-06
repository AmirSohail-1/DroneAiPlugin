// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneAIPlugin/DroneCameraWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneCameraWidget() {}
// Cross Module References
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_ADroneNPC_NoRegister();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UDroneCameraWidget();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UDroneCameraWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DroneAIPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UDroneCameraWidget::execUpdateCameraFeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCameraFeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDroneCameraWidget::execSetDroneReference)
	{
		P_GET_OBJECT(ADroneNPC,Z_Param_Drone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDroneReference(Z_Param_Drone);
		P_NATIVE_END;
	}
	void UDroneCameraWidget::StaticRegisterNativesUDroneCameraWidget()
	{
		UClass* Class = UDroneCameraWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDroneReference", &UDroneCameraWidget::execSetDroneReference },
			{ "UpdateCameraFeed", &UDroneCameraWidget::execUpdateCameraFeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics
	{
		struct DroneCameraWidget_eventSetDroneReference_Parms
		{
			ADroneNPC* Drone;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Drone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics::NewProp_Drone = { "Drone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DroneCameraWidget_eventSetDroneReference_Parms, Drone), Z_Construct_UClass_ADroneNPC_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics::NewProp_Drone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Camera" },
		{ "ModuleRelativePath", "DroneCameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDroneCameraWidget, nullptr, "SetDroneReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics::DroneCameraWidget_eventSetDroneReference_Parms), Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDroneCameraWidget_UpdateCameraFeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDroneCameraWidget_UpdateCameraFeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Camera" },
		{ "ModuleRelativePath", "DroneCameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDroneCameraWidget_UpdateCameraFeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDroneCameraWidget, nullptr, "UpdateCameraFeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDroneCameraWidget_UpdateCameraFeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDroneCameraWidget_UpdateCameraFeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDroneCameraWidget_UpdateCameraFeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDroneCameraWidget_UpdateCameraFeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDroneCameraWidget);
	UClass* Z_Construct_UClass_UDroneCameraWidget_NoRegister()
	{
		return UDroneCameraWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDroneCameraWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFeedImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraFeedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDrone_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetDrone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDroneCameraWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDroneCameraWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDroneCameraWidget_SetDroneReference, "SetDroneReference" }, // 1295599116
		{ &Z_Construct_UFunction_UDroneCameraWidget_UpdateCameraFeed, "UpdateCameraFeed" }, // 2173729273
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneCameraWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Forward declaration\n" },
		{ "IncludePath", "DroneCameraWidget.h" },
		{ "ModuleRelativePath", "DroneCameraWidget.h" },
		{ "ToolTip", "Forward declaration" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneCameraWidget_Statics::NewProp_CameraFeedImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DroneCameraWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DroneCameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDroneCameraWidget_Statics::NewProp_CameraFeedImage = { "CameraFeedImage", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDroneCameraWidget, CameraFeedImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDroneCameraWidget_Statics::NewProp_CameraFeedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneCameraWidget_Statics::NewProp_CameraFeedImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDroneCameraWidget_Statics::NewProp_TargetDrone_MetaData[] = {
		{ "ModuleRelativePath", "DroneCameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDroneCameraWidget_Statics::NewProp_TargetDrone = { "TargetDrone", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDroneCameraWidget, TargetDrone), Z_Construct_UClass_ADroneNPC_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDroneCameraWidget_Statics::NewProp_TargetDrone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneCameraWidget_Statics::NewProp_TargetDrone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDroneCameraWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneCameraWidget_Statics::NewProp_CameraFeedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDroneCameraWidget_Statics::NewProp_TargetDrone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDroneCameraWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDroneCameraWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDroneCameraWidget_Statics::ClassParams = {
		&UDroneCameraWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDroneCameraWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDroneCameraWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDroneCameraWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDroneCameraWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDroneCameraWidget()
	{
		if (!Z_Registration_Info_UClass_UDroneCameraWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDroneCameraWidget.OuterSingleton, Z_Construct_UClass_UDroneCameraWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDroneCameraWidget.OuterSingleton;
	}
	template<> DRONEAIPLUGIN_API UClass* StaticClass<UDroneCameraWidget>()
	{
		return UDroneCameraWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDroneCameraWidget);
	UDroneCameraWidget::~UDroneCameraWidget() {}
	struct Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDroneCameraWidget, UDroneCameraWidget::StaticClass, TEXT("UDroneCameraWidget"), &Z_Registration_Info_UClass_UDroneCameraWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDroneCameraWidget), 3174813848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_357620745(TEXT("/Script/DroneAIPlugin"),
		Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneCameraWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
