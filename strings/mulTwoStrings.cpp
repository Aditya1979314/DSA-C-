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

string contos(int n){
string ans = "";
stack<char> st;

int check = n;
while(check/10 != 0){
    int temp = n%10;
    st.push(temp - '0');
    check = check/10;
}

while(!st.empty()){
    ans = ans + st.top();
    st.pop();
}
}

 string multiplyStrings(string s1, string s2) {

    }


int main(){
    string n = "0012";
    cout<<conv(n)<<" ";
    return 0;
}