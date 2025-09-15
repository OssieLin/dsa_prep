#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define pii pair<int, int>

vector<int> sp(int s, int v, vector<vector<pii>> graph){

	vector<int> dist(v+1);
	for(int i=0; i<=v; ++i) dist[i] = 1e9;
	dist[s] = 0;

	priority_queue<pii, vector<pii>, greater<pii>> pq;
	
	pq.push({0, s});

	while(!pq.empty()){
		int dis = pq.top().first, node = pq.top().second;
		pq.pop();

		for(auto &it: graph[node]){
			int adjNode = it.first, weight = it.second;

			if(dis + weight < dist[adjNode]){
				dist[adjNode] = dis + weight;
				pq.push({dist[adjNode], adjNode});
			}
		}
	}

	for(int x: dist) cout << x << " ";
	return dist;
}

void add_edge(vector<vector<pii>>& graph, int a, int b, int w){
	graph[a].push_back({b, w});
	graph[b].push_back({a, w});
}

int main(){
	vector<vector<pii>> graph(6);

	add_edge(graph, 1,2,2);
	add_edge(graph, 2,3,4);
	add_edge(graph, 3,4,3);
	add_edge(graph, 1,4,1);
	add_edge(graph, 2,5,5);
	
	sp(1,5, graph);
}


