#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RessourceCollector.generated.h"

UENUM(BlueprintType)
enum class EResourceType : uint8
{
	Energium UMETA(DisplayName = "Energium"),
	Wood UMETA(DisplayName = "Wood"),
	Bread UMETA(DisplayName = "Bread")
};

UCLASS()
class ECHOESOFTHEFRACTURE_API ARessourceCollector : public AActor
{
	GENERATED_BODY()

public:
	ARessourceCollector();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Resource")
	int32 CurrentUnitCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	EResourceType _resourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	int32 _maxUnits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	float _baseProductionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	int32 _baseResourceProduced;

	UPROPERTY(BlueprintReadOnly, Category = "Resource")
	float _currentProductionTime;

	UPROPERTY(BlueprintReadOnly, Category = "Resource")
	float _collectedResources;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Resource")
	bool _isNaturalResource;

	UFUNCTION(BlueprintCallable, Category = "Resource Manager")
	void AddUnit();

	UFUNCTION(BlueprintCallable, Category = "Resource Manager")
	void RemoveUnit();

	UFUNCTION(BlueprintCallable, Category = "Resource Manager")
	float CollectResources();

private:
	void UpdateProductionTime();
	void ProduceResource();
	FTimerHandle ProductionTimer; //FTimerHandle* ProductionTimer;
};