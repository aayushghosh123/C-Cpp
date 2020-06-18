// https://www.geeksforgeeks.org/check-for-children-sum-property-in-a-binary-tree/

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

node* create_tree(node* start,int arr[],int i,int n){
    if(i<n){
    struct node *temp = new node();
    temp->data = arr[i];
    start = temp;

    start->left = create_tree(start->left,arr,2*i+1,n);
    start->right = create_tree(start->right,arr,2*i+2,n);
    }
    return start;
}

void getdata(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        start = create_tree(start,arr,0,n);

}

void create_binary_tree(node* start,string s){
    if(start==NULL)
    return;

    create_binary_tree(start->left,s+"->left");
    cout<<s<<" "<<start->data<<endl;
    create_binary_tree(start->right,s+"->right");
}

void check_sum(node* start){
    queue<node*>q;

    q.push(start);
    while(q.empty()==false){
        struct node *temp = q.front();
        q.pop();

        if(temp->left!=NULL && temp->right!=NULL && temp->data == temp->left->data + temp->right->data){
                q.push(temp->left);
                q.push(temp->right);
            }
            else if(temp->left!=NULL && temp->right==NULL && temp->data == temp->left->data){
                q.push(temp->left);
            }
            else if(temp->left==NULL && temp->right!=NULL && temp->data == temp->right->data){
                q.push(temp->right);
            }
            else if(temp->left==NULL && temp->right == NULL){

            }
            else{
                cout<<"Sum not equal.........."<<endl;
                exit(0);
            }
    }
    cout<<"Sum equal"<<endl;
}

int main(){
    int n=0;
    cin>>n;

    int arr[n]={0};

    getdata(arr,n);

    string s;

    create_binary_tree(start,s);

    check_sum(start);
}