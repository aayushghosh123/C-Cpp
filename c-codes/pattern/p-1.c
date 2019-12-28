/*
12345
12345
12345
12345
12345
*/
#include<stdio.h>
int main(){
    int c=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d",c);
            c++;
        }
        printf("\n");
        c=1;
    }
}