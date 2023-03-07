#include <stdio.h>

int main() {
    int n; // size of matrix
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n]; // declare the matrix
    int i, j;

    // get the elements of the matrix from user
    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // print the original matrix
    printf("Original Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // find the transpose of the matrix
    int transpose[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // print the transpose matrix
    printf("Transpose Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
