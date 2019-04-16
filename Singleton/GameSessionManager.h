#pragma once
#include "Singleton.h"

class GameSessionManager : public Singleton<GameSessionManager>
{
public:
    GameSessionManager();
    ~GameSessionManager();
    void ResetLevel() const;
    void LoadNextLevel() const;
    void SpawnEnemies() const;
};
