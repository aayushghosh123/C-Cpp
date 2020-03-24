/*
Given an array, cyclically rotate the array clockwise by one.
Input:  arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int temp = arr[n-1];

    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    
    arr[0] = temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}