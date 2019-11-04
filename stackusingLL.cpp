#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *newdata,*temp1,*temp2;
int main(){
    int ch,data;
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.Display"<<endl
    cout<<"4.Exit"<<endl;
    do{
    cin>>ch;
    switch(ch){
        case 1:{
            if(temp == NULL){
            newdata = new struct node();
            newdata->data = data;
            newdata->next = NULL;

            temp1 = newdata;
            temp2 = newdata;
                }
            else{
            newdata = new struct node();
            newdata->data = data;
            newdata->next = NULL;
            temp2->next= newdata;
            temp2=temp2->next;
            }
        }
        break;
        case 2:{
            struct node *disconnect;
            disconnect = temp2;
            temp2 = temp2->next;
            disconnect->next = NULL;
        }
        break;
        case 3:{
            

        }
    }
}while(ch!=4)
}