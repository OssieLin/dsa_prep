#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    std::vector<int> values = {1 ,4 ,3 ,2 , 5};
    std::sort(values.begin(), values.end());

    for(int x : values){
        std::cout << x << " ";
    }

    return 0;
}