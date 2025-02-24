// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExoSliderActor.generated.h"

UCLASS()
class UNREALDEMO_API AExoSliderActor : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "DemoActor|Components")
	TObjectPtr<UStaticMeshComponent> mesh = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "DemoActor|Values")
	float MoveSpeed = 100.0f;
	UPROPERTY(VisibleAnywhere, Category = "DemoActor|Values")
	bool discrase = false;
	UPROPERTY(VisibleAnywhere, Category = "DemoActor|Values")
	FVector MaxScale = FVector(3);
	UPROPERTY(VisibleAnywhere, Category = "DemoActor|Values")
	FVector MinScale = FVector(1);
public:	
	// Sets default values for this actor's properties
	AExoSliderActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE void SetDiscrase(const bool _discrase)
	{
		discrase = _discrase;
	}

	void Tranlate();

	void CheckSacle();

	void Scale();
	void ScaleUp();
	void ScaleDown();
};
