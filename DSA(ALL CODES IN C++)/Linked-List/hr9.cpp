// Search an element in a Linked List

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node()                                                          // This is a constructer
    {
        data = 0;
        next = NULL;
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

void search_number(int search){
    int flag =0;
    struct node *temp;
    if(start != NULL){
        temp = start;
        while(temp!=NULL){
            if(temp->data == search){
                flag = 1;
            }
            temp = temp->next;
        }
        if(flag == 1){
            cout<<"\nThe number is present.";
        }
        else{
            cout<<"\nThe number is not present.";
        }
    }
}

int main(){
    int n,search;
    cout<<"Enter the number of elements you want in your linked list :- ";
    cin>>n;
    getdata(n);
    cout<<"\nThe linked list is :- ";
    showdata();
    cout<<"\nEnter the number you want to search :- ";
    cin>>search;
    search_number(search);
}