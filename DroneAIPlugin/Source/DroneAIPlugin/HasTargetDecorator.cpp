
// HasTargetDecorator.cpp
#include "HasTargetDecorator.h"
#include "BehaviorTree/BlackboardComponent.h"

UHasTargetDecorator::UHasTargetDecorator()
{
	NodeName = "Has Target";
}

bool UHasTargetDecorator::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	const UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	return BlackboardComp && BlackboardComp->GetValueAsObject(TargetKey.SelectedKeyName) != nullptr;
}