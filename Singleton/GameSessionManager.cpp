#include "GameSessionManager.h"
#include <iostream>

GameSessionManager::GameSessionManager()
{
    std::cout << "GameSessionManager();\n";
}

GameSessionManager::~GameSessionManager()
{
    std::cout << "~GameSessionManager();\n";
}

void GameSessionManager::ResetLevel() const
{
    std::cout << "ResetLevel();\n";
}

void GameSessionManager::LoadNextLevel() const
{
    std::cout << "LoadNextLevel();\n";
}

void GameSessionManager::SpawnEnemies() const
{
    std::cout << "SpawnEnemies();\n";
}
