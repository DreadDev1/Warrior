// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AARPGBaseCharacter.h"

// Sets default values
AAARPGBaseCharacter::AAARPGBaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;
}
