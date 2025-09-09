// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Hero/AARPGHeroCharacter.h"


// Sets default values
AAARPGHeroCharacter::AAARPGHeroCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAARPGHeroCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAARPGHeroCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AAARPGHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

