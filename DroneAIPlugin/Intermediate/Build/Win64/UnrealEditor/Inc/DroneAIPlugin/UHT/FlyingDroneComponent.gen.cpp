// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneAIPlugin/FlyingDroneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingDroneComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UFlyingDroneComponent();
	DRONEAIPLUGIN_API UClass* Z_Construct_UClass_UFlyingDroneComponent_NoRegister();
	DRONEAIPLUGIN_API UEnum* Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DroneAIPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComplexMovementType;
	static UEnum* EComplexMovementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComplexMovementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComplexMovementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType, Z_Construct_UPackage__Script_DroneAIPlugin(), TEXT("EComplexMovementType"));
		}
		return Z_Registration_Info_UEnum_EComplexMovementType.OuterSingleton;
	}
	template<> DRONEAIPLUGIN_API UEnum* StaticEnum<EComplexMovementType>()
	{
		return EComplexMovementType_StaticEnum();
	}
	struct Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType_Statics::Enumerators[] = {
		{ "EComplexMovementType::RollMontage", (int64)EComplexMovementType::RollMontage },
		{ "EComplexMovementType::UpDownMovement", (int64)EComplexMovementType::UpDownMovement },
		{ "EComplexMovementType::SineWave", (int64)EComplexMovementType::SineWave },
		{ "EComplexMovementType::SpiralMovement", (int64)EComplexMovementType::SpiralMovement },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
		{ "RollMontage.Name", "EComplexMovementType::RollMontage" },
		{ "SineWave.Name", "EComplexMovementType::SineWave" },
		{ "SpiralMovement.Name", "EComplexMovementType::SpiralMovement" },
		{ "UpDownMovement.Name", "EComplexMovementType::UpDownMovement" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DroneAIPlugin,
		nullptr,
		"EComplexMovementType",
		"EComplexMovementType",
		Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType()
	{
		if (!Z_Registration_Info_UEnum_EComplexMovementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComplexMovementType.InnerSingleton, Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComplexMovementType.InnerSingleton;
	}
	DEFINE_FUNCTION(UFlyingDroneComponent::execGetFocusTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetFocusTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlyingDroneComponent::execClearFocusTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearFocusTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlyingDroneComponent::execSetFocusTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlyingDroneComponent::execPerformComplexMovement)
	{
		P_GET_ENUM(EComplexMovementType,Z_Param_MovementType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformComplexMovement(EComplexMovementType(Z_Param_MovementType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlyingDroneComponent::execRotateTowards)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LookAtPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateTowards(Z_Param_Out_LookAtPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlyingDroneComponent::execMoveToLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToLocation(Z_Param_Out_TargetLocation);
		P_NATIVE_END;
	}
	void UFlyingDroneComponent::StaticRegisterNativesUFlyingDroneComponent()
	{
		UClass* Class = UFlyingDroneComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearFocusTarget", &UFlyingDroneComponent::execClearFocusTarget },
			{ "GetFocusTarget", &UFlyingDroneComponent::execGetFocusTarget },
			{ "MoveToLocation", &UFlyingDroneComponent::execMoveToLocation },
			{ "PerformComplexMovement", &UFlyingDroneComponent::execPerformComplexMovement },
			{ "RotateTowards", &UFlyingDroneComponent::execRotateTowards },
			{ "SetFocusTarget", &UFlyingDroneComponent::execSetFocusTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlyingDroneComponent_ClearFocusTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlyingDroneComponent_ClearFocusTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlyingDroneComponent_ClearFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlyingDroneComponent, nullptr, "ClearFocusTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlyingDroneComponent_ClearFocusTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_ClearFocusTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlyingDroneComponent_ClearFocusTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlyingDroneComponent_ClearFocusTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics
	{
		struct FlyingDroneComponent_eventGetFocusTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyingDroneComponent_eventGetFocusTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlyingDroneComponent, nullptr, "GetFocusTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics::FlyingDroneComponent_eventGetFocusTarget_Parms), Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics
	{
		struct FlyingDroneComponent_eventMoveToLocation_Parms
		{
			FVector TargetLocation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyingDroneComponent_eventMoveToLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::NewProp_TargetLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::NewProp_TargetLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlyingDroneComponent, nullptr, "MoveToLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::FlyingDroneComponent_eventMoveToLocation_Parms), Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics
	{
		struct FlyingDroneComponent_eventPerformComplexMovement_Parms
		{
			EComplexMovementType MovementType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyingDroneComponent_eventPerformComplexMovement_Parms, MovementType), Z_Construct_UEnum_DroneAIPlugin_EComplexMovementType, METADATA_PARAMS(nullptr, 0) }; // 3705718511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::NewProp_MovementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::NewProp_MovementType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlyingDroneComponent, nullptr, "PerformComplexMovement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::FlyingDroneComponent_eventPerformComplexMovement_Parms), Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics
	{
		struct FlyingDroneComponent_eventRotateTowards_Parms
		{
			FVector LookAtPoint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::NewProp_LookAtPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::NewProp_LookAtPoint = { "LookAtPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyingDroneComponent_eventRotateTowards_Parms, LookAtPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::NewProp_LookAtPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::NewProp_LookAtPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::NewProp_LookAtPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlyingDroneComponent, nullptr, "RotateTowards", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::FlyingDroneComponent_eventRotateTowards_Parms), Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics
	{
		struct FlyingDroneComponent_eventSetFocusTarget_Parms
		{
			AActor* Target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlyingDroneComponent_eventSetFocusTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlyingDroneComponent, nullptr, "SetFocusTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics::FlyingDroneComponent_eventSetFocusTarget_Parms), Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlyingDroneComponent);
	UClass* Z_Construct_UClass_UFlyingDroneComponent_NoRegister()
	{
		return UFlyingDroneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFlyingDroneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaypointRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaypointRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComplexMovementFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ComplexMovementFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComplexMovementAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ComplexMovementAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlyingDroneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlyingDroneComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlyingDroneComponent_ClearFocusTarget, "ClearFocusTarget" }, // 2353126769
		{ &Z_Construct_UFunction_UFlyingDroneComponent_GetFocusTarget, "GetFocusTarget" }, // 1918264279
		{ &Z_Construct_UFunction_UFlyingDroneComponent_MoveToLocation, "MoveToLocation" }, // 3606496844
		{ &Z_Construct_UFunction_UFlyingDroneComponent_PerformComplexMovement, "PerformComplexMovement" }, // 447371821
		{ &Z_Construct_UFunction_UFlyingDroneComponent_RotateTowards, "RotateTowards" }, // 1961770132
		{ &Z_Construct_UFunction_UFlyingDroneComponent_SetFocusTarget, "SetFocusTarget" }, // 1251756492
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlyingDroneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FlyingDroneComponent.h" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlyingDroneComponent, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlyingDroneComponent, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_WaypointRadius_MetaData[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_WaypointRadius = { "WaypointRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlyingDroneComponent, WaypointRadius), METADATA_PARAMS(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_WaypointRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_WaypointRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_ComplexMovementFrequency_MetaData[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_ComplexMovementFrequency = { "ComplexMovementFrequency", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlyingDroneComponent, ComplexMovementFrequency), METADATA_PARAMS(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_ComplexMovementFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_ComplexMovementFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_ComplexMovementAmplitude_MetaData[] = {
		{ "Category", "Drone Movement" },
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_ComplexMovementAmplitude = { "ComplexMovementAmplitude", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlyingDroneComponent, ComplexMovementAmplitude), METADATA_PARAMS(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_ComplexMovementAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_ComplexMovementAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_FocusTarget_MetaData[] = {
		{ "ModuleRelativePath", "FlyingDroneComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_FocusTarget = { "FocusTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlyingDroneComponent, FocusTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_FocusTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_FocusTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlyingDroneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_WaypointRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_ComplexMovementFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_ComplexMovementAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingDroneComponent_Statics::NewProp_FocusTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlyingDroneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlyingDroneComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlyingDroneComponent_Statics::ClassParams = {
		&UFlyingDroneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlyingDroneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingDroneComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlyingDroneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingDroneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlyingDroneComponent()
	{
		if (!Z_Registration_Info_UClass_UFlyingDroneComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlyingDroneComponent.OuterSingleton, Z_Construct_UClass_UFlyingDroneComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlyingDroneComponent.OuterSingleton;
	}
	template<> DRONEAIPLUGIN_API UClass* StaticClass<UFlyingDroneComponent>()
	{
		return UFlyingDroneComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlyingDroneComponent);
	UFlyingDroneComponent::~UFlyingDroneComponent() {}
	struct Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_Statics::EnumInfo[] = {
		{ EComplexMovementType_StaticEnum, TEXT("EComplexMovementType"), &Z_Registration_Info_UEnum_EComplexMovementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3705718511U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlyingDroneComponent, UFlyingDroneComponent::StaticClass, TEXT("UFlyingDroneComponent"), &Z_Registration_Info_UClass_UFlyingDroneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlyingDroneComponent), 4083091908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_919294318(TEXT("/Script/DroneAIPlugin"),
		Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_FlyingDroneComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
