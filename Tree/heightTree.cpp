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

node* createTree(node* root){ 
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;

    root = new node(data);
    if(data == -1){
        return root;
    }


    root->left = createTree(root->left);
    root->right = createTree(root->right);

    return root;
}

int heightTree(node* root){

if(root->data == -1 ){
    return 0;
}

int heightLeft = heightTree(root->left);
int heightRight = heightTree(root->right);

if(heightLeft>heightRight)
return heightLeft+1;
else
return heightRight+1;

}

int main(){

    node* root = NULL;
    root = createTree(root);

    cout<<heightTree(root)<<" ";
    return 0;
}