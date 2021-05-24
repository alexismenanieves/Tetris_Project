#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;

// Let's define a field array
const int M = 20;
const int N = 10;
int field[M][N] = {0};

struct Point
{int x,y;} a[4], b[4];

// We need the various forms of Tetris figures
int figures[7][4] = 
{
  1,3,5,7, // I
  2,4,5,7, // Z
  3,5,4,6, // S
  3,5,4,7, // T
  2,3,5,7, // L
  3,5,7,6, // J
  2,3,4,5, // O
};

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
    
  int n=3;
  for(int i=0;i<4;i++)
  {
    a[i].x = figures[n][i] % 2;
    a[i].y = figures[n][i] / 2;
  }
  // Now clear the window
  window.clear(Color::White);
  
  for(int i=0; i<4; i++)
  {
    s.setPosition(a[i].x*18, a[i].y*18);
    window.draw(s);
  }
  // Let's draw our sprite into the window
  window.draw(s);
  // After drawing the sprite, let's display the window
  window.display();
  }
  return 0;
}

