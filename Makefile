# LIBS call the libraries we need, CXX defines g++ to compile
LIBS=-lsfml-graphics -lsfml-window -lsfml-system
CXX := g++

# Now everytime we call make, we will build Tetris
all: Tetris

%.o: %.cpp
	$(CXX) -c $< -o $@

%.o: %.hpp
	$(CXX) -c $< -o $@

Tetris: Tetris_Main.o
	@echo "** Building the game"
	$(CXX) -o Tetris Tetris_Main.o $(LIBS)

clean:
	@echo "** Removing object files and executable..."
	rm -f Tetris *.o