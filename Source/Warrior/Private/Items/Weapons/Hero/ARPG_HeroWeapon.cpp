// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Weapons/Hero/ARPG_HeroWeapon.h"


// Sets default values
AARPG_HeroWeapon::AARPG_HeroWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AARPG_HeroWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AARPG_HeroWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

