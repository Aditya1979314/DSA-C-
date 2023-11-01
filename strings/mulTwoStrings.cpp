#include<bits/stdc++.h>
using namespace std;

int conv(string s){
    int ans = 0;
    int i=0;
    while(i<s.length() && s[i] == '0'){
        i++;
    }

    while(i<s.length()){
        int temp = s[i] - '0';
        ans = ans*10 + temp;
        i++;
    }

    return ans;

}


 string multiplyStrings(string s1, string s2) {
    int a = conv(s1);
    int b= conv(s2);

    string ans = to_string(a*b);
    return ans;
    }


int main(){
  string n = "11";
  string y = "12";

  cout<<multiplyStrings(n,y)<<endl;



    return 0;
}