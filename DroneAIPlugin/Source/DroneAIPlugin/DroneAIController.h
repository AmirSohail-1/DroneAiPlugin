#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "DroneAIController.generated.h"

UCLASS()
class DRONEAIPLUGIN_API ADroneAIController : public AAIController
{
    GENERATED_BODY()

public:
    ADroneAIController();

    virtual void OnPossess(APawn* InPawn) override;
    virtual void OnUnPossess() override;

    UPROPERTY(EditDefaultsOnly, Category = "AI")
    class UBehaviorTree* BehaviorTree;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
    UAIPerceptionComponent* AIPerceptionComponent;

    UFUNCTION()
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

    UFUNCTION(BlueprintCallable, Category = "Drone")
    ADroneNPC* GetControlledDrone() const;

private:
    class ADroneNPC* ControlledDrone;
};