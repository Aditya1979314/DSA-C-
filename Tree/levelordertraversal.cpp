// #include<iostream>
// #include<queue>  

// using namespace std;

// class node{
//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// node* createTree(node* root){ 
//     int data;
//     cout<<"Enter data"<<endl;
//     cin>>data;

//     root = new node(data);
//     if(data == -1){
//         return root;
//     }


//     root->left = createTree(root->left);
//     root->right = createTree(root->right);

//     return root;
// }

// void levelordertraversal(node* root){

// queue<node*> q;
// q.push(root);

// while(!q.empty()){
//    node* temp = q.front();
//    cout<<temp->data<<" ";
//    q.pop();

//     if(temp->left != NULL){
//         q.push(temp->left);
//     }

//     if(temp->right != NULL){
//         q.push(temp->right);
//     }
// }

// }

// int main(){

// node* root = NULL;
//    root =  createTree(root);
//     // 10 11 13 -1 -1 -1 12 -1 14 15 -1 -1 16 -1 -1
//     cout<<"Printing the level order of the tree"<<endl;
//     levelordertraversal(root);
//     return 0;
// }

// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>

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

void printtree(node* root){
    if(root == NULL)
    return;
    
    queue<node*> q;
    
    q.push(root);
    
    while(!q.empty()){
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        
        if(temp->left != NULL)
        q.push(temp->left);
        
        if(temp->right != NULL)
        q.push(temp->right);
    }
}



int main() {
node* root = new node(1);
root->left = new node(2);
root->right = new node(3);

root->left->left = new node(4);
root->left->right = new node(5);

root->right->left = new node(6);
root->right->right = new node(7);
   
   printtree(root);

    return 0;
}