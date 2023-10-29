#include<bits/stdc++.h>

using namespace std;

int linearSearch(vector<int> arr, int n, int k){
    int i=0;
    while(i<n){
        if(arr[i] == k)
        return i+1;
        i++;
    }
    return -1;
}

int main(){
vector<int> arr = {12,3,4,122,5};
cout<<linearSearch(arr,arr.size(),3);
    return 0;
}