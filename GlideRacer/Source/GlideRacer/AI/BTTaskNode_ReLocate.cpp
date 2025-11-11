// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTaskNode_ReLocate.h"
#include "AI/GlideRacerAIController.h"
#include "Car/GlideRacerVehiclePawn.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "ChaosWheeledVehicleMovementComponent.h"

EBTNodeResult::Type UBTTaskNode_ReLocate::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

    AAIController* AICon = OwnerComp.GetAIOwner();
    AGlideRacerVehiclePawn* Vehicle = Cast<AGlideRacerVehiclePawn>(AICon->GetPawn());
    UChaosVehicleMovementComponent* ChaosVehicleMovement = Vehicle->GetVehicleMovement();

    FVector TargetLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(TEXT("TargetLocation"));
	AGlideRacerVehiclePawn* Target = Cast<AGlideRacerVehiclePawn>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));

    float MinRadius = 2000.f;  
    float MaxRadius = 4000.f; 

    float Radius = FMath::RandRange(MinRadius, MaxRadius);
    float Angle = FMath::RandRange(0.f, 2 * PI);

    FVector SpawnOffset = FVector(FMath::Cos(Angle), FMath::Sin(Angle), 0.f) * Radius;

    FVector RandomOffset(
        SpawnOffset.X,
        SpawnOffset.Y,
        -300.f
    );

    FHitResult Hit;
    FVector Start = TargetLocation + FVector(0.f, 0.f, 2000.f);
    FVector End = TargetLocation + RandomOffset;
    FCollisionQueryParams Params;
    FVector SpawnLocation;

    if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
    {
        SpawnLocation = Hit.ImpactPoint + FVector(0.f, 0.f, 100.f);
    }


	if (FVector::Dist(Vehicle->GetActorLocation(), TargetLocation) >= 10000) {
        Vehicle->GetMesh()->SetSimulatePhysics(false);
        Vehicle->SetActorLocation(SpawnLocation);
        Vehicle->SetActorRotation(Target->GetActorRotation());
        Vehicle->GetMesh()->SetSimulatePhysics(true);
	}
 
 

	return EBTNodeResult::Succeeded;
}