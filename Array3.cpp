#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        if(arr[i]==2)
        {

        for(int a=i;a<4;a++)
        arr[a]=arr[a+1];
        break;
        }
    }   
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}