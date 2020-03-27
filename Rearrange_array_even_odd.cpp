/*
Given an array of n elements.
Our task is to write a program to rearrange the array
such that elements at even positions are greater than all elements before it
and elements at odd positions are less than all elements before it.

Examples:

Input : arr[] = {1, 2, 3, 4, 5, 6, 7}
Output : 4 5 3 6 2 7 1

Input : arr[] = {1, 2, 1, 4, 5, 6, 8, 8} 
Output : 4 5 2 6 1 8 1 8

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    int arr[n]={0};
    int arr1[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int j=0;
    int i=0;
    if(n%2==1){
        i=n-1;
        j=n-2;
        while(j>0){
            arr1[j] = arr[i];
            j = j-2;
            i--;
        }
        i=0;
        j=n-1;
        while(j>=0){
            arr1[j] = arr[i];
            j = j-2;
            i++;
        }
    }

    if(n%2==0){
        j=n-1;
        i=n-1;
        while(j>0){
            arr1[j] = arr[i];
            j = j-2;
            i--;
        }
        i=0;
        j=n-2;
        while(j>=0){
            arr1[j] = arr[i];
            j=j-2;
            i++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }

}