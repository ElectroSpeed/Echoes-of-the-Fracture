#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RessourceCollector.generated.h"

UENUM(BlueprintType)
enum class EResourceType : uint8
{
	Energium     UMETA(DisplayName = "Energium"),
	Wood    UMETA(DisplayName = "Wood"),
	Bread     UMETA(DisplayName = "Bread")
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	EResourceType _resourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	int32 _maxUnits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Resource")
	float _baseProductionTime;

	UPROPERTY(BlueprintReadOnly, Category = "Resource")
	float _currentProductionTime;

	UFUNCTION(BlueprintCallable, Category = "Resource")
	float CalculateTimeForResource(float ResourceAmount) const;

	UFUNCTION()
	void AddUnit();

	UFUNCTION()
	void RemoveUnit();

private:
	int32 CurrentUnitCount;
	void UpdateProductionTime();
};
