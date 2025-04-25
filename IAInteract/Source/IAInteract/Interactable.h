#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

UCLASS()
class IAINTERACT_API AInteractable : public AActor
{
	GENERATED_BODY()

public:
	AInteractable();

protected:
	virtual void BeginPlay() override;

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReact);

	UPROPERTY(BlueprintAssignable)
	FOnReact OnReact;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable")
	TArray<AInteractable*> AssignedActors;
	
	UFUNCTION(BlueprintCallable)
	void Interact();
};
