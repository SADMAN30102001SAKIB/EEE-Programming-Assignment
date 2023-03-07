#include <stdio.h>

int main() {
    int month, day, year, days;

    printf("Enter a date (mm-dd-yyyy): ");
    scanf("%d-%d-%d", &month, &day, &year);

    days = (year - 1980) * 365; 
    days += (year - 1980 + 3) / 4; 
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month > 2) {
        days++; 
    }

    switch (month) {
        case 12: days += 30;
        case 11: days += 31;
        case 10: days += 30;
        case 9:  days += 31;
        case 8:  days += 31;
        case 7:  days += 30;
        case 6:  days += 31;
        case 5:  days += 30;
        case 4:  days += 31;
        case 3:  days += (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        case 2:  days += 31; 
        case 1:  days += day; 
    }

    printf("Days since January 1, 1980: %d\n", days);

    return 0;
}
