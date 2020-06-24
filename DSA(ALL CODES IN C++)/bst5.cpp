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

void create_bst(int data){
    if(start==NULL){
        start = new node();
        start->data = data;
    }
    else{
        temp = start;
        struct node *parent = start;

        while(temp!= NULL){
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

void getdata(int arr[], int n){
    int data=0;
    for(int i=0;i<n;i++){
        create_bst(arr[i]);
    }
}

void bst_tree_possible(node* start,int arr[],int n){
    int i=1;
    queue<node*>q;
    if(start->data = arr[0]){
        cout<<"Enter in start"<<endl;
        q.push(start);

        while(q.empty()==false){
            cout<<"Enter to compare = "<<i<<endl;
            struct node *t = q.front();
            q.pop();

            if(t->left->data == arr[i]){
                q.push(t->left);
                i++;
            }
            else{
            cout<<"BST TREE NOT POSSIBLE"<<endl;
            exit(0);
            }
            cout<<"Enter to compare = "<<i<<endl;
            if(t->right->data == arr[i]){
                q.push(t->right);
                i++;
            }
            else{
            cout<<"BST TREE NOT POSSIBLE"<<endl;
            exit(0);
            }
        }
    }
    else{
        cout<<"BST TREE NOT POSSIBLE"<<endl;
        exit(0);
    }
    cout<<"Yes"<<endl;
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
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getdata(arr,n);

    string s;
    // print_tree(start,s);

    bst_tree_possible(start,arr,n);
}