#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *createTree(node *root)
{
    int data;
    cout << "Enter data" << endl;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return root;
    }

    root->left = createTree(root->left);
    root->right = createTree(root->right);

    return root;
}

void postOrderTraversal(node *root)
{
    if (root->data == -1)
    {
        return;
    }
    postOrderTraversal(root->left);

    postOrderTraversal(root->right);
    cout << root->data << " ";
}

void inOrderTraversal(node *root)
{
    if (root->data == -1)
    {
        return;
    }
    inOrderTraversal(root->left);

    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(node *root)
{
    if (root->data == -1)
    {
        return;
    }
    cout << root->data << " ";
    inOrderTraversal(root->left);

    inOrderTraversal(root->right);
}

int main()
{

    node *root = NULL;
    root = createTree(root);
    
    cout<<"PostOrder Traversal of the tree: ";
    postOrderTraversal(root);

    cout<<"inOrder Traversal of the tree: ";
    inOrderTraversal(root);

      cout<<"preOrder Traversal of the tree: ";
    preOrderTraversal(root);
    return 0;
}