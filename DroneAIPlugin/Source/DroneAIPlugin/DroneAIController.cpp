 
// DroneAIController.cpp
#include "DroneAIController.h"
#include "DroneNPC.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISenseConfig_Sight.h"

ADroneAIController::ADroneAIController()
{
    AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
    SetPerceptionComponent(*AIPerceptionComponent);

    UAISenseConfig_Sight* SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
    SightConfig->SightRadius = 3000.0f;
    SightConfig->LoseSightRadius = 3500.0f;
    SightConfig->PeripheralVisionAngleDegrees = 90.0f;
    SightConfig->SetMaxAge(5.0f);
    SightConfig->AutoSuccessRangeFromLastSeenLocation = 520.0f;
    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
    SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
    SightConfig->DetectionByAffiliation.bDetectFriendlies = true;

    AIPerceptionComponent->ConfigureSense(*SightConfig);
    AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
}

void ADroneAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    ControlledDrone = Cast<ADroneNPC>(InPawn);
    if (ControlledDrone && BehaviorTree)
    {
        RunBehaviorTree(BehaviorTree);
    }

    AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &ADroneAIController::OnTargetPerceptionUpdated);
}

void ADroneAIController::OnUnPossess()
{
    Super::OnUnPossess();

    ControlledDrone = nullptr;
    AIPerceptionComponent->OnTargetPerceptionUpdated.RemoveDynamic(this, &ADroneAIController::OnTargetPerceptionUpdated);
}

void ADroneAIController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
    if (Stimulus.WasSuccessfullySensed())
    {
        UE_LOG(LogTemp, Log, TEXT("Target detected: %s"), *Actor->GetName());
        GetBlackboardComponent()->SetValueAsObject("TargetActor", Actor);
        GetBlackboardComponent()->SetValueAsVector("TargetLocation", Actor->GetActorLocation());
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("Lost sight of target: %s"), *Actor->GetName());
        GetBlackboardComponent()->ClearValue("TargetActor");
        GetBlackboardComponent()->ClearValue("TargetLocation");
    }
}

ADroneNPC* ADroneAIController::GetControlledDrone() const
{
    return ControlledDrone;
}