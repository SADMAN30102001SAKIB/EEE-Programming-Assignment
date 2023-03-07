#include<stdio.h>
#include<math.h>

int main() {
    double x;
    int n, i;
    double term, sum = 0;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        term = pow(-1, i)*pow(x, (2*i+1))/tgamma(2*i+2);
        sum += term;
    }

    printf("\nSine of %lf using first %d terms is: %lf", x, n, sum);

    sum = 0;
    term = __INT_MAX__;
    i = 0;
    while(term >= 1e-5) {
        term = pow(-1, i)*pow(x, (2*i+1))/tgamma(2*i+2);
        sum += term;
        i++;
        term = (term>0)?term:-1*term;
    }

    printf("\nSine of %lf using successive terms until the value of the next term becomes smaller than 10^-5 is: %lf", x, sum);

    return 0;
}
