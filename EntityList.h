#ifndef ENTITYLIST_H
#define ENTITYLIST_H

#include "Entity.h"
#include "List.h"

class EntityList {
  private:
    List<Entities::Entity*> m_entities;
  
  public:
    EntityList();
    ~EntityList();
    void include(Entities::Entity* pEntity);
    List<Entities::Entity*>::Iterator first();
    List<Entities::Entity*>::Iterator last();
};

#endif