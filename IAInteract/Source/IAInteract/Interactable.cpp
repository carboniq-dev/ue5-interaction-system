#include "Interactable.h"

AInteractable::AInteractable()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AInteractable::BeginPlay()
{
	Super::BeginPlay();
}

void AInteractable::Interact()
{
	for (const AInteractable* Interactable : AssignedActors)
	{
		Interactable->OnReact.Broadcast();
	}
}

