#include "Platform.h"

#include "Constants.h"

namespace Entities {
  Platform::Platform(sf::Vector2f position, const char* file) 
    : Obstacle(position)
  {
    setup(file);
  }

  Platform::~Platform() {

  }

  void Platform::setup(const char* file) {
    setTexture(file);
    m_sprite.setScale(sf::Vector2f(Constants::SCALE, Constants::SCALE));
  }

  void Platform::save() {

  }

  void Platform::exec() {
    
  }
}