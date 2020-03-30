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
start = new node();
cin>>data;
start->data = data;
start->next = NULL;
if(start != NULL){
    struct node *temp = start;
    struct node *newdata;
    for(int i=1;i<n;i++){
        newdata = new node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }
}
}

void showdata(int p,int n){
if(start != NULL){
    struct node *temp = start;
    n = n-1;
    n = n-p;
    while(n--){
        temp = temp->next;
    }
    cout<<temp->data;
}
}

int main(){
    int n=0;
    cin>>n;
    getdata(n);
    int p=0;
    cin>>p;
    showdata(p,n);
}