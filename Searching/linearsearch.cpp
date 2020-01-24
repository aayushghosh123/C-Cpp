#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,search;
    cin>>n>>search;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(search == arr[i]){
            flag=1;
        }
    }
    if(flag == 1){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}