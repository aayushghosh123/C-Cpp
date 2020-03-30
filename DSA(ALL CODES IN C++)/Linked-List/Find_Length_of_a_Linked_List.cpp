#include<iostream>
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
    int data=0;
    cin>>data;
    start = new node();

    start->data = data;
    start->next = NULL;

    if(start != NULL){
        struct node *temp = start;
        struct node *newnode;

        for(int i=1;i<n;i++){
            cin>>data;
            newnode = new node();
            newnode->data = data;
            newnode->next = NULL;
            temp->next = newnode;
            temp = temp->next;
        }
    }
}

void showdata(){
    if(start != NULL){
        int length=0;
        struct node *temp =start;
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        cout<<length<<endl;
    }
}

int main(){
    int n=0;
    cin>>n;
    getdata(n);
    showdata();
}