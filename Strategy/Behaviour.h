#pragma once

#include "Entity.h"

// Interface
class Behaviour
{
public:
    virtual ~Behaviour() = default;
    virtual void Move() = 0;
	virtual void Attack(const Entity&) = 0;
	virtual void Jump() = 0;
	virtual void Crouch() = 0;
	virtual void Dodge() = 0;
};