#include "Game.h"
#include "GraphicsManager.h"

#include "Character.h"

Game::Game() 
  : m_graphicsManager(Manager::GraphicsManager::getInstance())
  , player1()
{
  run();
}

Game::~Game() {
  delete m_graphicsManager;
}

void Game::run() {
  float dt;
  sf::Clock dt_clock;

  while (m_graphicsManager->isOpen()) {
    dt = dt_clock.restart().asSeconds();
    Entities::Character::setDeltaTime(dt);
    m_graphicsManager->pollEvents();
    m_graphicsManager->clear();
    player1.exec();
    m_graphicsManager->display();
  }
}