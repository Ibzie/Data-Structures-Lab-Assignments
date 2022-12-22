#include "Hash.h"
#include <cstdlib>
#include <string>
#include<cmath>
using namespace std;

int main()
{
	int sum=0, mean;
	int* randNums;
	randNums = new int[500];
	for (int i = 0; i < 500; i++)
	{
		randNums[i] = 1 + (rand() % 100);
		sum += randNums[i];
	}
	mean = sum / 500;
	mean = pow(mean, 2);
	mean = mean / 500;
	sqrt(mean);
	//for 7 buckets:
	Hash Hash_7(7);
	for (int i = 0; i < 500; i++)
	{
		Hash_7.insert(randNums[i]);
	}
	cout << "Hash 7 Made.." << endl;
	Hash_7.Display_Hash();
	//for 10 buckets:
	Hash Hash_10(10);
	for (int i = 0; i < 500; i++)
	{
		Hash_10.insert(randNums[i]);
	}
	cout << "Hash 10 Made.." << endl;
	//for 15 buckets:

	Hash Hash_15(15);
	for (int i = 0; i < 500; i++)
	{
		Hash_15.insert(randNums[i]);
	}
	cout << "Hash 15 Made.." << endl;

	//for 20 buckets:

	Hash Hash_20(20);
	for (int i = 0; i < 500; i++)
	{
		Hash_20.insert(randNums[i]);
	}
	cout << "Hash 20 Made.." << endl;

	cout << "Only hash_7 has been displayed. Call te display function for evey other hash to display them" << endl;
	cout << endl;

	cout << "The standard deviation between all numbers is: " << mean << endl;
}