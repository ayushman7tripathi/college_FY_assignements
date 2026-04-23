#include <stdio.h>

int stringlen(char *str){
    char *p = str;
    while (*p != '\0'){
        p++;
    }
    return p-str;
}

void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char *str){
    int length = stringlen(str);
    for (int i = 0; i < length/2; i++){
        swap(&str[i],&str[length - i - 1]);
    }
}

int palindrome(char *str){
    int length = stringlen(str);
    for (int i = 0; i < length/2; i++){
        if (str[i] != str[length - i - 1]){
            return 1;
        }
    }    
    return 0;
}

int equality(char *str1, char *str2){
    if (stringlen(str1)!=stringlen(str2)){
        return 1;
    }
    for (int i = 0; i < stringlen(str1); i++){
        if (str1[i] != str2[i]){
            return 1;
        }
    }
    return 0;
}

int substring(char *str, char *sub){
    int length = stringlen(str);
    int sublength = stringlen(sub);
    for (int i = 0; i <= length - sublength; i++){
        if (str[i] == sub[0]){
            int j;
            for (j = 1; j < sublength; j++){
                if(str[i+j] != sub[j]){
                    break;
                }
            }
            if (j == sublength){
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    char str[100], str2[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter another string for equality check: ");
    scanf("%s", str2);

    printf("Length of string = %d\n", stringlen(str));
    
    if (substring(str, str2) == 0){
        printf("Substring found in main string\n");
    } else {
        printf("Substring not found in main string\n");
    }

    reverse(str);
    printf("Reversed string = %s\n", str);

    if (palindrome(str) == 0){
        printf("The string is a Palindrome\n");
    } else {
        printf("The string is not a Palindrome\n");
    }

    if (equality(str, str2) == 0){
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}
