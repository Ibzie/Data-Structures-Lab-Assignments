#include "Queue.h"
#include <iostream>
using namespace std;
Queue::Queue() {
    top = -1;
}
void Queue::enQ(int item) {
    if (top == 9) {
        cout << "Queue is full." << endl;
    }
    else {
        top++;
        Q[top] = item;
    }
}

int Queue::deQ() {
    if (top == -1) {
        cout << "Queue is empty." << endl;
    }
    else {
        int temp = Q[top];
        top--;
        return temp;
    }
}

void Queue::print() {
    for (int i = 0; i <= top; i++) {
        cout << char(Q[i]);
    }
}

//harcoded solution for this particular problem
void Queue::printNum(char op) {

    if (op == '*') {
        cout << (Q[0] - 48) * (Q[1] - 48);
    }
    else if (op == '/') {
        cout << (Q[0] - 48) / (Q[1] - 48);
    }
    else if (op == '+') {
        cout << (Q[0] - 48) + (Q[1] - 48);
    }
    else if (op == '-') {
        cout << (Q[0] - 48) - (Q[1] - 48);
    }
}

bool Queue::isEmpty() {
    if (top == -1) {
        return true;
    }
    else {
        return false;
    }
}

bool Queue::isFull() {
    if (top == 9) {
        return true;
    }
    else {
        return false;
    }
}