#include<iostream>
#include<vector>
#include<queue>
using namespace std;
     
queue<int> revque(queue<int> q){
    if(q.empty() || q.size()==1){
        return q;
    }else{
        int temp = q.front();
        q.pop();
        q = revque(q);
        q.push(temp);
        return q;
    }
}



int main(){
 queue<int> q ;
 q.push(5);
  q.push(24);
   q.push(6);
    q.push(7);
     q.push(58);
 queue<int> ans = revque(q);
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}

while(!ans.empty()){
    cout<<ans.front()<<" ";
    ans.pop();
}
    return 0;
}