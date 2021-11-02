#include "AudioClip.hh"

AudioClip::AudioClip()
{
  soundBuffer = new sf::SoundBuffer();
  sound = new sf::Sound();

  soundBufferStepsSfx->loadFromFile("assets/audio/assets_audio_stepsfx.ogg");
  soundSFXSteps->setBuffer(*soundBufferStepsSfx);
  soundSFXSteps->setVolume(volume);
}

AudioClip::~AudioClip()
{
}

void AudioClip::Play()
{
  sound->play();
}