#include<iostream>
using namespace std;
     

int ternarySearch(int arr[],int l,int u, int k){
if(l<=u){

    int mid1 = l+(u-l)/3;
    int mid2 = u-(u-l)/3;

    if(arr[mid1] == k)
    return mid1;

    if(arr[mid2]==k)
    return mid2;

    if(arr[mid1]>k)
    return ternarySearch(arr,l,mid1-1,k);
    else if(arr[mid2]<k)
    return ternarySearch(arr,mid2+1,u,k);
    else
    return ternarySearch(arr,mid1+1,mid2-1,k);
}
return -1;
}

int main(){
    int arr[] = {122,34,5,44,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<ternarySearch(arr,0,4,44);

    return 0;
}