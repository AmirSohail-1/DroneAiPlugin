
// DroneCameraWidget.cpp
#include "DroneCameraWidget.h"
#include "DroneNPC.h"
#include "Components/Image.h"
#include "Engine/Texture2D.h"
#include "Engine/TextureRenderTarget2D.h"

void UDroneCameraWidget::NativeConstruct()
{
    Super::NativeConstruct();
}

void UDroneCameraWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);
    UpdateCameraFeed();
}

void UDroneCameraWidget::SetDroneReference(ADroneNPC* Drone)
{
    TargetDrone = Drone;
}


void UDroneCameraWidget::UpdateCameraFeed()
{
    if (TargetDrone && CameraFeedImage)
    {
        UTextureRenderTarget2D* CameraFeed = TargetDrone->GetCameraFeed();
        if (CameraFeed)
        {
            // CameraFeedImage->SetBrushFromTexture(CameraFeed);

            // Create a new FSlateBrush and set its resource to the render target
            FSlateBrush Brush;
            Brush.SetResourceObject(CameraFeed); // Set the render target as the resource
            CameraFeedImage->SetBrush(Brush); // Apply the brush to the image
        }
        
    }
}
