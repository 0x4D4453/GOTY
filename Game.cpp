#include "Game.h"

#include "Character.h"
#include "GraphicsManager.h"

Game::Game() 
  : m_graphicsManager(Manager::GraphicsManager::getInstance())
  , stage1()
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
    stage1.exec();
    m_graphicsManager->display();
  }
}