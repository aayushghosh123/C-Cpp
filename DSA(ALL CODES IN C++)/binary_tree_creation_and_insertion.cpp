#include<bits/stdc++.h>
using namespace std;

struct node{
    struct node *left;
    int data;
    struct node *right;

    node(){
        left = right = NULL;
        data=0;
    }
};

struct node *start=NULL;

node* insertnode(int arr[],node *start,int i,int n){
    if(i<n){
        struct node *temp = new node();
        temp->data = arr[i];
        start = temp;

        start->left = insertnode(arr,start->left,2*i+1,n);
        start->right = insertnode(arr,start->right,2*i+2,n);
    }
    return start;
}

void inorder_print(node *start,string s){
    if(start == NULL)
    return;

    inorder_print(start->left,s+"->left");
    cout<<s<<" "<<start->data<<endl;
    inorder_print(start->right,s+"->right");
}

int main(){
    int n=0;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    start = insertnode(arr,start,0,n);

    string s;

    inorder_print(start,s);
}
