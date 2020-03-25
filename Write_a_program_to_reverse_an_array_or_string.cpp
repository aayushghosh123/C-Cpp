/*
Given an array (or string), the task is to reverse the array/string.

Examples :

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
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
    int arr2[n]={0};
    int j=0;
    for(int i=n-1;i>=0;i--){
        arr2[j] = arr[i];
        j++;
    }

    for(int i=0;i<n;i++)
    cout<<arr2[i]<<" ";
}