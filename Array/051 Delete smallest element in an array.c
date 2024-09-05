#include <stdio.h>

int main() {
    int arr[100], size, i, j, minIndex, minValue;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the minimum element and its index
    minIndex = 0;
    minValue = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }

    // Print the minimum element
    printf("The lowest element in the array is: %d\n", minValue);

    // Delete the minimum element by shifting elements
    for (i = minIndex; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // Decrease the size of the array

    // Print the modified array
    printf("Array after deleting the lowest element: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
