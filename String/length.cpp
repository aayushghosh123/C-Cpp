#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100];
    cout<<"Enter the string :- "<<endl;
    gets(s);
    int i=0,length=0;
    while(s[i] != '\0'){
        length++;
        i++;
    }
    cout<<"The length of the string is:- "<<length<<endl;
}