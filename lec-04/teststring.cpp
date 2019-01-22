#include <iostream>
#include "point.h"

using namespace std;

int main(){

	string s1;
	string s2, s3;
	s1 = "Hello";
	s2 = " World!";
	s3 = s1 + s2; // operator+ has been overloaded for strings
	cout<<s3;// operator<< has beeb overloaded
                   // to work with an object of ostream
			// and a string object

	cout<<endl;

	return 0;
}