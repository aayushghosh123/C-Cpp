#include<bits/stdc++.h>
using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *after;

    node(){
        prev = NULL;
        data = 0;
        after = NULL;
    }
}*start;

void getdata(int n){
    int data;
    struct node *newdata,*temp;
    start =  new struct node();
    cin>>data;
    start->prev = NULL;
    start->data = data;
    start->after = NULL;

    if(start != NULL){
        temp = start;
        for(int i=2;i<=n;i++){
            newdata = new struct node();
            cin>>data;
            newdata->data = data;
            newdata->prev = temp;
            temp->after = newdata;
            newdata->after = NULL;
            temp = temp->after;
        }
    }
}

void showdata(){
    struct node *temp;
    if(start != NULL){
        temp = start;
        while(temp!= NULL){
            cout<<temp->data<<endl;
            temp = temp->after;
        }
    }

}

int main(){
    int n;
    cin>>n;
    getdata(n);
    cout<<"The linked list is :- "<<endl;
    showdata();
}