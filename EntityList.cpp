#include "EntityList.h"

#include <iostream>

EntityList::EntityList()
  : m_entities()
{

}

EntityList::~EntityList() {

}

void EntityList::include(Entities::Entity* pEntity) {
  if (!pEntity) {
    std::cout << "Error adding entity to the list!\n";
    return;
  }

  m_entities.pushBack(pEntity);
}

List<Entities::Entity*>::Iterator EntityList::first() {
  return m_entities.getHead();
}

List<Entities::Entity*>::Iterator EntityList::last() {
  return NULL;
}