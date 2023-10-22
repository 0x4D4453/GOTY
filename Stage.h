#ifndef STAGE_H
#define STAGE_H

#include "CollisionManager.h"
#include "EntityList.h"
#include "GraphicsManager.h"
#include "Player.h"

namespace Stages {
  class Stage {
    protected:
      static Manager::GraphicsManager* m_graphicsManager;
      Manager::CollisionManager m_collisionManager;
      Entities::Player m_player1;
      EntityList m_platforms;

    protected:
      void createMap();
      void createPlatform(const sf::Vector2f position, const char* texture);
      void drawPlatforms();
      void updateView();
      void update();
    
    public:
      Stage();
      ~Stage();
      virtual void exec();
  };
}

#endif