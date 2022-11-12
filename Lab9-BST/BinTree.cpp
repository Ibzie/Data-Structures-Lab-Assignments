#include "BinTree.h"

BST::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}
BST::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST* BST::Insert(BST* root, int value)
{
    if (!root) {
        size++;
        return new BST(value);
    }
    if (value > root->data) {
        root->right = Insert(root->right, value);

    }
    else if (value < root->data) {
        root->left = Insert(root->left, value);

    }
    return root;
}
void BST::Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}
BST* BST::search(int x, BST* root)
{
    BST* foundNode;
    if (root->data == x) {
        foundNode = root;
        return foundNode;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}