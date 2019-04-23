#pragma once
#include "IComponent.h"

class CollisionComponent : public IComponent
{
public:
    CollisionComponent();
    ~CollisionComponent();
    void Update() override;
};
