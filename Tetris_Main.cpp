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
  
  int dx=0; 
  bool rotate=0;
  int colorNum=1;
  
  // Ok, let's add an instruction to poll if the window is open
  while(window.isOpen())
  {
    Event e;
    while(window.pollEvent(e))
    {
      if(e.type == Event::Closed)
        window.close();
      // If we want to rotate the figure
      if(e.type == Event::KeyPressed)
      {
        if(e.key.code == Keyboard::Up) rotate = true;
        else if(e.key.code == Keyboard::Left) dx=-1;
        else if(e.key.code == Keyboard::Right) dx=1;
      }
    }
  
  // Now move the figure
  for(int i=0;i<4;i++) a[i].x+=dx;
    
  // And rotate the figure
  if(rotate)
  {
    Point p = a[1]; // Center of rotation
    for(int i=0;i<4;i++)
    {
      int x = a[i].y - p.y;
      int y = a[i].x - p.x;
      a[i].x = p.x - x;
      a[i].y = p.y + y;
    }
  }
  
  
  int n=3;
  if(a[0].x==0)
  for(int i=0;i<4;i++)
  {
    a[i].x = figures[n][i] % 2;
    a[i].y = figures[n][i] / 2;
  }
  
  dx = 0;
  rotate = 0;
  
  for(int i=0; i<4; i++)
  {
    s.setPosition(a[i].x*18, a[i].y*18);
    window.draw(s);
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

