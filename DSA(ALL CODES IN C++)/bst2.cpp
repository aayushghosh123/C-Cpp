// search

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

struct node *start;
struct node *temp;

void bst(int data){
    if(start==NULL){
        start = new node();
        start->data = data;
    }
    else{
        temp = start;
        struct node *parent = start;

        while(temp!=NULL){
            if(temp->data<data){
                parent = temp;
                temp = temp->right;
            }
            else{
                parent = temp;
                temp = temp->left;
            }
        }
        if(parent->data<data){
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
    int data;

    for(int i=0;i<n;i++){
        cin>>data;
        bst(data);
    }
}

void element_check(node* start,int data){
    if(start!=NULL){
        queue<node*>q;

        q.push(start);

        while(q.empty()==false){
            struct node *temp = q.front();
            if(temp->data == data){
                cout<<"Element Found"<<endl;
                exit(0);
            }
            q.pop();
            if(temp->left != NULL){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
        cout<<"Element not Present"<<endl;
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);
    int data=0;
    cout<<"Enter the data you want to search :- ";
    cin>>data;
    element_check(start,data);
}