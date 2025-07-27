#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v = {1,3,5,2,1};
	vector<int> lds(v.size(), 1);

	// each index i of lds is the
	// length of lds at i

	for(int i=1; i<v.size(); ++i){
		for(int j=i-1; j>=0; --j){
			if(v[i] < v[j]) lds[i] = max(lds[i], 1+lds[j]);
		}
	}

	cout << "Length of LDS: " << lds[v.size()-1];
}
