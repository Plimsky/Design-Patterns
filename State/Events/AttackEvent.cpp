#include "AttackEvent.h"

#include <iostream>

StatePlayer AttackEvent::operator()(const IdleState&) const
{
	std::cout << "From Idle to Attack\n";
    return AttackState{};
}

StatePlayer AttackEvent::operator()(const JumpState&) const
{
	std::cout << "From Jump to Attack\n";
    return AttackState{};
}

StatePlayer AttackEvent::operator()(const AttackState&) const
{
	std::cout << "From Attack to Attack\n";
    return AttackState{};
}
