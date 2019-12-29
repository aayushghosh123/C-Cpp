// Detect loop in a linked list

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
    int check;

    node(){
        data = 0;
        next = NULL;
        check=0;
    };
};

struct node *start = NULL;

void getdata(int n){
    int data;
    cin>>data;
    start = new struct node();
    start->data = data;
    start->next = NULL;

    struct node *newdata;
    struct node *temp;

    temp = start;
    if(start!= NULL){
        for(int i=1;i<n;i++){
        newdata =new struct node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        newdata->check = 0;
        temp->next = newdata;
        temp = temp->next;
        }
    }
}

void showdata(){
    struct node *temp;
    int data;
    if(start!= NULL){
        temp = start;
        while(temp!=NULL){
            cout<<" "<<temp->data;
            temp = temp->next;
        }
    }
}

void check_loop(int n){
    if(start!= NULL){
        struct node *temp;
        while(temp!= NULL && temp->check <=2){
            temp = temp->next;
            (temp->check)++;
        }
        int flag = 0;
        while(temp!=NULL){
            if(temp->check == 2){
                flag = 1;
        }
        temp = temp->next;
    }
    if(flag == 1){
        cout<<"\nIt's a looped Linked List...";
    }
    else{
        cout<<"\nIt's not a looped Linked List";
    }
}
}


int main(){
    int n;
    cout<<"Enter the number of elements you want in your linked list :- ";
    cin>>n;
    getdata(n);
    cout<<"\nThe linked list is :- ";
    showdata();
    check_loop(n);
    return 0;
    }