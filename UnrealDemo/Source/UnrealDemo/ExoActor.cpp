// Fill out your copyright notice in the Description page of Project Settings.


#include "ExoActor.h"

// Sets default values
AExoActor::AExoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AExoActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Rotate();
	Scale();
}


void AExoActor::Move()
{
	const FVector& _location = FVector(100,100,100);
	SetActorLocation(_location);
}

void AExoActor::Rotate()
{
	AddActorWorldRotation(FRotator(1, 1, 1) * RotationSpeed * GetWorld()->DeltaTimeSeconds);
}

void AExoActor::Scale()
{
	SetActorScale3D(GetActorScale3D() + FVector(0.2) * GetWorld()->DeltaTimeSeconds);
}
