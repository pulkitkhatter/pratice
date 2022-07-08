#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int maxpieces(int n,int a,int b,int c)
{
    if(n==0)
    return 0;
    if(n<-1)
    return -1;
    int rex = max(maxpieces(n-a, a, b, c), 
	          max(maxpieces(n-b, a, b, c), 
	          maxpieces(n-c, a, b, c)));
    if(rex==-1)
    return -1;
    return rex+1;
}
int main(){   
    cout<<maxpieces(9,2,2,2);
    return 0;
}