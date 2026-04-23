#include <stdio.h> 

int main() { 
    FILE *f1 = fopen("FileA.txt","r"); 
    FILE *f2 = fopen("FileB.txt","w"); 
    char content[200]; 
    while (fgets(content, 200, f1) != NULL) {
        fprintf(f2,"%s",content); 
    }
    fclose(f1); 
    fclose(f2); 
    return 0;
} 