#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;

    node(){
        data = 0;
        next = NULL;
    }
}*start1,*start2;

void getdata(int n,int m){
    int data,i;
    struct node *temp1,*newdata1;
    start1 = new struct node();
    cout<<"The first linked list is :- "<<endl;
    cin>>data;
    start1->data = data;
    start1->next = NULL;

    if(start1 != NULL){
        temp1 =start1;
        for(i=2;i<=n;i++){
            newdata1 = new struct node();
            cin>>data;
            newdata1->data = data;
            newdata1->next = NULL;
            temp1->next=newdata1;
            temp1=temp1->next;
        }
    }

    cout<<"The second linked list is :- "<<endl;

    struct node *temp2,*newdata2;
    start2 = new struct node();
    cin>>data;
    start2->data = data;
    start2->next = NULL;

    if(start2 != NULL){
        temp2 = start2;
        for(i=2;i<=m;i++){
            newdata2 = new struct node();
            cin>>data;
            newdata2->data = data;
            newdata2->next = NULL;
            temp2->next=newdata2;
            temp2=temp2->next;
        }
    }
}

int compareLL(int n,int m){
    int data1,data2,j=0;
    struct node *temp1,*temp2;
   if(start1 != NULL && start2 != NULL){
       if(n == m){
           temp1 = start1;
           temp2 = start2;
           for(int i=1;i<=n;i++){
               data1 = temp1->data;
               data2 = temp2->data;

                if(data1 != data2){
                    return 0;
                }

                else{
                    j++;
                }
                temp1 = temp1->next;
                temp2 = temp2->next;
           }
           if(n == j){
               return 1;
           }
       }
       else{
           return 0;
       }
   }
   }

int main(){
    int m,n,value;
    cout<<"Enter the value of n :- ";
    cin>>n;
    cout<<"Enter the value of m :- ";
    cin>>m;
    /*if(n != m){
        cout<<"The returned value is :- 0";
        exit(0);
    }*/
    getdata(n,m);
    value = compareLL(n,m);
    cout<<"The returned value is :- ";
    cout<<value;
    return 0;
}