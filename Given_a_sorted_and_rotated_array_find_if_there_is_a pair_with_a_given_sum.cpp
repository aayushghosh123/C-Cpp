/*
Given an array that is sorted and then rotated around an unknown point.
Find if the array has a pair with a given sum ‘x’.
It may be assumed that all elements in the array are distinct.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n=0;
 int flag=0;
 cin>>n;
 int arr[n]={0};
 for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int element=0;
    cin>>element;
    int s=0;
    int l=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            s = i;
            l = i-1;
            break;
        }
        }
        // cout<<"Largest = "<<arr[l] <<endl;
        // cout<<"Smallest = "<<arr[s]<<endl;

        while(l!= s){
            if(arr[l] + arr[s] == element){
                cout<<"True";
                exit(0);
            }

            if(arr[l] + arr[s] < element)
            s = (s+1)%n;
            else
            l = (n+l-1)%n;
        }

        if(flag==0){
            cout<<"False";

        }

}