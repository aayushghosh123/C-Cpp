#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0,j=0;
    char s1[100],s2[100];
    cout<<"Enter the string of s1 :- "<<endl;
    gets(s1);
    cout<<"Enter the string of s2 :- "<<endl;
    gets(s2);
    
    int size = (sizeof(s1)/sizeof(s1[0])) + (sizeof(s2)/sizeof(s2[0]));
    char s3[size+1];
    memset(s3,'\0',size+1);
    int length=0;

    while(s1[i] != '\0'){
        s3[i] = s1[i];
        i++;
        length++;
    }
    while(s2[j] != '\0'){
        s3[i] = s2[j];
        i++;
        j++; 
        length++;
    }
    //s3[length]='\0';

    cout<<"Length = "<<length<<endl;
    
    i=0,length=0;

    while(s3[i] != '\0'){
        cout<<s3[i]<<endl;
        i++;
        length++;
    }
    cout<<"Length = "<<length<<endl;

    cout<<"s3 :- "<<s3<<endl;
}