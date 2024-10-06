
// BTTask_PerformComplexMovement.cpp
#include "BTTask_PerformComplexMovement.h"
#include "AIController.h"
#include "DroneNPC.h"

UBTTask_PerformComplexMovement::UBTTask_PerformComplexMovement()
{
    NodeName = "Perform Complex Movement";
}

EBTNodeResult::Type UBTTask_PerformComplexMovement::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    AAIController* AIController = OwnerComp.GetAIOwner();
    if (!AIController)
    {
        return EBTNodeResult::Failed;
    }

    ADroneNPC* Drone = Cast<ADroneNPC>(AIController->GetPawn());
    if (!Drone || !Drone->FlyingDroneComponent)
    {
        return EBTNodeResult::Failed;
    }

    Drone->FlyingDroneComponent->PerformComplexMovement(MovementType);
    return EBTNodeResult::Succeeded;
}