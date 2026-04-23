#include <stdio.h> 
#include <string.h> 

void reverse(int n, char ver[n], char rev[n]){ 
    for (int i = 0; i < n-1; i++){ 
        rev[n - i - 2] = ver[i]; 
    } 
    rev[n-1] = 0; 
} 

int main() { 
    char A[50]; 
    printf("Enter String A: "); 
    fgets(A, 50, stdin); 
    char B[50]; 
    printf("Enter String B: "); 
    fgets(B, 50, stdin); 
    char revA[strlen(A)]; 
    reverse(strlen(A),A,revA); 
    char revB[strlen(B)]; 
    reverse(strlen(B),B,revB); 
    printf("1 - Length\n2 - Copy\n3 - Compare\n4 - Concat\n5 - Reverse\nEnter choice: "); 
    int c; 
    scanf("%d",&c); 
    switch(c){ 
        case 1: 
        printf("Length of A - %d\nLength of B - %d",strlen(A),strlen(B)); 
        break; 
        case 2: 
        strcpy(B,A); 
        printf("A - %s\nB - %s",A,B); 
        break; 
        case 3: 
        printf("A and B are %s",(strcmp(A,B) == 0?"Same":"Different")); 
        break; 
        case 4: 
        strcat(A,B); 
        printf("A - %s",A); 
        break; 
        case 5: 
        printf("A - %s, B - %s",revA,revB); 
        break; 
        default: 
        printf("Error"); 
    } 
    return 0;
} 