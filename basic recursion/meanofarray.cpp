#include<iostream>

using namespace std;

float meanarr(int arr[],int n){
if(n == 0)
return arr[0];
else
return (meanarr(arr,n-1)*(n-1)+arr[n-1])/n;
}

int main(){
int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(int);
float ans = meanarr(arr,n);
cout<<ans;
    return 0;
}