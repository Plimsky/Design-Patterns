#include "NeutralBehaviour.h"
#include <iostream>

void NeutralBehaviour::Move()
{
	std::cout << "Neutral Move\n";
}

void NeutralBehaviour::Attack(const Entity&)
{
	std::cout << "Neutral Attack\n";
}

void NeutralBehaviour::Jump()
{
	std::cout << "Neutral Jump\n";
}

void NeutralBehaviour::Crouch()
{
	std::cout << "Neutral Crouch\n";
}

void NeutralBehaviour::Dodge()
{
	std::cout << "Neutral Dodge\n";
}
