/*
Given an array, right rotate it by k elements.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0;
    cin>>k;

    int arr2[k];
    int j=0;

    for(int i=n-k;i<=n;i++){
        arr2[j] = arr[i];
        j++;
    }
    j=n-1;
    for(int i=n-k-1;i>=0;i--){
        arr[j] = arr[i];
        j--;
    }

    for(int i=0;i<k;i++){
        arr[i] = arr2[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}