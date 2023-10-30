#include<iostream>
using namespace std;
     
void merge(int arr[],int l,int mid,int u){
    int n1= mid+1;
    int n2 = (u-mid)+1;

    int* leftarray = new int[n1];
    int* rightarray = new int[n2];

    int i=l;
    while(i<n1){
        leftarray[i] = arr[i];
        i++;
    }

    i = 0;
    while(i<n2){
        rightarray[i] = arr[mid+i];
        i++;
    }

    i=0;
    int j=0;
    while(i<n1 && j<n2){
        if(leftarray[i]<=rightarray[j])
        arr[i] = leftarray[i];
        else
        arr[i] = rightarray[j];
        i++;
        j++; 
    }

    int n = u+1;
    while(i<n && i<n1){
        arr[i] = leftarray[i];
        i++;
    }

    while(j<n && j<n2){
        arr[j] = rightarray[j];
        j++;
    } 

}


 void mergeSort(int arr[],int n,int l,int u){
if(l<=u){
    
    int mid = l+(u-l)/2;

    mergeSort(arr,n,l,mid-1);
    mergeSort(arr,n,mid,u);
    merge(arr,l,mid,u);
}
 }


int main(){

    int arr[] = {2,4,5,1,4};
    int n = sizeof(arr)/sizeof(int);
   mergeSort(arr,n,0,4);
   int i=0;
   while(i<n){
    cout<<arr[i]<<" ";
    i++;
   }
    return 0;
}