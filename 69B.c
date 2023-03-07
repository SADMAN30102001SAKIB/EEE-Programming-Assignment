#include <stdio.h>

int main() {
    int n, i;
    float x;

    printf("Enter the number of values: ");
    scanf("%d", &n);
    float cumulative_product[n];
    printf("Enter value 1: ");
    scanf("%f", &x);
    cumulative_product[0] = x;
    for (i = 1; i < n; i++) {
        printf("Enter value %d: ", i+1);
        scanf("%f", &x);
        cumulative_product[i] = cumulative_product[i-1] * x;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Cumulative product = %.3f\n", cumulative_product[i]);
    }
    

    return 0;
}
