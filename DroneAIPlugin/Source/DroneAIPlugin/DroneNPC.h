
// DroneNPC.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Engine/TextureRenderTarget2D.h"
#include "DroneNPC.generated.h"


UCLASS()
class DRONEAIPLUGIN_API ADroneNPC : public APawn
{
    GENERATED_BODY()

public:
    ADroneNPC();
    void BeginPlay();

    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UFlyingDroneComponent* FlyingDroneComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class USceneCaptureComponent2D* CameraComponent;

    UFUNCTION(BlueprintCallable, Category = "Drone")
    void TakeScreenshot();

    UFUNCTION(BlueprintCallable, Category = "Drone")
    UTextureRenderTarget2D* GetCameraFeed() const;


    // Camera Movement
    UFUNCTION(BlueprintCallable, Category = "Drone Input")
    void OnComplexMovement1Pressed();

    UFUNCTION(BlueprintCallable, Category = "Drone Input")
    void OnComplexMovement2Pressed();

    UFUNCTION(BlueprintCallable, Category = "Drone Input")
    void OnComplexMovement3Pressed();

    UFUNCTION(BlueprintCallable, Category = "Drone Input")
    void OnComplexMovement4Pressed();

    UFUNCTION(BlueprintCallable, Category = "Drone")
    void SetViewLineTraceTarget();

    UFUNCTION(BlueprintCallable, Category = "Drone Input")
    void SetupInputBindings();

    UFUNCTION()
    void OnSetTarget();

    UPROPERTY(Transient, VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
    UTextureRenderTarget2D* CameraFeed;



    UPROPERTY(Transient, VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
    UTextureRenderTarget2D* ScreenshotRenderTarget;

 
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
 

     
};
