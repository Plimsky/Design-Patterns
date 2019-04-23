#pragma once
#include "Entity.h"
#include "Subject.h"

class Player : public Entity, public Subject
{
public:
    void NotifyOnFall()
    {
        Notify(*this, Event::ENTITY_FELL);
    }

    bool IsOnBridge() const { return true; }
};
