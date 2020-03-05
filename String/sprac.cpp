#include<iostream>
using namespace std;

void allsubstring(string s,int n){
    for(int len =1;len<=n;len++){
        for(int i=0;i<len-1;i++){
            int j=len+i-1;
            for(int k=i;k<=j;k++){
                cout<<str[k];
            }
            cout<<endl;
        }
    }
}

int main(){
    string s;
    cin>>s;
    int n = s.length();
    allsubstring(s,n);
}