// BTTask_PerformComplexMovement.h
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "FlyingDroneComponent.h"
#include "BTTask_PerformComplexMovement.generated.h"

UCLASS()
class DRONEAIPLUGIN_API UBTTask_PerformComplexMovement : public UBTTaskNode
{
    GENERATED_BODY()

public:
    UBTTask_PerformComplexMovement();

    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

    UPROPERTY(EditAnywhere, Category = "Drone Movement")
    EComplexMovementType MovementType;
};