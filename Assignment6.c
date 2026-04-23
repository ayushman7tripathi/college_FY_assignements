#include <stdio.h>

int fact(int n){
    if (n == 0){
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
    printf("Give input:\n");
    int n, result;
    scanf("%d",&n);
    result = fact(n);
    printf("Factorial is\n%d",result);
}
