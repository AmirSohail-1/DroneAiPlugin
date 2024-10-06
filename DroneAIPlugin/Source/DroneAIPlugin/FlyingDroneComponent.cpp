#include "FlyingDroneComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"

UFlyingDroneComponent::UFlyingDroneComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UFlyingDroneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    MoveAlongWaypoints(DeltaTime);

    if (FocusTarget && FocusTarget->IsValidLowLevel())
    {
        RotateTowards(FocusTarget->GetActorLocation());
    }
}

void UFlyingDroneComponent::PerformComplexMovement(EComplexMovementType MovementType)
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    StartLocation = Owner->GetActorLocation();
    MovementTime = 0.0f;

    switch (MovementType)
    {
        case EComplexMovementType::RollMontage:
            PerformRollMontage(GetWorld()->GetDeltaSeconds());
            break;
        case EComplexMovementType::UpDownMovement:
            PerformUpDownMovement(GetWorld()->GetDeltaSeconds());
            break;
        case EComplexMovementType::SineWave:
            PerformSineWave(GetWorld()->GetDeltaSeconds());
            break;
        case EComplexMovementType::SpiralMovement:
            PerformSpiralMovement(GetWorld()->GetDeltaSeconds());
            break;
    }
}

void UFlyingDroneComponent::GenerateWaypoints()
{
    Waypoints.Empty();
    AActor* Owner = GetOwner();
    if (!Owner) return;

    FVector CurrentLocation = Owner->GetActorLocation();
    
    // Generate a circular pattern
    int32 NumPoints = 8;
    float Radius = 500.0f;
    for (int32 i = 0; i < NumPoints; ++i)
    {
        float Angle = (2.0f * PI * i) / NumPoints;
        FVector Offset(FMath::Cos(Angle) * Radius, FMath::Sin(Angle) * Radius, 0.0f);
        Waypoints.Add(CurrentLocation + Offset);
    }
}

void UFlyingDroneComponent::MoveAlongWaypoints(float DeltaTime)
{
    if (Waypoints.Num() == 0 || CurrentWaypointIndex >= Waypoints.Num()) return;

    AActor* Owner = GetOwner();
    if (!Owner) return;

    FVector CurrentLocation = Owner->GetActorLocation();
    FVector TargetLocation = Waypoints[CurrentWaypointIndex];

    MoveToLocation(TargetLocation);
    RotateTowards(TargetLocation);

    if (FVector::Dist(CurrentLocation, TargetLocation) < WaypointRadius)
    {
        CurrentWaypointIndex = (CurrentWaypointIndex + 1) % Waypoints.Num();
    }
}

void UFlyingDroneComponent::MoveToLocation(const FVector& TargetLocation)
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    FVector Direction = (TargetLocation - Owner->GetActorLocation()).GetSafeNormal();
    Owner->AddActorWorldOffset(Direction * MovementSpeed * GetWorld()->GetDeltaSeconds());
}

void UFlyingDroneComponent::RotateTowards(const FVector& LookAtPoint)
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    FVector Direction = (LookAtPoint - Owner->GetActorLocation()).GetSafeNormal();
    FRotator NewRotation = FMath::RInterpTo(Owner->GetActorRotation(), Direction.Rotation(), GetWorld()->GetDeltaSeconds(), RotationSpeed);
    Owner->SetActorRotation(NewRotation);
}

void UFlyingDroneComponent::SetFocusTarget(AActor* Target)
{
    FocusTarget = Target;
}

void UFlyingDroneComponent::ClearFocusTarget()
{
    FocusTarget = nullptr;
}

void UFlyingDroneComponent::PerformRollMontage(float DeltaTime)
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    MovementTime += DeltaTime;
    float RollAngle = FMath::Sin(MovementTime * ComplexMovementFrequency) * 180.0f;
    
    FRotator NewRotation = Owner->GetActorRotation();
    NewRotation.Roll = RollAngle;
    Owner->SetActorRotation(NewRotation);

    if (MovementTime >= 2 * PI / ComplexMovementFrequency)
    {
        MovementTime = 0.0f;
    }
}

void UFlyingDroneComponent::PerformUpDownMovement(float DeltaTime)
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    MovementTime += DeltaTime;
    float VerticalOffset = FMath::Sin(MovementTime * ComplexMovementFrequency) * ComplexMovementAmplitude;
    
    FVector NewLocation = StartLocation;
    NewLocation.Z += VerticalOffset;
    Owner->SetActorLocation(NewLocation);

    if (MovementTime >= 2 * PI / ComplexMovementFrequency)
    {
        MovementTime = 0.0f;
    }
}

void UFlyingDroneComponent::PerformSineWave(float DeltaTime)
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    MovementTime += DeltaTime;
    float HorizontalOffset = FMath::Sin(MovementTime * ComplexMovementFrequency) * ComplexMovementAmplitude;
    
    FVector NewLocation = StartLocation;
    NewLocation += Owner->GetActorRightVector() * HorizontalOffset;
    Owner->SetActorLocation(NewLocation);

    if (MovementTime >= 2 * PI / ComplexMovementFrequency)
    {
        MovementTime = 0.0f;
    }
}

void UFlyingDroneComponent::PerformSpiralMovement(float DeltaTime)
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    MovementTime += DeltaTime;
    float Radius = MovementTime * 50.0f; // Increase radius over time
    float Angle = MovementTime * ComplexMovementFrequency;
    
    FVector Offset(
        FMath::Cos(Angle) * Radius,
        FMath::Sin(Angle) * Radius,
        MovementTime * ComplexMovementAmplitude // Upward movement
    );
    
    FVector NewLocation = StartLocation + Offset;
    Owner->SetActorLocation(NewLocation);

    // Reset after completing one full spiral
    if (MovementTime >= 2 * PI / ComplexMovementFrequency)
    {
        MovementTime = 0.0f;
        StartLocation = Owner->GetActorLocation();
    }
}