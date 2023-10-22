#ifndef GAME_H
#define GAME_H

#include "GraphicsManager.h"
#include "Stage.h"

class Game {
  private:
    Manager::GraphicsManager* m_graphicsManager;
    Stages::Stage stage1;
  
  public:
    Game();
    ~Game();
    void run();
};

#endif