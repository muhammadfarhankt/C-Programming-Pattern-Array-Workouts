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

    printf("Elements that occur exactly two times in the array: ");
    // Loop to find elements occurring exactly two times
    for (i = 0; i < size; i++) {
        count = 1; // Reset count for each new element
        // Check if the current element matches any other element
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++; // Increment count for each occurrence of the element
            }
        }
        // Print the element if it occurs exactly two times
        if (count == 2) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
