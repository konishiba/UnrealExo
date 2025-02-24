// Fill out your copyright notice in the Description page of Project Settings.


#include "DemoActor.h"

// Sets default values
ADemoActor::ADemoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ADemoActor::BeginPlay()
{
	Super::BeginPlay();
	Move();
}

// Called every frame
void ADemoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Tranlate();
}

void ADemoActor::Move()
{
	const FVector& _location = FVector(0);
	SetActorLocation(_location);
}

void ADemoActor::Tranlate()
{
	const FVector& _location = FVector(1,0,0);
	SetActorLocation(GetActorLocation() + _location * MoveSpeed * GetWorld()->DeltaTimeSeconds);
}

