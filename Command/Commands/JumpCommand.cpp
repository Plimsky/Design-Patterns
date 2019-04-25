#include "JumpCommand.h"

#include <iostream>

void JumpCommand::Execute()
{
    Jump();
}

void JumpCommand::Jump() const
{
    std::cout << "Jumping\n";
}
