/*
We rotate an ascending order sorted array at some pivot unknown to you beforehand. 
So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way to find an element in the rotated array
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    int flag=0;
    int arr[n]={0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int f_index=0;
    int index=0;

    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            index = i-1;
            break;
        }
    }

    // cout<<"Index = "<<index<<endl;

    int search=0;

    cin>>search;

    int middle = n/2;

    if(arr[middle] == search){
        cout<<"Found at "<<middle<<" index.";
        exit(0);
    }
    else if(search >= arr[f_index] && search<=arr[index]){
        // cout<<"Enter in 1st loop !!!"<<endl;
        // cout<<"f_Index = "<<f_index<<endl;
        // cout<<"Index = "<<index<<endl;
        // for(int i=f_index;i<=index;i++){
        //     cout<<arr[i]<<" ";
        // }
        for(int i=f_index;i<=index;i++){
            if(search == arr[i]){
                cout<<"Found at "<<i<<" index.";
                exit(0);
            }
            else{
                flag=1;
            }
        }
    }
    else{
        for(int i=index+1;i<n;i++){
            if(search == arr[i]){
                cout<<"Found at "<<i<<" index.";
                exit(0);
            }
            else{
                flag=1;
            }
        }
    }
    if(flag==1){
        cout<<"Not Found!!!"<<endl;
    }
}