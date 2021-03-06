﻿#pragma once
#include "Behaviour.h"

class AfraidBehaviour : public Behaviour
{
public:
    AfraidBehaviour();
    void Move() override;
    void Attack(const Entity&) override;
    void Jump() override;
    void Crouch() override;
    void Dodge() override;
};
