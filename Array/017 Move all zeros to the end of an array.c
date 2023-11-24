#include <stdio.h>

int main() {
    int arr[20], size, i, j, temp;

    // Input array size
    printf("Enter Array Size : ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Move zeros to the end
    j = 0; // Initialize index for non-zero elements
    for (i = 0; i < size; i++) {
        if (arr[i] != 0) {
            // If the element is non-zero, move it to the front
            arr[j++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while (j < size) {
        arr[j++] = 0;
    }

    // Print the array after moving zeros to the end
    printf("Array after moving zeros to the end: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
