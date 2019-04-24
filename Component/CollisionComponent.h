#pragma once
#include "IComponent.h"

class CollisionComponent : public IComponent
{
public:
    CollisionComponent();
    virtual ~CollisionComponent();
    void Update() override;
};
