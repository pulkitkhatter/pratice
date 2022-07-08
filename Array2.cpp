#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int size,position=1,element=50;
    cin>>size;
    int arr[size]={1,2,3,4};
    for(int i=size;i>position;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position]=element;
    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}