#include <stdio.h> 
#include <math.h> 

int isPrime(int n){ 
    for (int i = 2; i <= sqrt(n); i++){ 
        if (n%i==0){ 
        return 0; 
        } 
    } 
    return 1; 
} 

int fact(int n){ 
    if (n > 0){ 
        return n * fact(n-1); 
    } 
    return 1; 
} 

int main(){ 
    printf("Enter a number - "); 
    int n; 
    scanf("%d",&n); 
    printf("Square Root - %f\nSquare of the number - %d\nCube of the number - %d\nIs 
    number Prime - %s\nFactorial of number - %d\nPrime Factors of the number - 
    ",sqrt(n),n*n,n*n*n,(isPrime(n)?"Yes":"No"),fact(n)); 
    while (n > 1){ 
        for (int i = 2; i <= n; i++){ 
            if (n%i==0){ 
            printf("%d ", i); 
            n/=i; 
            break; 
            } 
        } 
    }
    return 0;
} 