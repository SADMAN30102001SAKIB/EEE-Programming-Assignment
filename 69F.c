#include <stdio.h>
#include<math.h>

int main() {
    int n, count, i, j, is_prime;

    printf("Enter the number of prime numbers to generate: ");
    scanf("%d", &n);

    printf("2 ");
    printf("3 ");

    count = 2; 

    for (i = 5; count < n; i += 2) {
        is_prime = 1;

        for (j = 3; j <= sqrt(i); j += 2) {
            if (i % j == 0) {
                is_prime = 0; 
                break;
            }
        }

        if (is_prime) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n");

    return 0;
}
