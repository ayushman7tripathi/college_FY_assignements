#include <stdio.h> 
#include <math.h> 

int isArmstrong(int n){ 
    int tn = n; 
    int d = 0; 
    while(tn > 0){ 
        tn /= 10; 
        d++; 
    } 
    tn = n; 
    int s = 0; 
    while(tn > 0){ 
        s += pow(tn%10,d); 
        tn /= 10; 
    } 
    if (s == n) return 1; 
    return 0; 
} 

int main(){ 
    int n; 
    printf("Enter number : "); 
    scanf("%d",&n); 
    printf(isArmstrong(n)?"Armstrong Number":"Not Armstrong Number"); 
    return 0;
} 