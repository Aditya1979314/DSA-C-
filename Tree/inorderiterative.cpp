#include<bits/stdc++.h>
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

void inorder(node* root){

stack<node*> st;
node* curr = root;

while(curr != NULL || !st.empty()){

    while( curr != NULL){
        st.push(curr);
        curr = curr->left;
    }

    curr = st.top();
    st.pop();

    cout<<curr->data<<" ";

    curr = curr->right;
}



}

int main(){
      node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    // root->left->left->left = new node(6);
    // root->left->left->right = new node(7);
    // root->left->left->right->left = new node(11);
    // root->left->left->right->right = new node(12);

    inorder(root);
    return 0;
}