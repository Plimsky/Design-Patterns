#include "AggressiveBehaviour.h"
#include <iostream>

AggressiveBehaviour::AggressiveBehaviour()
{
    std::cout << "Is Aggressive\n";
}

void AggressiveBehaviour::Move()
{
    std::cout << "Aggressive Move\n";
}

void AggressiveBehaviour::Attack(const Entity&)
{
    std::cout << "Aggressive Attack\n";
}

void AggressiveBehaviour::Jump()
{
    std::cout << "Aggressive Jump\n";
}

void AggressiveBehaviour::Crouch()
{
    std::cout << "Aggressive Crouch\n";
}

void AggressiveBehaviour::Dodge()
{
    std::cout << "Aggressive Dodge\n";
}
