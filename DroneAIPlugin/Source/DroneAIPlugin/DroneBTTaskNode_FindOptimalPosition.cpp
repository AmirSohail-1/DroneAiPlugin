


// ------------------------------- old logci 
// DroneBTTaskNode_FindOptimalPosition.cpp
#include "DroneBTTaskNode_FindOptimalPosition.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

UDroneBTTaskNode_FindOptimalPosition::UDroneBTTaskNode_FindOptimalPosition()
{
    NodeName = "Find Optimal Position";
}

EBTNodeResult::Type UDroneBTTaskNode_FindOptimalPosition::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    AAIController* AIController = OwnerComp.GetAIOwner();
    if (!AIController || !EQSQuery)
    {
        return EBTNodeResult::Failed;
    }

    FEnvQueryRequest QueryRequest(EQSQuery, AIController->GetPawn());
    QueryRequest.Execute(EEnvQueryRunMode::SingleResult, FQueryFinishedSignature::CreateUObject(this, &UDroneBTTaskNode_FindOptimalPosition::OnQueryFinished));

    return EBTNodeResult::InProgress;
}

//
// void UDroneBTTaskNode_FindOptimalPosition::OnQueryFinished(TSharedPtr<FEnvQueryResult> Result)
// {
//     if (Result->IsSuccessful() && Result->Items.Num() > 0)
//     {
//         FVector OptimalLocation = Result->GetItemAsLocation(0);
//         UBlackboardComponent* BlackboardComp = GetBlackboardComponent();
//         if (BlackboardComp)
//         {
//             BlackboardComp->SetValueAsVector("OptimalPosition", OptimalLocation);
//         }
//         FinishLatentTask(*Cast<UBehaviorTreeComponent>(GetOuter()), EBTNodeResult::Succeeded);
//     }
//     else
//     {
//         FinishLatentTask(*Cast<UBehaviorTreeComponent>(GetOuter()), EBTNodeResult::Failed);
//     }
// }


void UDroneBTTaskNode_FindOptimalPosition::OnQueryFinished(TSharedPtr<FEnvQueryResult> Result)
{
    if (Result->IsSuccessful() && Result->Items.Num() > 0)
    {
        FVector OptimalLocation = Result->GetItemAsLocation(0);
        
        // Get the AI controller from the outer object (the behavior tree)
        AAIController* AIController = Cast<AAIController>(GetOuter());
        if (AIController)
        {
            // Retrieve the blackboard component from the AI controller
            UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
            if (BlackboardComp)
            {
                BlackboardComp->SetValueAsVector("OptimalPosition", OptimalLocation);
            }
        }

        FinishLatentTask(*Cast<UBehaviorTreeComponent>(GetOuter()), EBTNodeResult::Succeeded);
    }
    else
    {
        FinishLatentTask(*Cast<UBehaviorTreeComponent>(GetOuter()), EBTNodeResult::Failed);
    }
}



//
//
// #include "DroneBTTaskNode_FindOptimalPosition.h"
// #include "BehaviorTree/BlackboardComponent.h"
// #include "AIController.h"
// #include "EnvironmentQuery/EnvQuery.h"
// #include "EnvironmentQuery/EnvQueryManager.h"
//
// UDroneBTTaskNode_FindOptimalPosition::UDroneBTTaskNode_FindOptimalPosition()
// {
//     NodeName = "Find Optimal Position";
// }
//
// EBTNodeResult::Type UDroneBTTaskNode_FindOptimalPosition::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
// {
//     AAIController* AIController = OwnerComp.GetAIOwner();
//     if (!AIController || !EQSQuery)
//     {
//         UE_LOG(LogTemp, Error, TEXT("FindOptimalPosition: Missing AIController or EQSQuery!"));
//         return EBTNodeResult::Failed;
//     }
//
//     FEnvQueryRequest QueryRequest(EQSQuery, AIController->GetPawn());
//     QueryRequest.Execute(EEnvQueryRunMode::SingleResult, FQueryFinishedSignature::CreateUObject(this, &UDroneBTTaskNode_FindOptimalPosition::OnQueryFinished, &OwnerComp));
//
//     return EBTNodeResult::InProgress;  // Task is still running until query finishes
// }
//
// void UDroneBTTaskNode_FindOptimalPosition::OnQueryFinished(TSharedPtr<FEnvQueryResult> Result, UBehaviorTreeComponent* OwnerComp)
// {
//     if (Result->IsSuccessful() && Result->Items.Num() > 0)
//     {
//         FVector OptimalLocation = Result->GetItemAsLocation(0);
//
//         // Use OwnerComp to get the AI Controller and Blackboard
//         AAIController* AIController = OwnerComp->GetAIOwner();
//         if (AIController)
//         {
//             UBlackboardComponent* BlackboardComp = OwnerComp->GetBlackboardComponent();
//             if (BlackboardComp)
//             {
//                 BlackboardComp->SetValueAsVector("OptimalPosition", OptimalLocation);
//                 UE_LOG(LogTemp, Log, TEXT("OptimalPosition found: %s"), *OptimalLocation.ToString());
//             }
//             else
//             {
//                 UE_LOG(LogTemp, Error, TEXT("FindOptimalPosition: BlackboardComp is null!"));
//                 FinishLatentTask(*OwnerComp, EBTNodeResult::Failed);
//                 return;
//             }
//         }
//         else
//         {
//             UE_LOG(LogTemp, Error, TEXT("FindOptimalPosition: AIController is null!"));
//             FinishLatentTask(*OwnerComp, EBTNodeResult::Failed);
//             return;
//         }
//
//         FinishLatentTask(*OwnerComp, EBTNodeResult::Succeeded);
//     }
//     else
//     {
//         UE_LOG(LogTemp, Warning, TEXT("FindOptimalPosition: Query failed or no items found"));
//         FinishLatentTask(*OwnerComp, EBTNodeResult::Failed);
//     }
// }
//
//
