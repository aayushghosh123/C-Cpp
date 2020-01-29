// Trailing zeros in a number;
//only limitation to 20......
#include<bits/stdc++.h>
using namespace std;

long long int fac(int n){
    if ((n==0)||(n==1))
      return 1; 
   else
      return n*fac(n-1);
}

int main(){
    int n;
    cout<<"Enter the number whose factorial you want to find :- ";
    cin>>n;

    //  find factorial 

    long long int f_value  = fac(n);
    cout<<f_value<<endl;

    // now we will find the length of the f_value
long long int temp = f_value;

int length=0;
while(f_value>0)
{
f_value=f_value/10;
//
length++;
}
cout<<"Number of digits in given number is: "<<length<<endl;

// find the trailing zeros

int zero=0;
f_value = temp;

while(f_value > 0){
    //cout<<"Enter in while loop"<<endl;
    if((f_value%10) == 0){
        zero++;
        f_value = f_value/10;
    }
    else if((f_value%10) != 0){
            cout<<"The number of zeros are :- "<<zero<<endl;
            exit(0);
    }
}



}