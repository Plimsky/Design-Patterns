#include "AffraidBehaviour.h"
#include <iostream>

AffraidBehaviour::AffraidBehaviour()
{
    std::cout << "Is Affraid\n";
}

void AffraidBehaviour::Move()
{
    std::cout << "Affraid Move\n";
}

void AffraidBehaviour::Attack(const Entity&)
{
    std::cout << "Affraid Move\n";
}

void AffraidBehaviour::Jump()
{
    std::cout << "Affraid Move\n";
}

void AffraidBehaviour::Crouch()
{
    std::cout << "Affraid Move\n";
}

void AffraidBehaviour::Dodge()
{
    std::cout << "Affraid Move\n";
}
