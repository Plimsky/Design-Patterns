#pragma once
#include "../States/IdleState.h"
#include "../States/JumpState.h"
#include "../States/AttackState.h"
#include "../Player.h"

class JumpEvent
{
public:
    StatePlayer operator()(const IdleState&) const;
    StatePlayer operator()(const JumpState&) const;
    StatePlayer operator()(const AttackState&) const;
};
