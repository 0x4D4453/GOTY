#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace Constants {
  constexpr unsigned int WINDOW_WIDTH = 1280;
  constexpr unsigned int WINDOW_HEIGHT = 720;
  constexpr char GAME_NAME[] = "TEST";
  constexpr int WINDOW_STYLE = sf::Style::Close | sf::Style::Titlebar;

  constexpr char PLAYER_TEXTURE[] = "placeholder.png";

  constexpr float GRAVITY = 9.81f;
}

#endif