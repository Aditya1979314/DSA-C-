#include<iostream>
using namespace std;
     
void bubblesort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}

int main(){
    int arr[]= {2,1,3,5,4};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    


    int i=0;
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}