#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int power(int a,int n)
{
    if(a<n)
    return 0;
    return 1+power(a/n,n);
}
void binary (int a){
    if(a==0)
    return;
    binary(a/2);
    cout<<a%2;  
}
void print(int a,int n=1)
{
    if(a==0)
    return;
    cout<<n;
    print(a-1,n+1);
}
int fact(int a)
{
    if(a==1)
    return 1;
    return a*fact(a-1);
}
int main(){
    int a; 
    cin>>a;
    cout<<fact(a);
    return 0;
}