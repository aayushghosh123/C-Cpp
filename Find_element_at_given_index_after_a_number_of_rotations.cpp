/*
An array consisting of N integers is given. There are several Right Circular Rotations of range[L..R] that we perform. After performing these rotations, we need to find element at a given index.

Examples :

Input : arr[] : {1, 2, 3, 4, 5}
        ranges[] = { {0, 2}, {0, 3} }
        index : 1
Output : 3
Explanation : After first given rotation {0, 2}
                arr[] = {3, 1, 2, 4, 5}
              After second rotation {0, 3} 
                arr[] = {4, 3, 1, 2, 5}
After all rotations we have element 3 at given
index 1. 
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

    int r1=0,r2=0,l1=0,l2=0;
    cin>>l1>>r1;
    cin>>l2>>r2;

    // for(int i=l1;i<r1;i++)
    // cout<<arr2[i];
    // cout<<endl;
    // for(int i=l2;i<r2;i++)
    // cout<<arr3[i];
    int temp=0;
    temp = arr[r1];

    for(int i=r1-1;i>=l1;i--){
    arr[i+1] = arr[i];
    }
    arr[l1] = temp;

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;

    temp = arr[r2];

    for(int i=r2-1;i>=l2;i--){
    arr[i+1] = arr[i];
    }
    arr[l2] = temp;

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    int element=0;
    cin>>element;
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i] == element){
            index=i;
            break;
        }
    }
    cout<<index;



}