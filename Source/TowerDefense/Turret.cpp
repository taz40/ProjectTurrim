// Fill out your copyright notice in the Description page of Project Settings.

#include "Turret.h"
#include "Components/ArrowComponent.h"
#include "Paper2D/Classes/PaperSpriteComponent.h"

// Sets default values
ATurret::ATurret()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if(!RootComponent)
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Turret Base"));
	
	TurretDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("Turret Direction"));
	TurretDirection->AttachTo(RootComponent);

	TurretSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Turret Sprite"));
	TurretSprite->AddWorldRotation(new FQuat(90, 90, 0, 0));
	TurretSprite->AttachTo(TurretDirection);
	
}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATurret::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

