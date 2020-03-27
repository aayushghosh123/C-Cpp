/*
Input : arr[] = [5, 8, 1, 4, 2, 9, 3, 7, 6]
Output :arr[] = {1, 9, 2, 8, 3, 7, 4, 6, 5}

Input : arr[] = [1, 2, 3, 4]
Output :arr[] = {1, 4, 2, 3}
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

    sort(arr,arr+n);

    int arr1[n]={0};

    int j=1;
    int k=0;
    int count=0;
    int i=0;
    while(i < n){
        // cout<<count++<<endl;
        arr1[i] = arr[k];
        arr1[i+1] = arr[n-j];
        j++;
        k++;
        i = i+2;
    }

    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}