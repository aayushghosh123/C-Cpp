#include<bits/stdc++.h>
using namespace std;
int cmp(char c){
    if(c=='^')
    return 3;
    else if(c=='*' || c=='/')
    return 2;
    else if(c=='+' || c=='-')
    return 1;
    else 
    return -1;
}

void infixtopostfix(string s){
    stack<char>ss;
    string ns;
    for(int i=0;i<s.length();i++){
    if(s[i]=='(') 
    s[i]=')'
    else if(s[])       
}
}

int main(){
    string s;
    cin>>s;
    infixtopostfix(s);
}