// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GlideRacerItemSpawner.generated.h"

class AGlideRacerItem;

UCLASS()
class GLIDERACER_API AGlideRacerItemSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGlideRacerItemSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*
	void SpawnItem();

	void OnItemDestroyed(AGlideRacerItem* DestroyedActor);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	TObjectPtr<AGlideRacerItem> SpawnedItem;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	TSubclassOf<AGlideRacerItem> ItemClass;

	*/
};
