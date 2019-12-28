#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data =0;
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
    }
}

void delposition(int pos){

    int i;
    struct node *temp,*after,*tstart,*current;

    if(start != NULL){
        if(pos ==1){
            temp = start;
            start = start->next;
            temp->next = NULL;
        }

        else{
            temp = start;
            tstart = start;
            tstart = tstart ->next;
            current = tstart;
            tstart = tstart->next;
            after = tstart;

            pos = pos-1; 

            for(i=2;i<=pos;i++){
                after = after->next;
                current = current->next;
                temp = temp->next;
                 
            }

            current->next = NULL;
            temp->next = after;
        }

    }

}

void showdata(){
    struct node *temp;
    if(start != NULL){
        temp = start;
cout<<"Enter the linked list :- "<<endl;
        while(temp!= NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

}
int main(){
    int n,pos;
    cin>>n;
    getdata(n);
    cout<<"pos you want to delete"<<endl;
    cin>>pos;
    delposition(pos);
    showdata();
}