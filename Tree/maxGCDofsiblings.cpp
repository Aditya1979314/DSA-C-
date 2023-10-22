#include<bits/stdc++.h>
using namespace std;
     

  int GCD(int b, int s){
      if(b%s == 0)
      return s;
      
      return GCD(s,b%s);
  }
  
  map<int,vector<int>> createmap(vector<vector<int>> arr){
      map<int,vector<int>> m;
      for(int i=0;i<arr.size();i++){
        int c = arr[i][0];
          m[c].push_back(arr[i][1]);
      }
      return m;
  }
  

int maxbintreegcd(vector<vector<int>> arr, int n){
int maxgcd = 0;
map<int,vector<int>> m;
m = createmap(arr);

for(auto i:m){
    int n = i.second.size();
    int b = max(i.second[0],i.second[1]);
    int s = min(i.second[0],i.second[1]);
    if(n == 2){
        maxgcd = max(maxgcd,GCD(b,s));
    }else{
        maxgcd = max(maxgcd,0);
    }
}
return maxgcd;
}

int main(){

    vector<vector<int>> v = {{4, 5}, {4, 2}, {2, 3}, {2, 1}, {3, 6}, {3, 12}};
    cout<<maxbintreegcd(v,6);
    return 0;
}