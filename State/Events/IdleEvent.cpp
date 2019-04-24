#include "IdleEvent.h"

StatePlayer IdleEvent::operator()(const IdleState&) const
{
    return IdleState{};
}

StatePlayer IdleEvent::operator()(const JumpState&) const
{
    return JumpState{};
}

StatePlayer IdleEvent::operator()(const AttackState&) const
{
    return AttackState{};
}
