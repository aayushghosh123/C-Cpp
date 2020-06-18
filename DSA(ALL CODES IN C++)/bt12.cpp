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

void creating_tree_array(int pre_array[],int post_array[],int n){
    int r = pre_array[0];
    int left_r = pre_array[1];
    int right_r = post_array[n-2];

    int index=0;

    for(int i=0;i<n;i++){
        if(r = post_array[i]){
            index = i;
        }
    }

    int arr1[index-1]={0};
    int arr2[n-2-index]={0};

    for(int i=1;i<index;i++){
        arr1[i] = post_array[i];
    }
    int j=0;
    for(int i=index+1;i<n-1;i++){
        arr2[j] = post_array[i];
        j++;
    }

    start = new node();
    start->data = r;
    start->left->data = left_r;
    start->right->data = right_r;

    create_tree()

}

int main(){
    int n=0;
    cin>>n;

    int pre_array[n]={0};
    int post_array[n]={0};

    cout<<"Enter the preorder array :- ";
    for(int i=0;i<n;i++){
        cin>>pre_array[i];
    }

    cout<<"Enter the postorder array :- ";
    for(int i=0;i<n;i++){
        cin>>post_array[i];
    }

    creating_tree_array(pre_array,post_array,n);
}