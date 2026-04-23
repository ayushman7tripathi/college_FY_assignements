#include <stdio.h> 

int main(){ 
    printf("Enter Marks in 5 Subjects : "); 
    int m1,m2,m3,m4,m5; 
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5); 
    int t = m1+m2+m3+m4+m5; 
    float p = t / 5.0; 
    int pass = 1; 
    if (m1 < 40) pass = 0; 
    if (m2 < 40) pass = 0; 
    if (m3 < 40) pass = 0; 
    if (m4 < 40) pass = 0; 
    if (m5 < 40) pass = 0; 
    printf("Total Marks = %d\nPercentage = %f%\nResult: %s",t,p,(pass?"PASS":"FAIL")); 
    if (pass){ 
    printf("\nGrade: "); 
    if (p >= 75) printf("Distinction"); 
    else if (p >= 60) printf("First Division"); 
    else if (p >= 50) printf("Second Division"); 
    else printf("Third Division"); 
    } 
    return 0;
} 