#pragma once
#include <variant>

#include "States/IdleState.h"
#include "States/JumpState.h"
#include "States/AttackState.h"

using StatePlayer = std::variant<IdleState, JumpState, AttackState>;

class Player
{
public:
    Player();

    void Idle();
    bool IsIdle();

    void DoJump();
    bool IsJumping();

    void DoAttack();
    bool IsAttacking();

private:
     StatePlayer m_state;
};
