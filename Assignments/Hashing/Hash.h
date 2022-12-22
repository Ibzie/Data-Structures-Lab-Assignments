 #include<iostream>
using namespace std;
struct Node
{
public:
	int data;
	Node* next;
};

class Hash
{
    int BUCKET;    // No. of buckets
    Node** table;
public:
	Hash(int size);
	int hashing(int key);
	void insert(int key);
	void Display_Hash();
};