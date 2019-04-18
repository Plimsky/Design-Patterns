#pragma once

#include "Entity.h"

enum class Event
{
    ENTITY_FELL,
    ENTITY_GET_HIT
};

class Observer
{
public:
    virtual ~Observer() = default;
    virtual void OnNotify(Entity& p_entity, const Event&) = 0;
};
