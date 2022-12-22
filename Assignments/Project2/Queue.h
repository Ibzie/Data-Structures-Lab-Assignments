#include <iostream>
#include <cstdlib>
using namespace std;
class Queue
{
    int* arr;
    int capacity;   // max capacity
    int front;
    int rear;
    int count;      //current size
public:
    Queue(int);
    ~Queue();
    int peek();
    int size();
    bool isEmpty();
    bool isFull();
    int dequeue();
    void enqueue(int x);
};

/*
Queue was made using the circular array implementation
*/