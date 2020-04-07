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

node* getdata(node* start,int data){
    if(start == NULL){
        start = new node();
        start->data = data;
        start->left = start->right = NULL;
    }
    else if(start->data >= data){
        start->left = getdata(start->left,data);
    }
    else{
        start->right = getdata(start->right,data);
    }
    return start;
}

    void Inorder(node *start){
        if(start == NULL) 
        return;

        Inorder(start->left);
        cout<<start->data<<" ";
        Inorder(start->right);
    }

    void Preorder(node* start){
        if(start == NULL) 
        return;

        cout<<start->data<<" ";
        Inorder(start->left);
        Inorder(start->right);
    }

    void Postorder(node* start){
        if(start == NULL) 
        return;

        Inorder(start->left);
        Inorder(start->right);
        cout<<start->data<<" ";
    }

int main(){
    struct node *start=NULL;
    int n=0;
    cin>>n;
    int data=0;
    for(int i=0;i<n;i++){
        cin>>data;
        start = getdata(start,data);
    }
    cout<<"Inorder"<<endl;
    Inorder(start);
    cout<<endl;
    cout<<"Preorder"<<endl;
    Preorder(start);
    cout<<endl;
    cout<<"Postorder"<<endl;
    Postorder(start);
}