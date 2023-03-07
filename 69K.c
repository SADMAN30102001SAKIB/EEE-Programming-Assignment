#include <stdio.h>
#include <string.h>

#define NUM_EXAMS 6

int main() {
    printf("Enter number of students: ");
    int n;
    scanf("%d", &n);
    getchar();
    for (int j = 0; j < n; j++)
    {
        char name[50];
        int grades[NUM_EXAMS];
        int sum, i;

        printf("Enter student name: ");
        scanf("%s", &name);

        for (i = 0; i < NUM_EXAMS; i++) {
            printf("Enter grade for exam %d: ", i + 1);
            scanf("%d", &grades[i]);
        }

        sum = 0;
        for (i = 0; i < NUM_EXAMS; i++) {
            sum += grades[i];
        }

        printf("Name: %s\n", name);
        printf("Grades:\n");
        for (i = 0; i < NUM_EXAMS; i++) {
            printf("Exam %d: %d\n", i + 1, grades[i]);
        }
        printf("Average grade: %.2f, %d\n", (float)sum / NUM_EXAMS, j);
    }

    return 0;
}
