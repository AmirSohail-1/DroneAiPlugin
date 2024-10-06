
// DroneBTTaskNode_FindOptimalPosition.h
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "DroneBTTaskNode_FindOptimalPosition.generated.h"

UCLASS()
class DRONEAIPLUGIN_API UDroneBTTaskNode_FindOptimalPosition : public UBTTaskNode
{
    GENERATED_BODY()

public:
    UDroneBTTaskNode_FindOptimalPosition();

    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

    UPROPERTY(EditAnywhere, Category = "EQS")
    UEnvQuery* EQSQuery;

private:
    void OnQueryFinished(TSharedPtr<FEnvQueryResult> Result);
};
