//To run valgrind: valgrind --leak-check=full ./a.out
//
#include <iostream>
using namespace std;

class LinkedList{
	public:
		LinkedList():head(0), tail(0){}
        void append(int value);
		void print() const;
		void clear(); // deletes all the nodes
		bool find(int value) const;
		int min() const;
		int max() const;
		void remove(int value); 
	private:
		struct Node{
			int data;
			Node* next;
		};
		Node* head;
		Node* tail;
};

void LinkedList::append(int value){
	//Add a new node to the end of the list
	//Node nn = {value, 0};//Stack
	Node* p = new Node{value, 0};//Heap

	if(!head){
		//List is empty
		head = tail = p;
	}else{
		tail->next = p;
		tail = p;
	}
	
}
void LinkedList::print() const{
	Node* p = head;
	while(p){
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
}
void LinkedList::clear(){
	//delete all the nodes in the linked list
	Node* p = head;
	while(p){
		Node* tmp = p->next;
		delete p;
		p = tmp;
	}
	head = tail = 0;
}
void foo(){
	LinkedList* ll= new LinkedList;
	for(int i = 0; i < 5; i++)
	  ll->append(10*i);
	
	delete ll;

}

int main(){
	//Create an empty list
	LinkedList list;//aggregarte initialization
	for(int i = 0; i < 5; i++)
	  list.append(10*i);

	list.print();	
	list.clear();
	cout<<"Cleared all the nodes"<<endl;

	list.print();	
	cout<<"Append new nodes"<<endl;
	for(int i = 0; i < 5; i++)
	  list.append(100*i);

	list.print();	
	foo();

}
