#include <iostream>
#include <vector>

using namespace std;

const int V = 5; // total nodes

void addEdge(vector<int> graph[], int source, int destination){
	graph[source].push_back(destination);
	graph[destination].push_back(source);
}

void dfs(vector<int> graph[], int source, vector<bool>& visited){
	visited[source] = true;
	cout << "visited: " << source << endl;

	for(int neighbor: graph[source]){
		if(!visited[neighbor]) dfs(graph, neighbor, visited);
	}

}

// connected components
void cc(vector<int> graph[], vector<bool>& visited){
	for(int i=0; i<V; ++i){
		if(!visited[i]){
			cout << "Componenets: "<< endl;
			dfs(graph, i, visited);
			cout << endl;
		}
	}
}

int main(){
	vector<int> graph[V];

	vector<bool> visited(V, false);

	addEdge(graph, 0, 1);
	addEdge(graph, 1, 2);
	addEdge(graph, 3, 4);

	cc(graph, visited);
}
