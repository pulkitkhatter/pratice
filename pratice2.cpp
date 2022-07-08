#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fact(int a)
{
    if(a==1)
    return 1;
    return a*fact(a-1);
}
int notfact(int a,int k)
{
    if(a==1||a==0)
    return k;
    notfact(a-1,k*a);
}
int sum(int a){
    if(a==0)
    return 0;
    return a+sum(a-1);
}
void fabnonaic (int a,int first,int secound){
    if(a==0)
    return;
    cout<<first+secound;
    fabnonaic(a-1,secound,first+secound);
}
int fabnonaic(int n)
{
    if(n<=1)
    return n;
    return fabnonaic(n-1)+fabnonaic(n-2);
}
int main(){
    int a; 
    cout<<"how much :: ";
    cin>>a;
    int t1=0,t2=1;
    cout<<t1;
    for(int i=0;i<a;i++)
    {
        cout<<t1+t2;
        int t3=t2;
        t2=t1+t2;
        t1=t3;
    }
    cout<<endl;
    cout<<fabnonaic(5)<<" ";
    return 0;
}