#include <iostream>

#include "GameSessionManager.h"
#include "Player.h"

int main()
{
    auto& gameSession = GameSessionManager::GetInstance();
    gameSession.ResetLevel();

    std::cout << '\n';

    auto& otherGameSession = GameSessionManager::GetInstance();
    otherGameSession.ResetLevel();

    std::cout << '\n';

    Player p1{};

    p1.Die();

    std::cout << '\n';
    
    p1.Succeed();

    return 0;
}
