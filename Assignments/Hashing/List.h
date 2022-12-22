#include<iostream>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node()
    {
        data = " ";
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist {
    Node* head;

public:
    Linkedlist() { head = NULL; }
    void insertNode(int);
    void printList();
    void deleteNode(int);
};

