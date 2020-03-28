/*
Given an array of n distinct elements,
the task is to find all elements in array which have at-least two greater elements than themselves.
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

    int l1=INT_MIN,l2=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>l1){
            l2 = l1;
            l1 = arr[i];
        }
        else if(arr[i] > l2){
            l2=arr[i];
        }
    }

    //cout<< l1<<" "<<l2<<endl;
    for(int i=0;i<n;i++){
        if(arr[i] < l2){
            cout<<arr[i]<<" ";
        }
    }
}