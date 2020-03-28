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
        if(arr[i]> l1){
            l2 = l1;
            l1 = arr[i];
        }
        else if(arr[i] > l2 && arr[i] != l1){
            l2 = arr[i];
        }else{
            cout<<"GMBK";
            exit(0);
        }
    }
    cout<<l2;
}