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

int isSumProperty(node* root){
    if(root == NULL)
    return 0;

    int leftcheck = isSumProperty(root->left);
    int rightcheck = isSumProperty(root->right);

    int leftdata = root->left->data;
    int rightdata = root->right->data;

    if((leftdata + rightdata) == root->data)
    return 1;

return 0;
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

int main(){
    node* root = NULL;

    root = createTree(root);
    printTree(root);
    cout<<endl;
    cout<<isSumProperty(root);
    return 0;
}