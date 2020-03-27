/*
Input:  arr[]   = [10, 11, 12];
        index[] = [1, 0, 2];
Output: arr[]   = [11, 10, 12]
        index[] = [0,  1,  2] 

Input:  arr[]   = [50, 40, 70, 60, 90]
        index[] = [3,  0,  4,  1,  2]
Output: arr[]   = [40, 60, 90, 50, 70]
        index[] = [0,  1,  2,  3,   4] 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    int arr[n]={0};
    int index[n]={0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cin>>index[i];
    }

    int arr2[n]={0};

    for(int i=0;i<n;i++){
        arr2[index[i]] = arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}