#include "../include/MetroGraph.h"
#include <iostream>
#include <queue>
#include <climits>
#include <cmath>
using namespace std;

unordered_map<string, MetroGraph::Vertex> MetroGraph::vertices;

MetroGraph::MetroGraph() {
    vertices.clear();
}

void MetroGraph::addStation(string name) {
    vertices[name] = Vertex();
}

void MetroGraph::addEdge(string from, string to, int cost) {
    vertices[from].neighbours[to] = cost;
    vertices[to].neighbours[from] = cost;
}

void MetroGraph::displayStations() {
    int i = 1;
    for (const auto& v : vertices)
        cout << i++ << ". " << v.first << "\n";
}

void MetroGraph::displayMap() {
    for (const auto& v : vertices) {
        cout << v.first << " => ";
        for (const auto& n : v.second.neighbours)
            cout << n.first << " (" << n.second << " km), ";
        cout << "\n";
    }
}

bool MetroGraph::hasStation(const string& name) {
    return vertices.count(name);
}

bool MetroGraph::hasEdge(const string& from, const string& to) {
    return vertices.count(from) && vertices[from].neighbours.count(to);
}

MetroGraph::DijkstraResult MetroGraph::dijkstra(const string& src, const string& dest, bool timeBased) {
    struct Node {
        string name, path;
        int cost;
        bool operator<(const Node& other) const {
            return cost > other.cost;
        }
    };

    unordered_map<string, int> dist;
    unordered_map<string, string> path;
    priority_queue<Node> pq;

    for (auto& it : vertices) {
        dist[it.first] = INT_MAX;
    }

    dist[src] = 0;
    path[src] = src;
    pq.push({src, src, 0});

    while (!pq.empty()) {
        Node curr = pq.top(); pq.pop();
        if (curr.name == dest) {
            return {curr.cost, curr.path};
        }

        for (auto& nbr : vertices[curr.name].neighbours) {
            int weight = timeBased ? 120 + 40 * nbr.second : nbr.second;
            int newCost = curr.cost + weight;

            if (newCost < dist[nbr.first]) {
                dist[nbr.first] = newCost;
                path[nbr.first] = curr.path + " -> " + nbr.first;
                pq.push({nbr.first, path[nbr.first], newCost});
            }
        }
    }

    return {-1, "No Path Found"};
}
