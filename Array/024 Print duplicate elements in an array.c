#include <stdio.h>

int main() {
    int arr[100], i, j, count, size;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop to check for duplicate elements
    printf("Duplicate elements in the array: ");
    for (i = 0; i < size; i++) {
        count = 0; // Reset count for each new element
        for (j = 0; j < size; j++) {
            // Check if the current element matches any other element
            if (arr[i] == arr[j]) {
                // If the current element is found at an earlier index, skip counting
                if (i < j) {
                    count--;
                    break;
                }
                count++; // Increment count for each occurrence of the element
            }
        }
        // Print the element if it occurs more than once (duplicate)
        if (count > 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
