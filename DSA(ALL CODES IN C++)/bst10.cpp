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
            else if(temp->data > data){
                parent = temp;
                temp = temp->left;
            }
        }

        if(parent->data < data){
            parent->right = new node();
            parent->right->data = data;
        }
        else if(parent->data > data){
            parent->left = new node();
            parent->left->data = data;
        }
    }
}

void getdata(int n){
    int data=0;

    for(int i=0;i<n;i++){
        cin>>data;
        bst(data);
    }
}

node* remove_node(node* start){
        if(start->left == NULL && start->right == NULL){
            free(start);
            return NULL;
        }

        start->left = remove_node(start->left);
        start->right = remove_node(start->right);

    return start;
}

void print_tree(node* start,string s){
    if(start==NULL)
    return;

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
    remove_node(start);
    cout<<"The new tree is :- "<<endl;
    print_tree(start,s);
}