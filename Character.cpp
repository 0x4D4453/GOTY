#include "Character.h"

namespace Entities {
  float Character::m_dt(0.f);

  Character::Character()
    : Entity(sf::Vector2f(0.f, 0.f))
    , m_healthPoints(0)
    , m_speed(300.f)
    , m_velocity(sf::Vector2f(0.f, 0.f))
  {

  }

  Character::~Character() {

  }

  void Character::setDeltaTime(float dt) {
    m_dt = dt;
  }

  void Character::move() {
    m_sprite.move(m_velocity);
  }
}