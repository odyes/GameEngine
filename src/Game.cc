#include "Engine/CommonHeaders.hh"

sf::RectangleShape* rectangle{new sf::RectangleShape(sf::Vector2f(100.f, 100.f))};

Game::Game()
{
  window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_NAME);
  event = new sf::Event();
}

Game::~Game()
{
}

void Game::Run()
{
  Start();
  MainLoop();
}

void Game::MainLoop()
{
  while (window->isOpen())
  {
    while (window->pollEvent(*event))
    {
      if(event->type == sf::Event::Closed)
      {
        window->close();
      }
    }

    InputHandle();
    Update();
    Render();
  }
}

  void Game::Update()
  {
    
  }

  void Game::Start()
  {
    rectangle->setFillColor(sf::Color::Red);
    rectangle->setPosition(sf::Vector2f(300.f, 500.f));
  }

  void Game::Render()
  {
    window->clear(sf::Color::Black);
    Draw();
    window->display();
  }

  void Game::Draw()
  {
    window->draw(*rectangle);
  }

  void Game::InputHandle()
  {
    rectangle->move(InputSystem::GetAxis());
  }