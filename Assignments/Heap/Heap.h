#pragma once
#include<iostream>
using namespace std;

class Heap
{
	int* head;
	int cap;
	int size;
public:
	void swap(int* x, int* y){
		int temp = *x;
		*x = *y;
		*y = temp;
	}
	Heap(int capacity) {
		size = 0;
		cap = capacity;
		head = new int[cap];
	}
	void MinHeapify(int i) {
		int l = left(i);
		int r = right(i);
		int smallest = i;
		if (l < size && head[l] < head[i])
			smallest = l;
		if (r < size && head[r] < head[smallest])
			smallest = r;
		if (smallest != i)
		{
			swap(&head[i], &head[smallest]);
			MinHeapify(smallest);
		}
	}
	int parent(int i){
		return (i - 1) / 2;
	}
	int left(int i){
		return (2 * i + 1);
	}
	int right(int i){
		return (2 * i + 2);
	}
	int extractMin() {
		if (size <= 0)
		{
			cout << "Error 404" << endl;
			return INT_MAX;
		}
		if (size == 1)
		{
			size--;
			return head[0];
		}
		int root = head[0];
		head[0] = head[size - 1];
		size--;
		MinHeapify(0);

		return root;
	}
	void decreaseKey(int i, int new_val) {
		head[i] = new_val;
		while (i != 0 && head[parent(i)] > head[i])
		{
			swap(&head[i], &head[parent(i)]);
			i = parent(i);
		}
	}
	int getMin() { return head[0]; }
	void deleteKey(int i) {
		decreaseKey(i, INT_MIN);
		extractMin();
	}
	void insertKey(int k) {
		if (size == cap)
		{
			cout << "heap full" << endl; return;
		}

		size++;
		int i = size - 1;
		head[i] = k;

		while (i != 0 && head[parent(i) > head[i]])
		{
			swap(&head[i], &head[parent(i)]);
			i = parent(i);
		}
		MinHeapify(0);
	}
	bool isEmpty()
	{
		if (size == 0)
			return true;
		else return false;
	}
	int* Heapsort()
	{
		int* arr = new int[size];
		int i = 0;
		for(int i =0; size!=0; i++)
		{
			arr[i] = extractMin();
			cout << arr[i] << " ";
		}
		return arr;
	}
};