#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data=0;
        left=NULL;
        right=NULL;
    }
};

struct node *start=NULL;

node*  create_tree(node* start,int arr[],int i,int n){
    if(i<n){
        struct node *temp = new node();
        temp->data = arr[i];
        start = temp;

        start->left = create_tree(start->left,arr,2*i+1,n);
        start->right = create_tree(start->right,arr,2*i+2,n);
    }
    return start;
}

void getdata(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    start = create_tree(start,arr,0,n);
}

void inorder(node* start){
    if(start==NULL)
    return;

    inorder(start->left);
    cout<<start->data<<endl;
    inorder(start->right);
}

void preorder(node *start){
    if(start==NULL)
    return;

    cout<<start->data<<endl;
    preorder(start->left);
    preorder(start->right);
}

void postorder(node* start){
    if(start==NULL)
    return;
    
    postorder(start->left);
    postorder(start->right);
    cout<<start->data<<endl;
}

int main(){
    int n=0;
    cin>>n;
    int arr[n]={0};

    getdata(arr,n);

    cout<<"Inoder :- "<<endl;
    inorder(start);
    
    cout<<"Preorder :- "<<endl;
    preorder(start);

    cout<<"Postorder :- "<<endl;
    postorder(start);
}