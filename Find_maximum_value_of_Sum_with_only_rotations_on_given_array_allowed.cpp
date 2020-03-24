#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=n-1;
    int sum=0,largest=0;
    while(x>0){
        for(int i=0;i<n;i++){
            //out<<i*arr[i]<<endl;
            sum = sum + i*arr[i];
            //cout<<"i = "<<i<<" = "<<sum<<endl;
        }
        cout<<"sum = "<<sum<<endl;
        if(sum>largest){
            largest = sum;
        }

    int temp = arr[0];

    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    cout<<"The new array is :- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    sum=0;
    x = x-1;
    }
    cout<<"The largest sum is "<<largest;
}