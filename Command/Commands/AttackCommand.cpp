#include "AttackCommand.h"

#include <iostream>

void AttackCommand::Execute()
{
    Attack();
}

void AttackCommand::Attack() const
{
    std::cout << "Attacking\n";
}
