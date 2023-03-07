#include <stdio.h>

int main() {
    int n;
    printf("how many elements: ");
    scanf("%d", &n);
    int arr[n]; // array of 10 elements
    int i, min;

    // Input array elements
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find smallest element in array
    min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Output smallest element in array
    printf("The smallest element in the array is: %d\n", min);

    return 0;
}
