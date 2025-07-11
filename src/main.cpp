#include "../include/MetroGraph.h"
#include "../include/Utils.h"
#include <iostream>
using namespace std;

int main() {
    cout << "************ INDIA METRO FARE CALCULATOR ************\n";
    while (true) {
        displayCities();
        int cityChoice;
        cin >> cityChoice;
        if (cityChoice == 12) break;

        MetroGraph g;
        switch (cityChoice) {
            case 1: MetroGraph::Create_Delhi_Map(g); break;
            case 2: MetroGraph::Create_Mumbai_Map(g); break;
            case 3: MetroGraph::Create_Kolkata_Map(g); break;
            case 4: MetroGraph::Create_Bengaluru_Map(g); break;
            case 5: MetroGraph::Create_Chennai_Map(g); break;
            case 6: MetroGraph::Create_Hyderabad_Map(g); break;
            case 7: MetroGraph::Create_Lucknow_Map(g); break;
            case 8: MetroGraph::Create_Ahmedabad_Map(g); break;
            case 9: MetroGraph::Create_Kochi_Map(g); break;
            case 10: MetroGraph::Create_Jaipur_Map(g); break;
            case 11: MetroGraph::Create_Indore_Map(g); break;
            default: cout << "Invalid city!\n"; continue;
        }
        runMetroMenu(g);
    }
    cout << "\nThanks for using India Metro Fare Calculator!\n";
    return 0;
}
