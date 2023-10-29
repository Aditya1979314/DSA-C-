#include<iostream>
using namespace std;
     

int sentinelSearch(int arr[],int n,int k){
int i=0;

int last = arr[n-1];

while(arr[i] != k)
i++;

arr[n-1] = last;

if(i<n-1 || arr[n-1] == k)
return i+1;

return -1;
}

int main(){
int arr[] = {122,34,5,44,5};
int n = sizeof(arr)/sizeof(int);
cout<<sentinelSearch(arr,n,44);
    return 0;
}