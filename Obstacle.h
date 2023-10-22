#ifndef OBSTACLE_H
#define OBSCTACLE_H

#include "Entity.h"

#include <SFML/Graphics.hpp>

namespace Entities {
  class Obstacle : public Entity {
    protected:
      const bool m_harmful;

    public:
      Obstacle(sf::Vector2f position = sf::Vector2f(0.f, 0.f), const bool harmful = false);
      ~Obstacle();
      virtual void save() = 0;
      virtual void exec() = 0;
  };
}

#endif