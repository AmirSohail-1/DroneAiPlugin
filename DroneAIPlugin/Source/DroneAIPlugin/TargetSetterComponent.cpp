
#include "TargetSetterComponent.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UTargetSetterComponent::UTargetSetterComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UTargetSetterComponent::SetTarget(AActor* NewTarget)
{
	if (NewTarget != CurrentTarget)
	{
		CurrentTarget = NewTarget;

		// Find the closest DroneNPC and set its target
		AActor* OwningActor = GetOwner();
		if (OwningActor)
		{
			TArray<AActor*> FoundActors;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADroneNPC::StaticClass(), FoundActors);

			ADroneNPC* ClosestDrone = nullptr;
			float ClosestDistance = MAX_FLT;

			for (AActor* Actor : FoundActors)
			{
				float Distance = FVector::DistSquared(OwningActor->GetActorLocation(), Actor->GetActorLocation());
				if (Distance < ClosestDistance)
				{
					ClosestDrone = Cast<ADroneNPC>(Actor);
					ClosestDistance = Distance;
				}
			}

			if (ClosestDrone)
			{
				AAIController* AIController = Cast<AAIController>(ClosestDrone->GetController());
				if (AIController)
				{
					UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
					if (BlackboardComp)
					{
						BlackboardComp->SetValueAsObject("TargetActor", NewTarget);
						BlackboardComp->SetValueAsVector("TargetLocation", NewTarget->GetActorLocation());
					}
				}
			}
		}
	}
}