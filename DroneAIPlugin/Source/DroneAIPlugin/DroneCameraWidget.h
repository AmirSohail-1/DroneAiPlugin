
// DroneCameraWidget.h
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DroneCameraWidget.generated.h"

class UImage; // Forward declaration

UCLASS()
class DRONEAIPLUGIN_API UDroneCameraWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Drone Camera")
    void SetDroneReference(class ADroneNPC* Drone);

    UFUNCTION(BlueprintCallable, Category = "Drone Camera")
    void UpdateCameraFeed();

protected:
    virtual void NativeConstruct() override;
    virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

    UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
    class UImage* CameraFeedImage;

private:
    UPROPERTY()
    class ADroneNPC* TargetDrone;
};