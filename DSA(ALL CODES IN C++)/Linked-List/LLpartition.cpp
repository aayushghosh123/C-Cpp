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

struct node *start=NULL;
struct node *s1=NULL;
struct node *s2=NULL;

    int data=0;

    void getdata(int n){
        if(start==NULL){
            cin>>data;
            start = new node();
            start->data = data;
            start->next = NULL;
        }
            struct node *temp = start;

            for(int i=1;i<n;i++){
                struct node *newdata = new node();
                cin>>data;
                newdata->data = data;
                newdata->next = NULL;
                temp->next = newdata;
                temp = temp->next;
            }
    }

struct node *temp1 = NULL;
struct node *temp2 = NULL;

    void showdata(){
        if(start != NULL){
            
            struct node *temp = start;
            
            int partition=0;
            cin>>partition;

            struct node *part=start;

            int p = partition-1;

            while(p--){
                // cout<<"Part->data = "<<part->data<<endl;
                part = part->next;
            }

            // cout<<"Part->data = "<<part->data<<endl;

            while(temp!=NULL){
                // cout<<"temp->data = "<<temp->data<<endl;
                if(temp == part){
                    temp = temp->next;
                }
                else if(temp->data < partition){
                    if(s1 == NULL){
                        // cout<<"In s1"<<endl;
                    s1 = new node();
                    s1->data = temp->data;
                    s1->next = NULL;
                    temp1= s1;
                    temp = temp->next;
                    }
                    else{
                        // cout<<"In s1 part 2"<<endl;
                    struct node *newdata = new node();
                    newdata->data = temp->data;
                    newdata->next = NULL;
                    temp1->next = newdata;
                    temp1 = temp1->next;
                    temp = temp->next;
                    }
                }
                else if(temp->data >= partition){
                    if(s2==NULL){
                        // cout<<"In s2"<<endl;
                        s2 = new node();
                        s2->data = temp->data;
                        s2->next = NULL;
                        temp2 = s2;
                        temp = temp->next;
                    }
                    else{
                        // cout<<"In s2 part 2"<<endl;
                    struct node *newdata = new node();
                    newdata->data = temp->data;
                    newdata->next = NULL;
                    temp2->next = newdata;
                    temp2 = temp2->next;
                    temp = temp->next;
                    }
                }
            }

            temp1->next = part;
            part->next = s2;

            temp = s1;

            while(temp!= NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }

        }
    }

int main(){
    int n=0;
    cin>>n;
    getdata(n);
    showdata();
}