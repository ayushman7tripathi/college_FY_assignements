#include <stdio.h> 
void main(){ 
int n; 
printf("Enter a Year - "); 
scanf("%d",&n); 
if ((n%4 == 0 && n%100 != 0) || (n%400 == 0)){ 
printf("Leap Year"); 
} 
else{ 
printf("Not Leap Year"); 
} 
} 