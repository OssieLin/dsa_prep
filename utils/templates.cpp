#include <iostream>

using namespace std;

int max(int x, int y){
	return (x>y) ? x : y;
}

double max(double x, double y){
	return (x>y) ? x : y;
}

char max(char x, char y){
	return (x>y) ? x : y;
}

// will have to build multiple functions for 
// different data types
// solution: function template

template <typename T, typename U>
auto max(T x, U y){
	return (x>y) ? x : y;
}

int main(){
	cout << max(1, 2.1) << '\n';
}
