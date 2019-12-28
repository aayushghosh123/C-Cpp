/*
0
12
345
6789
*/

#include<stdio.h>
int main(){
    int s=0;
    for(int i=1;i<5;i++){
        for(int j=0;j<i;j++){
            printf("%d",s);
            s++;
        }
        int j=0;
        printf("\n");
    }
}