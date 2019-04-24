#include "InventoryComponent.h"

#include <iostream>

InventoryComponent::InventoryComponent()
{
    std::cout << "InventoryComponent()\n";
}

InventoryComponent::~InventoryComponent()
{
    std::cout << "~InventoryComponent()\n";
}

void InventoryComponent::Update()
{
    std::cout << "InventoryComponent::Update()\n";
}
