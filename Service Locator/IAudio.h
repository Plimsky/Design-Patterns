#pragma once

class IAudio
{
public:
  virtual ~IAudio() = default;
  virtual void PlaySound(int p_soundId) = 0;
  virtual void StopSound(int p_soundId) = 0;
  virtual void StopAllSounds() = 0;
};