/*
checks whether a given Linked List contains loop 
and if loop is present then returns count of nodes in loop.
*/

#include<iostream>
using namespace std;

struct node{
    int data;
    int count;
    struct node *next;

    node(){
        data = 0;
        count=0;
        next = NULL;
    }
};

struct node *start;


void getdata(int n){
    //cout<<"Enter the start/root value :- "<<endl;
    int data=0;
    cin>>data;
    start = new node();
    start->data = data;
    start->next =NULL;
    start->count += 1;
    //cout<<start->count<<endl;

    if(start != NULL){
        struct node *temp=start;
        struct node *newdata;
        struct node *reach = start;

        for(int i=1;i<n;i++){
            newdata = new node();
            //cout<<"Enter the "<<i<<" node value :- ";
            cin>>data;
            newdata->data = data;
            newdata->next = NULL;
            newdata->count += 1;
            temp->next = newdata;
            temp = temp->next;
        }

        //cout<<"Enter the value of the index where you want to connect the last node to create a loop :- ";
        int c=0;
        cin>>c;

        while(c>0){
            reach = reach->next;
            c--;
        }

        reach->count += 1;
        cout<<temp->data<<endl;
        //cout<<"Reach->data = "<<reach->data<<endl;
        temp->next = reach;
        temp = temp->next;
        temp = temp->next;
        //cout<<"Temp->data = "<<temp->data<<endl;
        
        int length=1;

        while(temp->count != 2){
            length++;
            temp = temp->next;
        }

        cout<<"Loop Length = "<<length<<endl;
    }
}


int main(){
    int n=0;
    cin>>n;
    getdata(n);
}