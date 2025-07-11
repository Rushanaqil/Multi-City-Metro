#include "../include/Utils.h"
#include <iostream>
#include <cmath>
using namespace std;

void displayCities() {
    cout << "\nSelect Metro City:\n";
    cout << "1. Delhi\n2. Mumbai\n3. Kolkata\n4. Bengaluru\n5. Chennai\n6. Hyderabad\n7. Lucknow\n8. Ahmedabad\n9. Kochi\n10. Jaipur\n11. Indore\n12. Exit\nEnter choice: ";
}

void runMetroMenu(MetroGraph& g) {
    while (true) {
        cout << "\n1. Show All Stations\n2. Show Metro Map\n3. Get Shortest Distance\n4. Get Fastest Time\n5. Back\nEnter choice: ";
        int ch; cin >> ch;
        if (ch == 5) break;

        string src, dest;
        switch (ch) {
            case 1:
                g.displayStations(); break;
            case 2:
                g.displayMap(); break;
            case 3:
                cout << "Enter source and destination:\n";
                cin >> ws; getline(cin, src);
                getline(cin, dest);
                if (!g.hasStation(src) || !g.hasStation(dest)) {
                    cout << "Invalid stations!\n";
                } else {
                    auto res = g.dijkstra(src, dest, false);
                    cout << "Shortest distance: " << res.cost << " km\nPath: " << res.path << "\n";
                }
                break;
            case 4:
                cout << "Enter source and destination:\n";
                cin >> ws; getline(cin, src);
                getline(cin, dest);
                if (!g.hasStation(src) || !g.hasStation(dest)) {
                    cout << "Invalid stations!\n";
                } else {
                    auto res = g.dijkstra(src, dest, true);
                    cout << "Fastest time: " << ceil(res.cost / 60.0) << " minutes\nPath: " << res.path << "\n";
                }
                break;
            default:
                cout << "Invalid option!\n";
        }
    }
}
