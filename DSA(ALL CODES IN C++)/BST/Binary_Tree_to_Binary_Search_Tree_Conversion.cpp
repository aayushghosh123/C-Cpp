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

struct node *root=NULL;
struct node *start=NULL;
struct node *temp;
int flag=0;
int k=0,n=0;


node *binary_tree(node *start,int data){

    if(start==NULL){
        start = new node();
        start->data = data;
        start->left = start->right = NULL;
    }
    else{
    temp = start;
    struct node *parent;
    while(temp != NULL){
        if(flag==0){
            flag=1;
            parent = temp;
            temp = temp->left;
        }
        else if(flag==1){
            flag=0;
            parent = temp;
            temp = temp->right;
        }
    }

    if(flag==1){
        parent->left = new node();
        parent->left->data = data;
    }
    else{
        parent->right = new node();
        parent->right->data = data;
    }
    }
    return start;
}

int arr[ ]={0};


void showdata(node *start){
    if(start == NULL)
    return;

    showdata(start->left);
    if(start->data){
        arr[k]=start->data;
        k++;
    }
    showdata(start->right);
}

void bst_tree(int data){
    if(root == NULL){
        root = new node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else{
        temp = root;
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
        else{
            parent->right = new node();
            parent->right->data = data;
        }
    }
}

void bst(int arr[]){
    for(int i=0;i<n;i++){
        bst_tree(arr[i]);
    }
}

void printdata(node* root,string s){
    if(root == NULL)
    return;

    printdata(root->left,s+"->left");
    cout<<s<<" "<<root->data<<endl;
    printdata(root->right,s+"->right");
}

int main(){
    cin>>n;
    int data=0;
    for(int i=0;i<n;i++){
        cin>>data;
    start = binary_tree(start,data);
    }

    string s;

    showdata(start);
    printdata(start,s);

    // cout<<"The array is :- "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    cout<<endl;

    //sort(arr,arr+n);

    bst(arr);

    printdata(root,s);

}