#include <stack>

class minStack{

public:
	void push(int item);
	int top() const;
	void pop();
	int min() const;
private:
	stack<int> s;
	stack<int> minSoFar;

};

void minStack::push(int item){}
int minStack::top() const{}
void minStack::pop(){}
int minStack::min() const{}