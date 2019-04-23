#include "Player.h"

void Player::RemoveComponent(const std::string& p_name)
{
    if (ComponentExists(p_name))
        m_components.erase(p_name);
}

bool Player::ComponentExists(const std::string& p_name)
{
    return m_components.find(p_name) != m_components.end();
}

void Player::Update() const
{
    for (auto& [name, component] : m_components)
    {
        component->Update();
    }
}
