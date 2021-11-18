#pragma once

#include<SFML/Audio.hpp>

class AudioClip
{
private:
  sf::SoundBuffer* soundBuffer{};
  sf::Sound* sound{};

public:
  AudioClip(const char* audioUrl, float volume);
  ~AudioClip();

  void Play();
};