#pragma once

#include<SFML/Audio.hpp>

class AudioClip
{
private:
  sf::SoundBuffer* soundBufferStepsSfx{};
  sf::Sound* soundSFXSteps{};

public:
  AudioClip(const char* audioUrl, float volume);
  ~AudioClip();

  void Play();
};