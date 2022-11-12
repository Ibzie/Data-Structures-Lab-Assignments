#include<iostream>
#include <fstream>
#include<ctime>
#include "BinTree.h"
using namespace std;

int main()
{
	BST b, * root = NULL;
	int start_s = clock();
	ifstream inputFile("Numbers.txt");
	int y;
	inputFile >> y;
	root = b.Insert(root, y);
	int z = 1;
	int x = 0;
	while (!inputFile.eof())
	{
		if (z == 1)
		{
			z--;
			continue;
		}
		inputFile >> x;
		b.Insert(root, x);
	}
	int stop_s = clock();
	cout << "Insert Time Complexity is: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << endl;
	int flag = 0;
	
	start_s = clock();
	b.search(965, root);
	stop_s = clock();
	cout << "Search Time Complexity is: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << endl;

	cout << "Enter 0 if you do not wish to see the Inorder traversal!";
	cin >> flag;
	if (flag)
		b.Inorder(root);

	cout << "Size of file after duplicates is: " << b.getSize() << endl;
	return 0;
}