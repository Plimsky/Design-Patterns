#pragma once

#include "Behaviour.h"

class NeutralBehaviour: public Behaviour
{
public:
    void Move() override;
    void Attack(const Entity&) override;
    void Jump() override;
    void Crouch() override;
    void Dodge() override;
};