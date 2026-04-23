#include <stdio.h>

int main() {
    int N;
    
    printf("Enter the number of integers: ");
    scanf("%d", &N);

    int numbers[N];
    int even[N], odd[N];  
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < N; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < N; i++) {
        if (numbers[i] % 2 == 0) {
            even[even_count++] = numbers[i];
        } else {
            odd[odd_count++] = numbers[i];
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd numbers: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
