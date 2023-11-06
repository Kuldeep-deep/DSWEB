#include <stdio.h>

int main() {
    int rows1, columns1, rows2, columns2;

    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &columns1);

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &columns2);

    if (columns1 != rows2) {
        printf("Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    int matrix1[rows1][columns1], matrix2[rows2][columns2], result[rows1][columns2];

    // Input for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply the matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result
    printf("Multiplication of the matrices:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
OUTPUT 
Enter the number of rows for the first matrix: 3
Enter the number of columns for the first matrix: 3
Enter the number of rows for the second matrix: 3
Enter the number of columns for the second matrix: 3
Enter elements for the first matrix:
Enter element at row 1, column 1: 
1
Enter element at row 1, column 2: 2
Enter element at row 1, column 3: 3
Enter element at row 2, column 1: 4
Enter element at row 2, column 2: 5
Enter element at row 2, column 3: 6
Enter element at row 3, column 1: 7
Enter element at row 3, column 2: 8
Enter element at row 3, column 3: 9
Enter elements for the second matrix:
Enter element at row 1, column 1: 2
Enter element at row 1, column 2: 3
Enter element at row 1, column 3: 4
Enter element at row 2, column 1: 5
Enter element at row 2, column 2: 6
Enter element at row 2, column 3: 7
Enter element at row 3, column 1: 8
Enter element at row 3, column 2: 9
Enter element at row 3, column 3: 1
Multiplication of the matrices:
36      42      21
81      96      57
126     150     93