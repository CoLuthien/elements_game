
#pragma once

#include <UObject/Interface.h>
#include "IElementsActorInterface.generated.h"

UINTERFACE()
class CARTOGRAPHER_API UElementsActorInterface : public UInterface
{
    GENERATED_BODY()
};

class IElementsActorInterface
{
    GENERATED_BODY()
public:
    virtual void UpdateStatus(float Dt) = 0;
    virtual void SetTeam();
};