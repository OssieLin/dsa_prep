#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v = {9,4,3,2,10};
	vector<int> lds(v.size(), 1);

	// each index i of lds is the
	// length of lds at i

	for(int i=1; i<v.size(); ++i){
		for(int j=i-1; j>=0; --j){
			if(v[i] < v[j]) lds[i] = max(lds[i], 1+lds[j]);
		}
	}


	auto it = max_element(lds.begin(), lds.end());
	cout << "Length of LDS: " << *it;
	cout << endl;

	for(int x: lds) cout << x << " ";
}
