/*
    1
   12
  123
 1234
12345
*/

#include<stdio.h>
int sum =1;
int main(){
        for(int i=5;i>=1;i--){
            for(int j=1;j<i;j++){
                printf(" ");   
            }
            for(int k=5;k>=i;k--){
                printf("%d",sum);
                sum++;
            }
            sum =1;
            printf("\n");
        }
}