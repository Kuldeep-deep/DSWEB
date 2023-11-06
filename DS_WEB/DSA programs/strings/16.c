#include <stdio.h>

int main() {
    char str[100];
    char searchChar;
    int i;
    int found = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to search for: ");
    scanf(" %c", &searchChar);  // Note the space before %c to consume the newline character

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == searchChar) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("The character '%c' is found at index %d in the string.\n", searchChar, found);
    } else {
        printf("The character '%c' is not found in the string.\n", searchChar);
    }

    return 0;
}
OUTPUT 
Enter a string: find
Enter a character to search for: d
The character 'd' is found at index 3 in the string.