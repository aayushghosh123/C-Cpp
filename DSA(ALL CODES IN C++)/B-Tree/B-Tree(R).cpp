#include<bits/stdc++.h>
using namespace std;

struct node{
    struct node *child;
    int data;
    struct node *sibling;
    node()
    {
        child = NULL;
        data = 0;
        sibling = NULL;
    }

}*first;

typedef struct node Node;

void create_tree(Node *root){

    struct node *b_tree,*last,*last_sibling;int data,c;
    last = root->child;
    last_sibling=root->child;
    while(1)
    {
        cout<<"Root right now:"<<root->data<<endl;
        cout<<"Choose your option :- 1.child 2.sibling 3.exit: ";
        cin>>c;
        switch(c){
                    case 1:cout<<"Enter the data of the child node :- ";
                            b_tree = new Node();
                            cin>>data;
                            b_tree->data = data;
                            if(last==NULL)
                                root->child = b_tree;
                            else
                                last->child = b_tree;
                            last = b_tree;
                            create_tree(b_tree);
                    break;
                    case 2:cout<<"Enter the data of the sibling node :- ";
                            b_tree = new Node();
                            cin>>data;
                            b_tree->data = data;
                            if(last_sibling==NULL)
                                root->sibling = b_tree;
                            else
                                last_sibling->child = b_tree;
                            last_sibling = b_tree;
                            create_tree(b_tree);
                    break;
                    case 3: return ;
                    default:cout<<"Apni choice ko apni gaand mein daal lo\n";
                            
        }
    }
}

void print_tree(Node *root,int index)
{
    Node *p=root;
    int count = 0 ;
    while(p!=NULL)
    {
        cout<<"parent "<<index<<":"<<p->data<<endl;
        if(p->child!=NULL)
        cout<<"child: "<<index<<" ";
        index++;
        if(p->child!=NULL){
        print_tree(p->child,count);
        cout<<endl;
        }
        p = p->sibling;
    }
}


int main(){
    int n;
    cout<<"B-Tree\n";
    cout<<"Enter the root node value:";
    cin>>n;
    first = new Node();
    first->data = n;
    create_tree(first);
   cout<<"The tree is :- \n";
   print_tree(first,0);

}