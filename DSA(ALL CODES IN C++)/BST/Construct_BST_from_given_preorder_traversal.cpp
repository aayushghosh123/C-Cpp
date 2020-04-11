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


int data=0;

struct node *start=NULL;
struct node *temp;

void bst(int data){
    if(start == NULL){
        start = new node();
        start->data = data;
        start->left = start->right = NULL;
    }
    else{
        temp = start;
        struct node *parent;
        
        while(temp != NULL){
            if(temp->data > data){
                parent = temp;
                temp = temp->left;
            }
            else{
                parent= temp;
                temp = temp->right;
            }
        }

        if(parent->data > data){
            parent->left = new node();
            parent->left->data = data;
        }
        else{
            parent->right = new node();
            parent->right->data = data;
        }
    }
}

void getdata(int n){
    for(int i=0;i<n;i++){
        cin>>data;
        bst(data);
    }
}

void showdata(struct node *start,string s){
    if(start == NULL)
    return;

    showdata(start->left,s+"->left");
    cout<<s<<" "<<start->data<<endl;
    showdata(start->right,s+"->right");
}

int main(){
    int n=0;
    cin>>n;
    getdata(n);
    string s;
    showdata(start,s);
}