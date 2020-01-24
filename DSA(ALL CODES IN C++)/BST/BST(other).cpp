#include<bits/stdc++.h>
using namespace std;

struct node{
    struct node *left;
    int data;
    struct node *right;

    node(){
        left = NULL;
        data = 0;
        right = NULL;
    }
};

struct node *start;
struct node *temp;

void create_tree(int a){
    if(start == NULL){
        start = new node();
        start->data = a;
    }
    else{
        struct node *parent = start;
        temp = start;
        while(temp != NULL){
            if(temp->data > a){
                parent = temp;
                temp = temp->left;
            }
            else{
                parent = temp;
                temp = temp->right;
            }
        }
        if(parent->data > a){
            parent->left = new node();
            parent->left->data = a;
        }
        else{
            parent->right = new node();
            parent->right->data = a;
        }
    }
}

void tree_element(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        create_tree(arr[i]);
    }
}

void print_tree(node *start){
    if(start != NULL){
    cout<<start->data<<endl;
    print_tree(start->left);
    print_tree(start->right);
    }
}

 void max(node *start){
     if(start != NULL){
         while(start->right != NULL){
         start = start->right;
     }
     cout<<"Max is :- "<<start->data<<endl;
     }
     else{
         cout<<"The Tree is a LOL,just like your life...."<<endl;
     }
 }

 void min(node *start){
     if(start!= NULL){
         while(start->left != NULL){
             start = start->left;
         }
         cout<<"Max is :- "<<start->data<<endl;
         }
         else{
         cout<<"The Tree is a LOL,just like your life...."<<endl;
     }
}
     

int leaf_node(node *start){
    int count=0;
    if(start != NULL){ 
        if(start->left == NULL && start->right == NULL){
            cout<<"The leaf node is :- "<<start->data<<endl;
            return 1;
        }
        else{
            return leaf_node(start->left) + leaf_node(start->right);
        }
    }
    else{
        return 0;
    }
}

int non_leaf_node(node *start){
    int count=0;
    if(start != NULL){
        if(start->left == NULL && start->right == NULL){
            return 0;
        }
        else{
            cout<<start->data<<endl;
            return non_leaf_node(start->left)+non_leaf_node(start->right)+1;
        }
    }
    else{
        return 0;
    }
}

int main(){
    int n,switch_number;
    cin>>n;
    tree_element(n);
    cout<<"The BST is :- "<<endl;
    print_tree(start);
    do{
        cout<<endl;
        cout<<"1. Max in the tree"<<endl;
        cout<<"2. Min in the tree"<<endl;
        cout<<"3. Leaf_Node in the tree"<<endl;
        cout<<"4. Non Leaf_Node in the tree"<<endl;
        cout<<"5. To exit"<<endl;
        cin>>switch_number;
        switch (switch_number)
        {
        case 1: max(start);
            break;
        case 2: min(start);
            break;    
        case 3: cout<<leaf_node(start)<<endl;
            break;
        case 4: cout<<non_leaf_node(start)<<endl;
            break;
        }
    }
    while(switch_number!=5);
}