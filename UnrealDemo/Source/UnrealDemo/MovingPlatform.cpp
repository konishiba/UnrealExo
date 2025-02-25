// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	actorMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	Init();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
	Rotate();
	DrawDebug();
}

void AMovingPlatform::Init()
{
	start = destinations[index];
	SetActorLocation(start);
	//ComputeSpeed();
}

//void AMovingPlatform::ComputeSpeed()
//{
//	moveSpeed = FVector::Dist(destination, start) / duration;
//}

//void AMovingPlatform::Move()
//{
//	//const FVector _currentLock = GetActorLocation();
//	//const FVector _dir = (destinations[index + 1] - _currentLock).GetSafeNormal();
//	//const FVector _newLoc = _currentLock + _dir * moveSpeed * GetWorld()->DeltaTimeSeconds;
//	//SetActorLocation(_newLoc);
//	//if (FVector::Dist(_newLoc, destinations[index + 1]) < minDistAllowed)
//	//{
//	//	UpdateIndex();
//	//}
//}

 void AMovingPlatform::Move()
{

	//depart - arrivée
	//formule lerp : départ + (Arrivée - départ) * alpha
	 if (destinations.Num() < 1 || hasFinished) return;
	const FVector& _newLoc = FMath::Lerp(start, destinations[index], currentTime / maxTime);
	SetActorLocation(_newLoc);
	currentTime = IncreaseTime(currentTime, maxTime);
}

//void AMovingPlatform::Move()
//{
//	const FVector _currentLock = GetActorLocation();
//	const FVector _dir = (destination - _currentLock).GetSafeNormal();
//	const FVector _newLoc = _currentLock + _dir * moveSpeed * GetWorld()->DeltaTimeSeconds;
//	SetActorLocation(_newLoc);
//	if (FVector::Dist(_newLoc, destination) < minDistAllowed)
//	{
//		SwapPoint(destination, start);
//	}
//}

void AMovingPlatform::SwapPoint(FVector& _v1, FVector& _v2)
{
	FVector _temp = _v1;
	_v1 = _v2;
	_v2 = _temp;
}

void AMovingPlatform::IncreaseIndex()
{
	index++;
	index = index >= destinations.Num() ? destinations.Num() - 1 : index;
	start = destinations[index - 1];
}


void AMovingPlatform::Rotate()
{
	const FRotator& _newRot = GetActorRotation() + FRotator(0.0, 1.0, 0.0) * rotationSpeed * GetWorld()->DeltaTimeSeconds;
	SetActorRotation(_newRot);
}

float AMovingPlatform::IncreaseTime(const float& _current, const float& _max)
{
	float _time = _current + GetWorld()->DeltaTimeSeconds;
	if (_time >= _max)
	{
		if (index == destinations.Num() - 1)
			hasFinished = true;
		_time = 0;
		IncreaseIndex();
	}
	return _time;
}

void AMovingPlatform::DrawDebug()
{
	if (!useDebug || destinations.Num() < 1) return;
	const UWorld* _w = GetWorld();
	const int& _size = destinations.Num();
	for (int i = 0; i < _size; i++)
	{
		DrawDebugSphere(_w, destinations[i], 50, 1, FColor::Black, false, -1.0f, 0, 2.0f);
		if (i + 1 < _size) 
			DrawDebugLine(_w, destinations[i], destinations[i + 1], FColor::Red, false, -1.0f, 0, 2.0f);
	}
	//DrawDebugLine(_w, GetActorLocation(), destinations[i], FColor::Black, false, -1.0f, 0.0f, 2.0f);		const UWorld* _w = GetWorld();
	DrawDebugSphere(_w, destinations[index], 50, 1, FColor::Red, false, -1.0f, 0, 2.0f);
	DrawDebugSphere(_w, start, 50, 1, FColor::Red, false, -1.0f, 0, 2.0f);
	//DrawDebugLine(_w, start, destinations[i], FColor::Emerald, false, -1.0f, 2.0f);
	//DrawDebugBox(_w, GetActorLocation(), FVector::OneVector * 100, FColor::Blue, false, -1.0f, 0.0f, 2.0f);
	DrawDebugLine(_w, start, destinations[index], FColor::Black, false, -1.0f, 0.0f, 2.0f);
}

