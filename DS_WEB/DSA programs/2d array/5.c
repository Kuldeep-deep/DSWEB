#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix1[rows][columns], matrix2[rows][columns];

    
    printf("Enter elements for the original matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix2[i][j] = matrix1[i][j];
        }
    }

    
    printf("Copied matrix of the same size:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
OUTPUT 
Enter the number of rows: 2
Enter the number of columns: 3
Enter elements for the original matrix:
Enter element at row 1, column 1: 1
Enter element at row 1, column 2: 2
Enter element at row 1, column 3: 3
Enter element at row 2, column 1: 4
Enter element at row 2, column 2: 5
Enter element at row 2, column 3: 6
Copied matrix of the same size:
1       2       3
4       5       6