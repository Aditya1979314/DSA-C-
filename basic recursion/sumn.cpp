#include<iostream>

using namespace std;

int sumN(int n){
    if(n==1)
    return 1;
    else
    return sumN(n-1)+n;
}

int main(){
cout<<sumN(4)<<" ";
    return 0;
}