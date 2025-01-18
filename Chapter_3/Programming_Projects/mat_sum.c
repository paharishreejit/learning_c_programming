/************************************************************************
 * Name: mat_sum.c                                                      *
 * Purpose: Prints the sum of rows, columns and trace of the matrix     *
 * Author: Shreejit Pahari                                              *
 ************************************************************************/

#include <stdio.h>

#define OFFSET 2

int main(void) {
    int matrix[4][4];
    const int rows = 4;
    const int cols = 4;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("A[%d][%d] = ", row + 1, col + 1);
            scanf("%d", (*(matrix + row) + col));
        }
    }

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("%d ", *(*(matrix + row) + col));
        }
        printf("\n");
    }

    int trace = 0;
    int offDiagonalSum = 0;
    for (int row = 0; row < rows; row++) {
        int rowSum = 0;
        for (int col = 0; col < cols; col++) {
            if (row == col) 
                trace += *(*(matrix + row) + col);
            if (row + col == rows)
                offDiagonalSum += *(*(matrix + row) + col);
            
            rowSum += *(*(matrix + row) + col);
        }
        printf("Row %d sum = %d\n", row + 1, rowSum);
    }
    
    for (int col = 0; col < cols; col++) {
        int colSum = 0;
        for (int row = 0; row < rows; row++) {
            colSum += *(*(matrix + row) + col);
        }
        printf("Column %d sum = %d\n", col + 1, colSum);
    }

    printf("Trace = %d\n", trace);
    printf("Off-Diagonal sum = %d\n", offDiagonalSum);

    return 0;
}
