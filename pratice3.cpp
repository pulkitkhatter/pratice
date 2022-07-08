#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool palin(string s,int start,int end){
    if(start>=end)
    return true;
    return s[start]==s[end] && palin(s,start+1,end-1);
}
int main(){
    string s;
    cin>>s;
    cout<<palin(s,0,s.length()-1);   
    return 0;
}