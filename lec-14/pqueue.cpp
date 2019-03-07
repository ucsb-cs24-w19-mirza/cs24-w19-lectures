#include <iostream>
#include <queue>
#include <array>
using namespace std;

int main(){
	priority_queue<int> q;
	array<int> a = { 10, 5, 100, 20, 1000};
	for (auto i:a){ // N times
		q.push(i); // big O -> bound it O(log N)
	}
	// O(N logN)
	int j = 0;
	while(!q.empty()){
		cout<< q.top()<<" "; // O(1)
		a[j] = q.top(); // O(1)
		j++; //O(1)
		q.pop(); // O(logN)
	}
	//O(NlogN)

	//overall =  2*O(NlogN) = O(NlogN) 
	cout<<endl;
	return 0;
}