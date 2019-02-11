#include "BST.h"
#include <vector>
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

void assertEquals(bool actual, bool expected, string message){
	if (actual==expected)
		cout<<"PASSED "<<message<<endl;
	else
		cout<<"FAILED "<<message<<endl;

}
void test_search(){
	//Each test should be completely self contained 
    vector<int> v1 = {10, 20, 5, 3, -1, 100};	
    vector<int> v2 = {11, 21, 6, 4, 0, 101};	
	cout<<"Testing BST::search()"<<endl;
	BST b1;
	for(auto& item:v1){
		b1.insert(item);
	}
	cout<<"Testing item in {10, 20, 5, 3, -1, 100}"<<endl;

	for(auto& item:v1){
		assertEquals(b1.search(item), true, "item: "+ to_string(item));
	}
	
	cout<<endl;

	cout<<"Testing item not in {10, 20, 5, 3, -1, 100}"<<endl;
	
	for(auto& item:v2){
		assertEquals(b1.search(item), false, "item: "+ to_string(item));
	}

	cout<<"PASSED BST::search()"<<endl<<endl;

}

void test_min(){
	cout<<"Testing BST::min()"<<endl;
	cout<<"PASSED BST::min()"<<endl<<endl;
}

void test_insert(){
	cout<<"Testing BST::insert()"<<endl;
	cout<<"PASSED BST::insert()"<<endl<<endl;
	
}

int foo(int v){
	if (v == 0)
		return 0;
	foo(v-1);
	cout<<v<<endl;
}


int main(){
	cout<<foo(5)<<endl;
	int NUM_TESTS = 3;
    void (*f[NUM_TESTS])(void)={&test_search, &test_min, &test_insert};
	for(int i =0; i< NUM_TESTS;i++){
		f[i]();
	}
	return 0;
}
