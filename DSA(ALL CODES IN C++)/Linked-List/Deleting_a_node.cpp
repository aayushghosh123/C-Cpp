#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data=0;
        next=NULL;
    }
};

struct node *start;

void getdata(int n){
    int data=0;
    cin>>data;
    start = new node();
    start->data = data;
    start->next = NULL;

    if(start != NULL){
        struct node *temp = start;
        struct node *newdata;

        for(int i=1;i<n;i++){
            cin>>data;
            newdata = new node();
            newdata->data = data;
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }
    }
}

void delete_node(int d,int n){
    if(start != NULL){
       struct node *temp = start;
       if(temp->data == d){
           start = start->next;
           temp->next = NULL;
           free(temp);
       }
       else{

        struct node *after = start->next;
        //cout<<after->data<<endl;
        while(after != NULL){
            if(after->data == d && after->next != NULL){
                after = after->next;
                temp->next = NULL;
                temp->next = after;
                break;
            }
            else if(after->data == d && after->next == NULL){
                temp->next = NULL;
                free(after);
                break;
            }
            after = after->next;
            temp = temp->next;
        }
        }
    }

}

void showdata(){
    if(start != NULL){
    struct node *temp = start;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    }
}

int main(){
int n=0;
cin>>n;
getdata(n);
//showdata();
int d=0;
cin>>d;
delete_node(d,n);
showdata();
}