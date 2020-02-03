// reverse the Linked List.............

#include<iostream>
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
struct node *last;

void getdata(int n){
    int data=0;
    if(start == NULL){
        start = new node();
        cin>>data;
        start->data = data;
        start->next = NULL;
    }
    struct node *newnode;
    struct node *temp = start;

    for(int i=1;i<n;i++){
        cin>>data;
        newnode = new node();
        newnode->data = data;
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }
    last = temp;
}

void showdata(){
if(start != NULL){
    struct node *temp = start;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
}

void reverse(){
    if(start != NULL){
        struct node *temp = start;
        struct node *prev = NULL,*after = NULL;
        while(temp != NULL){
            after = temp->next;
            temp->next = prev;
            prev = temp;
            temp = after;
        }
        start = prev;
    cout<<"---------------------"<<endl;
    showdata();
    }
}

int main(){
int n;
cout<<"Enter the size of the Linked List :- "<<endl;
cin>>n;
getdata(n);
cout<<"The Linked List is :- "<<endl;
showdata();
cout<<"The Reverse Linked List is :- "<<endl;
reverse();
}