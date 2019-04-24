#include "Player.h"

#include "Events/JumpEvent.h"
#include "Events/IdleEvent.h"

Player::Player() : m_state{IdleState{}}
{}

void Player::Idle()
{
    m_state = std::visit(IdleEvent{}, m_state);
}

bool Player::IsIdle()
{
    return std::get_if<IdleState>(&m_state) != nullptr;
}

void Player::DoJump()
{
    m_state = std::visit(JumpEvent{}, m_state);
}

bool Player::IsJumping()
{
    return std::get_if<JumpState>(&m_state) != nullptr;
}
