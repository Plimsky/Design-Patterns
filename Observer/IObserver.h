#pragma once

#include "Entity.h"

enum class Event
{
    ENTITY_FELL,
    ENTITY_GET_HIT
};

class IObserver
{
public:
    virtual ~IObserver() = default;
    virtual void OnNotify(Entity& p_entity, const Event& p_event) = 0;
};
