#include "Player.h"
#include "GameSessionManager.h"
#include <iostream>

void Player::Die()
{
    std::cout << "Player dead\n";
    GameSessionManager::GetInstance().ResetLevel();
}

void Player::Succeed()
{
    std::cout << "Player Succeed\n";
    GameSessionManager::GetInstance().ResetLevel();
}
