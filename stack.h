#include<iostream>
#include<string>
using namespace std;
class Node {
	int data;
	Node* next;

public:
	Node() {};
	void SetData(int aData)
	{
		data = aData;
	};
	void SetNext(Node* aNext)
	{
		next = aNext;
	};
	int Data()
	{
		return data;
	};
	Node* Next()
	{
		return next;
	};
};

// Stack class
class Stack {
	Node *top;
public:
	Stack()
	{
		top = NULL;
	};
	void Print();
	void Push(int data);
	int Pop();
	int Peek();

	bool IsEmpty() { /* add your code here */
		if (top == NULL){
			return true;
		}
		else {
			return false;
		}
	};
	Node* Top() { /* add your code here */
		top = NULL;
	};
};

/**
* Print the contents of the stack
*/
void Stack::Print() {

	// Temp pointer
	Node *tmp = top;

	// No nodes
	if (tmp == NULL) {
		cout << "EMPTY" << endl;
		return;
	}

	// One node in the list
	if (tmp->Next() == NULL) {
		cout << tmp->Data();
		cout << " --> ";
		cout << "NULL" << endl;
	}
	else {
		// Parse and print the list
		do {
			cout << tmp->Data();
			cout << " --> ";
			tmp = tmp->Next();
		} while (tmp != NULL);

		cout << "NULL" << endl;
	}
}

/**
* Push a node to the stack
*/
void Stack::Push(int data) {

	/* add your code here */
	Node * newNode = new Node;
	newNode->SetData(data);
	newNode->SetNext(NULL);

	if (top == NULL){
		top = newNode;

	}
	else {


		newNode->SetNext(top);
		top = newNode;
	}

}




/**
* Pop a node from the stack
*/
int Stack::Pop() {

	Node* ptr;
	int tempvalue;
	ptr = new Node;
	ptr = top;
	if (top == NULL){
		cout << "Empty";
	}
	else{

		top = top->Next();
		tempvalue = ptr->Data();
		delete ptr;
	}
	return tempvalue;


	/* add your code here */

}

/**
* Peek at the top of the stack
*/
int Stack::Peek() {

	/* add your code here */


	if (top == NULL){
		cout << "EMpty";
	}
	else{
		return top->Data();
	}

}
