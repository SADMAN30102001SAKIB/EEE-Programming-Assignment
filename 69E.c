#include <stdio.h>

int main() {
    unsigned long long int n, i, a = 1, b = 1, c;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%llu", &n);

    (n>1)?(printf("%d %d ", a, b)):(printf("%d ", a));

    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%llu ", c);
        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}
