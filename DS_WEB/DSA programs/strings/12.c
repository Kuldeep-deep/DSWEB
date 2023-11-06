#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Characters in the string, one per line:\n");
    
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
OUTPUT 
Enter a string: below
Characters in the string, one per line:
b
e
l
o
w