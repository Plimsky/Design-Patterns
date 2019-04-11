#pragma once
#include "Behaviour.h"

class AffraidBehaviour : public Behaviour
{
public:
    AffraidBehaviour();
    void Move() override;
    void Attack(const Entity&) override;
    void Jump() override;
    void Crouch() override;
    void Dodge() override;
};
