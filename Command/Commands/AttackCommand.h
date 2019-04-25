#pragma once
#include "Command.h"

class AttackCommand : public Command
{
public:
    void Execute(const Actor& p_actor) override;
    void Undo() override;
};
