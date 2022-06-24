// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealTestItem.h"

// Sets default values
AUnrealTestItem::AUnrealTestItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetSimulatePhysics(true);
	StaticMesh->SetupAttachment(DefaultSceneRoot);
}

// Called when the game starts or when spawned
void AUnrealTestItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnrealTestItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

