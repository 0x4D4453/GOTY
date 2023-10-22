#ifndef CHARACTER_H
#define CHARACTER_H

#include "Entity.h"

namespace Entities {
  class Character : public Entity {
    protected:
      static float m_dt;
      int m_healthPoints;
      float m_speed;
      sf::Vector2f m_velocity;
    
    public:
      Character();
      ~Character();
      static void setDeltaTime(float dt);
      void setVelocity(const sf::Vector2f velocity);
      void move();
      void move(const sf::Vector2f movement);
      virtual void save() = 0;
      virtual void exec() = 0;
  };
}

#endif