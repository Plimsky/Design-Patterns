#pragma once
#include "IAudio.h"
#include "IService.h"

class ConsoleAudio: public IAudio, public IService
{
public:
    void PlaySound(int p_soundId) override;
    void StopSound(int p_soundId) override;
    void StopAllSounds() override;
};
