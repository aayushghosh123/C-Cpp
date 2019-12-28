#include<bits/stdc++.h>
using namespace std;
//Node* temp2 = new Node();
struct node{
    int data;
    struct node *next;
}*start;

void getdata(int n)
{
    int data,i;
    struct node *temp,*newdata;

    cin>>data;
   start = new node();
    start->data = data;
    start->next = NULL;

    if(start != NULL){
        temp = start;
        
        for(i=2;i<=n;i++){
            cout<<"Enter the data at "<<i<<"th position :- ";
           newdata = new node();
            cin>>data;
            newdata->data = data;
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }
    }
    else{
        cout<<"Go fuck yourself";
        exit(0);
    }
}

void showdata(){
    int data;
    struct node *temp;
    if(start != NULL){
    temp=start;
    while(temp != NULL){
    cout<<temp->data<<endl;
    temp = temp->next;
    }
}
}

 void i_position(int i,int n){
    int data,j;
    struct node *temp1,*after,*newdata;
    temp1 =start;
    after = start->next;

    for(j=1;j<i-1;j++){
        after = after->next;
        temp1 = temp1->next;
    }
    cout<<"Enter the data of "<<i<<" position :- ";
    cin>>data;
    newdata = new node();
    newdata->data = data;
    newdata->next = NULL;
    temp1->next = newdata;
    newdata->next = after;
}

int main(){
    int n,i;
    cout<<"Enter the size of the linked list = ";
    cin>>n;
    cout<<"Enter the linked list :-\n";
    getdata(n);
    cout<<"The linked list is :- ";
    showdata();
    cout<<"Enter the position you want to enter ";
    cin>>i;
    i_position(i,n);
   cout<<"The new linked list is :- ";
    showdata();
}