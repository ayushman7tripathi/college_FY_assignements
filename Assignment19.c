int main()
{
    struct Join_date {
        int day;
        int month;
        int year;
    };
    
    struct employee {
        char Name[100];
        char designation[100];
        char gender[50];
        struct Join_date DOJ;
        int sal;
    };
    
    printf("Enter the number of employees:\t");
    int n;
    scanf("%d",&n);
    
    struct employee employees[n];
    int nf = 0, nm = 0;
    char str_sal[500];
    char str_d[500];
    
    str_sal[0] = '\0';   
    str_d[0] = '\0'; 
    
    for (int i = 0; i < n; i++){
        printf("Employee %d:\t",i + 1);
        scanf("%s %s %s %d-%d-%d %d",
            employees[i].Name,
            employees[i].designation,
            employees[i].gender,
            &employees[i].DOJ.day,
            &employees[i].DOJ.month,
            &employees[i].DOJ.year,
            &employees[i].sal);
            
        if (employees[i].gender[0] == 'm' || employees[i].gender[0] == 'M'){
            nm++;
        }
        else if (employees[i].gender[0] == 'f' || employees[i].gender[0] == 'F'){
            nf++;
        }
        
        if (employees[i].sal > 10000){
            strcat(str_sal, employees[i].Name);
            strcat(str_sal, " ");
        }
        
        if (strcmp(employees[i].designation, "AsstManager") == 0){
            strcat(str_d, employees[i].Name);
            strcat(str_d, " ");
        }
    }
    
    printf("\nTotal number of employees = %d\n", n);
    printf("Male employees = %d\n", nm);
    printf("Female employees = %d\n", nf);
    printf("Employees with salary more than 10000: %s\n", str_sal);
    printf("Employees with designation AsstManager: %s\n", str_d);
    
    return 0;
}
