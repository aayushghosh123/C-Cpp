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




void showdata(node *start,string s){
    if(start == NULL)
    return;

    showdata(start->left,s+"->left");
    cout<<s<<" "<<start->data<<endl;
    showdata(start->right,s+"->right");
}


int main(){
    cin>>n;
    int data=0;
    for(int i=0;i<n;i++){
        cin>>data;
    start = binary_tree(start,data);
    }

    string s;

    showdata(start,s);

}
