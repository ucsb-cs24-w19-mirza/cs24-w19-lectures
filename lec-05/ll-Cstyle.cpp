//To run valgrind: valgrind --leak-check=full ./a.out
//
#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

struct LinkedList{
	Node* head;
	Node* tail;
};

void append(LinkedList& ll, int value){
	//Add a new node to the end of the list
	//Node nn = {value, 0};//Stack
	Node* p = new Node{value, 0};//Heap

	if(!ll.head){
		//List is empty
		ll.head = ll.tail = p;
	}else{
		ll.tail->next = p;
		ll.tail = p;
	}
	
}
void printList(LinkedList& ll){
	Node* p = ll.head;
	while(p){
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<endl;
}
void clear(LinkedList& ll){
	//delete all the nodes in the linked list
	Node* p = ll.head;
	while(p){
		Node* tmp = p->next;
		delete p;
		p = tmp;

	}
}

int main(){
	//Create an empty list
	LinkedList list = {.head= 0, .tail=0};//aggregarte initialization
	for(int i = 0; i < 5; i++)
	  append(list, 10*i);

	printList(list);	
	clear(list);

}
