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

struct node *start = NULL;
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
                parent = temp;
                temp = temp->right;
            }
        }
        if(parent->data > data){
            parent->left = new node();
            parent->left->data = data;
        }
        else if(parent->data < data){
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

node *minimun_value(node *temp){
    if(temp->left == NULL){
        return temp;
    }

    return minimun_value(temp->left);
}

void showdata(node* start){
    if(start == NULL)
    return;

    showdata(start->left);
    cout<<start->data<<endl;
    showdata(start->right);
    }

    node* del_ele(node *start,int data){
        if(start == NULL){
            return NULL;
        }
        else if(start->data > data){
            start->left = del_ele(start->left,data);
        }
        else if(start->data < data){
            start->right = del_ele(start->right,data);
        }
        else{
            
            if(start->left == NULL  && start->right == NULL){
                start = NULL;
            }
            else if(start->left == NULL){
                start = start->right;
            }
            else if(start->right == NULL){
                start = start->left;
            }
            else{
                struct node *minvalue = minimun_value(start->right);
                start->data = minvalue->data;
                start->right = del_ele(start->right,minvalue->data);
            }
        }
        return start;
    }

int main(){
    int n=0;
    cin>>n;
    getdata(n);
    showdata(start);
    cin>>data;
    start = del_ele(start,data);
    showdata(start);
}
