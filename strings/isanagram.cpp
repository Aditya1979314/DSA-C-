#include<bits/stdc++.h>
using namespace std;
     
bool isAnagram(string s,string s1){
    map<char,int> m;

    int i=0;
    while(i<s.length()){
        m[s[i]]++;
        i++;
    }

    i=0;
    while(i<s1.length()){
        m[s[i]]--;
        i++;
    }

    for(auto i:m){
        if(i.second != 0)
        return 0;
    }

    return 1;
}

int main(){

string a = "geeksforgeeks", b = "forgeeksgeek";
cout<<isAnagram(a,b);

    return 0;
}