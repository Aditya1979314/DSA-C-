#include<iostream>

using namespace std;

int sumarr(int arr[],int n){
if(n==0)
return 0;
else
return sumarr(arr,n-1)+arr[n-1];
}

int main(){
int arr[] = {1,2,3,4,5,6};
int n = sizeof(arr)/sizeof(int);
cout<<sumarr(arr,n);
    return 0;
}