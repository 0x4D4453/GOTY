#ifndef GAME_H
#define GAME_H

#include "GraphicsManager.h"
#include "Player.h"

class Game {
  private:
    Manager::GraphicsManager* m_graphicsManager;
    Entities::Player player1;
  
  public:
    Game();
    ~Game();
    void run();
};

#endif