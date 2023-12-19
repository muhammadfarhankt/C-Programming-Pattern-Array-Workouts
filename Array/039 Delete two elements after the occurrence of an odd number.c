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

    // Find odd number and delete two elements after its occurrence
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            // If the odd number is at the last position, no need to delete
            if (i == size - 1) {
                size = size;
            }
            // If the odd number is at the second-to-last position, delete one element
            else if (i == size - 2) {
                size = size - 1;
            }
            // If the odd number is at any other position, delete two elements
            else {
                for (j = i; j < size; j++) {
                    arr[j + 1] = arr[j + 3];
                    arr[j + 2] = arr[j + 4];
                }
                size = size - 2;
            }
        }
    }

    // Print the array after deletion
    printf("Array after deleting two elements after the occurrence of an odd number: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
