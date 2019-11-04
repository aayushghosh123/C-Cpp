#include<bits/stdc++.h>
using namespace std;
/*
int f(int x, int y)
return x > y;

void vectordemo(){
vector<int>A;
int i=0,n,temp;
cin>>n;
for( ;i<n;i++){
    cin>>temp;
    A.push_back(temp);
}

cout<<" "<<A[0]<<"\n";

sort(A.begin(),A.end()); // This will happen in O(Nlogn) time*/

//Erase a element from the ending of the array

//A.pop_back();

//i=0;
/*for( ;i<n-1;i++){
    cout<<" "<<A[i];
}*/

// Suppose you want to erase a element from a vector
//int m;
//cin>>m;
/*A.erase(A.begin()+m);
i=0;
for( ;i<n-1;i++){
    cout<<" "<<A[i];
}*/

/*bool p = binary_search(A.begin(),A.end(),m);
cout<<p<<endl;*/
/*
A.push_back(100);
A.push_back(100);
A.push_back(100);
A.push_back(100);
A.push_back(123);

auto it = lower_bound(A.begin(),A.end(),100);

cout<<" "<<*it;


auto it2 = upper_bound(A.begin(),A.end(),100);

cout<<" "<<*it2;


cout<<" "<<it2 - it;


sort(A.begin(),A.end(),f); // Here f is a COMPARATOR  function   (Since it is  a comparator function hence it will be declared globally)
                           // and you can also use sort(A.begin(),A.end(),greater<int>())
auto it3;

for(int j : A){
    cout<<" "<<j;
}
cout<<endl;
}*/

int main(){ 
    int i,j,n;
    set<int>S = {1, 2, 9, 7, 5};

   /* int temp;
    //int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp;
        S.insert(temp);
    } 

    for(auto it=S.begin();it!=S.end();it++){
        cout<<" "<<*it<<endl;
    }*/

    //auto it = S.begin();
   // it++;
   // it++;
   // cout<<" "<<*it;
    //       this will print the set in descending order
    for(auto rit = S.rbegin();rit != S.rend(); rit++){
        cout<<*rit<<endl;
    }


    // To find the element is present in the set or not
    /*auto it = S.find(9);
    cout<<*(S.end())<<endl;
    cout<<*it<<endl;
    cout<<S.empty();*/

    //Map

    /*map<int,int>mp;

    mp[1]= 5;
    mp[5]=2;
    mp[3]=7;
    mp[2]=4;
    map<char,char>mp;
    mp['a'] = 'q';
    mp['w'] = 'w';
    mp['p'] = 'e';
    mp['i'] = 'r';

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<" "<<sizeof(it)<<endl;
    }


    map<string,string>m;

    m["sachin"] = "dhoni";
    m["ammmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmamamamamamamamamamama"] = "khan";
    m["ammmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmamamamamamambamamamama"] = "rich";

    for(auto j : m){
        cout<<j.first<<" "<<j.second<<" "<<sizeof(j)<<endl;
    }
*/
    }





















