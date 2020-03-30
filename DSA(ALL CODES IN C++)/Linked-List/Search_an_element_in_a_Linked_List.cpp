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
    start = new node();
    int data=0;
    cin>>data;
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
    int data=0;
    cin>>data;
    struct node *temp = start;
    while(temp!= NULL){
        if(temp->data == data){
            cout<<"Yes";
            exit(0);
        }
        temp = temp->next;
    }
    cout<<"No";
    }
}

int main(){
    int n=0;
    cin>>n;
    getdata(n);
    showdata();
}