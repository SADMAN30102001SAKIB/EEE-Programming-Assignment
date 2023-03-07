#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, x_geometric = 1.0, x_arithmetic = 0.0;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%f", &x);

        x_geometric *= x;
        x_arithmetic += x;
    }

    x_geometric = pow(x_geometric, 1.0/n);
    x_arithmetic /= n;

    printf("Geometric average = %f\n", x_geometric);
    printf("Arithmetic average = %f\n", x_arithmetic);

    if (x_geometric > x_arithmetic) {
        printf("The geometric average is larger than the arithmetic average.\n");
    } else if (x_arithmetic > x_geometric) {
        printf("The arithmetic average is larger than the geometric average.\n");
    } else {
        printf("The geometric average and arithmetic average are equal.\n");
    }

    return 0;
}
