# India Metro Fare Calculator

A C++ console application for calculating metro routes across multiple Indian cities using Dijkstra's algorithm.

## Features
- Supports 11 major Indian metro cities
- Calculates:
  - Shortest distance between stations
  - Fastest travel time (with interchange penalties)
- Displays metro maps and station lists
- Interactive console menu

## Supported Cities
1. Delhi
2. Mumbai
3. Kolkata
4. Bengaluru
5. Chennai
6. Hyderabad
7. Lucknow
8. Ahmedabad
9. Kochi
10. Jaipur
11. Indore

## Technical Implementation
### Graph Structure
- **Nodes**: Metro stations
- **Edges**: Connections between stations
- **Weights**:
  - Distance (km) for shortest path
  - Time (seconds) for fastest route:
    - Base time per station: 120s
    - Additional time: 40s per km

### Core Classes
```cpp
class MetroGraph {
    unordered_map<string, Vertex> vertices;
    // Methods for graph operations
};

class Vertex {
    unordered_map<string, int> neighbours;
    // Stores connected stations and distances
};
