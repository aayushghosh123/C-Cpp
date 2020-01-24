#include<bits/stdc++.h>
using namespace std;

int search_element(int arr[ ],int first,int last,int search){
    if(first<last){
        int middle = (first+last-1)/2;
        if(arr[middle] == search){
            return 1;
        }
        else if(search<arr[middle])
        return search_element(arr,first,middle-1,search);

        else if(search>arr[middle])
        return search_element(arr,middle+1,last,search);
    }
    return -1;
}

int main(){
    int n,search;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Please enter the number you want to search :- ";
    cin>>search;
    int store=0;
    store = search_element(arr,0,n,search);
    if(store == 1){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}