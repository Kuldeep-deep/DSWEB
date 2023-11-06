#include <stdio.h>

int main() {
    int rows, columns;
    int scalar;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Input for the matrix
    int matrix[rows][columns];

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter an integer scalar value for multiplication: ");
    scanf("%d", &scalar);

    // Multiply the matrix by the scalar
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] *= scalar;
        }
    }

    // Display the result
    printf("Resulting matrix after multiplication with the scalar:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
OUTPUT 
Enter the number of rows: 2
Enter the number of columns: 3
Enter elements for the matrix:
Enter element at row 1, column 1: 1
Enter element at row 1, column 2: 2
Enter element at row 1, column 3: 3
Enter element at row 2, column 1: 4
Enter element at row 2, column 2: 5
Enter element at row 2, column 3: 6
Enter an integer scalar value for multiplication: 2
Resulting matrix after multiplication with the scalar:
2       4       6
8       10      12