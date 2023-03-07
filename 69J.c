#include <stdio.h>

int main() {
    double P, A, i, balance, interest, cumulative_interest = 0;
    int num_payments = 0;
    printf("Enter the loan amount (in dollars): ");
    scanf("%lf", &P);
    printf("Enter the monthly payment amount (in dollars): ");
    scanf("%lf", &A);
    printf("Enter the interest rate (in percentage): ");
    scanf("%lf", &i);
    balance = P;
    while (balance > 0) {
        num_payments++;
        interest = i / 100 * balance;
        cumulative_interest += interest;
        if (balance + interest < A) {
            A = balance + interest;
        }
        balance += interest - A;
        printf("Month %d:\n", num_payments);
        printf("  Interest paid: %.2f\n", interest);
        printf("  Amount applied to balance: %.2f\n", A - interest);
        printf("  Cumulative interest paid: %.2f\n", cumulative_interest);
        printf("  Remaining balance: %.2f\n", balance);
    }
    printf("The loan will be fully repaid in %d months.\n", num_payments);
    printf("The last payment will be %.2f dollars.\n", A);
    return 0;
}
