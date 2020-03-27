/*
Given an array of random numbers,
Push all the zero’s of a given array to the end of the array.

Example:

Input :  arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
Output : arr[] = {1, 2, 4, 3, 5, 0, 0};

Input : arr[]  = {1, 2, 0, 0, 0, 3, 6};
Output : arr[] = {1, 2, 3, 6, 0, 0, 0};
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

    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i] !=0){
            arr[x] = arr[i];
            x++;
        }
    }

    for(int i=x;i<n;i++){
            arr[i] = 0;
        }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}