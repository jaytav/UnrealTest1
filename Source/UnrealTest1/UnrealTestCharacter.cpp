// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealTestCharacter.h"

// Sets default values
AUnrealTestCharacter::AUnrealTestCharacter()
{

}

// Called when the game starts or when spawned
void AUnrealTestCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnrealTestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUnrealTestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
}

