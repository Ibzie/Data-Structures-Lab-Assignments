#include <iostream>
#include "List.h"


List::List(){
	head = nullptr;
	current = nullptr;
	lastCurrent = nullptr;
	// lastNode = nullptr;
	size = 0;
}


List::~List(){
	Node* temp = head;
	while (temp != nullptr) {
		head = head->getNext();
		delete temp;
		temp = head;
	}
}

Node* List::getCurrent(){
	return current;
}


void List::add(int data){
	Node* newNode = new Node(data);

	if (current != nullptr) {
		newNode->setNext(current->getNext());
		current->setNext(newNode);
		lastCurrent = current;
		current = newNode;
	}
	else {
		newNode->setNext(nullptr);
		head = newNode;
		lastCurrent = head;
		current = head;
	}	
}

void List::remove(int dataToRemove){
	current = head;
	lastCurrent = nullptr;
	while (current != nullptr && current->getData() != dataToRemove) {
		lastCurrent = current;
		current = current->getNext();
	}
	if (current != nullptr && lastCurrent != nullptr) {
		//Node * temp = current->getNext();
		//lastCurrent->setNext(temp);
		
		lastCurrent->setNext(current->getNext());
		delete current;
	}
	else if (current != nullptr) {
		Node* temp = head;
		head = head->getNext();
		delete temp;
	}
	else
		std::cout << dataToRemove << " not found \n";
}

void List::addAtLast(int data) {
	if (head == nullptr) {
		head = new Node(data);
		current = head;
		lastCurrent = head;
		return;
	}
	Node* iterator = head;
	while (iterator->getNext() != nullptr)
		iterator = iterator->getNext();
	iterator->setNext(new Node(data));
}

void List::addAtFirstLocation(int data) {
	Node* newNode = new Node(data);
	newNode->setNext(head);
	head = newNode;
}

bool List::find(int data) {
	Node* iterator = head;
	lastCurrent = nullptr;
	current = head;
	while (iterator != nullptr) {
		if (iterator->getData() == data) {
			lastCurrent = current;
			current = iterator;
			return true;
		}
		iterator = iterator->getNext();
		lastCurrent = current;
		current = iterator;
	}
	return false;
}

void List::displayList() {
	Node *iterator = head;
	//int i = 0 ;
	while (iterator != nullptr) {
		//System.out.printf("|%d:%d|",++i,iterator.getData());
		std::cout << "|" << iterator->getData() <<  "|" ;
		iterator = iterator->getNext();
		if (iterator != nullptr)
			std::cout << " -> ";
	}
	std::cout << std::endl;
}

Node* List::getHead()
{
	return this->head;
}

int List::currentValue()
{
	return current->getData();
}