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
```


###************ INDIA METRO FARE CALCULATOR ************

1. Show All Stations
2. Show Metro Map
3. Get Shortest Distance
4. Get Fastest Time

Enter source and destination:
Noida Sector 62~B
New Delhi~YO

Shortest distance: 25 km
Path: Noida Sector 62~B -> Botanical Garden~B -> ... -> New Delhi~YO


## Project Structure

Single-file implementation (`main.cpp`) containing:
- City metro maps
- Graph logic
- Menu system

## Future Enhancements

- GUI implementation
- Real-time fare calculation
- Expanded station datasets
- Interchange-based path customization

---

**Author**: Rushan Aqil  
**Education**: Final Year B.Tech (Computer Engineering)
