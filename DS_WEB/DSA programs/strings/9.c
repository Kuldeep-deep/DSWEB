#include<stdio.h>
int main() {
    char str1[100], str2[100], i;
    printf("Enter string 1: ");
    gets(str1);
    for (i = 0; str1[i] != '\0'; ++i) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("String 2: %s", str2);
    return 0;
}
OUTPUT 
Enter string 1: copyme
String 2: copyme