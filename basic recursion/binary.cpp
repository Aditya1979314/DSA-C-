#include<iostream>

using namespace std;

int bin(int n){
    if(n == 0)
    return 0;
    if(n == 1)
    return 1;

    return bin(n/2)*10+(n%2);
}

int main(){
cout<<bin(7);
    return 0;
}
