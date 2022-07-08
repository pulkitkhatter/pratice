#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sum(int a)
{
    if(a==0)
    return 0;
    return a+sum(a-1);
}
int main(){   
    int a; 
    cin>>a;
    cout<<sum(a);
    return 0;
}