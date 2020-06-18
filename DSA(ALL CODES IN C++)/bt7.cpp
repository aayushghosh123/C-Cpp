// Find postorder traversal of BST from preorder traversal

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data=0;
        left=right=NULL;
    }
};

struct node *start=NULL;

node* create_tree(node *start,int arr[],int i,int n){
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

void postorder_print(node* start){
    if(start==NULL)
    return;

    cout<<start->data<<endl;
    postorder_print(start->left);
    
    postorder_print(start->right);

}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};
    getdata(arr,n);

    postorder_print(start);
}