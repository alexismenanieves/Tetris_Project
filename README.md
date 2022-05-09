## README

### ABOUT
This small project serves as an explanation on how to create a Tetris game in 
C++, using the SFML Library. 

### HOW TO INSTALL SFML LIBRARIES ON YOUR MAC?
Firstly, you'll need SFML. For an M1 Mac, we don't have the compiled libraries, 
so we have to follow these steps:
1. In the terminal, download the source code on a folder called "build", go to 
the folder and use cmake to compile and build the libraries [1] for the M1 chip 
[2]
```
git clone https://github.com/SFML/SFML.git
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=ON 
-DCMAKE_OSX_ARCHITECTURES=arm64 ..
make all
```
### REFERENCES
[1] SFML. (May 9, 2022).  TOPIC: CAN'T COMPILE "SFML WORKS" EXAMPLE PROJECT ON M1 MAC  (READ 8042 TIMES) https://en.sfml-dev.org/forums/index.php?topic=27867.0  
[2] StackOverflow (May 9, 2022). Installing cmake with Hombrew https://stackoverflow.com/questions/32185079/installing-cmake-with-home-brew  
