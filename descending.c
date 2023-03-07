#include <stdio.h>

int main() {
    int n;
    printf("how many elements: ");
    scanf("%d", &n);
    int arr[n]; // array of 10 elements
    int i, j, temp;

    // Input array elements
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort array in descending order using bubble sort
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-i; j++) {
            if (arr[j] < arr[j+1]) {
                // Swap adjacent elements if they are in wrong order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Output sorted array
    printf("\nArray in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
