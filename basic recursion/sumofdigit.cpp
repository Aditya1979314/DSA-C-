#include<iostream>

using namespace std;

int sumD(int n){
    if(n/10 == 0)
    return n;
    else
    return sumD(n/10) + (n%10);
}

int main(){
cout<<sumD(45632)<<" ";
    return 0;
}