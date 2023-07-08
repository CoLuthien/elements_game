
#pragma once

#include "Teams/ElementsTeamSharedInfo.h"

#include <Containers/Map.h>
#include <Subsystems/WorldSubsystem.h>

#include "ElementsTeamSubsystem.generated.h"

UCLASS()
class ELEMENTS_API UElementsTeamSharedInfoSubsystem : public UWorldSubsystem
{
    GENERATED_BODY()
public:
    void RegisterTeamInfo(AElementsTeamSharedInfo* Info);
    void UnregiserTeamInfo(int32 Id);

    AElementsTeamSharedInfo* GetSharedTeamInfo(int32 Id) const;

private:
    UPROPERTY()
    TMap<int32, AElementsTeamSharedInfo*> Infos;
};