#include<bits/stdc++.h>
using namespace std;

int count(int arr[],int m,int n){
    int i=0,j=0,x=0,y=0;

    int t[n+1][m];

    for(int i=0;i<m;i++)
    t[0][i] = 1;

    for(i=1;i<n+1;i++){
        for(j=0;j<m;j++){
            x = (i-arr[j] >=0)?t[i-arr[j]][j]:0;
            y = (j>=1)?t[i][j-1]:0;

            t[i][j] = x+y;
        }
    }
    return t[n][m-1];
}

int main(){
    int n=0,m=0;
    cin>>n;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    cout<<count(arr,m,n);
}
