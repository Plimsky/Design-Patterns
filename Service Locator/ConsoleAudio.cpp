#include "ConsoleAudio.h"

#include <iostream>

void ConsoleAudio::PlaySound(const int p_soundId)
{
    std::cout << "Playing sound num : " << p_soundId << '\n';
}

void ConsoleAudio::StopSound(const int p_soundId)
{
    std::cout << "Stopping sound num : " << p_soundId << '\n';
}

void ConsoleAudio::StopAllSounds()
{
    std::cout << "Stopping all sounds\n";
}
