#include "JumpCommand.h"

#include <iostream>

void JumpCommand::Execute(const Actor& p_actor)
{
    p_actor.Jump();
}

void JumpCommand::Undo()
{
    std::cout << "Undo Jumping\n";
}
