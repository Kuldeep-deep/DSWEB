#include <stdio.h>

int isPalindrome(char str[], int length) {
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // It's a palindrome
}

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (length = 0; str[length] != '\0'; length++);

    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    int result = isPalindrome(str, length);

    if (result) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}
OUTPUT 
Enter a string: madam
The entered string is a palindrome.