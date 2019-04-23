#include <iostream>

#include "InventoryComponent.h"

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
