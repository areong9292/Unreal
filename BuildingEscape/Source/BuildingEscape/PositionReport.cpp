// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingEscape.h"
#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();

	FString ObjectName = GetOwner()->GetName();
	FString ObjectPos = GetOwner()->GetTransform().GetLocation().ToString();

	//FString ObjectPos = GetOwner()->GetActorLocation().ToString();
	// 'GetTransform().GetLocation()' 같은 역할....?
	// 'GetActioLocation()' 이 액터의 위치(x, y, z) 반환

	// GetTransform으로 보다 확실히 transform이라는 정보를 다 받아올 수 있다
	// transform에는 location과 rotation, scale등이 들어있다


	// log print macro
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"),*ObjectName, *ObjectPos);
	
}


// Called every frame
void UPositionReport::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

