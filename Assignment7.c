#include <stdio.h>

struct student {
    char name[30];
    int id;
    int m1, m2, m3;
};

struct result {
    int sum;
    float percentage;
};

int main(){
    int n;
    printf("Give input:\t");
    scanf("%d",&n);
    struct student s[n];
    struct result r[n];
    for (int i = 0; i < n; i++){
        printf("Enter name and roll no. and marks for 3 subjects\n");
        scanf("%s%d%d%d%d",s[i].name,&s[i].id,&s[i].m1,&s[i].m2,&s[i].m3);
        printf("Student result:\n");
        r[i].sum = s[i].m1+s[i].m2+s[i].m3;
        r[i].percentage = r[i].sum/3.0;
        printf("Name. %s\nRoll no. %d\nTotal marks %d\nPercentage %.2f%%\n",s[i].name,s[i].id,r[i].sum,r[i].percentage);
    }
    return 0;
    
}
