#include<iostream>
using namespace std;
     
class Node{
public:
int data;
Node* left;
Node* right;

Node(int val){
    data = val;
    left = NULL;
    right = NULL;
}
};

bool traversalcheck(Node* root,int n){

if(root == NULL)
return 1;

if(root->data == n && traversalcheck(root->left,n) && traversalcheck(root->right,n)){
    return 1;
}

return 0;

}

bool check(Node* root){
    int n = root->data;

    return traversalcheck(root,n);
}

int singlevalued(Node* root){
    if(root == NULL)
    return 0;

if(check(root) == true)
return singlevalued(root->left)+singlevalued(root->right)+1;
else
return singlevalued(root->left)+singlevalued(root->right);

}



int main(){

Node* root = new Node(5);
root->left = new Node(4);
root->right = new Node(5);
root->left->left = new Node(4);
root->left->right = new Node(4);
root->right->right = new Node(5);

cout<<singlevalued(root)<<" ";

    return 0;
}