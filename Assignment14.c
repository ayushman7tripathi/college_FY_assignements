#include <stdio.h>
#include <math.h>

int bintodec(int n, int i){
    if (n == 0){
        return 0;
    }
    else{
        return (n%10)*(1 << i)+bintodec(n/10,i+1);
    }
}

int main(){
    int n, i, result;
    printf("Give Input:\n");
    scanf("%d",&n);
    i = 0;
    result = bintodec(n,i);
    printf("%d",result);
    return 0;
}
