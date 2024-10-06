#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlyingDroneComponent.generated.h"

UENUM(BlueprintType)
enum class EComplexMovementType : uint8
{
    RollMontage,
    UpDownMovement,
    SineWave,
    SpiralMovement
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DRONEAIPLUGIN_API UFlyingDroneComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UFlyingDroneComponent();

    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UFUNCTION(BlueprintCallable, Category = "Drone Movement")
    void MoveToLocation(const FVector& TargetLocation);

    UFUNCTION(BlueprintCallable, Category = "Drone Movement")
    void RotateTowards(const FVector& LookAtPoint);

    UFUNCTION(BlueprintCallable, Category = "Drone Movement")
    void PerformComplexMovement(EComplexMovementType MovementType);

    UFUNCTION(BlueprintCallable, Category = "Drone Movement")
    void SetFocusTarget(AActor* Target);

    UFUNCTION(BlueprintCallable, Category = "Drone Movement")
    void ClearFocusTarget();

    UFUNCTION(BlueprintCallable, Category = "Drone Movement")
    AActor* GetFocusTarget() const { return FocusTarget; }

    void GenerateWaypoints();

private:
    UPROPERTY(EditAnywhere, Category = "Drone Movement")
    float MovementSpeed = 500.0f;

    UPROPERTY(EditAnywhere, Category = "Drone Movement")
    float RotationSpeed = 2.0f;

    UPROPERTY(EditAnywhere, Category = "Drone Movement")
    float WaypointRadius = 100.0f;

    UPROPERTY(EditAnywhere, Category = "Drone Movement")
    float ComplexMovementFrequency = 1.0f;

    UPROPERTY(EditAnywhere, Category = "Drone Movement")
    float ComplexMovementAmplitude = 100.0f;

    UPROPERTY()
    AActor* FocusTarget;

    FVector StartLocation;
    float MovementTime;

    void PerformRollMontage(float DeltaTime);
    void PerformUpDownMovement(float DeltaTime);
    void PerformSineWave(float DeltaTime);
    void PerformSpiralMovement(float DeltaTime);

    TArray<FVector> Waypoints;
    int32 CurrentWaypointIndex;

    
    void MoveAlongWaypoints(float DeltaTime);
};