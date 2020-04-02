#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data=0;
        next=NULL;
    }
};

struct node *start;

void getdata(int n){
    int data=0;
    start = new node();
    cin>>data;
    start->data = data;
    start->next = NULL;

    if(start != NULL){
        struct node *temp = start;
        struct node *newdata;
        for(int i=1;i<n;i++){
            newdata = new node();
            cin>>data;
            newdata->data=data;
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }

        temp->next = start;
    }
}

void showdata(){
if(start != NULL){
    struct node *temp= start;
    struct node *end;
    int flag=0;
    while(temp!= end){
        cout<<temp->data<<" ";
        if(flag==0){
            end = start;
            flag=1;
        }
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