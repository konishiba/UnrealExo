// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingActor.h"

// Sets default values
ARotatingActor::ARotatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	actorMesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	actorMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ARotatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Rotate();
	ScaleUp();
}

void ARotatingActor::Rotate()
{
	const FRotator& _newRot = GetActorRotation() + FRotator(0.0, 1.0, 0.0) * rotationSpeed * GetWorld()->DeltaTimeSeconds;
	SetActorRotation(_newRot);
}

void ARotatingActor::ScaleUp()
{
	const FVector& _newScale = GetActorScale3D() + FVector(scaleValue) * GetWorld()->DeltaTimeSeconds;
	SetActorScale3D(_newScale);
}

