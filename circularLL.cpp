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
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;

        }
        temp->next = start;
    }
}

void showdata(){
    struct node *temp;
    if(start != NULL){
        temp = start;
        while(temp->next != start){
            cout<<temp->data<<endl;
            temp = temp->next;
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