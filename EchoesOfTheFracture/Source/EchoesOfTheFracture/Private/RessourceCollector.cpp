#include "RessourceCollector.h"
#include "Engine/World.h"

ARessourceCollector::ARessourceCollector()
{
	PrimaryActorTick.bCanEverTick = true;
	
	_resourceType = EResourceType::Wood;
	_maxUnits = 5;
	_baseProductionTime = 10.0f;
	_currentProductionTime = _baseProductionTime;
	CurrentUnitCount = 0;
}

void ARessourceCollector::BeginPlay()
{
	Super::BeginPlay();
	UpdateProductionTime();
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
	}
	else
	{
		_currentProductionTime = _baseProductionTime;
	}
}

float ARessourceCollector::CalculateTimeForResource(float ResourceAmount) const
{
	if (CurrentUnitCount > 0)
	{
		return ResourceAmount * _currentProductionTime;
	}
	return -1.0f;
}
