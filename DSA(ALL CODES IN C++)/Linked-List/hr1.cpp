#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;

    node()                                                          // This is a constructer
    {
        data = 0;
        next = NULL;
    };
    

}*start = NULL;
 
 typedef struct node Node;

void get_data(int n){
    int data;

    start = new Node();
    cin>>data;
    start->data = data;
    start->next = NULL;
    
    int i;
    struct node *newdata,*temp;
    temp = start;

    for(i=2;i<=n;i++){
        newdata = new Node();
        cin>>data;
        newdata->data = data;
        newdata->next = NULL;
        temp->next = newdata;
        temp = temp->next;
    }

}

void show_data(){
    struct node *temp;
    if(start != NULL){
        temp = start;
       // cout<<"The linked list is :- "<<endl;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

}

int main(){
    //cout<<"Enter the number of elements you want in a linked list :- ";
    int n;
    cin>>n;
     get_data(n);
     show_data();
    return 0;
}