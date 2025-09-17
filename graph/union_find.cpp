#include <iostream>
#include <vector>

using namespace std;

int find (int i, vector<int> &parent) {
	if(parent[i] != i) parent[i] = find(parent[i], parent);
	return parent[i];
}

void unite(int i, int j, vector<int> &parent, vector<int> &rank){
	int s1 = parent[i], s2 = parent[j];

	if(s1 != s2) {
		if(rank[s1] < rank[s2]) parent[s1] = s2;
		else if (rank[s2] < rank[s1]) parent[s2] = s1;
		else parent[s2] = s1, rank[s1]++;
	}
}

int main() { 
	vector<vector<int>> edgeList = {
		{0, 1, 10}, {1, 3, 15}, {2, 3, 4}, {2, 0, 6}, {0, 3, 5}
    };
	
	int node = 4;
	vector<int> parent(node);
	vector<int> rank(node);

	for(int i = 0; i < node; ++i){
		parent[i] = i;
		rank[i] = 1;
	}

	for(auto &e: edgeList){
		int i = e[0], j = e[1], w = e[2];
		if(find(i, parent) != find(j, parent)) unite(i, j, parent, rank);
	}

	for(int i = 0; i < node; ++i){
		cout << "The parent of " << i << " is "<< parent[i] << endl;
	}
	


}
