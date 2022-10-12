#pragma once
class Queue
{
    int top;
    int Q[10];
public:
    Queue();
    void enQ(int);
    void printNum(char);
    void print();
    int deQ();
    bool isEmpty();
    bool isFull();
};

