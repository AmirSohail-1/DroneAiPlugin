
// DroneEQSContext.cpp
#include "DroneEQSContext.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"
#include "DroneAIController.h"

void UDroneEQSContext::ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const
{
    Super::ProvideContext(QueryInstance, ContextData);

    ADroneAIController* DroneAI = Cast<ADroneAIController>(QueryInstance.Owner.Get());
    if (!DroneAI) return;

    AActor* TargetActor = Cast<AActor>(DroneAI->GetBlackboardComponent()->GetValueAsObject("TargetActor"));
    if (TargetActor)
    {
        UEnvQueryItemType_Point::SetContextHelper(ContextData, TargetActor->GetActorLocation());
    }
    else if (DroneAI->GetPawn())
    {
        UEnvQueryItemType_Point::SetContextHelper(ContextData, DroneAI->GetPawn()->GetActorLocation());
    }
}