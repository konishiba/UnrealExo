// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformCorrection.h"

// Sets default values
APlatformCorrection::APlatformCorrection()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APlatformCorrection::BeginPlay()
{
	Super::BeginPlay();
	Init();
}

// Called every frame
void APlatformCorrection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move(DeltaTime);
	Rotate(DeltaTime);
	Scaling(DeltaTime);
	DrawDebug();
}

void APlatformCorrection::Init()
{
	origin = GetActorLocation();
}

void APlatformCorrection::Move(const float& _deltaTime)
{
	const FVector& _loc = FMath::VInterpConstantTo(GetActorLocation(), destination, _deltaTime, moveSpeed);
	SetActorLocation(_loc);
	if (FVector::Dist(_loc, destination) < 1.0f)
	{
		SwapPoint(destination, origin);
		UpdateDirection();
	}
}

void APlatformCorrection::Rotate(const float& _deltaTime)
{
	const FRotator& _rot = GetActorRotation() + FRotator(0, direction, 0) * rotationSpeed * _deltaTime;
	SetActorRotation(_rot);
}

void APlatformCorrection::Scaling(const float& _deltaTime)
{
	const FVector& _scale = GetActorScale3D() + FVector(direction) * scaleSpeed * _deltaTime;
	SetActorScale3D(_scale);
}

void APlatformCorrection::SwapPoint(FVector& _v1, FVector& _v2)
{
	FVector _temp = _v1;
	_v1 = _v2;
	_v2 = _temp;
}

void APlatformCorrection::DrawDebug()
{
	if (!useDebug) return;
	const UWorld* _w = GetWorld();
	DrawDebugSphere(_w, origin, 50.0f, segmentCount, FColor::Cyan, false, -1.0f, 0, 2.0f);
	DrawDebugSphere(_w, destination, 50.0f, segmentCount, FColor::Red, false, -1.0f, 0, 2.0f);
	DrawDebugLine(_w, origin, destination, FColor::Green, false, -1.0f, 0, 2.0f);
	DrawDebugBox(_w, GetActorLocation(), FVector::OneVector * 100, FColor::Blue, false, -1.0f, 0, 2.0f);
}

