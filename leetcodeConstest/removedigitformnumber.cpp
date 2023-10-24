#include<iostream>
using namespace std;
     

string removedigitfromnumber(string number, char digit){
    string maxi = "";
int n = number.length();
for(int i=0;i<n;i++){
    if(number[i] == digit){
        string s1 = number.substr(0,i);
        string s2 = number.substr(i+1,n-1);
        string r = s1+s2;
        maxi = max(maxi,r);
    }
}
return maxi;
}

int main(){
    string number = "2998589353917872714814599237991174513476623756395992135212546127959342974628712329595771672911914471";
    char digit = '3';
    cout<<removedigitfromnumber(number,digit)<<" ";
    // cout<<number.substr(-1,5);
    return 0;
}