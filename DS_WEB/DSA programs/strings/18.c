#include <stdio.h>

void bubbleSort(char str[]) {
    int i, j;
    char temp;
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - 1 - i; j++) {
            if (str[j] > str[j + 1]) {
                // Swap characters
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Sort the string
    bubbleSort(str);

    printf("Sorted string in ascending order: %s\n", str);

    return 0;
}
OUTPUT 
Enter a string: hello all
Sorted string in ascending order: 
 aehllllo