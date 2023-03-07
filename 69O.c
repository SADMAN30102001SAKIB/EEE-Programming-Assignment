#include <stdio.h>

int main() {
    int i, j, k, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++) {
            printf("  ");
        }
        for(k = i; k <= 2*i-1; k++) {
            printf("%d ", k%10);
        }
        for(k = 2*i-2; k >= i; k--) {
            printf("%d ", k%10);
        }
        printf("\n");
    }
    return 0;
}
