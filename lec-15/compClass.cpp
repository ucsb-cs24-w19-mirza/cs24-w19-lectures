#include <iostream>
#include <queue>
#include <array>
using namespace std;

class compareClass{ //comparator class
public:
	bool operator()(const int& a, const int&b) const{
		// functor!
		return a<b;
	}
};
class comparePtrClass{ //comparator class
public:
	bool operator()(const int* a, const int* b) const{
		// functor!
		return *a < *b;
	}
};

int main(){

    comparePtrClass c; 

    int x = 10;
    int y = 20;
    int* p = &x;
    int* q = &y;

    cout<<c(p, q);
	return 0;
}