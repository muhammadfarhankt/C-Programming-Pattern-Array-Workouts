#include <stdio.h>

int main() {
    int arr[100], size, i, max, fact = 1;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum element in the array
    max = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Calculate the factorial of the maximum element
    // 'fact' is set to 1 because the factorial starts by multiplying from 1 upwards
    for (i = 1; i <= max; i++) {
        fact *= i;
    }

    // Print the maximum element and its factorial
    printf("The largest number is: %d\n", max);
    printf("The factorial of %d is: %d\n", max, fact);

    return 0;
}
