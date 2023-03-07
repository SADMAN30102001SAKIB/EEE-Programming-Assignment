#include <stdio.h>
#include <string.h>

#define NUM_EXAMS 6
#define WEIGHT_1 0.15
#define WEIGHT_2 0.20

int main() {
    printf("Enter number of students: ");
    int n;
    scanf("%d", &n);
    getchar();
    float sum = 0;
    for (int j = 0; j < n; j++)
    {
    char name[50];
    int grades[NUM_EXAMS];
    float weighted_grades = 0.0;
    float final_grade;
    int i;

    printf("Enter student name: ");
    scanf("%s", &name);

    for (i = 0; i < NUM_EXAMS; i++) {
        printf("Enter grade for exam %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    for (i = 0; i < 4; i++) {
        weighted_grades += grades[i] * WEIGHT_1;
    }
    for (i = 4; i < NUM_EXAMS; i++) {
        weighted_grades += grades[i] * WEIGHT_2;
    }
    sum += weighted_grades;
    printf("Name: %s\n", name);
    printf("Grades:\n");
    for (i = 0; i < NUM_EXAMS; i++) {
        printf("Exam %d: %d\n", i + 1, grades[i]);
    }
    printf("Weighted average grade: %.2f\n", weighted_grades);
    }
    printf("overall class average: %f\n", sum/n);
    return 0;
}
