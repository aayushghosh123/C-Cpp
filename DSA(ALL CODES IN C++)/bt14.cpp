//https://www.geeksforgeeks.org/check-if-a-given-binary-tree-is-sumtree/

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data=0;
        left = right = NULL;
    }
};

struct node* start=NULL;

node* create_tree(node* start,int arr[],int i,int n){
    if(i<n){
        struct node* temp = new node();
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

void tree_sum(node* start){
    queue<node*>q;
    q.push(start->left);
    int sum=0;
    while(q.empty()==false){
        struct node *temp = q.front();
        q.pop();

        sum = sum+temp->data;

        if(temp->left != NULL)
        q.push(temp->left);
        if(temp->right != NULL)
        q.push(temp->right);
    }

    q.push(start->right);
    while(q.empty()==false){
        struct node *temp = q.front();
        q.pop();

        sum = sum+temp->data;
        
        if(temp->left != NULL)
        q.push(temp->left);
        if(temp->right != NULL)
        q.push(temp->right);
    }
    cout<<"Sum = "<<sum<<endl;
    if(sum == start->data)
    cout<<"Binary Tree is SumTree"<<endl;
    else
    cout<<"GMBK"<<endl;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    getdata(arr,n);
    cout<<"Tree created"<<endl;
    tree_sum(start);
}