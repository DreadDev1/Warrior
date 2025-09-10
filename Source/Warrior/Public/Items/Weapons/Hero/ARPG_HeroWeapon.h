// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Weapons/ARPG_WeaponBase.h"
#include "ARPG_HeroWeapon.generated.h"

UCLASS()
class WARRIOR_API AARPG_HeroWeapon : public AARPG_WeaponBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AARPG_HeroWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
