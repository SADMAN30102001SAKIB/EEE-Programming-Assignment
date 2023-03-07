#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    int i;

    if (n == 2 || n == 3) { 
        return 1;
    }

    if (n == 1 || n % 2 == 0) { 
        return 0;
    }

    for (i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int is_fibonacci(int n) {
    int a = 1, b = 1, c;

    if (n == 1 || n == 2) { 
        return 1;
    }

    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }

    return (b == n);
}

int main() {
    int n;

    do {
        printf("Enter a positive integer (or 0 to quit): ");
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (is_prime(n)) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }

        if (is_fibonacci(n)) {
            printf("%d is a Fibonacci number.\n", n);
        } else {
            printf("%d is not a Fibonacci number.\n", n);
        }
    } while (1);

    return 0;
}
