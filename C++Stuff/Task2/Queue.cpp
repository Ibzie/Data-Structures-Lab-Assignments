#include "queue.h"
#include <iostream>

using namespace std;

queue::queue(int s)
{
	num = new int[s];
	head = tail = -1;
	size = s;
}
void queue::enqueue(int data)
{
	if ((tail + 1) % size == head)
	{
		cout << "Queue is full" << endl;
	}
	else if (head == -1 && tail == -1)
	{
		head = tail = 0;
		num[tail] = data;
	}
	else
	{
		tail = (tail + 1) % size;
		num[tail] = data;
	}
}
void queue::dequeue()
{
	if (head == -1 && tail == -1)
	{
		cout << "Queue is empty" << endl;
	}
	else if (head == tail)
	{
		head = tail = -1;
	}
	else
	{
		head = (head + 1) % size;
	}
}
void queue::display()
{
	if (head == -1 && tail == -1)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		int i = head;
		while (i != tail) {
			cout << num[i] << " ";
			i = (i + 1) % size;
		}
		cout << num[i] << endl;
	}
}

void queue::removeDup()
{

}