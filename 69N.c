#include <stdio.h>

int main() {
    float a, b, result, memory = 0;
    char operation;

    printf("Enter an operation (+, -, *, /, M): ");
    scanf("%c", &operation);

    switch(operation) {
        case '+':
            printf("Enter two numbers to add: ");
            scanf("%f %f", &a, &b);
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            printf("Enter two numbers to subtract (in the form a - b): ");
            scanf("%f %f", &a, &b);
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            printf("Enter two numbers to multiply: ");
            scanf("%f %f", &a, &b);
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            printf("Enter two numbers to divide (in the form a / b): ");
            scanf("%f %f", &a, &b);
            if (b == 0) {
                printf("Error: Cannot divide by zero\n");
            } else {
                result = a / b;
                printf("Result: %.2f\n", result);
            }
            break;
        case 'M':
            printf("Enter a number to store in memory: ");
            scanf("%f", &memory);
            printf("Number stored in memory: %.2f\n", memory);
            break;
        default:
            printf("Error: Invalid operation\n");
            break;
    }

    return 0;
}
