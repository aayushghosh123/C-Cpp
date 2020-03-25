/*
Consider an array of distinct numbers sorted in increasing order.
The array has been rotated (clockwise) k number of times.
Given such an array, find the value of k.

Input : arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
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
    int count=0;
    int smallest=0,largest=0;


    if(arr[0]>arr[n-1]){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            smallest = arr[i];
            largest = arr[i-1];
            break;
        }
    }
    }
    else{
        smallest = arr[0];
        largest = arr[n-1];
    }

    if(arr[0] == smallest && arr[n-1] == largest){
        cout<<count;
        exit(0);
    }

    while(arr[0] != smallest && arr[n-1] != largest){
        int temp = arr[0];
        for(int i=1;i<n;i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
        count++;
    }

    cout<<count;

}