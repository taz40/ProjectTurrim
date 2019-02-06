// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Paper2D/Classes/PaperSpriteComponent.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!RootComponent)
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Player Pawn"));

	USpringArmComponent* springarm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	springarm->TargetArmLength = 500.0f;
	springarm->bEnableCameraLag = true;
	springarm->bEnableCameraRotationLag = false;
	springarm->bUsePawnControlRotation = false;
	springarm->CameraLagSpeed = 2.0f;
	springarm->bDoCollisionTest = false;
	springarm->AttachTo(RootComponent);
	springarm->SetWorldRotation(FRotator(-90.0f, 0.0f, 0.0f));

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->bUsePawnControlRotation = false;
	camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	camera->OrthoWidth = 1024.0f;
	camera->AspectRatio = 3.0f / 4.0f;
	camera->AttachTo(springarm, USpringArmComponent::SocketName);
	camera->SetWorldRotation(FRotator(-90.0f, 0.0f, 0.0f));

	sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	sprite->AttachTo(RootComponent);

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

