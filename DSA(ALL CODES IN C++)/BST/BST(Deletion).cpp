#include<bits/stdc++.h>
using namespace std;

struct node{
    struct node *left;
    int data=0;
    struct node *right;

    node(){
        left = NULL;
        data=0;
        right = NULL;
    }

};

struct node *start=NULL;

void build_BST(int a){
if(start == NULL){
    start = new node();
    start->data = a;
}
else{
struct node *temp = start;
struct node *parent;
while(temp!= NULL){
    if(temp->data < a){
        parent =  temp;
        temp = temp->right;
    }
    else if(temp->data > a){
        parent =  temp;
        temp = temp->left;
    }
}
if(parent->data < a){
    parent->right = new node();
    parent->right->data = a;
}
else if(parent->data > a){
    parent->left = new node();
    parent->left->data = a;
}
}
}

void BST_element(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        build_BST(arr[i]);
}
}

void print_BST(node *start){
    struct node *temp = start; 
    if(temp != NULL){
        cout<<temp->data<<endl;
        print_BST(temp->left);
        print_BST(temp->right);
    }
}

int findMAX(node *temp){
    if(temp!= NULL){
    while (temp->right != NULL)
	{
		temp = temp->right;
	}
	return temp->data;
}
return -1;
}

void deleteNode(node *parent,node *temp,int a){  //(start,start,element which you want to delete)
    if(temp!=NULL)  { 
    if(temp->data == a){
        if(temp->left == NULL && temp->right == NULL){
            if(parent->data > a){
                parent->right = NULL;
                free(temp);
            }
            else if(parent->data<a){
                parent->left = NULL;
                free(temp);
            }
            else{
                parent = NULL;
                free(temp);
                start = NULL;
                return;
            }
        }
        else if(temp->right == NULL){
            if(temp->data > a){
                parent->right = temp->left;
                free(temp);
            }
            else{
                parent->left = temp->left;
                free(temp);
            }
        }
        else if(temp->left == NULL){
             if(temp->data > a){
                parent->right = temp->right;
            }
            else{
                parent->left = temp->right;
            }
        }
        else{
            int minimum = findMAX(temp->left);
            if(minimum == -1)
            {
                parent = NULL;
                free(temp);
                return;
            }
            temp->data = minimum;
            deleteNode(temp,temp->left,minimum);
        }
    }
    else if(temp->data > a){
        deleteNode(temp,temp->left,a);
    }
    else{
        deleteNode(temp,temp->right,a);
    }
    }
}

int main(){
    int n,element;
    cin>>n;
    BST_element(n);
    print_BST(start);
    cout<<"Enter the element which you want to delete from the tree :-"<<endl;
    cin>>element;
    deleteNode(start,start,element);
    cout<<"The tree after deletion is :- "<<endl;
    print_BST(start); 
}