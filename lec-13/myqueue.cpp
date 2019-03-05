#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class MyQueue{
	public:
		void push(int item);
		void pop();
		int front();
		bool empty();
	private:
		stack<int> rearQ;
		stack<int> frontQ;// if frontQ is not empty()
		// then the element on top is the front element

};

void MyQueue::push(int item){
	rearQ.push(item);

}
void MyQueue::pop(){
	if(empty())
		return;

	if(frontQ.empty()){
		while(!rearQ.empty()){
			frontQ.push(rearQ.top());
			rearQ.pop();
		}
	}
	frontQ.pop();


}
int MyQueue::front(){
	if(empty())
		return -1;

	if(frontQ.empty()){
		while(!rearQ.empty()){
			frontQ.push(rearQ.top());
			rearQ.pop();
		}
	}
	return frontQ.top();

}
bool MyQueue::empty(){
	return rearQ.empty() && frontQ.empty();
}


int main(){
	MyQueue q;
	for(int i=0; i <10; i++)
		q.push(i);
	while(!q.empty()){
		cout<< q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}