#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix1[rows][columns], matrix2[rows][columns], result[rows][columns];

    // Input for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result
    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
OUTPUT 
Enter the number of rows: 2
Enter the number of columns: 3
Enter elements for the first matrix:
Enter element at row 1, column 1: 1
Enter element at row 1, column 2: 2
Enter element at row 1, column 3: 3
Enter element at row 2, column 1: 4
Enter element at row 2, column 2: 5
Enter element at row 2, column 3: 6
Enter elements for the second matrix:
Enter element at row 1, column 1: 1
Enter element at row 1, column 2: 2
Enter element at row 1, column 3: 3
Enter element at row 2, column 1: 4
Enter element at row 2, column 2: 5
Enter element at row 2, column 3: 6
Sum of the matrices:
2       4       6
8       10      12