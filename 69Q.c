#include <stdio.h>

void intToRoman(int num) {
    
    char* symbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    int i = 0;
    while (num > 0) {
        while (num >= value[i]) {
            printf("%s", symbol[i]);
            num -= value[i];
        }
        i++;
    }
    printf("\n");
}

int main() {
    int num;
    
    do {
        printf("Enter a positive integer (enter 0 to exit): ");
        scanf("%d", &num);
        if (num > 0) {
            printf("Roman numeral: ");
            intToRoman(num);
        }
    } while (num != 0);
    printf("Exiting program.\n");
    return 0;
}
