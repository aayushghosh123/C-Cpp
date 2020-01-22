#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data = 0;
        left = NULL;
        right = NULL;
    }
};

void in_order(node *start,string p){
    if(start!=NULL)
    {
        cout<<p<<":"<<start->data<<"\n";
        in_order(start->left,p+"->left");
        in_order(start->right,p+"->right");
    }
}

struct node* start = NULL;
struct node *temp;

    void bst(int a){
        if(start == NULL){
            start = new node();
            start->data = a;
            start->left = NULL;
            start->right = NULL;
        }
        else{
            temp = start;
            struct node *par = start;
            while(temp!=NULL)
            {
                if(temp->data<a)
                {
                    par = temp;
                    temp = temp->right;
                }
                else{
                    par = temp;
                     temp = temp->left;
                }
            }
            if(par->data<a)
            {
                par->right = new node();
                par->right->data = a;
            }
            else{
                par->left = new node();
                par->left->data = a;
            }
    }
    }

    void take_element(int n){
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            bst(arr[i]);
        }
    }

int main(){
    int n;
    cin>>n;
    take_element(n);
    in_order(start,"node");
}