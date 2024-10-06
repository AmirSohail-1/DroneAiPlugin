// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneAIPlugin/DroneNPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDroneNPC() {}
// Cross Module References
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_ADroneNPC();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_ADroneNPC_NoRegister();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UFlyingDroneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DroneAIPlugin();
// End Cross Module References
	DEFINE_FUNCTION(ADroneNPC::execOnSetTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSetTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADroneNPC::execSetupInputBindings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputBindings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADroneNPC::execSetViewLineTraceTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewLineTraceTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADroneNPC::execOnComplexMovement4Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComplexMovement4Pressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADroneNPC::execOnComplexMovement3Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComplexMovement3Pressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADroneNPC::execOnComplexMovement2Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComplexMovement2Pressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADroneNPC::execOnComplexMovement1Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComplexMovement1Pressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADroneNPC::execGetCameraFeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetCameraFeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADroneNPC::execTakeScreenshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeScreenshot();
		P_NATIVE_END;
	}
	void ADroneNPC::StaticRegisterNativesADroneNPC()
	{
		UClass* Class = ADroneNPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraFeed", &ADroneNPC::execGetCameraFeed },
			{ "OnComplexMovement1Pressed", &ADroneNPC::execOnComplexMovement1Pressed },
			{ "OnComplexMovement2Pressed", &ADroneNPC::execOnComplexMovement2Pressed },
			{ "OnComplexMovement3Pressed", &ADroneNPC::execOnComplexMovement3Pressed },
			{ "OnComplexMovement4Pressed", &ADroneNPC::execOnComplexMovement4Pressed },
			{ "OnSetTarget", &ADroneNPC::execOnSetTarget },
			{ "SetupInputBindings", &ADroneNPC::execSetupInputBindings },
			{ "SetViewLineTraceTarget", &ADroneNPC::execSetViewLineTraceTarget },
			{ "TakeScreenshot", &ADroneNPC::execTakeScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics
	{
		struct DroneNPC_eventGetCameraFeed_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DroneNPC_eventGetCameraFeed_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADroneNPC, nullptr, "GetCameraFeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics::DroneNPC_eventGetCameraFeed_Parms), Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADroneNPC_GetCameraFeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADroneNPC_GetCameraFeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADroneNPC_OnComplexMovement1Pressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADroneNPC_OnComplexMovement1Pressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Input" },
		{ "Comment", "// Camera Movement\n" },
		{ "ModuleRelativePath", "DroneNPC.h" },
		{ "ToolTip", "Camera Movement" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADroneNPC_OnComplexMovement1Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADroneNPC, nullptr, "OnComplexMovement1Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADroneNPC_OnComplexMovement1Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneNPC_OnComplexMovement1Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADroneNPC_OnComplexMovement1Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADroneNPC_OnComplexMovement1Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADroneNPC_OnComplexMovement2Pressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADroneNPC_OnComplexMovement2Pressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Input" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADroneNPC_OnComplexMovement2Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADroneNPC, nullptr, "OnComplexMovement2Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADroneNPC_OnComplexMovement2Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneNPC_OnComplexMovement2Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADroneNPC_OnComplexMovement2Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADroneNPC_OnComplexMovement2Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADroneNPC_OnComplexMovement3Pressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADroneNPC_OnComplexMovement3Pressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Input" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADroneNPC_OnComplexMovement3Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADroneNPC, nullptr, "OnComplexMovement3Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADroneNPC_OnComplexMovement3Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneNPC_OnComplexMovement3Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADroneNPC_OnComplexMovement3Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADroneNPC_OnComplexMovement3Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADroneNPC_OnComplexMovement4Pressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADroneNPC_OnComplexMovement4Pressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Input" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADroneNPC_OnComplexMovement4Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADroneNPC, nullptr, "OnComplexMovement4Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADroneNPC_OnComplexMovement4Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneNPC_OnComplexMovement4Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADroneNPC_OnComplexMovement4Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADroneNPC_OnComplexMovement4Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADroneNPC_OnSetTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADroneNPC_OnSetTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADroneNPC_OnSetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADroneNPC, nullptr, "OnSetTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADroneNPC_OnSetTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneNPC_OnSetTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADroneNPC_OnSetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADroneNPC_OnSetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADroneNPC_SetupInputBindings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADroneNPC_SetupInputBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Input" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADroneNPC_SetupInputBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADroneNPC, nullptr, "SetupInputBindings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADroneNPC_SetupInputBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneNPC_SetupInputBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADroneNPC_SetupInputBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADroneNPC_SetupInputBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADroneNPC_SetViewLineTraceTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADroneNPC_SetViewLineTraceTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADroneNPC_SetViewLineTraceTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADroneNPC, nullptr, "SetViewLineTraceTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADroneNPC_SetViewLineTraceTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneNPC_SetViewLineTraceTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADroneNPC_SetViewLineTraceTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADroneNPC_SetViewLineTraceTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADroneNPC_TakeScreenshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADroneNPC_TakeScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADroneNPC_TakeScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADroneNPC, nullptr, "TakeScreenshot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADroneNPC_TakeScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADroneNPC_TakeScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADroneNPC_TakeScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADroneNPC_TakeScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADroneNPC);
	UClass* Z_Construct_UClass_ADroneNPC_NoRegister()
	{
		return ADroneNPC::StaticClass();
	}
	struct Z_Construct_UClass_ADroneNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlyingDroneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlyingDroneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFeed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraFeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScreenshotRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADroneNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADroneNPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADroneNPC_GetCameraFeed, "GetCameraFeed" }, // 4029910896
		{ &Z_Construct_UFunction_ADroneNPC_OnComplexMovement1Pressed, "OnComplexMovement1Pressed" }, // 3332637879
		{ &Z_Construct_UFunction_ADroneNPC_OnComplexMovement2Pressed, "OnComplexMovement2Pressed" }, // 332873997
		{ &Z_Construct_UFunction_ADroneNPC_OnComplexMovement3Pressed, "OnComplexMovement3Pressed" }, // 396338183
		{ &Z_Construct_UFunction_ADroneNPC_OnComplexMovement4Pressed, "OnComplexMovement4Pressed" }, // 2292082660
		{ &Z_Construct_UFunction_ADroneNPC_OnSetTarget, "OnSetTarget" }, // 3406777927
		{ &Z_Construct_UFunction_ADroneNPC_SetupInputBindings, "SetupInputBindings" }, // 1422607341
		{ &Z_Construct_UFunction_ADroneNPC_SetViewLineTraceTarget, "SetViewLineTraceTarget" }, // 1375713149
		{ &Z_Construct_UFunction_ADroneNPC_TakeScreenshot, "TakeScreenshot" }, // 403124690
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneNPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DroneNPC.h" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneNPC_Statics::NewProp_FlyingDroneComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADroneNPC_Statics::NewProp_FlyingDroneComponent = { "FlyingDroneComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADroneNPC, FlyingDroneComponent), Z_Construct_UClass_UFlyingDroneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADroneNPC_Statics::NewProp_FlyingDroneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADroneNPC_Statics::NewProp_FlyingDroneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneNPC_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADroneNPC_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADroneNPC, CameraComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADroneNPC_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADroneNPC_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneNPC_Statics::NewProp_CameraFeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADroneNPC_Statics::NewProp_CameraFeed = { "CameraFeed", nullptr, (EPropertyFlags)0x0010000000022005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADroneNPC, CameraFeed), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADroneNPC_Statics::NewProp_CameraFeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADroneNPC_Statics::NewProp_CameraFeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneNPC_Statics::NewProp_ScreenshotRenderTarget_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADroneNPC_Statics::NewProp_ScreenshotRenderTarget = { "ScreenshotRenderTarget", nullptr, (EPropertyFlags)0x0010000000022005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADroneNPC, ScreenshotRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADroneNPC_Statics::NewProp_ScreenshotRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADroneNPC_Statics::NewProp_ScreenshotRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADroneNPC_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "DroneNPC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DroneNPC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADroneNPC_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADroneNPC, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADroneNPC_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADroneNPC_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADroneNPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADroneNPC_Statics::NewProp_FlyingDroneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADroneNPC_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADroneNPC_Statics::NewProp_CameraFeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADroneNPC_Statics::NewProp_ScreenshotRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADroneNPC_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADroneNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADroneNPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADroneNPC_Statics::ClassParams = {
		&ADroneNPC::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADroneNPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADroneNPC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADroneNPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADroneNPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADroneNPC()
	{
		if (!Z_Registration_Info_UClass_ADroneNPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADroneNPC.OuterSingleton, Z_Construct_UClass_ADroneNPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADroneNPC.OuterSingleton;
	}
	template<> DRONEAIPLUGIN_API UClass* StaticClass<ADroneNPC>()
	{
		return ADroneNPC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADroneNPC);
	ADroneNPC::~ADroneNPC() {}
	struct Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneNPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneNPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADroneNPC, ADroneNPC::StaticClass, TEXT("ADroneNPC"), &Z_Registration_Info_UClass_ADroneNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADroneNPC), 3817410311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneNPC_h_608604128(TEXT("/Script/DroneAIPlugin"),
		Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneNPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneNPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
