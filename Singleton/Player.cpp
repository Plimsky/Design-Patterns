#include "Player.h"

#include <iostream>

#include "GameSessionManager.h"

void Player::Die()
{
    std::cout << "Player dead\n";
    GameSessionManager::GetInstance().ResetLevel();
}

void Player::Succeed()
{
    std::cout << "Player Succeed\n";
    GameSessionManager::GetInstance().LoadNextLevel();
}
