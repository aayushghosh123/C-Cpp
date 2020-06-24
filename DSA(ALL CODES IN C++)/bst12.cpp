//Inorder predecessor and successor for a given key in BST

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

        while(temp!=NULL){
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

static int i=0;
void get_element(node *start,int arr[]){
    if(start==NULL)
    return;

    get_element(start->left,arr);
    arr[i++] = start->data;
    get_element(start->right,arr);
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);

    int arr[n];

    get_element(start,arr);

    int k=0;
    cin>>k;
    int index=0;
    for(int i=0;i<n;i++){
        if(k >= arr[i]){
            index = i;
        }
    }
    if(arr[index] == k){
        cout<<"The value lies in the range "<<arr[index-1]<<" and "<<arr[index+1]<<endl;
    }
    else{
        cout<<"The value lies in the range "<<arr[index]<<" and "<<arr[index+1]<<endl;
    }
}