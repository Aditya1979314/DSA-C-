#include<iostream>
using namespace std;
     
int fib(int n){
    if(n == 0)
    return 0;
    if(n == 1)
    return 1;
    return fib(n-1)+fib(n-2);
}

int main(){
    int n =  5;
    for(int i=n;i>=0;i--){
        cout<<fib(i)<<" ";
    }
    return 0;
}