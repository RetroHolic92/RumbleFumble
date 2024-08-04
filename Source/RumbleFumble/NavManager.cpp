// Fill out your copyright notice in the Description page of Project Settings.


#include "NavManager.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

// Sets default values for this component's properties
UNavManager::UNavManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNavManager::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Display, TEXT("NavManager Beginplay"));
	// ...
	
}


// Called every frame
void UNavManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// ...
}

void UNavManager::StartEffectNav(UStaticMeshComponent* MyMesh)
{
	MyMesh->SetCanEverAffectNavigation(true);
	UE_LOG(LogTemp, Display, TEXT("Start Effect Nav"));
}

void UNavManager::StopEffectNav(UStaticMeshComponent* MyMesh)
{
	MyMesh->SetCanEverAffectNavigation(false);
	UE_LOG(LogTemp, Display, TEXT("Stop Effect Nav"));
}

