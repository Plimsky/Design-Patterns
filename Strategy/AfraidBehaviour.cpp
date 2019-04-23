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
    std::cout << "Affraid Attack\n";
}

void AfraidBehaviour::Jump()
{
    std::cout << "Affraid Jump\n";
}

void AfraidBehaviour::Crouch()
{
    std::cout << "Affraid Crouch\n";
}

void AfraidBehaviour::Dodge()
{
    std::cout << "Affraid Dodge\n";
}
