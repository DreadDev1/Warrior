// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/AARPGBaseCharacter.h"
#include "AARPGHeroCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class WARRIOR_API AAARPGHeroCharacter : public AAARPGBaseCharacter
{
	GENERATED_BODY()

public:
	AAARPGHeroCharacter();

protected:
	virtual void BeginPlay() override;

private:
#pragma region Components
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

#pragma endregion
};
