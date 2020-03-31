#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data=0;
        next = NULL;
    }
};

struct node *start;

void getdata(int n){
    int data=0;
    cin>>data;
    start = new node();
    start->data = data;
    start->next = NULL;

    if(start != NULL){
    struct node *temp = start;
    struct node *newdata;
    for(int i=1;i<n;i++){
        newdata = new node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }   
    }
}

void showdata(){
if(start != NULL){
    struct node *temp = start;
    struct node *before = NULL;
    struct node *after = NULL;

    while(temp != NULL){
        after = temp->next;
        temp->next = before;
        before = temp;
        temp = after;
    }

    start = before;
    temp = start;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
}

int main(){
    int n=0;
    cin>>n;
    getdata(n);
    showdata();
}