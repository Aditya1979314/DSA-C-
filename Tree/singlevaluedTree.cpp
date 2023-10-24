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

bool samevalTree(node* root,int rootdata){
    if(root == NULL)
    return true;

     if(root->data == rootdata)
     return (samevalTree(root->left,rootdata) && samevalTree(root->right,rootdata));

     return false;
}


int countTrees(node *root){
    if(root == NULL)
    return 0;

    
}

int main(){

node* root = new node(1);
root->left = new node(1);
root->right = new node(1);
root->left->left = new node(1);
root->left->right = new node(1);
root->right->left = new node(1);
root->right->right = new node(0);

cout<<samevalTree(root,root->data);

    return 0;
}