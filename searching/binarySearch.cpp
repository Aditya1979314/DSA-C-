#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr,int l, int u,int k){
    if(l>=u)
    return l;

    int mid = (l+u)/2;

    if(arr[mid]>k){
        return binarySearch(arr,l,mid,k);
    }else{
        return binarySearch(arr,mid+1,u,k);
    }

    return -1;
}

int main(){
vector<int> arr = {1,2,3,41,51,61,71};
cout<<binarySearch(arr,0,6,41);

    return 0;
}