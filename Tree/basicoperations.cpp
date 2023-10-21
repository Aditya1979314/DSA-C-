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
    if(data == -1){
        return root;
    }

    root = new node(data);


    root->left = createTree(root->left);
    root->right = createTree(root->right);

    return root;
}

void printTree(node* root){
    if(root == NULL){
        return;
    }else{
        cout<<root->data<<" ";
    }
    printTree(root->left);
    printTree(root->right);
}

int depthTree(node* node){
    if(node == NULL){
        return 0;
    }

    int leftdepth = depthTree(node->left);
    int rightdepth =  depthTree(node->right);

    if(leftdepth>rightdepth){
     return leftdepth+1;
    }
    else{
    return rightdepth+1;
    }
}


int main(){
    // 10,11,13,-1,-1,-1,12,-1,14,-1
  node* root;
  root = createTree(root);
    printTree(root);
 cout<<endl;
cout<<depthTree(root)<<endl;
    return 0;
}