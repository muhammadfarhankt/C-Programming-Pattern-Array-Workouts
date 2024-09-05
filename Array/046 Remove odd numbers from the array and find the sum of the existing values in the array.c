#include <stdio.h>

int main() {
    int arr[100], size, i, j, sum = 0;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop to remove odd numbers and calculate the sum of even numbers
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            // If the number is odd, shift the elements to the left
            for (j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--; // Reduce the array size
            i--;    // Stay at the same index to check the shifted element
        }
    }

    // Calculate the sum of the remaining (even) numbers
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Output the modified array and sum
    printf("Modified array (even numbers only): ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSum of the even numbers: %d\n", sum);

    return 0;
}
