#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data=0;
        next=NULL;
    }
};

struct node1{
    int data=0;
    struct node1 *left;
    struct node1 *right;

    node1(){
        data=0;
        left=right=NULL;
    }
};

struct node *start=NULL;
struct node1 *start1=NULL;
struct node1 *temp1;

void create_ll(int n){
    int data=0;
    start = new node();
    cin>>data;
    start->data = data;

    if(start!=NULL){
        struct node *temp = start;
        for(int i=1;i<n;i++){
            struct node *newdata= new node();
            cin>>data;
            newdata->data = data;
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }
    }   
}

void bst(int data){
    if(start1==NULL){
        cout<<"start1 is NULL"<<endl;
        start1 = new node1();
        start1->data = data;
    }
    else{
        temp1 = start1;
        struct node1 *parent = start1;
        while(temp1!=NULL){
            if(temp1->data<data){
                parent = temp1;
                temp1 = temp1->right;
            }
            else{
                parent = temp1;
                temp1 = temp1->left;
            }
        }

        if(parent->data<data){
            parent->right = new node1();
            parent->right->data = data;
        }
        else{
            parent->left = new node1();
            parent->left->data = data;
        }
    }
}

void bst_tree_element(int n,int arr[]){
    for(int i=0;i<n;i++){
        bst(arr[i]);
    }
}

void print_bst(node1 *start1,string s){
    if(start1==NULL)
    return;

    print_bst(start1->left,s+"->left");
    cout<<s<<" "<<start1->data<<endl;
    print_bst(start1->right,s+"->right");
}

int main(){
    int n=0;
    cin>>n;

    create_ll(n);
    int m=n;
    struct node *middle=NULL;
    if(m%2==1){
        struct node *temp = start;
        m = m/2;
        while(m--){
            temp = temp->next;
        }
        middle = temp;
    }
    else if(m%2==0){
        struct node *temp = start;
        m = m/2;
        while(m--){
            temp = temp->next;
        }
        middle = temp;
    }
    
    int arr[n]={0};
    arr[0] = middle->data;
    struct node *temp = start;
    int i=1;
    while(temp!=middle){
        arr[i] = temp->data;
        i++;
        temp = temp->next;
    }
    temp = middle->next;
    while(temp!=NULL){
        arr[i] = temp->data;
        temp = temp->next;
        i++;
    }

    // for(int i=0;i<n;i++){
    //     cout<<"i = "<<i<<" = "<<arr[i]<<endl;
    // }

    bst_tree_element(n,arr);

    string s;
    print_bst(start1,s);

}