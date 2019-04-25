#pragma once
#include "Command.h"

class JumpCommand : public Command
{
public:
    void Execute(const Actor& p_actor) override;
    void Undo() override;
};
