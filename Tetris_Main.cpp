#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;
int main()
{
  RenderWindow window(VideoMode(400,600),"Tetris - A homemade game");
  while(window.isOpen())
  {
    Event e;
    while(window.pollEvent(e))
    {
      if(e.type == Event::Closed)
        window.close();
    }
  window.clear(Color::White);
  window.display();
  }
  return 0;
}

