// Fill out your copyright notice in the Description page of Project Settings.

#include "Turret.h"
#include "Components/ArrowComponent.h"
#include "Paper2D/PaperSpriteComponent.h"

// Sets default values
ATurret::ATurret()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if(!RootComponent)
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Turret Base"));
	
	TurretDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("Turret Direction"));
	TurretDirection->attachTo(RootComponent);

	TurretSprite = CreateDefaultSubobject<UPaperSprite>(TEXT("Turret Sprite"));
	TurretSprite->attachTo(TurretDirection);

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

