// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformCorrection.generated.h"

UCLASS()
class UNREALDEMO_API APlatformCorrection : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "PlatformCorrection|Mesh")
	TObjectPtr<UStaticMeshComponent> mesh = nullptr;

	//translation
	UPROPERTY(EditAnywhere, Category = "PlatformCorrection|Movement")
	float moveSpeed = 200.0f;

	UPROPERTY(EditAnywhere, Category = "PlatformCorrection|Movement")
	FVector destination = FVector::ZeroVector;
	
	UPROPERTY(EditAnywhere, Category = "PlatformCorrection|Movement")
	FVector origin = FVector::ZeroVector;

	//rotation
	UPROPERTY(EditAnywhere, Category = "PlatformCorrection|Rotation")
	float rotationSpeed = 50.0f;
	UPROPERTY(VisibleAnywhere, Category = "PlatformCorrection|Utils")
	int direction = 1;

	//Scale
	UPROPERTY(EditAnywhere, Category = "PlatformCorrection|Rotation")
	float scaleSpeed = 1.0f;

	//debug
	UPROPERTY(EditAnywhere, Category = "PlatformCorrection|Debug")
	bool useDebug = false;

	UPROPERTY(EditAnywhere, Category = "PlatformCorrection|Debug")
	int segmentCount = 10;

public:
	FORCEINLINE void UpdateDirection() 
	{ 
		direction *= -1; 
	}

public:	
	// Sets default values for this actor's properties
	APlatformCorrection();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	void Init();
	void Move(const float& _deltaTime);
	void Rotate(const float& _deltaTime);
	void Scaling(const float& _deltaTime);
	void SwapPoint(FVector& _v1, FVector& _v2);
	void DrawDebug();

};
