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

int height(node* root){
    if(root == NULL)
    return 0;

    int leftheight = height(root->left);
    int rightheight = height(root->right);

    return max(leftheight,rightheight)+1;
}


int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    cout<<height(root)<<" ";
    return 0;
}