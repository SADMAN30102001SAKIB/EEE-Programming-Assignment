#include <stdio.h>

int main() {
    int n, sum=0, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) {
        sum += (2*i - 1);
    }
    
    printf("The sum of the first %d odd integers is %d\n", n, sum);
    return 0;
}
