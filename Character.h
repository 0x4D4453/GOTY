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
      virtual void save() = 0;
      virtual void exec() = 0;
      static void setDeltaTime(float dt);
      void move();
  };
}

#endif