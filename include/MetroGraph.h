#ifndef METROGRAPH_H
#define METROGRAPH_H

#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class MetroGraph {
public:
    class Vertex {
    public:
        unordered_map<string, int> neighbours;
    };

    static unordered_map<string, Vertex> vertices;

    class DijkstraResult {
    public:
        int cost;
        string path;
    };

    MetroGraph();
    void addStation(string name);
    void addEdge(string from, string to, int cost);
    void displayStations();
    void displayMap();
    bool hasStation(const string& name);
    bool hasEdge(const string& from, const string& to);
    DijkstraResult dijkstra(const string& src, const string& dest, bool timeBased);

    // City Map Builders
    static void Create_Delhi_Map(MetroGraph& g);
    static void Create_Mumbai_Map(MetroGraph& g);
    static void Create_Kolkata_Map(MetroGraph& g);
    static void Create_Bengaluru_Map(MetroGraph& g);
    static void Create_Chennai_Map(MetroGraph& g);
    static void Create_Hyderabad_Map(MetroGraph& g);
    static void Create_Lucknow_Map(MetroGraph& g);
    static void Create_Ahmedabad_Map(MetroGraph& g);
    static void Create_Kochi_Map(MetroGraph& g);
    static void Create_Jaipur_Map(MetroGraph& g);
    static void Create_Indore_Map(MetroGraph& g);
};

#endif
