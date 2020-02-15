/*
Being tired of participating in too many Codeforces rounds, Gildong decided to take some rest in a park. He sat down on a bench,
and soon he found two rabbits hopping around.
One of the rabbits was taller than the other.
He noticed that the two rabbits were hopping towards each other.
The positions of the two rabbits can be represented as integer coordinates on a horizontal line.
The taller rabbit is currently on position x, and the shorter rabbit is currently on position y (x<y).
Every second, each rabbit hops to another position. The taller rabbit hops to the positive direction by a,
and the shorter rabbit hops to the negative direction by b.

For example, let's say x=0, y=10, a=2, and b=3. At the 1-st second, each rabbit will be at position 2 and 7.
At the 2-nd second, both rabbits will be at position 4.

Gildong is now wondering: Will the two rabbits be at the same position at the same moment?
If so, how long will it take? Let's find a moment in time (in seconds) after which the rabbits will be at the same point.

Input
Each test contains one or more test cases. The first line contains the number of test cases t (1≤t≤1000).

Each test case contains exactly one line.
The line consists of four integers x, y, a, b (0≤x<y≤109, 1≤a,b≤109) — the current position of the taller rabbit, the current position of the shorter rabbit, the hopping distance of the taller rabbit, and the hopping distance of the shorter rabbit, respectively.

Output
For each test case, print the single integer: number of seconds the two rabbits will take to be at the same position.
If the two rabbits will never be at the same position simultaneously, print −1.
*/

#include<iostream>
using namespace std;

int rabbit_hop(long long int x,long long int y, long long int a, long long int b,int time){

    if(x == y)
    return time;
    
    else if(x < y){
        if(x != y){
        x = x + a;
        y = y - b;
        time++ ;
        rabbit_hop(x,y,a,b,time);
        }
    }
    else if(x>y){
        return -1;
    }
}

int main(){
    int t;
    long long int a=0,b=0,x=0,y=0;
    cin>>t;
    int time = 0;
    while(t--){
        cin>>x>>y>>a>>b;
        int z = rabbit_hop(x,y,a,b,time);
        cout<<z<<endl;
    }
}