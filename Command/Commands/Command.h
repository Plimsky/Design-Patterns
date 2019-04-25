#pragma once
#include "../Actor.h"

class Command
{
public:
    virtual ~Command() = default;
    virtual void Execute(const Actor& p_actor) = 0;
    virtual void Undo() = 0;
};
