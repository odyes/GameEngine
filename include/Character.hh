#pragma once
#include<SFML/Graphics.hpp>
#include<string>
#include<iostream>
#include "Rigidbody.hh"
#include "GameObject.hh"
#include <SFML/Audio.hpp>

class Character : public GameObject
{
private:

  float moveSpeed;

  sf::SoundBuffer* soundBufferStepsSfx{};
  sf::Sound* soundSFXSteps{};

  float volume{4.f};
  float stepDelay{0.3f};
  float currentStepSFXTime{};

  void Movement(float& deltaTime);
  void FlipSprite();
public:
  Character();
  Character(const char* textureUrl, sf::Vector2f position, 
  float scale, float width, float height, int col, int row, float moveSpeed, 
  sf::RenderWindow*& window, b2World*& world);
  ~Character();

  void Update(float& deltaTime) override;
};