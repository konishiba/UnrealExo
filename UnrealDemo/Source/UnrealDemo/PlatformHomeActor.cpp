// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformHomeActor.h"

// Sets default values
APlatformHomeActor::APlatformHomeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	actorMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APlatformHomeActor::BeginPlay()
{
	Super::BeginPlay();
	start = GetActorLocation();
}

// Called every frame
void APlatformHomeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
	Rotate();
	Scale();
	DrawDebug();
}

void APlatformHomeActor::Move()
{
	const FVector& _loc = FMath::VInterpConstantTo(GetActorLocation(), destination, GetWorld()->DeltaTimeSeconds, moveSpeed);
	SetActorLocation(_loc);
	if (FVector::Dist(_loc, destination) == 0)
	{
		SwapPoint(destination, start);
		inverseRotation = !inverseRotation;
		isInDestination = true;
	}
	else isInDestination = false;
}

void APlatformHomeActor::SwapPoint(FVector& _v1, FVector& _v2)
{
	FVector _temp = _v1;
	_v1 = _v2;
	_v2 = _temp;
}

void APlatformHomeActor::SwapRotation(FRotator& _v1, FRotator& _v2)
{
	FRotator _temp = _v1;
	_v1 = _v2;
	_v2 = _temp;
}

void APlatformHomeActor::Rotate()
{
	if (isInDestination)
	{
		SetActorRotation(FRotator::ZeroRotator);
	}
	targetRotation = isInDestination ? targetRotation.GetInverse() : targetRotation;
	FRotator _rot = FMath::RInterpConstantTo(GetActorRotation(), targetRotation, GetWorld()->DeltaTimeSeconds, RotationSpeed);
	//_rot = inverseRotation ? _rot.GetInverse() : _rot;
	SetActorRotation(_rot);

}

void APlatformHomeActor::Scale()
{
	scaleAfterInterp = FMath::VInterpConstantTo(GetActorScale3D(), firstScale, GetWorld()->DeltaTimeSeconds, scaleSpeed / 100.0f);
	SetActorScale3D(scaleAfterInterp);
	if (isInDestination)
	{
		SwapPoint(secondScale, firstScale);
	}
}

void APlatformHomeActor::DrawDebug()
{
	const FVector& _loc = GetActorLocation();
	const UWorld* _w = GetWorld();
	DrawDebugSphere(_w, _loc, 60 * GetActorScale3D().X, segmentNumber, FColor::Red, false, -1.0f, 0, 2.0f);
	DrawDebugSphere(_w, start, 50, segmentNumber, FColor::Black , false, -1.0f, 0, 2.0f);
	DrawDebugSphere(_w, destination, 50, segmentNumber, FColor::Purple, false, -1.0f, 0, 2.0f);
	DrawDebugLine(_w, start, destination, FColor::Green, false, -1.0f, 0.0f, 2.0f);
	DrawDebugLine(_w, _loc, destination, FColor::Blue, false, -1.0f, 0.0f, 4.0f);
}

