
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> v = {0 ,8 ,4 ,12 ,2 ,10 ,6 ,14 ,1 ,9 ,5 ,13 ,3 ,11 ,7 , 15};
    vector <int> lds; // [1,]
                        //^ (end)
    for(int i=0; i<v.size(); i++){
        //binary search
        auto it = lower_bound(lds.begin(), lds.end(), v[i], greater<int>()); // >
                // lower bound; >=
        if(it == lds.end()){
            lds.push_back(v[i]);
        }else{
            *it = v[i];
        }
		for (int x : lds) 
            cout << x << " ";
        cout << endl;
    }

    cout << lds.size() << endl;

    return 0;
}

