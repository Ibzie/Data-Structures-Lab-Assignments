#pragma once
#include "Node.h"

class List
{
private:
	Node* head;
	Node* current;
	Node* lastCurrent;
	int size;
public:
	List();
	~List();
	Node* getCurrent();
	//void setCurrent(Node* newCurrent);
	void add(int data);
	void remove(int dataToRemove);
	bool find(int data);
	void addAtFirstLocation(int data);
	void addAtLast(int data);
	void displayList();
};

