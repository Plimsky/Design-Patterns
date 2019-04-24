#include "JumpEvent.h"

StatePlayer JumpEvent::operator()(const IdleState&) const
{
    return JumpState{};
}

StatePlayer JumpEvent::operator()(const JumpState&) const
{
    return JumpState{};
}

StatePlayer JumpEvent::operator()(const AttackState&) const
{
    return JumpState{};
}
