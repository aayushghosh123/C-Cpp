/*
Given an array of elements of length N, ranging from 0 to N – 1. 
All elements may not be present in the array.
If element is not present then there will be -1 present in the array.
Rearrange the array such that A[i] = i and if i is not present,
display -1 at that place.

Examples:

Input : arr = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}
Output : [-1, 1, 2, 3, 4, -1, 6, -1, -1, 9]

Input : arr = {19, 7, 0, 3, 18, 15, 12, 6, 1, 8,
              11, 10, 9, 5, 13, 16, 2, 14, 17, 4}
Output : [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
         11, 12, 13, 14, 15, 16, 17, 18, 19]
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
    
    int arr2[n]={-1};
    
    int min=0;
    for(int i=0;i<n;i++){
        if(arr[i] == -1){
            min++;
        }
    }

    // cout<<"Min = "<<min<<endl;

    int j=0;
    int k=0;
    int l=0;
    int flag=0;
    
    while(j!=n){
        for(int i=0;i<n;i++){
            if(arr[i] == j){
                arr2[k] = arr[i];
                flag=1;
                break;
            }
        }
        if(flag==0){
            arr[l] = -1;
            min--;
        }
        j++;
        k++;
        l++;
        flag=0;
    }

    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}