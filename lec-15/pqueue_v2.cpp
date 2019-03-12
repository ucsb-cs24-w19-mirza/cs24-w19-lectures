#include <iostream>
#include <queue>
#include <array>
using namespace std;
/*bool operator<(int* a, int*b){
	return *a<*b;
} */ // This is insane !!
class comparePtrClass{ //comparator class
public:
	bool operator()(const int* a, const int* b) const{
		// functor!
		return *a < *b;
	}
};
int main(){
	priority_queue<int*, vector<int*>, comparePtrClass> q;
	array<int, 5> a = { 10, 5, 100, 20, 1000};
	for (auto& i:a){ // N times
		q.push(&i); // big O -> bound it O(log N)
	}
	// O(N logN)

	while(!q.empty()){
		cout<< *q.top()<<" "; // O(1)
		q.pop(); // O(logN)
	}
 
	cout<<endl;
	return 0;
}