#include "Heap.h"
int main()
{
	Heap H(10);
	int arr[10] = { 2,7,6,10,13,17,12 };
	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << endl;
		H.insertKey(arr[i]);
	}
	H.Heapsort();
}