#ifndef ENTITY_H
#define ENTITY_H

#include "Being.h"

#include <SFML/Graphics.hpp>

namespace Entities {
  class Entity : public Being {
    protected:
      sf::Vector2f m_position;
    
    public:
      Entity(sf::Vector2f position);
      ~Entity();
      void setPosition(sf::Vector2f position);
      virtual void save() = 0;
      virtual void exec() = 0;
  };
};

#endif