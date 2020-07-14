#include<iostream>
using namespace std;

int eggdrop(int n,int k){
    int eggfloor[n+1][k+1];
    int res;
    int i,j,x;

    for(i=0;i<=k;i++)
    eggfloor[0][i] = 0;

    for(i=1;i<=n;i++){
        eggfloor[i][1] = 1;
        eggfloor[i][0] = 0;
    }

    for(j=1;j<=k;j++)
    eggfloor[1][j] = j;

    for(i=2;i<=n;i++){
        for(j=2;j<=k;j++){
            eggfloor[i][j] = 2147483647;
            for(x=1;x<=j;x++){
                res = 1+ max(eggfloor[i-1][x-1],eggfloor[i][j-x]);
                if(res<eggfloor[i][j])
                eggfloor[i][j] = res;
            }
        }
    }
    return eggfloor[n][k];
}

int main(){
    int n=0,k=0;
    cin>>n>>k;
    cout<<eggdrop(n,k);
}