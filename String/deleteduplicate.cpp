#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    auto it  = unique(s.begin(),s.end());

    cout<<string(s.begin(),it)<<endl;
}