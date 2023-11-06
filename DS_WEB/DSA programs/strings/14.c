#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Difference in ASCII values of adjacent characters:\n");

    for (i = 0; str[i] != '\0' && str[i + 1] != '\0'; i++) {
        int diff = str[i + 1] - str[i];
        printf("%c - %c = %d\n", str[i + 1], str[i], diff);
    }

    return 0;
}
OUTPUT 
Enter a string: hello
Difference in ASCII values of adjacent characters:
e - h = -3
l - e = 7
l - l = 0
o - l = 3

 - o = -101