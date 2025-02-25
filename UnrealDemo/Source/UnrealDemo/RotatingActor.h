// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingActor.generated.h"

UCLASS()
class UNREALDEMO_API ARotatingActor : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "RotatingActor|Components")
	TObjectPtr<UStaticMeshComponent> actorMesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "RotatingActor|Rotation", meta = (UIMin="1", UIMax="100", ClampMin="1", ClampMax="100"))
	float rotationSpeed = 50.0f;
	UPROPERTY(EditAnywhere, Category = "RotatingActor|Scale", meta = (ClamMin="1", ClampMax="100"))
	float scaleValue = 10.0f;
public:	
	// Sets default values for this actor's properties
	ARotatingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:	
	void Rotate();
	void ScaleUp();

};
