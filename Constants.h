#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace Constants {
  constexpr unsigned int WINDOW_WIDTH = 1280;
  constexpr unsigned int WINDOW_HEIGHT = 640;
  constexpr char GAME_NAME[] = "TEST";
  constexpr int WINDOW_STYLE = sf::Style::Close | sf::Style::Titlebar;

  constexpr float SCALE = 4.f;
  constexpr float TILE_SIZE = 64.f;

  constexpr char PLAYER_TEXTURE[] = "tiles/tile_0240.png";
  constexpr char PLATFORM_TEXTURE[] = "tiles/tile_0271.png";
  constexpr char PLATFORM_TEXTURE_LEFT_CORNER[] = "tiles/tile_0270.png";
  constexpr char PLATFORM_TEXTURE_LEFT_CORNER_BLACK[] = "tiles/tile_0290.png";
  constexpr char PLATFORM_TEXTURE_RIGHT_CORNER[] = "tiles/tile_0272.png";
  constexpr char PLATFORM_TEXTURE_RIGHT_CORNER_BLACK[] = "tiles/tile_0292.png";
  constexpr char BELT_TEXTURE_LEFT[] = "tiles/tile_0124.png";
  constexpr char BELT_TEXTURE_MIDDLE[] = "tiles/tile_0125.png";
  constexpr char BELT_TEXTURE_RIGHT[] = "tiles/tile_0126.png";
  constexpr char STRIPPED_PLATFORM_TEXTURE_LEFT[] = "tiles/tile_0190.png";
  constexpr char STRIPPED_PLATFORM_TEXTURE_MIDDLE[] = "tiles/tile_0191.png";
  constexpr char STRIPPED_PLATFORM_TEXTURE_RIGHT[] = "tiles/tile_0192.png";
  constexpr char ENEMY1_TEXTURE[] = "tiles/tile_0320.png";
  constexpr char ENEMY2_TEXTURE[] = "tiles/tile_0340.png";
  constexpr char ENEMY3_TEXTURE[] = "tiles/tile_0381.png";

  constexpr float GRAVITY = 9.81f / SCALE;
  constexpr float MAX_FALL_SPEED = 5.0f / SCALE;
}

#endif