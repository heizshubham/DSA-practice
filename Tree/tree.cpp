// write a code for tree in data structure in c++
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
};
Node *createNode(int data)
{
    Node *newNode = new Node();
    if (!newNode)
    {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
        return root;
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
}