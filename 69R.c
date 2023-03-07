#include <stdio.h>

int main() {
    int mm, dd, yy, day, leap_years, full_cycles, additional_years;

    printf("Enter a date in the form mm-dd-yy (example: 4-12-99):\n");
    scanf("%d-%d-%d", &mm, &dd, &yy);

    day = (int)(30.42 * (mm - 1)) + dd;

    if (mm > 2 && mm < 8) {
        day--;
    }

    if (mm == 2 && ((yy % 4 == 0 && yy % 100 != 0) || yy % 400 == 0)) {
        day++;
    }

    if (yy > 99) {
        printf("Invalid year\n");
        return 0;
    }

    if (yy == 80) {
        printf("Day number: %d\n", day);
        return 0;
    }

    leap_years = (yy - 80) / 4;
    full_cycles = leap_years * 1461;
    additional_years = (yy - 80) % 4;
    day += full_cycles + additional_years * 365;

    if (yy % 4 == 0 && mm > 2) {
        day++;
    }

    printf("Day number: %d\n", day);

    return 0;
}
