#include <stdio.h>
#include <math.h>

double fact(int n){
    if (n == 0)
        return 1;
    return n*fact(n-1);
}

double sine(double x, int n){
    if (n == 0)
        return 0;
    return ((pow(-1,n-1))*pow(x,2*n-1))/fact(2*n-1) + sine(x, n-1);
}

int main()
{
    double x, result; 
    int n;
    
    printf("Enter value of x (in radians): ");
    scanf("%lf",&x);
    printf("Enter number of terms: ");
    scanf("%d",&n);
    
    result = sine(x,n);
    printf("Sum of sine series = %.6f", result);

    return 0;
}
