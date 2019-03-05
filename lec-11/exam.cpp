#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <set>
#include <stack>

using namespace std;
int main(){
cout<<"Exam"<<endl;
	array<int, 4> a = {50, 10, 100, 60};
    set<int> s;
	for(auto f:a){
		cout<< f << " ";
		s.insert(f);
	}	
	cout<< "\nPrint again"<<endl;	
	for(auto f:s){
		cout<<f << " ";
	}
	cout<<endl;
	return 0;
}