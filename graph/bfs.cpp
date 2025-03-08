#include <iostream>
#include <vector>
#include <queue>

using namespace std;


const int V = 8; // total nodes

void addEdge(vector<int> graph[], int source, int destination){
	graph[source].push_back(destination);
	graph[destination].push_back(source);
}

void bfs(vector<int> graph[], int starting_node){
	queue<int> q;
	vector<bool> visited(V, false);
	
	q.push(starting_node);
	visited[starting_node] = true;

	while(!q.empty()){
		int front_element = q.front();

		q.pop();

		cout << "processing node: " << front_element << endl;

		for(int neighbor: graph[front_element]){
			if(!visited[neighbor]){
				q.push(neighbor);
				visited[neighbor] = true;
			}
		}
	}
}

int main(){
	vector<int> graph[V]; //adjacency list
	
	addEdge(graph, 0, 1);
	addEdge(graph, 0, 2);
	addEdge(graph, 0, 3);
	addEdge(graph, 2, 4);
	addEdge(graph, 2, 5);
	addEdge(graph, 1, 6);
	addEdge(graph, 6, 7);

	int starting_node = 0;
	bfs(graph, starting_node);

	
}
