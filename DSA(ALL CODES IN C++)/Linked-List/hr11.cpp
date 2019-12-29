// Find the middle of a given linked list

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data = 0;
        next = NULL;
    }
};

struct node *start;

void getdata(int n){
    int data;
    start = new struct node();
    cin>>data;
    start->data = data;
    start->next = NULL;
    if(start != NULL){
        struct node *temp;
        struct node *newdata;
        temp = start;
        for(int i=1;i<n;i++){
            newdata = new struct node();
            cin>>data;
            newdata->data = data;
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }
    }
}

void showdata(){
if(start!= NULL){
    struct node *temp;
    temp = start;
    while(temp!= NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }   
}
}

void middle_ll(int n){
    if(start!= NULL){
        int middle,data;
        struct node *temp;
        temp = start;
        if(n%2 == 0){
             middle = n/2;
            while(middle--){
                 data = temp->data;
                temp = temp->next;    
            }
        }
        else if(n%2 == 1){
             middle = (n/2)+1;
            while(middle--){
                 data = temp->data;
                temp = temp->next; 
            }
        }
        cout<<data;
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements :- ";
    cin>>n;
    getdata(n);
    cout<<"The linked list is :- ";
    showdata();
    cout<<"The middle of the linked list is :- ";
    middle_ll(n);
}