#include <stdio.h>

int main() {
    int marks[20][4]; // 2D array to store marks of 20 students
    int i, j;

    // Input marks of 20 students
    printf("Enter marks of 20 students:\n");
    printf("Roll No.\tSubject 1\tSubject 2\tSubject 3\n");
    for (i = 0; i < 20; i++) {
        printf("%d\t\t", i+1);
        for (j = 1; j < 4; j++) {
            scanf("%d", &marks[i][j]);
            marks[i][0] = i+1; // Store roll number in first column
        }
    }

    // a. Total marks obtained by each student
    printf("\nTotal marks obtained by each student:\n");
    for (i = 0; i < 20; i++) {
        int total = 0;
        for (j = 1; j < 4; j++) {
            total += marks[i][j];
        }
        printf("Roll No. %d: %d\n", marks[i][0], total);
        marks[i][3] = total; // Store total marks in fourth column
    }

    // b. Highest mark in each subject along with the student roll who got it
    printf("\nHighest marks in each subject:\n");
    for (j = 1; j < 4; j++) {
        int max_marks = 0;
        int roll_no;
        for (i = 0; i < 20; i++) {
            if (marks[i][j] > max_marks) {
                max_marks = marks[i][j];
                roll_no = marks[i][0];
            }
        }
        printf("Subject %d: Roll No. %d - %d marks\n", j, roll_no, max_marks);
    }

    // c. Student who obtained the highest total marks
    int max_total = 0;
    int max_roll_no;
    for (i = 0; i < 20; i++) {
        if (marks[i][3] > max_total) {
            max_total = marks[i][3];
            max_roll_no = marks[i][0];
        }
    }
    printf("\nStudent who obtained the highest total marks:\nRoll No. %d - %d marks\n", max_roll_no, max_total);

    return 0;
}
