#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data = 0;
        left = NULL;
        right = NULL;
    }
};

struct node *start=NULL;
struct node *temp;

void tree_create(int a){
    if(start == NULL){
        start = new node();
        start->data = a;
    }
    else{
        temp = start;
        struct node *parent = start;
        while(temp!=NULL){
            if(temp->data<a){
                parent = temp;
                temp = temp->right;
            }
            else{
                parent = temp;
                temp = temp->left;
                }
        }
        if(parent->data<a){
            parent->right = new node();
            parent->right->data = a;
        }
        else{
            parent->left = new node();
            parent->left->data = a;
        }
    }
}

void tree_element(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        tree_create(arr[i]);
    }
}

void print_tree(node *start){
    if(start!= NULL){
    cout<<start->data<<endl;
    print_tree(start->left);
    print_tree(start->right);
}
}
void insert_element(node *start,int element){
    if(start!= NULL){
    struct node *temp1 = start;
    if(element < temp1->data){
        if(temp1->left == NULL){
           struct node *newdata = new node();
           newdata->data = element;
           temp1->left = newdata;
        }
        else{
            insert_element(temp1->left,element);
        }
    }
    else if(element > temp1->data){
        if(temp1->right == NULL){
           struct node *newdata = new node();
           newdata->data = element;
           temp1->right = newdata ;
        }
        else{
            insert_element(temp1->right,element);
        }
    }
}
}
int main(){
    int n,element;
    cout<<"Enter the number of element :- "<<endl;
    cin>>n;
    tree_element(n);
    print_tree(start);
    cout<<"Enter the element you want to insert :- "<<endl;
    cin>>element;
    insert_element(start,element);
    cout<<"tdaaaaaaaaaaaaaaaaa.................."<<endl;
    print_tree(start);
}