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

struct node *start = NULL;
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
                temp =temp->right;
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
        else{
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

void print_tree(node* start,string s){
    if(start==NULL)
    return;

    print_tree(start->left,s+"->left");
    cout<<s<<" "<<start->data<<endl;
    print_tree(start->right,s+"->right");
}

void children_class(node* start){
    queue<node*>q;

    q.push(start);

        while(q.empty()==false){
            struct node *t = q.front();
            q.pop();

            if(t->left != NULL && t->right != NULL){
                cout<<"Has both child"<<endl;
                exit(0);
            }
            else if(t->left != NULL && t->right==NULL){
                q.push(t->left);
            }
            else if(t->right != NULL && t->left==NULL){
                q.push(t->right);
            }
        }
    cout<<"Tree is single child made up tree.."<<endl;
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    string s;
    print_tree(start,s);

    children_class(start);
}