#include "IdleEvent.h"

#include <iostream>

StatePlayer IdleEvent::operator()(const IdleState&) const
{
	std::cout << "From Idle to Idle\n";
    return IdleState{};
}

StatePlayer IdleEvent::operator()(const JumpState&) const
{
	std::cout << "From Jump to Idle\n";
    return IdleState{};
}

StatePlayer IdleEvent::operator()(const AttackState&) const
{
	std::cout << "From Attack to Idle\n";
    return IdleState{};
}
