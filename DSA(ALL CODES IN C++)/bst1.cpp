// create and print bfs a dfs

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

void build_bst(int data){
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
    int data=0;
    for(int i=0;i<n;i++){
        cin>>data;
        build_bst(data);
    }
}

void showdata(node* start,string s){
    if(start==NULL)
    return;

    showdata(start->left,s+"->left");
    cout<<s<<" "<<start->data<<endl;
    showdata(start->right,s+"->right");
}

void print_bfs(node* start){
    queue<node*>q;

    q.push(start);

    while(q.empty()==false){
        struct node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";

        if(temp->left != NULL){
            q.push(temp->left);
        }

        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);
    string s;

    showdata(start,s);

    cout<<endl;

    print_bfs(start);
}