// DroneBTTaskNode_TakeScreenshot.h
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "DroneBTTaskNode_TakeScreenshot.generated.h"

UCLASS()
class DRONEAIPLUGIN_API UDroneBTTaskNode_TakeScreenshot : public UBTTaskNode
{
    GENERATED_BODY()

public:
    UDroneBTTaskNode_TakeScreenshot();

    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};