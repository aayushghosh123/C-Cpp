#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    struct node* left;
    struct node* right;

    node(){
        left=right=NULL;
    }
};

struct node *start=NULL;

node* create_tree(node* start,char arr[],int i,int n){
    if(i<n){
        struct node *temp = new node();
        temp->data = arr[i];
        start = temp;

        start->left = create_tree(start->left,arr,2*i+1,n);
        start->right = create_tree(start->right,arr,2*i+2,n);
    }
    return start;
}

void getdata(char in_arr[],char pre_arr[],char arr[],int n){
    char s = pre_arr[0];
    int index = 0;

    for(int i=0;i<n;i++){
        if(s == in_arr[i]){
            index = i;
        }
    }

    arr[0] = pre_arr[0];

    int j=1;

    for(int i=0;i<index;i++){
        arr[j] = in_arr[i];
        j++;
    }

    for(int i=index+1;i<n;i++){
        arr[j] = in_arr[i];
        j++;
    }

    start = create_tree(start,arr,0,n);
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
    char arr[n]={0};

    
cout<<"Enter the Inorder Traversal :- "<<endl;
char in_arr[n]={0};
for(int i=0;i<n;i++){
        cin>>in_arr[i];
    }

cout<<"Enter the Preorder Traversal :- "<<endl;
char pre_arr[n]={0};
for(int i=0;i<n;i++){
        cin>>pre_arr[i];
    }

    getdata(in_arr,pre_arr,arr,n);

    string s;
    print_tree(start,s);
}