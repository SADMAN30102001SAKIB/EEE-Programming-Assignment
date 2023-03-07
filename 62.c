#include <stdio.h> 

int main(){ 
    int n = 0; 
    float x, average, sum = 0; 

    while (1) { 
        printf ("x = "); 
        scanf("%f", &x); 
        if (!x)
        {
            break;
        }
        n++;
        sum += x;
    }

    average = (n)?sum/n:0;
    printf("\nThe average is %f\n", average); 

    return 0;
}