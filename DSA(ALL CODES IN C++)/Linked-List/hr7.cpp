#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data = 0;
        next = NULL;
    }
    
}*start;

void getdata(int n){
    struct node *temp,*newdata;
    int data,i;
    start = new struct node();
    cin>>data;
    start->data = data;
    start->next = NULL;

    if(start != NULL){
        temp = start;
        for(i=2;i<=n;i++){
            newdata = new struct node();
            cin>>data;
            newdata->data = data;
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }
    }
    
}

void reverseLL(){
    
    if(start != NULL){
        struct node *n,*curr;
        struct node *next = NULL;
        struct node *prev = NULL;
        curr = start;
        while(curr != NULL){
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
        }
        start = prev;

    }


}

void getdata(){
    struct node *temp;
    if(start != NULL){
        temp = start;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
}

int main(){
    int n;
    cin>>n;
    getdata(n);
    reverseLL();
    cout<<"The reverse linked list is :- "<<endl;
    getdata();
}