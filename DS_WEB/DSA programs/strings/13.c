#include <stdio.h>

int main() {
    char inputString[100];
    char reversedString[100];
    int length = 0, i, j;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    while (inputString[length] != '\0') {
        if (inputString[length] == '\n') {
            inputString[length] = '\0';
            break;
        }
        length++;
    }

    
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversedString[j] = inputString[i];
    }
    reversedString[j] = '\0'; 

    printf("Original string: %s\n", inputString);
    printf("Reversed string: %s\n", reversedString);

    return 0;
}
OUTPUT 
Enter a string: backward
Original string: backward
Reversed string: drawkcab