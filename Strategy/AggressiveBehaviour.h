#pragma once
#include "Behaviour.h"

class AggressiveBehaviour : public Behaviour
{
public:
    AggressiveBehaviour();
    void Move() override;
    void Attack(const Entity&) override;
    void Jump() override;
    void Crouch() override;
    void Dodge() override;
};
