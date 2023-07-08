
#include "Building/ElementsBuilding.h"

void
AElementsBuilding::BeginPlay()
{
    Super::BeginPlay();
}

int32
AElementsBuilding::GetTeamId() const
{
    return TeamId;
}

void
AElementsBuilding::SetTeamId(int32 InId)
{
    TeamId = InId;
}