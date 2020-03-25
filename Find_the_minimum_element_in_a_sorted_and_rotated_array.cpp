/*
A sorted array is rotated at some unknown point.
Find the minimum element in it.
Following solution assumes that all elements are distinct
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];

    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<min;
}