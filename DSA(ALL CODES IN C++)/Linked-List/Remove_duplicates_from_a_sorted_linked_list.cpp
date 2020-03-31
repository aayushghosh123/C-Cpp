#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data =0;
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
    //cout<<"Inside showdata"<<endl;
    struct node *temp = start;
    struct node *after = start->next;
    //int x=0;
    while(after != NULL){
    if(temp->data == after->data){
        after = after->next;
        temp->next = NULL;
        temp->next = after;
    }
    else{
        temp = after;
        after = after->next;
    }
    }
    
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