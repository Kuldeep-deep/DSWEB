#include <stdio.h>

int main() {
    int matrix[4][2]; // Declare a 4x2 matrix
    int i, j;

    // Prompt the user to enter matrix elements
    printf("Enter the elements of the matrix (4x2):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix in matrix format
    printf("\nMatrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
OUTPUT 
#include <stdio.h>

int main() {
    int matrix[4][2]; // Declare a 4x2 matrix
    int i, j;

    // Prompt the user to enter matrix elements
    printf("Enter the elements of the matrix (4x2):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix in matrix format
    printf("\nMatrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}