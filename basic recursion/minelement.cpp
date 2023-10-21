#include<iostream>
using namespace std;
     
int minelement(int arr[],int n){

    if(n==1)
    return arr[0];
    return min(arr[n-1],minelement(arr,n-1));
}


int main(){
    int arr[] = {1,2,4,5};
    cout<<minelement(arr,5)<<" ";
    return 0;
}