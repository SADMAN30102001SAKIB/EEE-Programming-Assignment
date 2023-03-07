#include <stdio.h>

int main() {

    int n, year, choice = 0; 
    float val, tag, deprec; 
    while (choice != 4) { 
        printf("\nMethod: (1-SL 2-DDB 3-SYD 4-End) "); 
        scanf("%d", &choice); 
        if (choice < 0) {
            printf("\nERROR - Please try again: "); 
            scanf ("%d" , &choice) ; 
        }

        if (choice >= 1 && choice <= 3) { 
            printf("Original value: "); 
            scanf ("%f", &val) ;
            printf ("Number of years: ") ; 
            scanf ("%d", &n) ; 
        }

        if (choice == 1)
        {
            printf("\nStraight-Line Method\n\n"); 
            deprec = val/n; 
            for (year = 1; year <= n; ++year) { 
                val -= deprec; 
                printf("End of Year %2d", year); 
                printf(" Depreciation: %7.2f", deprec); 
                printf("Current Value: %8.2f\n", val); 
            }
        }
        else if (choice == 2)
        {
            printf("\nDouble-Declining-Balance Method\n\n"); 
            for (year = 1; year <= n; ++year) { 
                deprec = 2*val/n; 
                val -= deprec; 
                printf ("End of Year %2d", year); 
                printf("Depreciation: %7.2f", deprec); 
                printf ("I Current Value: %8.2f\n", val) ; 
            }
        }
        else if (choice == 3)
        {
            printf("\nSum-Of-The-Years\'-DigitsMethod\n\n"); 
            tag = val; 
            for (year = 1; year <= n; ++year) { 
                deprec = (n-year+1)*tag / (n*(n+1)/2); 
                val -= deprec; 
                printf("End of Year %2d", year); 
                printf(" Depreciation: %7.2f", deprec); 
                printf(" Current Value: %8.2f\n", val); 
            }
        }
        else if (choice == 4)
        {
            printf("\nGoodbye, have a nice day\n"); 
        }
        else
        {
            printf("\nIncorrect data entry - please try again\n"); 
        }
        

    }

    return 0;
}