#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    int i, j, k, n, m;
    scanf("%d", &m);
    
    for (i = 0; i <= m; i++) {
        x = i / 10.0;
        // y = exp(-0.1 * x) * sin(0.5 * x);
        y = sin(x);
        n = round(y * (150 / 2.0));
        if (n > 150 / 2) {
            n = 150 / 2;
        } else if (n < -150 / 2) {
            n = -150 / 2;
        }

        for (j = 0; j < 150 / 2 - n; j++) {
            printf(" ");
        }

        printf("*\n");
    }

    return 0;
}