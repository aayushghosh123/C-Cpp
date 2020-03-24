/*
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
Rotation of the above array by d will make array.
Time complexity : O(n)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0,d=0;

    cout<<"Enter the no of times you want to rotate and the size of the array :- ";
    cin>>d>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int c_arr[d]={0};

    for(int i=0;i<d;i++){
        c_arr[i] = arr[i];
    }

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }

    int j=0;

    for(int i=d;i>0;i--){
        arr[n-i] = c_arr[j];
        j++;
    }

    cout<<"The output array is :- ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    }