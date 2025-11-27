// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/GlideRacerItemSpawner.h"
#include "Item/GlideRacerItem.h"

// Sets default values
AGlideRacerItemSpawner::AGlideRacerItemSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AGlideRacerItemSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	//ItemClass = AGlideRacerItem::StaticClass();

    //SpawnItem();
}

// Called every frame
void AGlideRacerItemSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
/*
void AGlideRacerItemSpawner::SpawnItem()
{
    if (ItemClass == nullptr) return;

    FActorSpawnParameters Params;
    SpawnedItem = GetWorld()->SpawnActor<AGlideRacerItem>(ItemClass, GetActorLocation(), FRotator::ZeroRotator, Params);

    if (SpawnedItem)
    {
        // Destroy될 때 이벤트 바인딩
        SpawnedItem->OnDestroyed.AddDynamic(this, &AGlideRacerItemSpawner::OnItemDestroyed);
    }
}

void AGlideRacerItemSpawner::OnItemDestroyed(AGlideRacerItem* DestroyedActor)
{
    // 100초 후 다시 스폰
    FTimerHandle TimerHandle;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AGlideRacerItemSpawner::SpawnItem, 100.0f, false);
}

*/

