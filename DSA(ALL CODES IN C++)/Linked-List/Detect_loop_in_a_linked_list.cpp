#include<iostream>
using namespace std;

struct node{
    int data;
    int count;
    struct node *next;

    node(){
        data = 0;
        count=0;
        next = NULL;
    }
};

struct node *start;


void getdata(int n){
    int data=0;
    cin>>data;
    start = new node();
    start->data = data;
    start->next =NULL;
    start->count += 1;
    //cout<<start->count<<endl;

    if(start != NULL){
        struct node *temp=start;
        struct node *newdata;
        struct node *reach = start;

        for(int i=1;i<n;i++){
            newdata = new node();
            cin>>data;
            newdata->data = data;
            newdata->next = NULL;
            newdata->count += 1;
            temp->next = newdata;
            temp = temp->next;
        }

        int c=0;
        cin>>c;

        while(c>=0){
            reach = reach->next;
            c--;
        }

        reach->count += 1;
        temp->next = reach;

    }
}

void showdata(int n){
    if(start != NULL){
        struct node *temp = start;
        int x=0;
        while(x != n){
        if(temp->count > 1){
            cout<<"Loop Detected";
            exit(0);
        }
        temp = temp->next;
        n++;
        }
    }
    cout<<"Loop Not Detected......"<<endl;
}

int main(){
    int n=0;
    cin>>n;
    getdata(n);
    showdata(n);
}