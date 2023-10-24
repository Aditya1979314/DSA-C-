#include<iostream>
using namespace std;
     

class node{
public:
int data;
node* left;
node* right;

node(int val){
    data = val;
    left = NULL;
    right = NULL;
}
};

bool isIdentical(node* root1, node* root2){
    if(root1 == NULL && root2 == NULL)
    return true;

    if(root1 == NULL || root2 == NULL)
    return false;

    if(root1->data == root2->data && isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right))
    return true;
    }

    bool isSubtree(node* T,node* S){
        if(T == NULL)
        return false;

        if(S == NULL)
        return true;

        if(isIdentical(T,S))
        return true;

        return (isSubtree(T->left,S) || isSubtree(T->right,S));
    }

int main(){

  node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    root->left->left->left = new node(8);
    root->left->left->right = new node(9);

    node* root1 = new node(6);
    root1->left = new node(8);

    cout<<isSubtree(root,root1)<<" ";
    
    return 0;
}