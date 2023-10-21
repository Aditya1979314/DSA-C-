#include<iostream>

using namespace std;


void printn(int n){
    if(n>0){
        printn(n-1);
        cout<<n<<" ";
    }
    return;
}

int main(){
int n = 5;
printn(n);
    return 0;
}