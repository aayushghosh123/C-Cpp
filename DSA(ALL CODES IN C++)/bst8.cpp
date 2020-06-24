#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data=0;
        left = NULL;
        right = NULL;
    }
};

struct node *start=NULL;
struct node *temp;

void bst(int data){
    if(start == NULL){
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

void showdata(node* start,string s){
    if(start==NULL)
    return;

    showdata(start->left,s+"->left");
    cout<<s<<" "<<start->data<<endl;
    showdata(start->right,s+"->right");
}

int distancefromnode(node *start,int key){
    if(start->data == key)
    return 0;
    else if(start->data > key){
        return 1 + distancefromnode(start->left,key);
    }
    return 1+distancefromnode(start->right,key);
}

int distancebwtwo(node *start,int a,int b){
    if(start==NULL)
    return 0;

    if(start->data > a && start->data > b)
    return distancebwtwo(start->left,a,b);

    if(start->data < a && start->data < b)
    return distancebwtwo(start->right,a,b);

    if(start->data >=a && start->data <=b)
    return distancefromnode(start,a) + distancefromnode(start,b);
}

int checkvalue(node* start,int a,int b){
    if(a>b){
        int x = a;
        a = b;
        b = x;
    }
    return distancebwtwo(start,a,b);
}

int main(){
    int n=0;
    cin>>n;

    getdata(n);
    string s;

    showdata(start,s);

    int a=0,b=0;

    cout<<"Enter the nodes value b/w which you want to find distance b/w :- ";
    cin>>a>>b;

    cout<<"The output value is :- "<<checkvalue(start,a,b);
}