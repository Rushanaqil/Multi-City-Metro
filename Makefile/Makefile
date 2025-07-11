CXX = g++
CXXFLAGS = -std=c++17 -Iinclude
OBJ = src/MetroGraph.o src/CityMaps.o src/Utils.o src/main.o

MultiCityMetro: $(OBJ)
	$(CXX) $(CXXFLAGS) -o MultiCityMetro $(OBJ)

src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f src/*.o MultiCityMetro
