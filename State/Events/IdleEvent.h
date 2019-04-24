#pragma once
#include "../Player.h"
#include "../States/IdleState.h"
#include "../States/JumpState.h"
#include "../States/AttackState.h"

class IdleEvent
{
public:
    std::variant<IdleState, JumpState, AttackState> operator()(const IdleState&) const;
    std::variant<IdleState, JumpState, AttackState> operator()(const JumpState&) const;
    std::variant<IdleState, JumpState, AttackState> operator()(const AttackState&) const;
};
