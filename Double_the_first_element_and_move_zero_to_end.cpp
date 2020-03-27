/*
Given an array of integers of size n. 
Assume ‘0’ as invalid number and all other as valid number. 
Convert the array in such a way that if next number is a valid number and same as current number, 
double its value and replace the next number with 0. After the modification, 
rearrange the array such that all 0’s are shifted to the end.

Input : arr[] = {2, 2, 0, 4, 0, 8}
Output : 4 4 8 0 0 0

Input : arr[] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8}
Output :  4 2 12 8 0 0 0 0 0 0
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
    
    for(int i=0;i<n;i++){
        if(arr[i] !=0 && i!=n-1){
        if(arr[i] == arr[i+1]){
            arr[i] = arr[i]*2;
            arr[i+1]=0;
        }
        }
    }

    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[x++] =  arr[i];
        }
    }

    for(int i=x;i<n;i++){
        arr[i] = 0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}