#include <stdio.h>
int main(){
    int a = 10, b = 20;
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}




#include <stdio.h>
void swap(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
    
} 
int main(){ 
    int a = 10; 
    int b = 20; 
    swap(&a,&b); 
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}
