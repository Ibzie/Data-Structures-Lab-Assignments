#include "Node.h"

Node::Node(){
	data = 0;
	next = nullptr;
}

Node::Node(int data) {
	this->data = data;
	this->next = nullptr;
}


Node::~Node(){
	//delete this;
}

Node* Node::getNext(){
	return this->next;
}

int Node::getData(){
	return data;
}

void Node::setNext(Node* next){
	this->next = next;
}

void Node::setData(int data){
	this->data = data;
}

void Node::setPrevious(Node* pre)
{
	this->previous = pre;
}
Node* Node::getPrevious()
{
	return this->previous;
}