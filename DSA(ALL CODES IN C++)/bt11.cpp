// Construct Complete Binary Tree from its Linked List 
//Representation

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data=0;
        next=NULL;
    }
};

struct node1{
    int data;
    struct node1 *left;
    struct node1 *right;

    node1(){
        data=0;
        left=right=NULL;
    }
};

struct node *start;
struct node1 *start1;

void getdata(node* start,int n){
    int data=0;
    start = new node();
    cin>>data;
    start->data = data;
    start->next=NULL;

    if(start!=NULL){
        struct node *temp = start;

        for(int i=1;i<n;i++){
            struct node *newdata = new node();
            cin>>data;
            newdata->data = data;
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }
    }
}

void copy_LL_data(node* start,int arr[]){
    if(start != NULL){
        struct node *temp = start;
        int i=0;
        while(temp!=NULL){
            arr[i] = temp->data;
            i++;
            temp = temp->next;
        }
    }
}

node1* create_tree(node1* start1,int arr[],int i,int n){
    if(i<n){
        struct node1 *temp = new node1();
        temp->data = arr[i];
        start1 = temp;

        start1->left = create_tree(start1->left,arr,2*i+1,n);
        start1->right = create_tree(start1->right,arr,2*i+2,n);
    }
    return start1;
}

void print_tree(node1* start1){
    if(start1==NULL)
    return;

    print_tree(start1->left);
    cout<<start1->data<<" ";
    print_tree(start1->right);
}

int main(){
    int n=0;
    cin>>n;
    
    cout<<"Linked List :)"<<endl;
    getdata(start,n);

    int arr[n]={0};

    copy_LL_data(start,arr);

    start1 = create_tree(start1,arr,0,n);

    print_tree(start1);
}