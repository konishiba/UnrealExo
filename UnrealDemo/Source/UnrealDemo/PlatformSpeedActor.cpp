// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformSpeedActor.h"

// Sets default values
APlatformSpeedActor::APlatformSpeedActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	actorMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APlatformSpeedActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlatformSpeedActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
	Rotate();
	DrawDebug();
}

void APlatformSpeedActor::Move()
{
	const FVector& _loc = FMath::VInterpConstantTo(GetActorLocation(), destination, GetWorld()->DeltaTimeSeconds, moveSpeed);
	SetActorLocation(_loc);
}

void APlatformSpeedActor::Rotate()
{
	const FRotator& _rot = FMath::RInterpConstantTo(GetActorRotation(), targetRotation, GetWorld()->DeltaTimeSeconds, RotationSpeed);
	SetActorRotation(_rot);
}

void APlatformSpeedActor::DrawDebug()
{

	const FVector& _loc = GetActorLocation();
	const UWorld* _w = GetWorld();
	DrawDebugSphere(_w, _loc, 59, segmentNumber, FColor::Red, false, -1.0f, 0, 2.0f);
	DrawDebugSphere(_w, destination, 50, segmentNumber, FColor::Purple, false, -1.0f, 0, 2.0f);
	DrawDebugLine(_w, _loc, destination, FColor::Green, false, -1.0f, 0.0f, 2.0f);
}

