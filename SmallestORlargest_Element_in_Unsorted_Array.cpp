/*
Given an array and a number k where k is smaller than size of array,
 we need to find the k’th smallest element in the given array. 
It is given that ll array elements are distinct.
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

    sort(arr,arr+n);

    int k=0;
    cin>>k;

    cout<<arr[k-1];
}