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


void getdata(int n){
    int data = 0;
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

void showdata(int s){
    if(start != NULL){
        int count =0;
        struct node *temp = start;
        while(temp != NULL){
            if(temp->data == s){
                count++;
            }
            temp = temp->next;
        }
        cout<<count;
    }
}

int main(){
    int n=0;
    cin>>n;
    getdata(n);
    int s=0;
    cin>>s;
    showdata(s);
}