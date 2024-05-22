CXX = g++
CXXFLAGS = -std=c++11 -Iheader
LDFLAGS = 
SRC = src/StrategyGame.cpp src/CombatGame.cpp src/SimulationGame.cpp Main.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = game

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
