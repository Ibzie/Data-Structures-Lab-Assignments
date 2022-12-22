#pragma once
class Node
{
private:
	Node* next;
	int data;
	Node* previous;
public:
	Node();
	~Node();
	Node(int data);
	Node* getNext();
	int getData();
	void setNext(Node* next);
	void setData(int data);
	void setPrevious(Node* pre);
	Node* getPrevious();
};

