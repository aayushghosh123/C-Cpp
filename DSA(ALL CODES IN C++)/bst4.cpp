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
struct node *temp;

void bst(int data){
    if(start==NULL){
        start = new node();
        start->data = data;
    }
    else{
        temp = start;
        struct node *parent = start;

        while(temp != NULL){
            if(temp->data < data){
                parent = temp;
                temp = temp->right;
            }
            else{
                parent = temp;
                temp = temp->left;
            }
        }

        if(parent->data < data){
            parent->right = new node();
            parent->right->data = data;
        }
        else{
            parent->left = new node();
            parent->left->data = data;
        }
    }
}

void min_value(node* start){
    if(start != NULL){
        struct node *temp1 = start; 
        while(temp1->left != NULL){
            temp1 = temp1->left;
        }
        cout<<"The data is :- "<<temp1->data<<endl;
    }
}

void getdata(int n){
    int data=0;
    for(int i=0;i<n;i++){
        cin>>data;
        bst(data);
    }
}

void print_tree(node* start,string s){
    if(start==NULL){
        return;
    }

    print_tree(start->left,s+"->left");
    cout<<s<<" "<<start->data<<endl;
    print_tree(start->right,s+"->right");
}

int main(){
    int n=0;
    cin>>n;
    getdata(n);

    string s;
    print_tree(start,s);

    min_value(start);
}