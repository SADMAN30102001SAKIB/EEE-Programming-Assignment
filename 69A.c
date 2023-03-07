#include <stdio.h>

int main() {
    double f[10] = {0.06, 0.08, 0.08, 0.10, 0.10, 0.10, 0.12, 0.12, 0.12, 0.12};
    double x[10] = {27.5, 13.4, 53.8, 29.2, 74.5, 87.0, 39.9, 47.7, 8.1, 63.2};
    double xavg = 0;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        xavg += f[i] * x[i];
    }

    printf("Weighted average: %lf\n", xavg);

    return 0;
}
