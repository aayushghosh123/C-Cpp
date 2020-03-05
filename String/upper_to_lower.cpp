#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    cout<<"Enter the string :- ";
    gets(s);
    int i=0;
    while(s[i]!='\0'){
        if(s[i] >='a' && s[i]<='z'){
            i++;
        }
        else if(s[i] >='A' && s[i]<='Z'){
            s[i] = s[i] + 32;
            i++;
        }
        else if(s[i] == ' '){
            i++;
        }
    }
    cout<<"The string in upper case is :- "<<s<<endl;
}