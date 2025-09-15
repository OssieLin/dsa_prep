#include <iostream>
#define pii pair<int, int>
using namespace std;

void add_edge(vector<vector<pii>>& graph, int a, int b, int w){
	int v = graph.size();
	graph[a].push_back({b, w});
	graph[b].push_back({a, w});
}

int main() {
	// your code goes here
	int n, m; // vertices and edges
	cin >> n >> m;
	
	vector<vector<pii>> graph(n);
	
	for(int i=0; i<m; ++i){
		int a, b, w;
		cin >> a >> b >> w;
		add_edge(graph, a, b, w);
	}
	
	return 0;
}
