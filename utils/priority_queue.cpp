#include <iostream>
#include <queue>
#define p_q priority_queue

using namespace std;

int main(){
	
	int arr[10] = {15, 9, 36, 20, 55, 68, 79 ,88 ,92, 104};

	// max heap
	p_q<int> pq1;
	for(int i=0; i<10; ++i) pq1.push(arr[i]);

	// min heap;
	// priority_queue <Type, vector<Type>, ComparisonType >
	p_q<int, vector<int>, greater<int>> pq2;
	for(int i=0; i<10; ++i) pq2.push(arr[i]);

	cout << "Max Heap: " << endl;
	while(!pq1.empty()){
		int front = pq1.top();
		pq1.pop();
		cout << front << " ";
	}

	cout << endl << "Min Heap: " << endl;
	while(!pq2.empty()){
		int front = pq2.top();
		pq2.pop();
		cout << front << " ";
	}

}
