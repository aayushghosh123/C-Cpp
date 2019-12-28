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
    int data;
    struct node *temp,*newdata;
    int i;
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

void enterpos(int pdata,int pos){
    int i,data;
    struct node *temp,*newdata,*after,*tstart;

    if(pos == 1){
    newdata = new struct node();
    newdata->data = pdata;
    newdata->next = start;
    start = newdata;
    }
    else{
    temp = start;
    /*tstart = start;
    tstart = tstart->next;
    after = tstart;*/
    after = start->next;
    int p = pos-1;

    for(i=2;i<=p;i++){
        after = after->next;
        temp = temp->next;
    }
    newdata = new struct node();
    newdata->data = pdata;
    newdata->next = NULL;
    temp->next = newdata;
    newdata->next = after;
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
    int n,pos,pdata;
    cin>>n;
    getdata(n);
    cout<<"ENter the pdata and the pos :- \n";
    cin>>pdata>>pos;
    enterpos(pdata,pos);
    cout<<"The new linked list is :- \n";
    showdata();
}