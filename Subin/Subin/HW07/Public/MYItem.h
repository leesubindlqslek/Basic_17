#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MYItem.generated.h"

UCLASS()
class HW07_API AMYItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AMYItem();

protected:
	UPROPERTY(VisibleAnywhere, Category = "MYItem|Component")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, Category = "MYItem|Component")
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere, Category = "MYItem|Properties")
	float RotationSpeed;

	UPROPERTY(EditAnywhere, Category = "MYItem|Properties")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, Category = "MYItem|Properties")
	float MaxRange;

	FVector StartLocation;
	bool bMovingForward;

	
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
