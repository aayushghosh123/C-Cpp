/*
Given a singly linked list of characters, 
write a function that returns true if the given list is a palindrome, 
else false.
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    char c;
    struct node *next;
};

stack<char>s;

struct node *start;

void getdata(int n){
char x;
cin>>x;
start = new node();
start->c = x;
start->next = NULL;
if(start != NULL){
    struct node *temp = start;
    struct node *newdata;

    for(int i=1;i<n;i++){
        cin>>x;
        newdata = new node();
        newdata->c = x;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
        // cout<<"Done"<<endl;
    }
}
}

void showdata(){
if(start != NULL){
    struct node *temp = start;
    while(temp != NULL){
        s.push(temp->c);
        temp = temp->next;
    }

    temp = start;

    while(temp != NULL){
        if(s.top() == temp->c){
            s.pop();
            temp = temp->next;
        }
        else{
            cout<<"Not a palindrome"<<endl;
            exit(0);
        }
    }
    cout<<"Its a palindrome...."<<endl;
}
}

int main(){
    int n=0;
    cin>>n;
    getdata(n);
    showdata();
}