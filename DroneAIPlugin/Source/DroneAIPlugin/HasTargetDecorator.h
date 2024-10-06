// HasTargetDecorator.h
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "HasTargetDecorator.generated.h"

UCLASS()
class DRONEAIPLUGIN_API UHasTargetDecorator : public UBTDecorator
{
	GENERATED_BODY()

public:
	UHasTargetDecorator();

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector TargetKey;
};