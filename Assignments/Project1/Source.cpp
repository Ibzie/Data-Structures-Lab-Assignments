#include<iostream>
#include <fstream>
#include "BST.h"
using namespace std;

int main()
{
	BST b, * root = NULL;
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
	int flag = 0;
	cout << "Enter 0 if you do not wish to see the Inorder traversal!";
	cin >> flag;
	if (flag)
		b.Inorder(root);

	cout << "Size of file after duplicates is: " << b.getSize() << endl;
	return 0;
}