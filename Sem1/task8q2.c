#include <stdio.h>
void printMatrix(int matrix[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void addMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void multiplyMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
int main() {
    int matrix1[10][10];
    int matrix2[10][10];
    int resultAddition[10][10];
    int resultMultiplication[10][10];
    int row1, col1, row2, col2;
    printf("Enter the number of rows for Matrix 1: ");
    scanf("%d", &row1);
    printf("Enter the number of columns for Matrix 1: ");
    scanf("%d", &col1);
    printf("Enter the elements of Matrix 1:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter the number of rows for Matrix 2: ");
    scanf("%d", &row2);
    printf("Enter the number of columns for Matrix 2: ");
    scanf("%d", &col2);
    printf("Enter the elements of Matrix 2:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Matrix 1:\n");
    printMatrix(matrix1, row1, col1);
    printf("Matrix 2:\n");
    printMatrix(matrix2, row2, col2);
    if (row1 == row2 && col1 == col2) {
        addMatrices(matrix1, matrix2, resultAddition, row1, col1);
        printf("Matrix Addition:\n");
        printMatrix(resultAddition, row1, col1);
    } else {
        printf("Matrix addition is not possible.\n");
    }
    if (col1 == row2) {
        multiplyMatrices(matrix1, matrix2, resultMultiplication, row1, col1, row2, col2);
        printf("Matrix Multiplication:\n");
        printMatrix(resultMultiplication, row1, col2);
    } else {
        printf("Matrix multiplication is not possible.\n");
    }
    return 0;
}