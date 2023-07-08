
#pragma once

#include <GameFramework/Info.h>
#include "ElementsTeamInfoBase.generated.h"

/*
immutable informations needs to find!!
race
*/

UCLASS(Abstract)
class AElementsTeamInfoBase : public AInfo
{
    GENERATED_BODY()
public:
    int32 GetTeamId() const { return TeamId; }

private:
    friend class AElementsPlayerController;
    void SetTeamId(int32 Id) { TeamId = Id; }

private:
    UPROPERTY()
    int32 TeamId;
};
