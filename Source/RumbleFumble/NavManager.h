// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "NavManager.generated.h"

class UNavigationSystemV1;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RUMBLEFUMBLE_API UNavManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNavManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//UPROPERTY(VisibleAnywhere)
	//UNavigationSystemV1* NavigationSystem;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void StartEffectNav(UStaticMeshComponent* MyMesh);
	
	UFUNCTION(BlueprintCallable)
	void StopEffectNav(UStaticMeshComponent* MyMesh);

	
	
	
	
};
