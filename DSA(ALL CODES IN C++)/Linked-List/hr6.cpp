#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data =0;
        next = NULL;
    }
}*start;

void getdata(int n){

    int data,i;
    struct node *newdata,*temp;
    start = new struct node();
    cin>>data;
    start->data = data;
    start->next = NULL;

    if(start != NULL){
        temp = start;
        for(i=2;i<=n;i++){
            newdata = new struct node();
            cin>>data;
            newdata->data = data;
            newdata->next = NULL;
            temp->next = newdata;
            temp = temp->next;
        }
    }

}

void showdata(int n){
    int i;
    vector<int>A;
    struct node *temp;
    if(start != NULL){
        temp = start;
        while(temp != NULL){
        A.push_back(temp->data);
        temp = temp->next;
        }
        cout<<"The linked list reverse print is :- "<<endl;
        for(auto rit = A.rbegin(); rit != A.rend() ; rit++){
            cout<<*rit<<endl;
        }
    }

}

int main(){
    int n;
    cin>>n;
    getdata(n);
    showdata(n);
    return 0;
}