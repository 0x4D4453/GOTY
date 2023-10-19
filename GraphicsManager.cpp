#include "GraphicsManager.h"
#include "Being.h"
#include "Constants.h"

#include <SFML/Graphics.hpp>

namespace Manager {
  GraphicsManager* GraphicsManager::m_instance(NULL);

  GraphicsManager::GraphicsManager()
    : m_window(sf::VideoMode(Constants::WINDOW_WIDTH, Constants::WINDOW_HEIGHT), Constants::GAME_NAME, Constants::WINDOW_STYLE)
    , m_view(sf::Vector2f(0.f, 0.f), sf::Vector2f(static_cast<float>(Constants::WINDOW_WIDTH), static_cast<float>(Constants::WINDOW_HEIGHT)))
  {

  }

  void GraphicsManager::windowSetup() {
    m_window.setFramerateLimit(60);
    m_window.setVerticalSyncEnabled(true);
  }

  GraphicsManager::~GraphicsManager() {

  }

  GraphicsManager* GraphicsManager::getInstance() {
    if (m_instance == NULL)
      m_instance = new GraphicsManager;
    return m_instance;
  } 

  const bool GraphicsManager::isOpen() const {
    return m_window.isOpen();
  }

  void GraphicsManager::pollEvents() {
    sf::Event evnt;
    while (m_window.pollEvent(evnt)) {
      if (evnt.type == sf::Event::Closed)
        m_window.close();
    }
  }

  void GraphicsManager::clear() {
    m_window.clear();
  }

  void GraphicsManager::display() {
    m_window.display();
  }

  void GraphicsManager::drawBeing(Being* pBeing) {
    m_window.draw(*(pBeing->getSprite()));
  }
}