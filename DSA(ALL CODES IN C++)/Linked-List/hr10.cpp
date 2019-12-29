// Write a function to get Nth node in a Linked List

// Input:  1->10->30->14,  index = 2
// Output: 30  
// The node at index 2 is 30

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *start;

void getdata(int n){
    int data;
    cin>>data;
    start = new struct node();
    start->data = data;
    start->next = NULL;

    if(start != NULL){
        struct node *newdata;
        struct node *temp;
        temp = start;
        for(int i=1;i<n;i++){
            cout<<"Enter the data in the "<<(i+1)<<" node = ";
            newdata = new struct node();
            cin>>data;
            newdata->data = data;
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }
    }
}

void showdata(){
    if(start != NULL){
        struct node *temp;
        temp = start;
        while(temp!= NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
}

void element_node(int enode,int n){
    if(start!=NULL){
        if(enode <=(n-1)){
        int data;
        struct node *temp;
        temp = start;
        while(enode--){
            data = temp->data;
            temp = temp->next;
        }
        cout<<data;
        }
        else{
        cout<<"The number you state is greater than the number of nodes present...";
        exit(0);
        }
    }

}

int main(){
 int n,enode;
 cout<<"Enter the number of elements you want in your linked list :- ";
 cin>>n;
 getdata(n);
 cout<<"\n The linked list is :- ";
 showdata();
 cout<<"Enter the node number you want to see element of :- ";
cin>>enode;
element_node(enode,n);
}