#include "UnitProduction.h"

#include "RessourceCollector.h"

AUnitProduction::AUnitProduction()
{
	PrimaryActorTick.bCanEverTick = true;

	_unitType = EUnitType::Warrior;
	_currentUnitProductionCount = 0;
	_maxUnitProduction = 5;
	_productionTime = 10.0f;
	_resourceForCraft = EResourceType::Wood;
	_costResources = 20;
}

// Called when the game starts or when spawned
void AUnitProduction::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(ProductionTimer, this, &AUnitProduction::ProduceUnit, 1.0f, true);
}

void AUnitProduction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AUnitProduction::CreateUnit()
{
	
}

void AUnitProduction::AddUnitProduction()
{
	if (_currentUnitProductionCount < _maxUnitProduction)
	{
		_currentUnitProductionCount++;
	}
}

void AUnitProduction::RemoveUnitProduction()
{
	if (_currentUnitProductionCount > 0)
	{
		_currentUnitProductionCount--;
	}
}

void AUnitProduction::ProduceUnit()
{
	CreateUnit();
	RemoveUnitProduction();
}