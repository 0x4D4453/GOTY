#include "Player.h"
#include "Constants.h"

#include <cmath>

namespace Entities {
  Player::Player()
    : Character()
    , m_points(0)
    , m_isJumping(false)
    , m_jumpHeight(3.0f)
  {
    setup();
  }

  Player::~Player() {

  }

  void Player::setup() {  
    setTexture(Constants::PLAYER_TEXTURE);
    m_sprite.setTextureRect(sf::IntRect(2, 197, 12, 11));
    m_sprite.setScale(sf::Vector2f(4.f, 4.f));
    m_sprite.setOrigin(12/2, 0);
  } 

  void Player::handleInput() {
    m_velocity.x = 0.f;
    m_velocity.y += Constants::GRAVITY * m_dt;

    using sf::Keyboard;

    if (Keyboard::isKeyPressed(Keyboard::A))
      m_velocity.x -= m_speed * m_dt;
    if (Keyboard::isKeyPressed(Keyboard::D))
      m_velocity.x += m_speed * m_dt;

    if (Keyboard::isKeyPressed(Keyboard::Space) && !m_isJumping) {
      m_velocity.y  = -sqrt(2.0f * Constants::GRAVITY * m_jumpHeight);
      m_isJumping = true;
    }
  }

  void Player::update() {
    if (m_velocity.x < 0)
      m_sprite.setScale(-4.f, 4.f);
    else if (m_velocity.x > 0)
      m_sprite.setScale(4.f, 4.f);
  
    move();
  }

  void Player::exec() {
    handleInput();
    update();
    draw();
  }

  void Player::save() {

  }
}