#include "Hash.h"

Hash::Hash(int b)
{
    this->BUCKET = b;
    table = new Node * [b];
    for (int i = 0; i < b; i++)
        table[i] = NULL;
}
int Hash::hashing(int key)//for getting index
{
    return key % BUCKET;
}
void Hash::Display_Hash()
{
	for (int i = 0; i < BUCKET; i++)
	{
		Node* temp = table[i]; //getting individual lists
		cout << "Index " << i << ": ";
		while (temp != NULL)
		{
			cout << temp->data << " | ";
			temp = temp->next;
		}
		cout << endl;
	}
}
void Hash::insert(int key)
{
	int index = hashing(key);//getting index
	Node* temp = table[index];
	while (temp != NULL)
	{
		if (temp->data == key) return;
		temp = temp->next;
	}
	temp = new Node;
	temp->data = key;
	temp->next = table[index];
	table[index] = temp;
}
