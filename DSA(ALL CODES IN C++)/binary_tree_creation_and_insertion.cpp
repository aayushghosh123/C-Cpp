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


node* getdata(node *start,int data){
    if(start == NULL){
        start = new node();
        start->data = data;
        start->left = start->right = NULL;
    }
    else if(start->data >= data){
        start->left = getdata(start->left,data);
    }
    else{
        start->right = getdata(start->right,data);
    }
    return start;
}

void showdata(node *root) {
	if(root == NULL) 
    return;

	showdata(root->left);    
	cout<<root->data<<endl; 
	showdata(root->right); 
}

int main(){
    node *start=NULL;
    int n=0;
    cin>>n;
    int data=0;
    for(int i=0;i<n;i++){
    cin>>data;
    start = getdata(start,data);
    }
    showdata(start);

}