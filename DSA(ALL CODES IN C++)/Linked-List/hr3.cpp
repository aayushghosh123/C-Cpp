#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data = 0;
        next = NULL;
    }
}*start = NULL;

void getdata(int n){
    int data,i;
    start = new struct node();
    cin>>data;
    start->data = data;
    start->next = NULL;
    if(start != NULL){
        struct node *temp,*newdata;
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

void firsti(){
    struct node *temp,*newdata;
    int data;
    if(start != NULL){
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
        while(temp!= NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
}

int main(){

    int n;
    cin>>n;
    getdata(n);
    firsti();
    showdata();

}