#include <iostream>
#include <vector>

using namespace std;

const int V = 6; // number of vertices

//i using pair<int, int> to store (neighbor, weight)
void addEdge(vector<pair<int, int>> graph[], int source, int destination, int weight) {
    graph[source].push_back({destination, weight});
    graph[destination].push_back({source, weight});
}

void printGraph(vector<pair<int, int>> graph[]) {
    cout << "Weighted Adjacency List:\n";
    for (int source = 0; source < V; ++source) {
        for (auto& edge : graph[source]) {
            int neighbor = edge.first;
            int weight = edge.second;
            cout << "Edge from " << source << " to " << neighbor << " with weight " << weight << endl;
        }
        cout << endl;
    }
}

int main() {
    vector<pair<int, int>> graph[V]; // declare a weighted adjacency list

    // Add edges with weights
    addEdge(graph, 0, 1, 4);
    addEdge(graph, 1, 2, 3);
    addEdge(graph, 1, 5, 2);
    addEdge(graph, 0, 5, 7);
    addEdge(graph, 3, 5, 1);
    addEdge(graph, 3, 4, 5);
    addEdge(graph, 3, 4, 6); 
    addEdge(graph, 2, 4, 8);

    printGraph(graph);

    return 0;
}
