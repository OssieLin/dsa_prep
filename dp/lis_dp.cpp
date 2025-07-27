#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v = {2,1,3,8,6,3,9,7,11};
	vector<int> lis(v.size(), 1);
	
	for(int i=v.size()-2; i>=0; --i){
		for(int j=i+1; j<v.size(); ++j){
			if(v[j] > v[i]) lis[i] = max(lis[i], lis[j]+1);
		}
	}
	
	auto it = max_element(lis.begin(), lis.end());
	cout << "Length of LIS: " << *it;
	cout << endl;

	for(int x: lis) cout << x << " ";
}
