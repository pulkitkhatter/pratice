#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void takingElement(int arr[],int size){
    cout<<"Enter Array element ";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
}
void sorting (int arr,int size)
{
}
int binarySearch(int arr[],int size,int key){
    int S=0,L=size;
    while(S<=L){
    int mid=(S+L)/2;
    if(key== arr[mid])
    return mid;
    else if(key<arr[mid]){
    L=mid-1;
    }
    else 
        S=mid+1;
    }
    return -1;
}
int linearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(key ==arr[i]){
            cout<<"element at index :: ";
            return i;
        }
    }
    return -1;
}
void componentOfFuction(int *size,int *key){
    
    cout<<"Enter the size of array ";
    cin>>*size;
    cout<<"Enter the key";
    cin>>*key;
}
int main(){
    int size,key;
    componentOfFuction(&size, &key);
    int arr[size];
    takingElement(arr,size);
   cout<< binarySearch(arr,size,key);
    return 0;
}