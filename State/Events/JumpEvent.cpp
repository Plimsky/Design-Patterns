#include "JumpEvent.h"
#include <iostream>

StatePlayer JumpEvent::operator()(const IdleState&) const
{
	std::cout << "From Idle to Jump\n";
    return JumpState{};
}

StatePlayer JumpEvent::operator()(const JumpState&) const
{
	std::cout << "From Jump to Jump\n";
    return JumpState{};
}

StatePlayer JumpEvent::operator()(const AttackState&) const
{
	std::cout << "From Attack to Jump\n";
    return JumpState{};
}
