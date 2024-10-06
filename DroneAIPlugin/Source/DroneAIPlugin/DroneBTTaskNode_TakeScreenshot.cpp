// DroneBTTaskNode_TakeScreenshot.cpp
#include "DroneBTTaskNode_TakeScreenshot.h"
#include "AIController.h"
#include "DroneNPC.h"

UDroneBTTaskNode_TakeScreenshot::UDroneBTTaskNode_TakeScreenshot()
{
    NodeName = "Take Screenshot";
}

EBTNodeResult::Type UDroneBTTaskNode_TakeScreenshot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    AAIController* AIController = OwnerComp.GetAIOwner();
    if (!AIController)
    {
        return EBTNodeResult::Failed;
    }

    ADroneNPC* Drone = Cast<ADroneNPC>(AIController->GetPawn());
    if (!Drone)
    {
        return EBTNodeResult::Failed;
    }

    Drone->TakeScreenshot();
    return EBTNodeResult::Succeeded;
}