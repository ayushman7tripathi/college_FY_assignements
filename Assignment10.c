#include<stdio.h> 
#include<math.h> 

long long fact(long long n){ 
    if (n == 1) return n; 
    return (n * fact(n-1)); 
} 

int main(){ 
    char op; 
    printf("Enter Operation:\n+, -, *, /, ^, !\n"); 
    scanf("%c",&op); 
    int a,b; 
    if (op != '!'){ 
        printf("Enter 2 numbers : "); 
        scanf("%d %d",&a,&b); 
    } 
    else{ 
        printf("Enter 1 number : "); 
        scanf("%d",&a); 
    } 
    switch(op){ 
        case '+': 
        printf("%d",a+b); 
        break; 
        case '-': 
        printf("%d",a-b); 
        break; 
        case '*': 
        printf("%d",a*b); 
        break; 
        case '/': 
        printf("%d",a/b); 
        break; 
        case '^': 
        printf("%f",pow(a,b)); 
        break; 
        case '!': 
        printf("%d",fact(a)); 
        break; 
    }
    return 0; 
} 