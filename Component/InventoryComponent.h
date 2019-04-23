#pragma once
#include "IComponent.h"

class InventoryComponent : public IComponent
{
public:
    InventoryComponent();
    ~InventoryComponent();
    void Update() override;
};
