#include "RessourceCollector.h"
#include "Engine/World.h"

ARessourceCollector::ARessourceCollector()
{
	PrimaryActorTick.bCanEverTick = true;

	_resourceType = EResourceType::Wood;
	_maxUnits = 5;
	_baseProductionTime = 10.0f;
	_baseResourceProduced = 10.0f;
	_isNaturalResource = true;
	_currentProductionTime = _baseProductionTime;
	CurrentUnitCount = 0;
	_collectedResources = 0.0f;
}

void ARessourceCollector::BeginPlay()
{
	Super::BeginPlay();
	UpdateProductionTime();
	GetWorldTimerManager().SetTimer(ProductionTimer, this, &ARessourceCollector::ProduceResource, 1.0f, true);
}

void ARessourceCollector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARessourceCollector::AddUnit()
{
	if (CurrentUnitCount < _maxUnits)
	{
		CurrentUnitCount++;
		UpdateProductionTime();
	}
}

void ARessourceCollector::RemoveUnit()
{
	if (CurrentUnitCount > 0)
	{
		CurrentUnitCount--;
		UpdateProductionTime();
	}
}

void ARessourceCollector::UpdateProductionTime()
{
	if (CurrentUnitCount > 0)
	{
		_currentProductionTime = _baseProductionTime / CurrentUnitCount;
		_collectedResources = 0;
	}
	else
	{
		_currentProductionTime = _baseProductionTime;
	}
}

void ARessourceCollector::ProduceResource()
{
	if (CurrentUnitCount > 0)
	{
		_collectedResources += _baseResourceProduced / _currentProductionTime;
		// Debug message
		GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow,
			FString::Printf(TEXT("Collected resources: %f"), _collectedResources));
	}
}

float ARessourceCollector::CollectResources()
{
	// Debug message
	GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow,
		FString::Printf(TEXT("Enter %f")));
	float Collected = _collectedResources;
	_collectedResources -= 5.0f;
	return Collected;
}