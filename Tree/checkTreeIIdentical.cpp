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

bool checkTree(node* r1,node* r2){
    if(r1 == NULL || r2 == NULL)
    return 0;

    if(r1->data == r2->data)
    return 1;
    else 
    return 0;

    bool leftcheck = checkTree(r1->left,r2->left);
    bool rightcheck = checkTree(r1->right,r2->right);

    if(leftcheck == 1 && rightcheck == 1)
    return 1;
    else 
    return 0;

}



int main(){
    node* root = NULL;

    root = createTree(root);
    return 0;
}