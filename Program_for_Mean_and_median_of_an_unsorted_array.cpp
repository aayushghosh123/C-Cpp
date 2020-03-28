#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    
    int arr[n]={0};
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    float sum=0;

    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }

    cout<<sum/n<<endl;

    sort(arr,arr+n);

    if(n%2==1){
        cout<<arr[n/2];
    }
    else if(n%2==0){
        cout<<(double)(arr[n/2]+arr[(n/2)-1])/2.0;
    }
}