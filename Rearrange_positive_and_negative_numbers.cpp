/*
An array contains both positive and negative numbers in random order. 
Rearrange the array elements so that positive and negative numbers are placed alternatively. 
Number of positive and negative numbers need not be equal. 
If there are more positive numbers they appear at the end of the array.
 If there are more negative numbers, they too appear in the end of the array.

If the input array is [-1, 2, -3, 4, 5, 6, -7, 8, 9],
then the output should be [9, -7, 8, -3, 5, -1, 2, 4, 6]
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