#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v = {2,1,3,8,6,3,9,7,11};
	vector<int> lis(v.size(), 1);
	
	for(int i=1; i<v.size(); ++i){
		for(int j=i-1; j>=0; --j){
			if(v[i] > v[j]) lis[i] = max(lis[i], lis[j]+1);
		}
	}
	
	auto it = max_element(lis.begin(), lis.end());
	cout << "Length of LIS: " << *it;
	cout << endl;

	for(int x: lis) cout << x << " ";
}
