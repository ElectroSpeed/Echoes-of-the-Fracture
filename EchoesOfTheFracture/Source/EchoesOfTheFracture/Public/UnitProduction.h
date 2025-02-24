#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnitProduction.generated.h"

UENUM(BlueprintType)
enum class EUnitType : uint8
{
	Warrior UMETA(DisplayName = "Concordian Warrior"),
	Sentinel UMETA(DisplayName = "Fractal Sentinel"),
	Shooter UMETA(DisplayName = "Rift Shooter"),
	Colon UMETA(DisplayName = "Concordian Colon")
};

UCLASS()
class ECHOESOFTHEFRACTURE_API AUnitProduction : public AActor
{
	GENERATED_BODY()
	
public:	
	AUnitProduction();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit")
	EUnitType _unitType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit")
	int _currentUnitProductionCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit")
	int _maxUnitProduction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit")
	float _productionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	EResourceType _resourceForCraft;
	
	UPROPERTY(BlueprintReadOnly, Category = "Unit")
	float _costResources;

	UFUNCTION(BlueprintCallable, Category = "Unit Manager")
	void CreateUnit();

	UFUNCTION(BlueprintCallable, Category = "Unit Manager")
	void AddUnitProduction();

	UFUNCTION(BlueprintCallable, Category = "Unit Manager")
	void RemoveUnitProduction();

private:
	void ProduceUnit();
	FTimerHandle ProductionTimer;
};
