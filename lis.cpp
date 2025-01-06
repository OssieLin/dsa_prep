#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> v = {0 ,8 ,4 ,12 ,2 ,10 ,6 ,14 ,1 ,9 ,5 ,13 ,3 ,11 ,7 , 15};
    vector <int> lis; // [1,]
                        //^ (end)
    for(int i=0; i<v.size(); i++){
        //binary search
        auto it = upper_bound(lis.begin(), lis.end(), v[i]); // >
                // lower bound; >=
				//upper_bound returns the lis.end() if finds nothing
        if(it == lis.end()){ // means there's no element strictly greater than v[i] in lis
            lis.push_back(v[i]);
        }else{
            *it = v[i]; // replace the first element that's greater than v[i] in lis with v[i]
        }
		for(int x: lis) cout << x << " ";
		cout << endl;
    }

    cout << "Length of the longest increasing sequence: " << lis.size() << endl;

    return 0;
}
