#include <iostream>
using namespace std;

class BST {
    int data;
    BST* left, * right;
    int size = 0;

public:
    BST();
    BST(int);
    BST* Insert(BST*, int);
    void Inorder(BST*);
    int getSize()
    {
        return size;
    }
};