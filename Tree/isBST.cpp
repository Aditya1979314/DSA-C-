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

int maxval(Node* root){
    if(root == NULL)
    return INT16_MIN;

    int leftmax = maxval(root->left);
    int rightmax = maxval(root->right);

    return max(root->data,max(leftmax,rightmax));

}

int minval(Node* root){
    if(root == NULL)
    return INT16_MAX;

    int leftmin = minval(root->left);
    int rightmin = minval(root->right);

    return min(root->data,min(leftmin,rightmin));

}

bool isBST(Node* root){
    if(root == NULL)
    return 1;

    if(maxval(root->left)>=root->data)
    return 0;

    if(minval(root->right)<=root->data)
    return 0;

    if(!isBST(root->left) && !isBST(root->right))
    return 0;

    return 1;

}

int main(){
      Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(90);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    root->left->left->left = new Node(8);
    root->left->left->right = new Node(9);

    cout<<isBST(root);
    return 0;
}