#include "AfraidBehaviour.h"
#include <iostream>

AfraidBehaviour::AfraidBehaviour()
{
    std::cout << "Is Affraid\n";
}

void AfraidBehaviour::Move()
{
    std::cout << "Affraid Move\n";
}

void AfraidBehaviour::Attack(const Entity&)
{
    std::cout << "Affraid Move\n";
}

void AfraidBehaviour::Jump()
{
    std::cout << "Affraid Move\n";
}

void AfraidBehaviour::Crouch()
{
    std::cout << "Affraid Move\n";
}

void AfraidBehaviour::Dodge()
{
    std::cout << "Affraid Move\n";
}
