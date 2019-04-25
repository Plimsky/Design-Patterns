#pragma once
#include "Command.h"

class AttackCommand : public Command
{
public:
    void Execute() override;
    void Attack() const;
};
