#include <iostream>
#include <vector>

using namespace std;

const int V = 6; //number of vertices

void addEdge(vector<int> graph[], int source, int destination){
	graph[source].push_back(destination);
	graph[destination].push_back(source);
}

void printGraph(vector<int>graph[]){
	cout << "Adjacency List: " << endl;
	for(int source = 0; source < V; ++source){
		for(int neighbor : graph[source]){
			cout << "There is an edge between " << source << " and " << neighbor << endl;
		}
		cout << endl;
	}
	cout << endl;
}

int main(){
	vector<int> graph[V]; // decalre an adjacency list

	addEdge(graph, 0, 1);
	addEdge(graph, 1, 2);
	addEdge(graph, 1, 5);
	addEdge(graph, 0, 5);
	addEdge(graph, 3, 5);
	addEdge(graph, 3, 4);
	addEdge(graph, 3 ,4);
	addEdge(graph, 2, 4);

	printGraph(graph);
}

