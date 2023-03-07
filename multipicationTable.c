#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter how many rows: ");
    scanf("%d", &n);
    int table[n][n];
    // Fill in the table with the multiplication values
    for (i = 0; i < n; i++) {
        for (j = 0; j < 10; j++) {
            table[i][j] = (i+1) * (j+1);
        }
    }

    // Print out the table
    printf("Multiplication Table:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
