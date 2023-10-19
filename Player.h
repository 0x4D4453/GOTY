#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

namespace Entities {
  class Player : public Character {
    private:
      int m_points;
      bool m_isJumping;
      const float m_jumpHeight;
    
    public:
      Player();
      ~Player();
      void setup();
      void handleInput();
      void update();
      void exec();
      void save();
  };
}

#endif 