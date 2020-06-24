#include<bits/stdc++.h>
using namespace std;

class graph{
    int v;
    list<int>*adj;

    public:
    graph(int v);
    void create(int x,int y);
    void print();
};

graph::graph(int v){
    this->v = v;
    this->adj = new list<int>[v];
}

void graph::create(int x,int y){
    x--;
    y--;
    adj[x].push_back(y);
}

void graph::print(){
    for(int i=0;i<this->v;i++){
        cout<<"List value "<<i+1<<" is :- "<<endl;
        list<int>::iterator it;
        for(it=adj[i].begin();it!=adj[i].end();it++){
            cout<<*it+1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    graph g(4);

    g.create(1,2);
    g.create(1,4);
    g.create(2,1);
    g.create(4,1);
    g.create(3,2);
    g.create(2,3);

    g.print();
}
