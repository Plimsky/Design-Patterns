#include <iostream>

#include "CollisionComponent.h"

CollisionComponent::CollisionComponent()
{
    std::cout << "CollisionComponent()\n";
}

CollisionComponent::~CollisionComponent()
{
    std::cout << "~CollisionComponent()\n";
}

void CollisionComponent::Update()
{
    std::cout << "CollisionComponent::Update()\n";
}
