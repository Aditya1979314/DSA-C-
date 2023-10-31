#include<bits/stdc++.h>
using namespace std;
     
 string reverseWord(string str)
    {
        int l=0;
        int h = str.length()-1;

        while(l<h){
            char temp = str[l];
            str[l] = str[h];
            str[h] = temp;
            l++;
            h--;
        }
return str;
    }

int main(){
    string s = "adita";
    cout<<reverseWord(s)<<" ";
    return 0;
}