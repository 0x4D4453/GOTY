#ifndef GRAPHICSMANAGER_H
#define GRAPHICSMANAGER_H

#include <SFML/Graphics.hpp>

class Being;

namespace Manager {
  class GraphicsManager {
    private:
      static GraphicsManager* m_instance;
      sf::RenderWindow m_window;
      sf::View m_view;
    
    private:
      GraphicsManager();
      void windowSetup();
    
    public:
      ~GraphicsManager();
      static GraphicsManager* getInstance();
      const bool isOpen() const;
      void pollEvents();
      void clear();
      void display();
      void drawBeing(Being* pBeing);
  };
}

#endif