#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <set>
#include <stack>

using namespace std;

int main(){
	// Inside the angle brackets is the template parameter
	array<string, 6 > countries = {"India", "US", "Finland",
	"Sweden", "Peru", "Canada"};
	array<int, 6> nums  = {1, 2, 3, 3, 5, 10};

	cout <<"Elements of the array"<<endl;
	vector<string> v;

	list<string> ll;

	for(auto item: countries){
		cout<<item <<endl;
		v.push_back(item);
	}

	for(auto item: v){
		ll.push_back(item);
	}
	set<string> bst;
	for(auto item: ll){
		bst.insert(item);
	}
	cout<<"Elements in the bst"<<endl;

	for(auto item: bst){
		cout<<item <<endl;
	}

	stack<string> s;

	for(auto item: bst){
		s.push(item); //insert to the top of the stack
	}
	cout<<"Popping countries out of the stack"<<endl;
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop(); // delete the item on top of the stack
	}

	stack<array<int,2>> minStack;
    array<int,2> item1= {42, 42};
	minStack.push(item1);


	return 0;
}