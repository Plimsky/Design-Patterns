#include "Actor.h"

#include <iostream>

void Actor::Jump() const
{
    std::cout << "Jumping\n";
}

void Actor::Attack() const
{
    std::cout << "Attacking\n";
}
