#include "Queue.h"
#include <iostream>

using namespace std;

char* removeDuplicate(char str[], int n)
{
	int index = 0;
	for (int i = 0; i < n; i++) {
		int j;
		for (j = 0; j < i; j++)
			if (str[i] == str[j])
				break;
		if (j == i)
			str[index++] = str[i];
	}
	return str;
}
//i have no idea why this is not working
bool addToQ(queue Dist, char v, int size)
{
	bool flag=true;
	for (int i = 0; i < size; i++)
	{
		if (v == Dist.tail)
		{
			return false;
		}
		else
		{
			Dist.dequeue();
		}
	}
	return flag;
}
int main()
{
	char input[10];
	std::cout << "Enter the string" << std::endl;
	std::cin >> input;
	queue Distincts(10);

	removeDuplicate(input, 10);

	for (int i = 0; i < 10; i++)
	{
		Distincts.enqueue(input[i]);
	}
	Distincts.display();

	/*
	for(int i =0; i<input.length())
	
	for (int i = 0; i < input.length(); i++)
	{
		if (addToQ(Distincts, input[i], input.length()))
		{
			Distincts.enqueue(input[i]);
		}
		else
			continue;
	}
	*/
}
