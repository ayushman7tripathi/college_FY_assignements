#include <stdio.h> 
void main() { 
char n; 
printf("Enter operation\n+ Addition\n- Subtraction\n* Multiplication\n/ Division\n"); 
scanf("%c", &n); 
printf("Enter two numbers : "); 
float a,b; 
scanf("%f %f", &a, &b); 
switch(n){ 
    case '+': 
    printf("%f", a+b); 
    break; 
    case '-': 
    printf("%f", a-b); 
    break; 
    case '*': 
    printf("%f", a*b); 
    break; 
    case '/': 
    printf("%f", a/b); 
    break; 
    default: 
    printf("Invalid Input"); 
}

}