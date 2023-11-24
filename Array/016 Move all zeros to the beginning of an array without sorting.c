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

    // Move zeros to the beginning
    j = size - 1; // Initialize index for non-zero elements
    for (i = size - 1; i >= 0; i--) {
        if (arr[i] != 0) {
            // If the element is non-zero, move it to the end
            arr[j--] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while (j >= 0) {
        arr[j--] = 0;
    }

    // Print the array after moving zeros to the beginning
    printf("Array after moving zeros to the beginning: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
