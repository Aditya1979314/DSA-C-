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

vector<int> largestvalue(node* root){
    vector<int> ans;
    int maxi = 0;
    if(root  == NULL)
    return ans;

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        if(q.front() == NULL){
            ans.push_back(maxi);
            maxi = 0;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            node* temp = q.front();
            q.pop();
            maxi = max(temp->data,maxi);

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

    vector<int> ans = largestvalue(root);
    int i = 0;
    while(i<=ans.size()-1){
        cout<<ans[i]<<" ";
        i++;
    }
    return 0;
}