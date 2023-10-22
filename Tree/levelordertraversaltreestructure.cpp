#include<iostream>
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

void levelordertraversal(node* root){
    if(root == NULL)
    return;

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        if(q.front() == NULL){
            q.pop();
            if(!q.empty()){
            q.push(NULL);
            cout<<endl;
            }
        }else{

        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left != NULL)
        q.push(temp->left);

        if(temp->right != NULL)
        q.push(temp->right);
        }
    }
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    root->left->left->left = new node(8);
    root->left->left->right = new node(9);

    levelordertraversal(root);
    return 0;
}