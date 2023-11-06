#include <stdio.h>


int main() {
    char str[100];
    int vowelCount = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char currentChar = tolower(str[i]);
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
            vowelCount++;
        }
    }

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
OUTPUT 
Enter a string: hello
Number of vowels in the string: 2