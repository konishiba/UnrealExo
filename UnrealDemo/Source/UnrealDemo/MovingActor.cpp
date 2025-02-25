// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingActor.h"

// Sets default values
AMovingActor::AMovingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	actorMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMovingActor::BeginPlay()
{
	Super::BeginPlay();
	destination = GetActorLocation() + FVector(destinationOffset, 0.0, 0.0);
}

// Called every frame
void AMovingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
	ScaleDown();
	DrawDebug();
}

void AMovingActor::Move()
{
	if (GetActorLocation().X >= destination.X) return;
	const FVector& _newLoc = GetActorLocation() + FVector(1.0, 0.0, 0.0) * MoveSpeed * GetWorld()->DeltaTimeSeconds;
	SetActorLocation(_newLoc);
}

void AMovingActor::ScaleDown()
{
	if (GetActorScale3D().X <= 0.5f) return;
	const FVector& _newScale = GetActorScale3D() - FVector(scaleValue) * GetWorld()->DeltaTimeSeconds;
	SetActorScale3D(_newScale);
}

void AMovingActor::DrawDebug()
{
	if (!useDebug) return;
	const UWorld* _w = GetWorld();
	DrawDebugSphere(_w, destination, 50, 1, FColor::Red, false, -1.0f, 0, 2.0f);
	DrawDebugLine(_w, GetActorLocation(), destination, FColor::Blue, false, -1.0f, 2.0f);
}

