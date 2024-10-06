#include "DroneNPC.h"
#include "FlyingDroneComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "GameFramework/PlayerController.h"

ADroneNPC::ADroneNPC()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create the Static Mesh Component
    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    // Set it as the root component
    RootComponent = StaticMeshComponent;

    FlyingDroneComponent = CreateDefaultSubobject<UFlyingDroneComponent>(TEXT("FlyingDroneComponent"));
    

    CameraComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(RootComponent);
    CameraComponent->SetRelativeLocation(FVector(100.0f, 0.0f, 0.0f)); // Adjust as needed
    CameraComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f)); // Adjust as needed

    ScreenshotRenderTarget = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("ScreenshotRenderTarget"));
    ScreenshotRenderTarget->InitAutoFormat(1920, 1080);

    CameraFeed = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("CameraFeed"));
    // CameraFeed->InitAutoFormat(1280, 720); // Adjust resolution as needed
    // CameraComponent->TextureTarget = CameraFeed;
}

void ADroneNPC::BeginPlay()
{
    Super::BeginPlay();
    
    // Generate initial waypoints
    if (FlyingDroneComponent)
    {
        FlyingDroneComponent->GenerateWaypoints();
    }

    if (!CameraFeed)
    {
        CameraFeed = NewObject<UTextureRenderTarget2D>(this, UTextureRenderTarget2D::StaticClass(), TEXT("CameraFeed"));
        CameraFeed->InitAutoFormat(1280, 720);
        CameraComponent->TextureTarget = CameraFeed;
    }

    // Setup input bindings
    SetupInputBindings();
}

void ADroneNPC::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ADroneNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Bind input actions
    PlayerInputComponent->BindAction("ComplexMovement1", IE_Pressed, this, &ADroneNPC::OnComplexMovement1Pressed);
    PlayerInputComponent->BindAction("ComplexMovement2", IE_Pressed, this, &ADroneNPC::OnComplexMovement2Pressed);
    PlayerInputComponent->BindAction("ComplexMovement3", IE_Pressed, this, &ADroneNPC::OnComplexMovement3Pressed);
    PlayerInputComponent->BindAction("ComplexMovement4", IE_Pressed, this, &ADroneNPC::OnComplexMovement4Pressed);
    PlayerInputComponent->BindAction("SetTarget", IE_Pressed, this, &ADroneNPC::OnSetTarget);
}

void ADroneNPC::SetupInputBindings()
{
    // This function is now empty as we've moved the bindings to SetupPlayerInputComponent
}

void ADroneNPC::OnSetTarget()
{
    SetViewLineTraceTarget();
}

void ADroneNPC::TakeScreenshot()
{
    FString ScreenshotName = FString::Printf(TEXT("DroneScreenshot_%s"), *FDateTime::Now().ToString());
    FString ScreenshotPath = FPaths::ProjectSavedDir() / TEXT("Screenshots") / ScreenshotName + TEXT(".png");

    UKismetRenderingLibrary::ExportRenderTarget(GetWorld(), CameraFeed, FPaths::GetPath(ScreenshotPath), FPaths::GetBaseFilename(ScreenshotPath));
}

void ADroneNPC::OnComplexMovement1Pressed()
{
    if (FlyingDroneComponent)
    {
        FlyingDroneComponent->PerformComplexMovement(EComplexMovementType::RollMontage);
    }
}

void ADroneNPC::OnComplexMovement2Pressed()
{
    if (FlyingDroneComponent)
    {
        FlyingDroneComponent->PerformComplexMovement(EComplexMovementType::UpDownMovement);
    }
}

void ADroneNPC::OnComplexMovement3Pressed()
{
    if (FlyingDroneComponent)
    {
        FlyingDroneComponent->PerformComplexMovement(EComplexMovementType::SineWave);
    }
}

void ADroneNPC::OnComplexMovement4Pressed()
{
    if (FlyingDroneComponent)
    {
        FlyingDroneComponent->PerformComplexMovement(EComplexMovementType::SpiralMovement);
    }
}

void ADroneNPC::SetViewLineTraceTarget()
{
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (!PlayerController) return;

    FVector CameraLocation;
    FRotator CameraRotation;
    PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

    FVector TraceStart = CameraLocation;
    FVector TraceEnd = TraceStart + (CameraRotation.Vector() * 10000.0f);

    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(this);

    if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_Visibility, QueryParams))
    {
        if (HitResult.GetActor() && HitResult.GetActor() != FlyingDroneComponent->GetFocusTarget())
        {
            FlyingDroneComponent->SetFocusTarget(HitResult.GetActor());
        }
        else
        {
            FlyingDroneComponent->ClearFocusTarget();
        }
    }
    else
    {
        FlyingDroneComponent->ClearFocusTarget();
    }
}

UTextureRenderTarget2D* ADroneNPC::GetCameraFeed() const
{
    return CameraFeed;
}
