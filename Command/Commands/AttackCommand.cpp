#include "AttackCommand.h"

#include <iostream>

void AttackCommand::Execute(const Actor& p_actor)
{
    p_actor.Attack();
}

void AttackCommand::Undo()
{
    std::cout << "Undo Attacking\n";
}
