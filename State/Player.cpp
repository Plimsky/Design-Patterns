#include "Player.h"

#include "Events/JumpEvent.h"
#include "Events/IdleEvent.h"
#include "Events/AttackEvent.h"
#include <iostream>

Player::Player() : m_state{IdleState{}}
{}

void Player::Idle()
{
	std::cout << "Idle\n";
    m_state = std::visit(IdleEvent{}, m_state);
}

bool Player::IsIdle()
{
    return std::get_if<IdleState>(&m_state) != nullptr;
}

void Player::DoJump()
{
	std::cout << "Jumping\n";
    m_state = std::visit(JumpEvent{}, m_state);
}

bool Player::IsJumping()
{
    return std::get_if<JumpState>(&m_state) != nullptr;
}

void Player::DoAttack()
{
	std::cout << "Attacking\n";
	m_state = std::visit(AttackEvent{}, m_state);
}
bool Player::IsAttacking()
{
    return std::get_if<AttackState>(&m_state) != nullptr;
}
