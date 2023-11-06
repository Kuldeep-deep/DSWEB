#include <stdio.h>

int main() {
    char str[100];
    char searchChar;
    int i;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to search for: ");
    scanf(" %c", &searchChar);  // Note the space before %c to consume the newline character

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == searchChar) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The character '%c' is found in the string.\n", searchChar);
    } else {
        printf("The character '%c' is not found in the string.\n", searchChar);
    }

    return 0;
}
OUTPUT 
Enter a string: where
Enter a character to search for: r
The character 'r' is found in the string.