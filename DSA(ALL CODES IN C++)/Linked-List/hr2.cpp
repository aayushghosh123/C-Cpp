#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data = 0;
        next = NULL;
    }
}*start = NULL;

typedef struct node Node;


void getdata(int n){
    int data;

    start = new Node();
    cin>>data;
    start->data = data;
    start->next = NULL;
    
    int i;
    struct node *newdata,*temp;
    temp = start;

    for(i=2;i<=n;i++){
        newdata = new Node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}

void tailinsert(int tdata){
    struct node *temp;
    if(start != NULL){
    temp = start;
    
    struct node *newdata;
    newdata = new Node();
    newdata->data = tdata;
    newdata->next = NULL;

    while(temp!=NULL){
        temp = temp->next;
    }

    temp->next = newdata;
    //cout<<"COmmand done\n";   
}
}

void showdata(){
    struct node *temp;
    if(start != NULL){
        temp = start;
       // cout<<"The linked list is :- "<<endl;
        while(temp!= NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

    }

int main(){
    int n,pos,tdata;
    cin>>n;
    getdata(n);
    cin>>tdata;
    tailinsert(tdata);
    showdata();
}