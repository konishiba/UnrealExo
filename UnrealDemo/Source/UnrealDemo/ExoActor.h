// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExoActor.generated.h"

UCLASS()
class UNREALDEMO_API AExoActor : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "DemoActor|Components")
	TObjectPtr<UStaticMeshComponent> mesh = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "DemoActor|Values")
	float RotationSpeed = 100.0f;

public:	
	// Sets default values for this actor's properties
	AExoActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void Move();
	void Rotate();
	void Scale();
};
