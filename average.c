#include <stdio.h>

int main() {
    int n; // number of students
    int i;
    float marks[100]; // array to store marks
    float sum = 0, avg;

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input marks of n students
    printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    // Calculate average marks
    avg = sum / n;

    // Output average marks
    printf("The average marks of %d students is: %.2f\n", n, avg);

    return 0;
}
