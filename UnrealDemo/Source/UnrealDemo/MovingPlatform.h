// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UNREALDEMO_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "MovingPlatform|Components")
	TObjectPtr<UStaticMeshComponent> actorMesh = nullptr;
	UPROPERTY(EditAnywhere, Category = "MovingPFVelatform|Movement")
	FVector start = FVector::ZeroVector;
	//UPROPERTY(EditAnywhere, Category = "MovingPlatform|Distance")
	//FVector destination = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, Category = "MovingPlatform|Movement")
	TArray<FVector> destinations;
	UPROPERTY(EditAnywhere, Category = "MovingPlatform|Movement")
	bool hasFinished = false;
	UPROPERTY(EditAnywhere, Category = "MovingPlatform|Movement")
	int index = 0;
	UPROPERTY(EditAnywhere, Category = "MovingPlatform|Movement", meta = (UIMin = "1", UIMax = "200", ClampMin = "1", ClampMax = "200"))
	float moveSpeed = 50.0f;
	UPROPERTY(EditAnywhere, Category = "MovingPlatform|Movement", meta = (UIMin = "1", UIMax = "100", ClampMin = "1", ClampMax = "100"))
	float rotationSpeed = 50.0f;
	UPROPERTY(EditAnywhere, Category = "MovingPlatform|Movement")
	float minDistAllowed = 80.0f;
	UPROPERTY(VisibleAnywhere, Category = "MovingPlatform|Movement")
	float currentTime = 0.0f;
	UPROPERTY(EditAnywhere, Category = "MovingPlatform|Movement")
	float maxTime = 0.0f;
	UPROPERTY(EditAnywhere, Category = "MovingPlatform|Debug")
	bool useDebug = true;

public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:	
	void Init();
	//void ComputeSpeed();
	void Move();
	void SwapPoint(FVector& _v1, FVector& _v2);

	void IncreaseIndex();

	void Rotate();
	float IncreaseTime(const float& _current, const float& _max);
	void DrawDebug();
};
