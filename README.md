## README

### ABOUT
This small project serves as an explanation on how to create a Tetris game in 
C++, using the SFML Library. 

### HOW TO RUN SFML ON YOUR MAC?
Firstly, you'll need SFML. For an M1 Mac, we don't have the compiled libraries, 
so we have to follow these steps:
1. In the terminal, download the source code on a folder called "build", go to 
the folder and use cmake to compile and build the libraries
```
git clone https://github.com/SFML/SFML.git
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=ON 
-DCMAKE_OSX_ARCHITECTURES=arm64 ..
make all
```

