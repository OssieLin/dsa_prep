#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> pfs(vector<vector<int>>& v){
	int m = v.size();
	int n = v[0].size();
	
	vector<vector<int>> p(m+1, vector<int>(n+1, 0)); // pfs

	for(int i=1; i<=m; ++i){
		for(int j=1; j<=n; ++j){
			p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] 
					  + v[i-1][j-1];
		}
	}
	return p;
}

int sum_query(vector<vector<int>>& p, int r, int c){
	return p[r+1][c+1];
}

int main(){
	vector<vector<int>> v= 
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};

	vector<vector<int>> p = pfs(v);

	cout << "Given a 2D vector: " << endl;

	for(int i=0; i<v.size(); ++i){
		for(int j=0; j<v[0].size(); ++j){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl << endl;

	cout << "Prefix Sum: " << endl;

	for(int i=1; i<=v.size(); ++i){
		for(int j=1; j<=v[0].size(); ++j){
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	cout << "Sum from (0,0) to (3,3) is " << sum_query(p, 3, 3);
	
}
