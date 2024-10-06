#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TargetSetterComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DRONEAIPLUGIN_API UTargetSetterComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UTargetSetterComponent();

	UFUNCTION(BlueprintCallable)
	void SetTarget(AActor* NewTarget);

private:
	UPROPERTY()
	AActor* CurrentTarget;
};