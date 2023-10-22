#ifndef COLLISIONMANAGER_H
#define COLLISIONMANAGER_H

#include "EntityList.h"
#include "Player.h"

namespace Manager {
  class CollisionManager {
    private:  
      Entities::Player* m_pPlayer1;
      EntityList* m_pPlatforms;
    
    public:
      CollisionManager();
      ~CollisionManager();
      void setPlayer(Entities::Player* player);
      void setPlatformsList(EntityList* platformsList);
      void verifyCollisionPlatforms();
  };
}

#endif