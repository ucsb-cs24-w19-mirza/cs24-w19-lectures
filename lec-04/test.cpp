//test.cpp

#include <iostream>
#include "point.h"

using namespace std;

int main(){
	point p1(200, 300);
	point p2(p1);
	point p3(100, 200);
	point p4;

	if(p1 == p3){// operator==(p1, p2)
		         // p1.operator==(p2)
		cout<<"The points are equal"<<endl;

	}else{
		cout<<"The points are NOT equal"<<endl;

	}
	// if(p1.get_x()==p2.get_x() && p1.get_y() == p2.get_y()){
	// 	cout<<"The points are equal"<<endl;

	// }

	p4 = p1 + p3; // same as operator+(p1, p3)
	  		     // p1.operator+(p3)

	p1 = p2;


	cout<<p4<<endl; // opertaor<<(cout, p4) <<endl;


	return 0;
}