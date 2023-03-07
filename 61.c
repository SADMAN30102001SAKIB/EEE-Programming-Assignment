#include <stdio.h> 

int main(){ 
    int count = 1; 
    float x, average, sum = 0; 

    float arr[10] = {27.5, -13.4, 53.8, -29.2, 74.5, 87.0, 39.9, -47.7, -8.1, 63.2};

    while (count <= 10) { 
        if (x < 0) continue;
        sum += arr[count-1]; 
        ++count; 
    }

    average = sum/10; 
    printf("The average is %f\n", average); 

    return 0;
}