#include <iostream>
using namespace std;

class DayOfYear{
	// public: access specifier
	// functions outside this class can access public members
public:
	void setDate(int mon, int day);
	void input();  // Read the month and day from std. input 
	int getDay()const; 
	int getMonth()const;
//	DayOfYear(); //default constructor
	DayOfYear(int mon =1 , int day =1 ); //parameterized with default values

private:	
	//member variables
	int dd; // day
	int mm; // this is the month
};

/*DayOfYear::DayOfYear(){

}*/

DayOfYear::DayOfYear(int mon, int day){
	mm = mon;
	dd= day;

}

void DayOfYear::setDate(int mon, int day){
	mm = mon;
	dd = day;
}

void DayOfYear::input() {
	cin>>mm>>dd;

}
int DayOfYear::getDay() const{
	return dd;
}
int DayOfYear::getMonth() const{
	return mm;
}

int main(){
	DayOfYear today(1,7), birthday;

	//today.setDate(1,7);
	// today.dd = 7;
	// today.mm = 1;
	cout<<"What is your birthday?";
	// cin>>birthday.mm >> birthday.dd;
	birthday.input();

	if (today.getDay() == birthday.getDay() && 
		today.getMonth() == birthday.getMonth() ){
		cout <<"Happy Birthday"<<endl;
	} else{
		cout<<"Oh well!"<<endl;
	}


	return 0;
}