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

node* create_tree(node* start,int arr[],int i,int n){
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

void showdata(node* start){
    if(start==NULL)
    return;

    showdata(start->left);
    cout<<start->data;
    showdata(start->right);
}

bool tree_continuous(node* start){
    if(start==NULL)
    return true;

    if(start->left == NULL && start->right==NULL)
    return true;

    if(start->left==NULL)
    return(abs(start->data - start->right->data == 1) && tree_continuous(start->right));

    if(start->right==NULL)
    return(abs(start->data - start->left->data == 1) && tree_continuous(start->left));

    return abs(start->data - start->left->data == 1) && abs(start->data - start->right->data == 1) && tree_continuous(start->right) && tree_continuous(start->left);
}

int main(){
    int n=0;
    cin>>n;
    int arr[n]={0};

    getdata(arr,n);
    showdata(start);
    cout<<endl;
    cout<<tree_continuous(start);
}