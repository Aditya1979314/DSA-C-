#include<iostream>

using namespace std;

string revstr(string str){
    int n = str.length();
if(str.length()==1)
return str.substr(0,1);
else
return str.substr(n-1,1)+revstr(str.substr(0,n-1));
}

bool checkpalindrome(string str){
if(str == revstr(str))
return true;
return false;
}

int main(){
string str = "malayalam";
cout<<revstr(str)<<" ";
cout<<checkpalindrome(str)<<" ";
    return 0;
}