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


void preordertraversal(node* root){
    stack<node*> st;
    node* curr = root;

    while( curr!= NULL || !st.empty()){

    if(curr ==NULL){
        curr = st.top();
        st.pop();
        curr = curr->right;
    }else{
    cout<<curr->data<<" ";
    st.push(curr);
    curr = curr->left;
    }
    }
}

int main(){
   node* root = new node(8);
    root->left = new node(1);
    root->right = new node(5);

    root->left->right = new node(7);
    root->left->right->right = new node(10);

    root->right->left = new node(10);
    root->right->right = new node(6);

    root->right->left->left = new node(6);

preordertraversal(root);
    return 0;
}