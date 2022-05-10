## README
This small project creates a Tetris game in C++, using the SFML Library. 

### Structure
The main files are:
- `Tetris_Main.cpp`: The main file with the CPP code
- `Makefile`: Here we define the libraries to call and how we will compile it 
- `README.md`: A brief overview of the project

### Some images of the game


### How to install SFML libraries on your Mac?
Firstly, you'll need SFML. For an M1 Mac, we don't have the compiled libraries, 
so we have to follow these steps:
- Install cmake. You can use brew but for the M1 processor you should specify 
the architecture [1]
```
arch -arm64 brew install cmake
```

- In the terminal, download the SFML source code on a folder called "build", go 
to the folder [2] and use cmake to compile and build the libraries for the M1 
chip [3]
```
git clone https://github.com/SFML/SFML.git
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_SHARED_LIBS=ON 
-DCMAKE_OSX_ARCHITECTURES=arm64 ..
make all
```

### References
[1] StackOverflow (May 9, 2022). Installing cmake with Hombrew 
https://stackoverflow.com/questions/32185079/installing-cmake-with-home-brew  
[2] Stackoverflow (May 9, 2022). How to use cmake on Mac  
https://stackoverflow.com/questions/29727770/how-to-use-cmake-on-mac  
[3] SFML. (May 9, 2022).  TOPIC: CAN'T COMPILE "SFML WORKS" EXAMPLE PROJECT ON 
M1 MAC https://en.sfml-dev.org/forums/index.php?topic=27867.0  
 
