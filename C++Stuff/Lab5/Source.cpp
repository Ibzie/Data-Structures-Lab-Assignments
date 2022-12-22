#include "Node.h"
#include "List.h"
#include <iostream>
using namespace std;


//uses sir's implemented classes with all public members

void  RotateList(Node* &head, int index);

int main()
{
	List* list = new List();
	for (int i = 1; i < 6; i++)
	{
		list->add(i);
	}
	bool flag = true;
	do {
		cout << "Current List is: " << endl;
		list->displayList();

		int Rotate;
		cout << "Enter a number between 1 and 5" << endl;
		cin >> Rotate;
		RotateList(list->head, Rotate);

		cout << "Rotated List is: " << endl;
		list->displayList();
		cout << endl;
		cout << "Do you wish to continue? Y/N" << endl;
		char ch;
		cin >> ch;
		if (ch == 'Y' || ch == 'y')
			flag = true;
		else
			flag = false;
	} while (flag);

	cout << "Thank you for using this program!";
}

void RotateList(Node* &head, int index)
{
	if (index == 0)
		return;
	Node* temp = head;
	while (temp->next != NULL || temp->next != nullptr)
		temp = temp->next;

	temp->next = head;
	head->previous = temp;

	int x = 1;

	while (x <= index)
	{
		head = head->next;
		temp = temp->next;
		x++;
	}
	temp->next = NULL;
	head->previous = NULL;
}