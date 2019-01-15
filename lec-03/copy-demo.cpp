//toss-oop.cpp
/*
Objects.      Attributes.    Behavior        
Dice.        value, sides.   roll, display
Player.      name, score,    set and get name
             turn,           playToss
             pair of die     
*/

// Includes a parameterized constructor
// The purpose of the constructor is 
// to do some initial setup at the time
// a object is created. For example- set
// the member variables to default values

#include <iostream>
#include <time.h>
using namespace std;


class Player{

public:
	// Player(); // Default constructor
	// Generated automatically by the
	// compiler if NO constructor is 
	// defined in the class
	~Player();
	Player(string playerName=""); // Parametrized constructor
	Player(Player& p);
	void setName(string input); //modifier
	string getName() const; // accessor
	int playToss(); // roll the die,
				// returns a score, display the die values and the score

private:
    string* name;
	int score;

};


Player::Player(Player& source){
	name = source.name;
	score = source.score;


}

void foo(){
	Player p1("fooName");
	Player p2(p1);
	cout<<"Inside foo, name = "<<p1.getName()<<endl;
}

Player::~Player(){
	cout <<"Inside the destructor for "<<*name <<endl;
	delete name;
}


Player::Player(string playerName){
	name = new string(playerName);
}

void Player::setName(string input){
	*name = input;
} //modifier

string Player::getName() const{
	return *name;

} // accessor

int Player::playToss(){
	int dieOne = rand()%6 + 1;
	int dieTwo = rand()%6 + 1;
	
	if ( dieOne == dieTwo){
		score= 4*dieOne;
	}else{
		score= dieOne + dieTwo;
	}
	cout<<name<<"'s die values are: ";
	cout<<"("<< dieOne<<", "<<dieTwo<<") Score: "<<score<<endl;
	return score;
}


int main(){
	foo();

	return 0;
}

/* Summary
1. classes = structs + methods
2. Abstract data types = classes + information hiding
3. When designing classes - 
	* identify the objects in your problem, 
	* specify the attributes and behaviors of objects.
The attributes are coded as the member variables
The behaviors are coded as the public member function
4. When designing your class think about who will use it
and how (in our case we first wrote the code in main to 
figure this out)
Keep the interfaces (public methods of the class) 
simple and minimal. At the same time, don't make each method
too complicated.
5. Keep information hidden (private) as much as possible
The code in main should not directly access member variables
- why is this important?
6. Write a constructor (or multiple) to do any initial setup. 
This would reduce having to write methods that are only called once!
*/ 















