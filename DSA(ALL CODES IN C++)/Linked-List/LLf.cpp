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
    int data,i;
    struct node *newdata,*temp;
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
            newdata ->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }
    }
}

void insertfirst(){
    int data;
    struct node *newdata,*temp;
    if(start != NULL){
        temp = start;
        newdata = new struct node();
        cin>>data;
        newdata->data = data;
        newdata->next = start;
        start = newdata;
    }

}

void showdata(){
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
    int n,choice;
    cin>>n;
    getdata(n);
    again:
    insertfirst();
    cout<<"The linked list is:- "<<endl;
    showdata();
    cout<<"Do you want to insert again :- 1.yes 2.no :- ";
    cin>>choice;
    switch (choice)
    {
    case 1:
            goto again;
        break;
    case 2:
            exit(0);
        break;    
    }
}