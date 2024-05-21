
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

    // Loop to find and print unique elements
    printf("Unique elements in the array: ");
    for (i = 0; i < size; i++) {
        count = 0; // Reset count for each new element
        for (j = 0; j < size; j++) {
            // Count occurrences of the current element
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        // Print the element if it occurs exactly once
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
