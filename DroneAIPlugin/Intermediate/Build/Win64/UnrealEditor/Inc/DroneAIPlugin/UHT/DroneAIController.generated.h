// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DroneAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADroneNPC;
struct FAIStimulus;
#ifdef DRONEAIPLUGIN_DroneAIController_generated_h
#error "DroneAIController.generated.h already included, missing '#pragma once' in DroneAIController.h"
#endif
#define DRONEAIPLUGIN_DroneAIController_generated_h

#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_SPARSE_DATA
#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetControlledDrone); \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated);


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetControlledDrone); \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated);


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_ACCESSORS
#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADroneAIController(); \
	friend struct Z_Construct_UClass_ADroneAIController_Statics; \
public: \
	DECLARE_CLASS(ADroneAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(ADroneAIController)


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_INCLASS \
private: \
	static void StaticRegisterNativesADroneAIController(); \
	friend struct Z_Construct_UClass_ADroneAIController_Statics; \
public: \
	DECLARE_CLASS(ADroneAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(ADroneAIController)


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADroneAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADroneAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADroneAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADroneAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADroneAIController(ADroneAIController&&); \
	NO_API ADroneAIController(const ADroneAIController&); \
public: \
	NO_API virtual ~ADroneAIController();


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADroneAIController(ADroneAIController&&); \
	NO_API ADroneAIController(const ADroneAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADroneAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADroneAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADroneAIController) \
	NO_API virtual ~ADroneAIController();


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_8_PROLOG
#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_SPARSE_DATA \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_RPC_WRAPPERS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_ACCESSORS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_INCLASS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_SPARSE_DATA \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_ACCESSORS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_INCLASS_NO_PURE_DECLS \
	FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONEAIPLUGIN_API UClass* StaticClass<class ADroneAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WaveFlux_Plugins_DroneAIPlugin_Source_DroneAIPlugin_DroneAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
