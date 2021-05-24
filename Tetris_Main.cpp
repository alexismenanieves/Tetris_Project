#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;
int main()
{
  // First we have to create a window object, sized 400 x 600
  RenderWindow window(VideoMode(400,600),"Tetris - A homemade game");
  // Now let's load a texture, that is an image we will move
  Texture t;
  t.loadFromFile("Images/tiles.png");
  // The loaded texture is converted to a sprite object
  Sprite s(t);
  // And we define a rectangle where to crop the image
  s.setTextureRect(IntRect(0,0,18,18));
  
  // Ok, let's add an instruction to poll if the window is open
  while(window.isOpen())
  {
    Event e;
    while(window.pollEvent(e))
    {
      if(e.type == Event::Closed)
        window.close();
    }
  // Now clear the window
  window.clear(Color::White);
  // Let's draw our sprite into the window
  window.draw(s);
  // After drawing the sprite, let's display the window
  window.display();
  }
  return 0;
}

