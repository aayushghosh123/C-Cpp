// C Program to print pyramid 
// pattern using numbers 
#include <stdio.h> 
void printPattern(int n) 
{ 
    int t; 
    for (int i = 1; i <= n; i++) { 

        for (int j = i; j < n; j++) 
            printf("\t"); 

        t = i; 

        for (int k = 1; k <= i; k++) { 
            printf("%d\t\t", t); 
            t = t + n - k; 
        } 
        printf("\n"); 
    } 
} 
  
// Driver code 
int main() 
{ 
    int n;
    printf("Enter the number of rows you want to print :- ");
    scanf("%d",&n);
    printPattern(n); 
    return 0; 
}