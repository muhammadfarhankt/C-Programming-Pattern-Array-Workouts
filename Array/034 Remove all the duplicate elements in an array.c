#include <stdio.h>

int main() {
    int arr[100], i, j, size;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicate elements
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size;) {
            if (arr[i] == arr[j]) {
                // If duplicate found, shift elements to the left
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; // Decrease the size of the array
            } else {
                j++; // Move to the next element
            }
        }
    }

    // Print the array after removing duplicates
    printf("Array after removing duplicate elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
