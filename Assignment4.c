#include <stdio.h> 
int main(){ 

printf("Enter Basic Pay - "); 
float BP; 
scanf("%f", &BP); 
float HRA = 0.1, TA = 0.05, PT = 0.02; 
float GS = BP*(1+HRA+TA); 
printf("Gross Salary - %f",GS * (1-PT)); 

return 0;
}
