#include<iostream>
using namespace std;
     
void selectionsort(int arr[],int n){
    int min_indx = 0;

    for(int i=0;i<n-1;i++){

        min_indx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
            min_indx = j;
        }
        if(min_indx != i){
            int temp = arr[min_indx];
            arr[min_indx] = arr[i];
            arr[i] = temp;
        }
      
    }
}

int main(){
    int arr[] = {2,1,3,5,4};
    int n = sizeof(arr)/sizeof(int);
    selectionsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}