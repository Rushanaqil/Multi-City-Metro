#include "../include/MetroGraph.h"

void MetroGraph::Create_Delhi_Map(MetroGraph& g) {
    g.addStation("Noida Sector 62~B");
    g.addStation("Botanical Garden~B");
    g.addStation("Yamuna Bank~B");
    g.addStation("Rajiv Chowk~BY");
    g.addStation("New Delhi~YO");
    g.addEdge("Noida Sector 62~B", "Botanical Garden~B", 8);
    g.addEdge("Botanical Garden~B", "Yamuna Bank~B", 10);
    g.addEdge("Yamuna Bank~B", "Rajiv Chowk~BY", 6);
    g.addEdge("Rajiv Chowk~BY", "New Delhi~YO", 1);
}

void MetroGraph::Create_Mumbai_Map(MetroGraph& g) {
    g.addStation("Ghatkopar~L1");
    g.addStation("Andheri~L1");
    g.addStation("Versova~L1");
    g.addEdge("Ghatkopar~L1", "Andheri~L1", 10);
    g.addEdge("Andheri~L1", "Versova~L1", 8);
}

void MetroGraph::Create_Kolkata_Map(MetroGraph& g) {
    g.addStation("Dumdum~N");
    g.addStation("Shyambazar~N");
    g.addStation("Esplanade~N");
    g.addEdge("Dumdum~N", "Shyambazar~N", 6);
    g.addEdge("Shyambazar~N", "Esplanade~N", 5);
}

void MetroGraph::Create_Bengaluru_Map(MetroGraph& g) {
    g.addStation("Nagasandra~Purple");
    g.addStation("Yeshwanthpur~Purple");
    g.addStation("Majestic~PurpleGreen");
    g.addEdge("Nagasandra~Purple", "Yeshwanthpur~Purple", 6);
    g.addEdge("Yeshwanthpur~Purple", "Majestic~PurpleGreen", 7);
}

void MetroGraph::Create_Chennai_Map(MetroGraph& g) {
    g.addStation("Washermanpet~Blue");
    g.addStation("Egmore~Blue");
    g.addStation("Airport~Blue");
    g.addEdge("Washermanpet~Blue", "Egmore~Blue", 5);
    g.addEdge("Egmore~Blue", "Airport~Blue", 12);
}

void MetroGraph::Create_Hyderabad_Map(MetroGraph& g) {
    g.addStation("Miyapur~Red");
    g.addStation("Ameerpet~RedGreen");
    g.addStation("LB Nagar~Red");
    g.addEdge("Miyapur~Red", "Ameerpet~RedGreen", 9);
    g.addEdge("Ameerpet~RedGreen", "LB Nagar~Red", 12);
}

void MetroGraph::Create_Lucknow_Map(MetroGraph& g) {
    g.addStation("CCS Airport~Red");
    g.addStation("Charbagh~Red");
    g.addStation("Munshipulia~Red");
    g.addEdge("CCS Airport~Red", "Charbagh~Red", 8);
    g.addEdge("Charbagh~Red", "Munshipulia~Red", 10);
}

void MetroGraph::Create_Ahmedabad_Map(MetroGraph& g) {
    g.addStation("Thaltej~Blue");
    g.addStation("Gita Mandir~Blue");
    g.addStation("Vastral~Blue");
    g.addEdge("Thaltej~Blue", "Gita Mandir~Blue", 9);
    g.addEdge("Gita Mandir~Blue", "Vastral~Blue", 7);
}

void MetroGraph::Create_Kochi_Map(MetroGraph& g) {
    g.addStation("Aluva~Green");
    g.addStation("MG Road~Green");
    g.addStation("Tripunithura~Green");
    g.addEdge("Aluva~Green", "MG Road~Green", 10);
    g.addEdge("MG Road~Green", "Tripunithura~Green", 9);
}

void MetroGraph::Create_Jaipur_Map(MetroGraph& g) {
    g.addStation("Mansarovar~Pink");
    g.addStation("Civil Lines~Pink");
    g.addStation("Chandpole~Pink");
    g.addEdge("Mansarovar~Pink", "Civil Lines~Pink", 7);
    g.addEdge("Civil Lines~Pink", "Chandpole~Pink", 6);
}

void MetroGraph::Create_Indore_Map(MetroGraph& g) {
    g.addStation("Gandhi Nagar~Orange");
    g.addStation("Bada Ganpati~Orange");
    g.addStation("Rajwada~Orange");
    g.addEdge("Gandhi Nagar~Orange", "Bada Ganpati~Orange", 5);
    g.addEdge("Bada Ganpati~Orange", "Rajwada~Orange", 6);
}
