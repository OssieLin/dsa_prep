#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<int> graph[], vector<bool> &visited, int starting_node){
	visited[starting_node] = true;

	cout << "Processing Node: " << starting_node << endl;

	for(int neighbor: graph[starting_node]){
		if(!visited[neighbor]) dfs(graph, visited, neighbor);
	}
}

void addEdge(vector<int> graph[], int source, int destination){
	graph[source].push_back(destination);
	graph[destination].push_back(source);
}

const int V = 4;

int main(){
	vector<int> graph[V];

	addEdge(graph, 0, 1);
	addEdge(graph, 0, 2);
	addEdge(graph, 0, 3);

	addEdge(graph, 1, 2);

	vector<bool> visited(V, false);

	dfs(graph, visited, 0);
}
