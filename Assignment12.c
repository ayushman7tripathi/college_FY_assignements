#include <stdio.h>

int main(){
    int n1, n2;
    printf("Give Input:\n");
    scanf("%d%d",&n1,&n2);
    int greatest = 0; 
    int smallest = 0;
    int second_smallest = 0;
    for (int i = 1; i <= (n1 < n2 ? n1 : n2); i++){
        if (n1%i == 0 && n2%i == 0){
            if (smallest == 0 || i < smallest){
            second_smallest = smallest;
            smallest = i;
            }
            else if ((second_smallest == 0 || i < second_smallest) && i != smallest){
            second_smallest = i;
            }
            if (greatest < i){
            greatest = i;
            }
        }
    }
    if (greatest == 1 && smallest ==1){
        printf("No common divisors\n");
        return 0;
    }
    printf("Greatest is %d and smallest is %d\n", greatest, second_smallest);
    return 0;
}
