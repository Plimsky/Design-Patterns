#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
    bool IsOnBridge() const { return true; }
};
