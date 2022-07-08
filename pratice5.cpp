#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void subset(string s,string str="",int i=0)
{
    if(i==s.length())
    {
        cout<<str<<" ";
        return;
    }
    subset(s,str,i+1);
    subset(s,str+s[i],i+1);
}
int main(){
    string s; 
    cin>>s;
    subset(s,"",0);
    return 0;
}