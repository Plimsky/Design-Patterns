#pragma once
#include "Command.h"

class JumpCommand : public Command
{
public:
    void Execute() override;
    void Jump() const;
};
